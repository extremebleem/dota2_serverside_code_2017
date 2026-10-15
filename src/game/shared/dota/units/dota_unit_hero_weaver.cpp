// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:46
class CDOTA_Unit_Hero_Weaver : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Weaver(CDOTA_Unit_Hero_Weaver &);
	CDOTA_Unit_Hero_Weaver(CDOTA_Unit_Hero_Weaver &);
	CDOTA_Unit_Hero_Weaver();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool UsesConstantGesture(bool);
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Weaver();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[380] UsesConstantGesture
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:60
class C_CDOTA_Unit_Hero_Weaver_MapInstall {
	C_CDOTA_Unit_Hero_Weaver_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:85
class CDOTA_Ability_Weaver_TheSwarm : public CDOTABaseAbility {
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
	CDOTA_Ability_Weaver_TheSwarm(CDOTA_Ability_Weaver_TheSwarm &);
	CDOTA_Ability_Weaver_TheSwarm(CDOTA_Ability_Weaver_TheSwarm &);
	CDOTA_Ability_Weaver_TheSwarm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Weaver_TheSwarm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:103
class C_CDOTA_Ability_Weaver_TheSwarm_MapInstall {
	C_CDOTA_Ability_Weaver_TheSwarm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:217
class CDOTA_Modifier_Weaver_Swarm : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int m_iMaxDist;  // +0xbb4
	int m_iAttackCount;  // +0xbb8
	int destroy_attacks;  // +0xbbc
	EHANDLE m_hAttachTarget;  // +0xbd8
	CDOTA_Modifier_Weaver_Swarm();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Weaver_Swarm();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:427
class CDOTA_Modifier_Weaver_Swarm_Debuff : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	int damage;  // +0xbac
	int m_iCurrentArmorReduction;  // +0xbb0
	CDOTA_Modifier_Weaver_Swarm_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Weaver_Swarm_Debuff();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:520
class CDOTA_Ability_Weaver_Shukuchi : public CDOTABaseAbility {
public:

private:

	float duration;  // +0x390
	int radius;  // +0x394
	int damage;  // +0x398
	float fade_time;  // +0x39c
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
	CDOTA_Ability_Weaver_Shukuchi(CDOTA_Ability_Weaver_Shukuchi &);
	CDOTA_Ability_Weaver_Shukuchi(CDOTA_Ability_Weaver_Shukuchi &);
	CDOTA_Ability_Weaver_Shukuchi();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_Weaver_Shukuchi();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[326] HasInvisibility
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:542
class C_CDOTA_Ability_Weaver_Shukuchi_MapInstall {
	C_CDOTA_Ability_Weaver_Shukuchi_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:587
class CDOTA_Modifier_Weaver_Shukuchi : public CDOTA_Modifier_Invisible {
public:

private:

	int radius;  // +0xbb4
	int damage;  // +0xbb8

	CDOTA_Modifier_Weaver_Shukuchi();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Weaver_Shukuchi();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:737
class CDOTA_Ability_Weaver_GeminateAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_Weaver_GeminateAttack(CDOTA_Ability_Weaver_GeminateAttack &);
	CDOTA_Ability_Weaver_GeminateAttack(CDOTA_Ability_Weaver_GeminateAttack &);
	CDOTA_Ability_Weaver_GeminateAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Weaver_GeminateAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:767
class CDOTA_Modifier_Weaver_GeminateAttack : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	CDOTA_Modifier_Weaver_GeminateAttack();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Weaver_GeminateAttack();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:841
class CDOTA_Ability_Weaver_TimeLapse : public CDOTABaseAbility, public CGameEventListener {
public:

private:

	int m_nNPCSpawnedID;  // +0x39c
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
	CDOTA_Ability_Weaver_TimeLapse(CDOTA_Ability_Weaver_TimeLapse &);
	CDOTA_Ability_Weaver_TimeLapse(CDOTA_Ability_Weaver_TimeLapse &);
	CDOTA_Ability_Weaver_TimeLapse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual float GetCooldown(int);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void FireGameEvent(IGameEvent *);
	virtual ~CDOTA_Ability_Weaver_TimeLapse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// vtable[242] GetCooldown
	// vtable[8] Spawn
	// vtable[333] FireGameEvent
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:862
class C_CDOTA_Ability_Weaver_TimeLapse_MapInstall {
	C_CDOTA_Ability_Weaver_TimeLapse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_weaver.cpp:931
class CDOTA_Modifier_Weaver_TimeLapse : public CDOTA_Buff {
public:

private:

	float m_flLife[11];  // +0xc2c
	float m_flMana[11];  // +0xc58
	bool m_bHasValidHistory;  // +0xc84
	CDOTA_Modifier_Weaver_TimeLapse();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	bool HasValidHistory();
	Vector GetOldestPosition();
	float GetOldestHealth();
	float GetOldestMana();
	void InitHistory();
	virtual ~CDOTA_Modifier_Weaver_TimeLapse();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3208
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Weaver::~CDOTA_Unit_Hero_Weaver  (line 46, @0x0000000002c07410, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Weaver::~CDOTA_Unit_Hero_Weaver(CDOTA_Unit_Hero_Weaver *const this)
{
  this->_vptr_IHandleEntity = &off_456C710;
  this->_vptr_INextBotEventResponder = &off_456D6F0;
  this->_vptr_CObstructionObject = &off_456DA20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Weaver::~CDOTA_Unit_Hero_Weaver  (line 46, @0x0000000002c07450, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Weaver
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Weaver::~CDOTA_Unit_Hero_Weaver(CDOTA_Unit_Hero_Weaver *const this)
{
  this->_vptr_IHandleEntity = &off_456C710;
  this->_vptr_INextBotEventResponder = &off_456D6F0;
  this->_vptr_CObstructionObject = &off_456DA20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Weaver::Schema_DynamicBinding  (line 48, @0x0000000002c006b0, libserver.so)
// globals: CDOTA_Unit_Hero_Weaver::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Weaver::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Weaver *const this)
{
  return CDOTA_Unit_Hero_Weaver::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 48, @0x0000000002c006e0, libserver.so)
// globals: CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::DestructInstance  (line 48, @0x0000000002c006f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Weaver>
void __fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::FreeInstance  (line 48, @0x0000000002c00710, libserver.so)
void __fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::CanAllocate  (line 48, @0x0000000002c00730, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 48, @0x0000000002c00740, libserver.so)
// globals: CDOTA_Unit_Hero_Weaver::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Weaver::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::AllocateInstance  (line 48, @0x0000000002c02bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::ConstructInstance  (line 48, @0x0000000002c04730, libserver.so)  // inlines: CDOTA_Unit_Hero_Weaver, Construct<CDOTA_Unit_Hero_Weaver>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_456C710;
    *(p + 236) = &off_456D6F0;
    *(p + 257) = &off_456DA20;
  }
  return p;
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002c0b420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002c0b5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Weaver::GetEntityClassInternal  (line 48, @0x0000000002c186f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_weaver", "CDOTA_Unit_Hero_Weaver"
// globals: `guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass, CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass, __dso_handle, CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo, CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Weaver::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass);
    CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass._vptr_CEntityClass = off_456C690;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Weaver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_WeaverClass != 0 )
    return &CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo,
      "CDOTA_Unit_Hero_Weaver",
      "npc_dota_hero_weaver",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo);
  }
  CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass.m_pClassInfo = &CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo;
  CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_WeaverClass = &CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass;
  CDOTA_Unit_Hero_Weaver::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WeaverClassInfo.m_pClass = &CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass;
  CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_WeaverClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Weaver::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WeaverClass;
}


// CDOTA_Unit_Hero_Weaver::UsesConstantGesture  (line 53, @0x0000000002c00750, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Weaver::UsesConstantGesture(CDOTA_Unit_Hero_Weaver *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Weaver::YouForgotToImplementOrDeclareServerClass  (line 60, @0x0000000002bd3dd0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Weaver::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Weaver *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Weaver::GetServerClass  (line 60, @0x0000000002bdca70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Weaver::GetServerClass(CDOTA_Unit_Hero_Weaver *const this)
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


// CDOTA_Unit_Hero_Weaver::Precache  (line 69, @0x0000000002bd49d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_weaver_swarm"
void __fastcall CDOTA_Unit_Hero_Weaver::Precache(
        CDOTA_Unit_Hero_Weaver *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_weaver_swarm", pContext->m_pManifest, -1);
}


// CDOTA_Ability_Weaver_TheSwarm::~CDOTA_Ability_Weaver_TheSwarm  (line 85, @0x0000000002c05bc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Weaver_TheSwarm::~CDOTA_Ability_Weaver_TheSwarm(
        CDOTA_Ability_Weaver_TheSwarm *const this)
{
  this->_vptr_IHandleEntity = &off_456DAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Weaver_TheSwarm::~CDOTA_Ability_Weaver_TheSwarm  (line 85, @0x0000000002c05be0, libserver.so)  // inlines: ~CDOTA_Ability_Weaver_TheSwarm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Weaver_TheSwarm::~CDOTA_Ability_Weaver_TheSwarm(
        CDOTA_Ability_Weaver_TheSwarm *const this)
{
  this->_vptr_IHandleEntity = &off_456DAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Weaver_TheSwarm::Schema_DynamicBinding  (line 87, @0x0000000002c00760, libserver.so)
// globals: CDOTA_Ability_Weaver_TheSwarm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_TheSwarm::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_TheSwarm *const this)
{
  return CDOTA_Ability_Weaver_TheSwarm::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 87, @0x0000000002c00770, libserver.so)
// globals: CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::DestructInstance  (line 87, @0x0000000002c00780, libserver.so)  // inlines: Destruct<CDOTA_Ability_Weaver_TheSwarm>
void __fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::FreeInstance  (line 87, @0x0000000002c007a0, libserver.so)
void __fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::CanAllocate  (line 87, @0x0000000002c007c0, libserver.so)
bool __fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 87, @0x0000000002c007d0, libserver.so)
// globals: CDOTA_Ability_Weaver_TheSwarm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_TheSwarm::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::AllocateInstance  (line 87, @0x0000000002c02bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::ConstructInstance  (line 87, @0x0000000002c04ee0, libserver.so)  // inlines: CDOTA_Ability_Weaver_TheSwarm, Construct<CDOTA_Ability_Weaver_TheSwarm>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_456DAF0;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002c0b2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 87, @0x0000000002c0b2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal  (line 87, @0x0000000002c18840, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "weaver_the_swarm", "CDOTA_Ability_Weaver_TheSwarm"
// globals: `guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass, CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass, __dso_handle, CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo, CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo
CEntityClass *__cdecl CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass);
    CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass._vptr_CEntityClass = off_456DA70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass);
    __cxa_atexit(
      CDOTA_Ability_Weaver_TheSwarm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Weaver_TheSwarmClass != 0 )
    return &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass;
  if ( `guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo,
      "CDOTA_Ability_Weaver_TheSwarm",
      "weaver_the_swarm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo);
  }
  CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass.m_pClassInfo = &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo;
  CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass.m_pBaseClassInfo = CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Weaver_TheSwarmClass = &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass;
  CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClassInfo.m_pClass = &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass;
  CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Weaver_TheSwarmClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Weaver_TheSwarm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TheSwarmClass;
}


// CDOTA_Ability_Weaver_TheSwarm::YouForgotToImplementOrDeclareServerClass  (line 103, @0x0000000002bd3de0, libserver.so)
int __fastcall CDOTA_Ability_Weaver_TheSwarm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Weaver_TheSwarm *const this)
{
  return 0;
}


// CDOTA_Ability_Weaver_TheSwarm::GetServerClass  (line 103, @0x0000000002bdc630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Weaver_TheSwarm::GetServerClass(CDOTA_Ability_Weaver_TheSwarm *const this)
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


// CDOTA_Ability_Weaver_TheSwarm::OnSpellStart  (line 112, @0x0000000002be8930, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, QAngle, RandomLocationInCircle, Set, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, RandomFloat, AngleVectors, CDOTA_ProjectileManager::CreateLinearProjectile, DOTA_EmitSound, DOTA_EmitSoundLocation, CBaseEntity::GetAbsAngles, sqrtf
// strings: "spawn_radius", "particles/units/heroes/hero_weaver/weaver_swarm_projectile.vpcf", "Hero_Weaver.Swarm.Cast", "Hero_Weaver.Swarm.Projectile"
void __fastcall CDOTA_Ability_Weaver_TheSwarm::OnSpellStart(CDOTA_Ability_Weaver_TheSwarm *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r14d
  int v4; // ebx
  int v5; // r15d
  CDOTA_BaseNPC *Caster; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v12; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  int m_Value; // eax
  int v17; // ebx
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // rax
  float v21; // xmm1_4
  vec_t v22; // xmm0_4
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const QAngle *AbsAngles; // rax
  float v26; // [rsp+1Ch] [rbp-F4h]
  float v27; // [rsp+20h] [rbp-F0h]
  float v28; // [rsp+24h] [rbp-ECh]
  const Vector *AbsOrigin; // [rsp+28h] [rbp-E8h]
  float v30; // [rsp+28h] [rbp-E8h]
  Vector vDirection; // [rsp+30h] [rbp-E0h] BYREF
  QAngle angles; // [rsp+40h] [rbp-D0h] BYREF
  Vector forward; // [rsp+50h] [rbp-C0h] BYREF
  const char *v34; // [rsp+60h] [rbp-B0h] BYREF
  CDOTA_Ability_Weaver_TheSwarm *v35; // [rsp+68h] [rbp-A8h]
  vec_t x; // [rsp+70h] [rbp-A0h]
  float v37; // [rsp+74h] [rbp-9Ch]
  float v38; // [rsp+78h] [rbp-98h]
  float v39; // [rsp+7Ch] [rbp-94h]
  float v40; // [rsp+80h] [rbp-90h]
  float v41; // [rsp+84h] [rbp-8Ch]
  vec_t v42; // [rsp+88h] [rbp-88h]
  vec_t v43; // [rsp+8Ch] [rbp-84h]
  vec_t v44; // [rsp+90h] [rbp-80h]
  float v45; // [rsp+94h] [rbp-7Ch]
  float v46; // [rsp+98h] [rbp-78h]
  float v47; // [rsp+9Ch] [rbp-74h]
  char v48; // [rsp+A0h] [rbp-70h]
  char v49; // [rsp+A1h] [rbp-6Fh]
  int v50; // [rsp+A4h] [rbp-6Ch]
  int v51; // [rsp+A8h] [rbp-68h]
  int v52; // [rsp+ACh] [rbp-64h]
  int v53; // [rsp+B0h] [rbp-60h]
  char v54; // [rsp+B4h] [rbp-5Ch]
  int v55; // [rsp+B8h] [rbp-58h]
  int radius; // [rsp+BCh] [rbp-54h]
  char v57; // [rsp+C0h] [rbp-50h]
  char v58; // [rsp+C1h] [rbp-4Fh]
  char v59; // [rsp+C2h] [rbp-4Eh]
  char v60; // [rsp+C3h] [rbp-4Dh]
  int v61; // [rsp+C4h] [rbp-4Ch]
  int v62; // [rsp+C8h] [rbp-48h]
  __int64 v63; // [rsp+D0h] [rbp-40h]
  Vector CursorPosition; // 0:kr00_12.12

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "count", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spawn_radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v34 = *&CursorPosition.x;
  *&v35 = CursorPosition.z;
  v7 = CursorPosition.y - AbsOrigin->y;
  v8 = CursorPosition.x - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v7;
  vDirection.x = v8;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v24 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v24);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v34 = "particles/units/heroes/hero_weaver/weaver_swarm_projectile.vpcf";
  v50 = -1;
  v45 = 0.0;
  z = vec3_origin.z;
  v46 = 0.0;
  v47 = 0.0;
  y = vec3_origin.y;
  v38 = z;
  v44 = z;
  x = vec3_origin.x;
  v37 = y;
  v42 = vec3_origin.x;
  v43 = y;
  v48 = 1;
  v49 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = -1;
  radius = -1;
  v57 = 0;
  v58 = 1;
  v59 = 0;
  v63 = 0;
  v61 = 0;
  v62 = 0;
  v60 = 1;
  v35 = this;
  v39 = v3 * vDirection.x;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v40 = vDirection.y * v3;
  v41 = vDirection.z * v3;
  v45 = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  v46 = v4;
  v47 = v4;
  v12 = CDOTABaseAbility::GetCaster(this);
  if ( v12 != 0 && (m_pEntity = v12->m_pEntity) != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v50) = v15 | v50 & 0x8000;
    v50 = (v14 << 15) | v50 & 0x7FFF;
  }
  else
  {
    v50 = -1;
  }
  v51 = 2;
  v52 = 3;
  v53 = 208;
  v54 = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  radius = v4;
  v55 = m_Value;
  if ( LevelSpecialValue > 0 )
  {
    v17 = 0;
    v26 = v5;
    do
    {
      angles.y = RandomFloat(0.0, 360.0);
      angles.x = 0.0;
      angles.z = 0.0;
      AngleVectors(&angles, &forward, 0, 0);
      v18 = fsqrt(RandomFloat(0.0, 1.0));
      ++v17;
      v27 = (forward.x * v18) * v26;
      v28 = (forward.y * v18) * v26;
      v30 = (v18 * forward.z) * v26;
      v19 = CDOTABaseAbility::GetCaster(this);
      v20 = CBaseEntity::GetAbsOrigin(v19);
      v21 = v30 + v20->z;
      v22 = v27 + v20->x;
      v37 = v28 + v20->y;
      v38 = v21;
      x = v22;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &v34);
    }
    while ( v17 != LevelSpecialValue );
  }
  v23 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Weaver.Swarm.Cast", v23);
  this->m_SoundEventGuid = DOTA_EmitSoundLocation(&vDirection, "Hero_Weaver.Swarm.Projectile", 0);
}


// CDOTA_Ability_Weaver_TheSwarm::OnProjectileThink  (line 163, @0x0000000002bdc040, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Weaver_TheSwarm::OnProjectileThink(
        CDOTA_Ability_Weaver_TheSwarm *const this,
        const Vector *const vDirection)
{
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v6; // r14d
  int v7; // r15d
  SosFieldValueMem_t *v8; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vDirection->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vDirection->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vDirection = vDirection->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vDirection;
  *(v8 + 1) = v7;
  *(v8 + 2) = v6;
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    this->m_SoundEventGuid,
    "position",
    &fieldData,
    0,
    0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Weaver_TheSwarm::OnProjectileHit  (line 174, @0x0000000002beefd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetPtr, KeyValues::SetFloat, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_weaver_swarm_debuff", "npc_dota_weaver_swarm", "Hero_Weaver.SwarmAttach", "modifier_weaver_swarm"
// globals: CEntityHandle::gm_pEntityList
_BOOL8 __fastcall CDOTA_Ability_Weaver_TheSwarm::OnProjectileHit(
        CDOTA_Ability_Weaver_TheSwarm *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  _BOOL4 m_bIsDOTANPC; // ebx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // r15
  int m_Value; // r14d
  CDOTA_BaseNPC *v11; // r15
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  Vector v17; // 0:xmm0_8.8,8:xmm1_4.4

  v16 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v5 = &v4[*hTarget & 0x1FF]) != 0
    && *hTarget == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && (m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC)
    && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_weaver_swarm_debuff", 0) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v17 = *CBaseEntity::GetAbsOrigin(m_pInstance);
    v11 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_weaver_swarm", m_Value, Caster, 0, 0, v17);
    if ( v11 != 0 )
    {
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Weaver.SwarmAttach", 0.0, 0, 0);
      KeyValues::KeyValues(&kv, "modifier_weaver_swarm_debuff");
      v12 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, this, "modifier_weaver_swarm_debuff", &kv, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::SetPtr(&kv, "target", m_pInstance);
      KeyValues::SetFloat(&kv, "duration", v13);
      v14 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v11, v14, this, "modifier_weaver_swarm", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    return 0;
  }
  return m_bIsDOTANPC;
}


// CDOTA_Ability_Weaver_TheSwarm::GetAbilityDamageToTargetOverInterval  (line 205, @0x0000000002be98a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Weaver_TheSwarm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Weaver_TheSwarm *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fIntervala = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0) * fInterval;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervala);
  }
  return result;
}


// CDOTA_Modifier_Weaver_Swarm::~CDOTA_Modifier_Weaver_Swarm  (line 217, @0x0000000002c02ee0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Weaver_Swarm::~CDOTA_Modifier_Weaver_Swarm(CDOTA_Modifier_Weaver_Swarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_456E5B0;
  this->_vptr_CHorizontalMotionController = &off_456E8A0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Weaver_Swarm::~CDOTA_Modifier_Weaver_Swarm  (line 217, @0x0000000002c02f10, libserver.so)  // inlines: ~CDOTA_Modifier_Weaver_Swarm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Weaver_Swarm::~CDOTA_Modifier_Weaver_Swarm(CDOTA_Modifier_Weaver_Swarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_456E5B0;
  this->_vptr_CHorizontalMotionController = &off_456E8A0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Weaver_Swarm::IsHidden  (line 226, @0x0000000002c007e0, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_Swarm::IsHidden(CDOTA_Modifier_Weaver_Swarm *const this)
{
  return 1;
}


// CDOTA_Modifier_Weaver_Swarm::IsPurgable  (line 227, @0x0000000002c007f0, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_Swarm::IsPurgable(CDOTA_Modifier_Weaver_Swarm *const this)
{
  return 0;
}


// CDOTA_Modifier_Weaver_Swarm::IsHorizontalMotionValidToApply  (line 243, @0x0000000002c00800, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Weaver_Swarm::IsHorizontalMotionValidToApply(CDOTA_Modifier_Weaver_Swarm *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Weaver_Swarm::IsMotionController  (line 245, @0x0000000002c00830, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_Swarm::IsMotionController(CDOTA_Modifier_Weaver_Swarm *const this)
{
  return 1;
}


// CDOTA_Modifier_Weaver_Swarm::OnCreated  (line 265, @0x0000000002bec3d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
// strings: "destroy_attacks", "particles/units/heroes/hero_weaver/weaver_swarm_debuff.vpcf"
void __fastcall CDOTA_Modifier_Weaver_Swarm::OnCreated(CDOTA_Modifier_Weaver_Swarm *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v10; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  float v15; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->destroy_attacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "destroy_attacks", -1, 0);
  else
    this->destroy_attacks = 0;
  this->m_iAttackCount = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    v8 = 0x7FFF;
    if ( *(v6 + 16) != -1 )
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hAttachTarget.m_Index) = v8 | this->m_hAttachTarget.m_Index & 0x8000;
    this->m_hAttachTarget.m_Index = (v7 << 15) | this->m_hAttachTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAttachTarget.m_Index = -1;
  }
  Parent = CDOTA_Buff::GetParent(this);
  v10 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v10, &this->CHorizontalMotionController, 0) )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_weaver/weaver_swarm_debuff.vpcf",
                 2,
                 0,
                 0,
                 0);
    v13 = CDOTA_Buff::GetParent(this);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 0, v13, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
    CDOTA_Buff::StartIntervalThink(this, 0.1, v15);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Weaver_Swarm::OnDestroy  (line 289, @0x0000000002bda330, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_weaver_swarm_debuff"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Weaver_Swarm::OnDestroy(CDOTA_Modifier_Weaver_Swarm *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi

  m_Index = this->m_hAttachTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttachTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_weaver_swarm_debuff");
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(Parent, 0);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  CDOTALocomotor::RemoveHorizontalMotionController(v7, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Weaver_Swarm::OnIntervalThink  (line 306, @0x0000000002bd9ec0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsInvisibleTo
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Weaver_Swarm::OnIntervalThink(CDOTA_Modifier_Weaver_Swarm *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax

  m_Index = this->m_hAttachTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hAttachTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) == 0
            || (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, Caster)) )
          {
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Weaver_Swarm::CheckState  (line 323, @0x0000000002bd3df0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Weaver_Swarm::CheckState(
        CDOTA_Modifier_Weaver_Swarm *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xE100200uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFF1EFFDFFLL;
}


// CDOTA_Modifier_Weaver_Swarm::UpdateHorizontalMotion  (line 336, @0x0000000002bda1c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+=, operator=
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Weaver_Swarm::UpdateHorizontalMotion(
        CDOTA_Modifier_Weaver_Swarm *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // rbx
  double v9; // xmm0_8
  vec_t v10; // xmm1_4
  Vector vecOrigin; // [rsp+0h] [rbp-60h] BYREF
  double v12; // [rsp+10h] [rbp-50h]
  vec_t v13; // [rsp+18h] [rbp-48h]
  QAngle Angles; // [rsp+20h] [rbp-40h] BYREF
  Vector vecFwd; // [rsp+30h] [rbp-30h] BYREF

  m_Index = this->m_hAttachTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAttachTarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hAttachTarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          vecOrigin = *CBaseEntity::GetAbsOrigin(v7->m_pInstance);
          v9 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
          v13 = v10;
          vecOrigin.z = v10;
          v12 = v9;
          Angles = *CBaseEntity::GetAbsAngles(m_pInstance);
          AngleVectors(&Angles, &vecFwd, 0, 0);
          VectorNormalize(&vecFwd);
          vecOrigin.y = (vecFwd.y * 64.0) + vecOrigin.y;
          vecOrigin.z = (vecFwd.z * 64.0) + vecOrigin.z;
          vecOrigin.x = (64.0 * vecFwd.x) + vecOrigin.x;
          Angles.y = Angles.y + 180.0;
          CBaseEntity::SetAbsOrigin(me, &vecOrigin);
          CBaseEntity::SetAbsAngles(me, &Angles);
        }
      }
    }
  }
}


// CDOTA_Modifier_Weaver_Swarm::OnHorizontalMotionInterrupted  (line 360, @0x0000000002bd48b0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Weaver_Swarm::OnHorizontalMotionInterrupted(CDOTA_Modifier_Weaver_Swarm *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Weaver_Swarm::DeclareFunctions  (line 369, @0x0000000002bd3e10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Weaver_Swarm::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Weaver_Swarm::DeclareFunctions(CDOTA_Modifier_Weaver_Swarm *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePure;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Weaver_Swarm::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePhysical  (line 379, @0x0000000002bd3e80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Weaver_Swarm *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamageMagical  (line 386, @0x0000000002bd3ea0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Weaver_Swarm *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePure  (line 393, @0x0000000002bd3ec0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Weaver_Swarm *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Weaver_Swarm::OnAttacked  (line 400, @0x0000000002bdb010, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsHero, IsUnitMyParent, IsValid, LookupEntity, RemapValClamped, TargetNPC, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm::OnAttacked(
        CDOTA_Modifier_Weaver_Swarm *const this,
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
  float destroy_attacks; // xmm0_4
  int v14; // eax
  float v15; // xmm2_4
  float v16; // xmm2_4
  int v17; // r12d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v19; // rax

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
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
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  destroy_attacks = this->destroy_attacks;
                  v14 = ((__PAIR64__(this->m_iAttackCount, v12->m_iUnitType & 1) - 1) >> 32) + 2;
                  this->m_iAttackCount = v14;
                  v15 = v14;
                  if ( destroy_attacks == 0.0 )
                  {
                    v17 = (v15 - destroy_attacks) < 0.0 ? 0x64 : 0;
                  }
                  else
                  {
                    v16 = v15 / destroy_attacks;
                    v17 = 100;
                    if ( v16 >= 0.0 )
                    {
                      LOBYTE(v17) = 0;
                      if ( v16 <= 1.0 )
                        v17 = ((v16 * -100.0) + 100.0);
                    }
                  }
                  Parent = CDOTA_Buff::GetParent(this);
                  CDOTA_BaseNPC::ModifyHealth(Parent, v17, 0, 0, 0);
                  if ( this->m_iAttackCount >= this->destroy_attacks )
                  {
                    v19 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v19, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
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


// CDOTA_Modifier_Weaver_Swarm_Debuff::~CDOTA_Modifier_Weaver_Swarm_Debuff  (line 427, @0x0000000002c02e90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::~CDOTA_Modifier_Weaver_Swarm_Debuff(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_456E930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::~CDOTA_Modifier_Weaver_Swarm_Debuff  (line 427, @0x0000000002c02eb0, libserver.so)  // inlines: ~CDOTA_Modifier_Weaver_Swarm_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::~CDOTA_Modifier_Weaver_Swarm_Debuff(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_456E930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::IsPurgable  (line 434, @0x0000000002c00840, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::IsPurgable(CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::GetEffectName  (line 436, @0x0000000002c00850, libserver.so)
// strings: "particles/units/heroes/hero_weaver/weaver_swarm_infected_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::GetEffectName(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  return "particles/units/heroes/hero_weaver/weaver_swarm_infected_debuff.vpcf";
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::GetAttributes  (line 442, @0x0000000002c00860, libserver.so)
int __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::GetAttributes(CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  return 4;
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::OnCreated  (line 457, @0x0000000002bf32b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "attack_rate"
void __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::OnCreated(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v4; // xmm0
  int v5; // r14d
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "attack_rate", -1, 0);
    v5 = _mm_cvtsi128_si32(v4);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_3;
LABEL_7:
    this->armor_reduction = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage = 0;
    goto LABEL_5;
  }
  v5 = _mm_cvtsi128_si32(0LL);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_7;
LABEL_3:
  this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "armor_reduction", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage", -1, 0);
LABEL_5:
  this->m_iCurrentArmorReduction = 0;
  CDOTA_Buff::StartIntervalThink(this, *&v5, v8);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::OnIntervalThink  (line 472, @0x0000000002bd8f30, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::OnIntervalThink(CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float damage; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v7; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( !Parent->m_bIsWaitingToSpawn.m_Value && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
  {
    damage = this->damage;
    this->m_iCurrentArmorReduction += this->armor_reduction;
    v7 = damage;
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v5, Ability, v7, 1, 0);
  }
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::DeclareFunctions  (line 491, @0x0000000002bd3ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::DeclareFunctions(CDOTA_Modifier_Weaver_Swarm_Debuff *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[158].__delta = 0;
  this->m_Functions[158].__pfn = CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierProvidesFOWVision;
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierPhysicalArmorBonus  (line 499, @0x0000000002bd3f20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->m_iCurrentArmorReduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierProvidesFOWVision  (line 506, @0x0000000002bd9cd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Swarm_Debuff::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Weaver_Swarm_Debuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  char m_CScriptComponent_high; // bl
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0x3F80000000000001uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0x3F80000000000001uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    return 0x3F80000000000001uLL;
  m_CScriptComponent_high = HIBYTE(v4->m_pInstance[7].m_CScriptComponent);
  result.m_szVal = CDOTA_Buff::GetCaster(this);
  *&result.m_eType = 1;
  if ( m_CScriptComponent_high == *(result.m_szVal + 383) )
    *&result.m_eType = 0x3F80000000000001LL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Weaver_Shukuchi::~CDOTA_Ability_Weaver_Shukuchi  (line 520, @0x0000000002c05c10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Weaver_Shukuchi::~CDOTA_Ability_Weaver_Shukuchi(
        CDOTA_Ability_Weaver_Shukuchi *const this)
{
  this->_vptr_IHandleEntity = &off_456EC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Weaver_Shukuchi::~CDOTA_Ability_Weaver_Shukuchi  (line 520, @0x0000000002c05c30, libserver.so)  // inlines: ~CDOTA_Ability_Weaver_Shukuchi
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Weaver_Shukuchi::~CDOTA_Ability_Weaver_Shukuchi(
        CDOTA_Ability_Weaver_Shukuchi *const this)
{
  this->_vptr_IHandleEntity = &off_456EC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Weaver_Shukuchi::Schema_DynamicBinding  (line 522, @0x0000000002c00870, libserver.so)
// globals: CDOTA_Ability_Weaver_Shukuchi::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_Shukuchi::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_Shukuchi *const this)
{
  return CDOTA_Ability_Weaver_Shukuchi::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 522, @0x0000000002c00880, libserver.so)
// globals: CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::DestructInstance  (line 522, @0x0000000002c00890, libserver.so)  // inlines: Destruct<CDOTA_Ability_Weaver_Shukuchi>
void __fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::FreeInstance  (line 522, @0x0000000002c008b0, libserver.so)
void __fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::CanAllocate  (line 522, @0x0000000002c008d0, libserver.so)
bool __fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 522, @0x0000000002c008e0, libserver.so)
// globals: CDOTA_Ability_Weaver_Shukuchi::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_Shukuchi::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::AllocateInstance  (line 522, @0x0000000002c02c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::ConstructInstance  (line 522, @0x0000000002c04f30, libserver.so)  // inlines: CDOTA_Ability_Weaver_Shukuchi, Construct<CDOTA_Ability_Weaver_Shukuchi>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_456EC90;
  }
  return p;
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002c0b310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 522, @0x0000000002c0b330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal  (line 522, @0x0000000002c18990, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Weaver_Shukuchi"
// globals: `guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass, CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass, __dso_handle, CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo, CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo
CEntityClass *__cdecl CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass);
    CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass._vptr_CEntityClass = off_456EC10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass);
    __cxa_atexit(
      CDOTA_Ability_Weaver_Shukuchi::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Weaver_ShukuchiClass != 0 )
    return &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass;
  if ( `guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo,
      "CDOTA_Ability_Weaver_Shukuchi",
      "weaver_shukuchi",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo);
  }
  CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass.m_pClassInfo = &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo;
  CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass.m_pBaseClassInfo = CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Weaver_ShukuchiClass = &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass;
  CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClassInfo.m_pClass = &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass;
  CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Weaver_ShukuchiClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Weaver_Shukuchi::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_ShukuchiClass;
}


// CDOTA_Ability_Weaver_Shukuchi::GetAOERadius  (line 528, @0x0000000002c1a480, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Weaver_Shukuchi::GetAOERadius(CDOTA_Ability_Weaver_Shukuchi *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Weaver_Shukuchi::HasInvisibility  (line 531, @0x0000000002c008f0, libserver.so)
bool __fastcall CDOTA_Ability_Weaver_Shukuchi::HasInvisibility(CDOTA_Ability_Weaver_Shukuchi *const this)
{
  return 1;
}


// CDOTA_Ability_Weaver_Shukuchi::YouForgotToImplementOrDeclareServerClass  (line 542, @0x0000000002bd3f40, libserver.so)
int __fastcall CDOTA_Ability_Weaver_Shukuchi::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Weaver_Shukuchi *const this)
{
  return 0;
}


// CDOTA_Ability_Weaver_Shukuchi::GetServerClass  (line 542, @0x0000000002bdc9b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Weaver_Shukuchi::GetServerClass(CDOTA_Ability_Weaver_Shukuchi *const this)
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


// CDOTA_Ability_Weaver_Shukuchi::OnSpellStart  (line 551, @0x0000000002bef1b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation (17 total)
// strings: "modifier_weaver_shukuchi", "fadetime", "particles/units/heroes/hero_weaver/weaver_shukuchi_start.vpcf", "attach_hitloc"
void __fastcall CDOTA_Ability_Weaver_Shukuchi::OnSpellStart(CDOTA_Ability_Weaver_Shukuchi *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r14
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  Vector vecFwd; // [rsp+10h] [rbp-70h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-60h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->fade_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_weaver_shukuchi");
  KeyValues::SetFloat(&kv, "duration", v2);
  KeyValues::SetFloat(&kv, "fadetime", v3);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_weaver_shukuchi", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v6);
  AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
  v8 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_weaver/weaver_shukuchi_start.vpcf",
                  2,
                  0,
                  0,
                  v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, v8, 0, *&AbsOrigin->x, AbsOrigin->z);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v13,
    v8,
    0,
    *&vecFwd.x,
    vecFwd.z,
    *&vecRight.x,
    vecRight.z,
    *&vecUp.x,
    vecUp.z);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v8, 1, v16, 5, "attach_hitloc", *v15, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v8);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Weaver_Shukuchi::GetAbilityDamageToTargetOverInterval  (line 575, @0x0000000002be9920, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Weaver_Shukuchi::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Weaver_Shukuchi *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0) * fInterval;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervala);
  }
  return result;
}


// CDOTA_Modifier_Weaver_Shukuchi::~CDOTA_Modifier_Weaver_Shukuchi  (line 587, @0x0000000002c19a30, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Invisible, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::~CDOTA_Modifier_Weaver_Shukuchi(
        CDOTA_Modifier_Weaver_Shukuchi *const this)
{
  this->_vptr_CDOTA_Buff = &off_456F750;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntitiesAffected);
  if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
    if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Weaver_Shukuchi::~CDOTA_Modifier_Weaver_Shukuchi  (line 587, @0x0000000002c19e10, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Weaver_Shukuchi, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::~CDOTA_Modifier_Weaver_Shukuchi(
        CDOTA_Modifier_Weaver_Shukuchi *const this)
{
  this->_vptr_CDOTA_Buff = &off_456F750;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntitiesAffected);
  if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
    if ( (this->m_hEntitiesAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntitiesAffected.m_Memory);
  }
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Weaver_Shukuchi::CheckState  (line 614, @0x0000000002bd5f80, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::CheckState(
        CDOTA_Modifier_Weaver_Shukuchi *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Weaver_Shukuchi::OnCreated  (line 623, @0x0000000002be6db0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Modifier_Invisible::OnCreated
// strings: "Hero_Weaver.Shukuchi", "particles/units/heroes/hero_weaver/weaver_shukuchi.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::OnCreated(CDOTA_Modifier_Weaver_Shukuchi *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v12; // r15
  CDOTA_ParticleManager *v13; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage, "damage");
  CDOTA_Buff::StartIntervalThink(this, 0.02, v6);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Weaver.Shukuchi", 0.0, 0, 0);
  v8 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_weaver/weaver_shukuchi.vpcf",
                  1,
                  v8,
                  0,
                  0);
  v10 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v8, 1, v12, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, v8, 0, 0, -1, 0, 0);
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_Weaver_Shukuchi::OnIntervalThink  (line 642, @0x0000000002bf5080, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility (16 total)
// strings: "particles/units/heroes/hero_weaver/weaver_shukuchi_damage.vpcf", "special_bonus_unique_weaver_1"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::OnIntervalThink(CDOTA_Modifier_Weaver_Shukuchi *const this)
{
  __m128i v1; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // r12
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // r14
  __int16 v16; // cx
  int v17; // eax
  __int16 v18; // cx
  int v19; // eax
  __int64 m_Size; // r14
  int v21; // eax
  CHandle<CBaseEntity> *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v32; // rax
  float flDamage; // [rsp+3Ch] [rbp-64h]
  CHandle<CBaseEntity> v34; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-50h] BYREF

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
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hEntities, 2, 19, 0, 0, 0);
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
                v34.m_Index = -1;
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v16 = 0x7FFF;
                  v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v34.m_Index) = v16 | v34.m_Index & 0x8000;
                  v34.m_Index = (v17 << 15) | v34.m_Index & 0x7FFF;
                }
                if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                       &this->m_hEntitiesAffected,
                       &v34) < 0 )
                  break;
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v8 )
          goto LABEL_27;
      }
      v34.m_Index = -1;
      if ( m_pEntity != 0 )
      {
        v18 = 0x7FFF;
        v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v34.m_Index) = v18 | v34.m_Index & 0x8000;
        v34.m_Index = (v19 << 15) | v34.m_Index & 0x7FFF;
      }
      m_Size = this->m_hEntitiesAffected.m_Size;
      v21 = this->m_hEntitiesAffected.m_Size;
      if ( m_Size == this->m_hEntitiesAffected.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hEntitiesAffected.m_Memory, 1);
        v21 = this->m_hEntitiesAffected.m_Size;
      }
      this->m_hEntitiesAffected.m_Size = v21 + 1;
      v22 = &this->m_hEntitiesAffected.m_Memory.m_pMemory[m_Size];
      if ( v22 != 0 )
        v22->m_Index = v34.m_Index;
      v23 = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_weaver/weaver_shukuchi_damage.vpcf",
                       1,
                       m_pInstance,
                       0,
                       v23);
      v25 = CDOTA_Buff::GetCaster(this);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v26, v23, 1, v25, 1, 0, vec3_invalid, 1);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, v23);
      v28 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v28, "special_bonus_unique_weaver_1", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      else
        LevelSpecialValue = 0;
      flDamage = (this->damage + LevelSpecialValue);
      Ability = CDOTA_Buff::GetAbility(this);
      v32 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v32, m_pInstance, Ability, flDamage, 2, 0);
      ++v8;
    }
    while ( hEntities.m_Size > v8 );
  }
LABEL_27:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Weaver_Shukuchi::DeclareFunctions  (line 678, @0x0000000002bd5fb0, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_Weaver_Shukuchi::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Max(CModifierParams const&)
void __fastcall CDOTA_Modifier_Weaver_Shukuchi::DeclareFunctions(CDOTA_Modifier_Weaver_Shukuchi *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Absolute;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Weaver_Shukuchi::GetActivityTranslationModifiers;
  this->m_Functions[21].__pfn = CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Max;
  this->m_Functions[21].__delta = 0;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Weaver_Shukuchi::GetActivityTranslationModifiers  (line 689, @0x0000000002bd6750, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Shukuchi::GetActivityTranslationModifiers(
        CDOTA_Modifier_Weaver_Shukuchi *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = &loc_2;
  *&result.m_eType = 2;
  if ( params->nActivity != 1502 )
    *&result.m_eType = 2;
  LOBYTE(result.m_szVal) = 0;
  if ( params->nActivity == 1502 )
    result.m_szVal = "shukuchi";
  return result;
}


// CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Absolute  (line 703, @0x0000000002be99a0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_weaver_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Weaver_Shukuchi *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_weaver_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    result.m_szVal = 0;
    *v5.m128i_i32 = LevelSpecialValue + 550.0;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(0x44098000u) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Max  (line 718, @0x0000000002be9a20, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_weaver_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_Shukuchi::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Weaver_Shukuchi *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // eax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_weaver_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    result.m_szVal = 0;
    *v5.m128i_i32 = (LevelSpecialValue + 550);
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(0x44098000u) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Weaver_GeminateAttack::~CDOTA_Ability_Weaver_GeminateAttack  (line 737, @0x0000000002c05c60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::~CDOTA_Ability_Weaver_GeminateAttack(
        CDOTA_Ability_Weaver_GeminateAttack *const this)
{
  this->_vptr_IHandleEntity = &off_456FAD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Weaver_GeminateAttack::~CDOTA_Ability_Weaver_GeminateAttack  (line 737, @0x0000000002c05c80, libserver.so)  // inlines: ~CDOTA_Ability_Weaver_GeminateAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::~CDOTA_Ability_Weaver_GeminateAttack(
        CDOTA_Ability_Weaver_GeminateAttack *const this)
{
  this->_vptr_IHandleEntity = &off_456FAD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Weaver_GeminateAttack::Schema_DynamicBinding  (line 739, @0x0000000002c00900, libserver.so)
// globals: CDOTA_Ability_Weaver_GeminateAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_GeminateAttack::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_GeminateAttack *const this)
{
  return CDOTA_Ability_Weaver_GeminateAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 739, @0x0000000002c00910, libserver.so)
// globals: CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::DestructInstance  (line 739, @0x0000000002c00920, libserver.so)  // inlines: Destruct<CDOTA_Ability_Weaver_GeminateAttack>
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::FreeInstance  (line 739, @0x0000000002c00940, libserver.so)
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::CanAllocate  (line 739, @0x0000000002c00960, libserver.so)
bool __fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 739, @0x0000000002c00970, libserver.so)
// globals: CDOTA_Ability_Weaver_GeminateAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_GeminateAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::AllocateInstance  (line 739, @0x0000000002c02c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::ConstructInstance  (line 739, @0x0000000002c04f60, libserver.so)  // inlines: CDOTA_Ability_Weaver_GeminateAttack, Construct<CDOTA_Ability_Weaver_GeminateAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_456FAD0;
  }
  return p;
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 739, @0x0000000002c0b360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 739, @0x0000000002c0b380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal  (line 739, @0x0000000002c18ae0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "weaver_geminate_attack", "CDOTA_Ability_Weaver_GeminateAttack"
// globals: `guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass, CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass, __dso_handle, CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo, CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass);
    CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass._vptr_CEntityClass = off_456FA50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass);
    __cxa_atexit(
      CDOTA_Ability_Weaver_GeminateAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Weaver_GeminateAttackClass != 0 )
    return &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass;
  if ( `guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo,
      "CDOTA_Ability_Weaver_GeminateAttack",
      "weaver_geminate_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo);
  }
  CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass.m_pClassInfo = &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo;
  CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass.m_pBaseClassInfo = CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Weaver_GeminateAttackClass = &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass;
  CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClassInfo.m_pClass = &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass;
  CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Weaver_GeminateAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Weaver_GeminateAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_GeminateAttackClass;
}


// CDOTA_Ability_Weaver_GeminateAttack::GetIntrinsicModifierName  (line 742, @0x0000000002c00980, libserver.so)
// strings: "modifier_weaver_geminate_attack"
const char *__fastcall CDOTA_Ability_Weaver_GeminateAttack::GetIntrinsicModifierName(
        CDOTA_Ability_Weaver_GeminateAttack *const this)
{
  return "modifier_weaver_geminate_attack";
}


// CDOTA_Ability_Weaver_GeminateAttack::GetAbilityDamageToTargetOverInterval  (line 751, @0x0000000002bd65c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Weaver_GeminateAttack::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Weaver_GeminateAttack *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumExtraAttacks; // [rsp+0h] [rbp-1Ch]
  float fNumExtraAttacksa; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fNumExtraAttacks = fInterval / (*(this->_vptr_IHandleEntity + 242))(this, 0xFFFFFFFFLL);
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumExtraAttacksa = CDOTA_BaseNPC::GetAverageTrueAttackDamage(Caster, pTarget) * fNumExtraAttacks;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fNumExtraAttacksa);
  }
  return result;
}


// CDOTA_Modifier_Weaver_GeminateAttack::~CDOTA_Modifier_Weaver_GeminateAttack  (line 767, @0x0000000002c02e40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Weaver_GeminateAttack::~CDOTA_Modifier_Weaver_GeminateAttack(
        CDOTA_Modifier_Weaver_GeminateAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4570590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Weaver_GeminateAttack::~CDOTA_Modifier_Weaver_GeminateAttack  (line 767, @0x0000000002c02e60, libserver.so)  // inlines: ~CDOTA_Modifier_Weaver_GeminateAttack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Weaver_GeminateAttack::~CDOTA_Modifier_Weaver_GeminateAttack(
        CDOTA_Modifier_Weaver_GeminateAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4570590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Weaver_GeminateAttack::IsHidden  (line 772, @0x0000000002c00990, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_GeminateAttack::IsHidden(CDOTA_Modifier_Weaver_GeminateAttack *const this)
{
  return 1;
}


// CDOTA_Modifier_Weaver_GeminateAttack::DeclareFunctions  (line 787, @0x0000000002bd3f50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Weaver_GeminateAttack::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Weaver_GeminateAttack::DeclareFunctions(
        CDOTA_Modifier_Weaver_GeminateAttack *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Weaver_GeminateAttack::OnAttack;
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Weaver_GeminateAttack::OnAttack  (line 794, @0x0000000002becd60, libserver.so)  // inlines: AttackerNPC, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_Buff::StartIntervalThink
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Weaver_GeminateAttack::OnAttack(
        CDOTA_Modifier_Weaver_GeminateAttack *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // edx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rbx
  char m_CScriptComponent_high; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v20; // rax
  CEntityIdentity *m_pEntity; // rax
  int v22; // edx
  __int16 v23; // cx
  CDOTABaseAbility *v24; // rax
  float v25; // xmm1_4
  float delay[9]; // [rsp+Ch] [rbp-24h] BYREF
  ModifierVariant_t result; // 0:rax.16

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
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = params->htarget.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
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
            || BYTE3(v17[7]._vptr_IHandleEntity) == 0 )
          {
            v17 = 0;
          }
          if ( v13 != 0 )
          {
            m_CScriptComponent_high = HIBYTE(v13[7].m_CScriptComponent);
            if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
              && (BYTE2(v13[43].m_iszPrivateVScripts.u.m_pAsString) & 2) == 0
              && v17 != 0
              && LOBYTE(v17[71].m_pEntity) == 0 )
            {
              Ability = CDOTA_Buff::GetAbility(this);
              if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
              {
                v20 = CDOTA_Buff::GetAbility(this);
                DotaRetrieveAbilityValue<float>(v20, delay, "delay");
                m_pEntity = v13->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v23 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hTarget.m_Index) = v23 | this->m_hTarget.m_Index & 0x8000;
                  this->m_hTarget.m_Index = (v22 << 15) | this->m_hTarget.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_hTarget.m_Index = -1;
                }
                v24 = CDOTA_Buff::GetAbility(this);
                (*(v24->_vptr_IHandleEntity + 241))(v24, -1.0);
                CDOTA_Buff::StartIntervalThink(this, delay[0], v25);
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Weaver_GeminateAttack::OnIntervalThink  (line 822, @0x0000000002bda0d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Weaver_GeminateAttack::OnIntervalThink(CDOTA_Modifier_Weaver_GeminateAttack *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_AttackRecord *AttackRecord; // r13
  CDOTA_BaseNPC *v8; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          this->m_hTarget.m_Index = -1;
          Caster = CDOTA_Buff::GetCaster(this);
          AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(Caster, m_pInstance, 0, 1, 0, 0, 0);
          v8 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::PerformAttack(v8, AttackRecord, m_pInstance, 1, 1, 1, 0);
        }
      }
    }
  }
}


// CDOTA_Ability_Weaver_TimeLapse::~CDOTA_Ability_Weaver_TimeLapse  (line 841, @0x0000000002c0a3f0, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Weaver_TimeLapse::~CDOTA_Ability_Weaver_TimeLapse(
        CDOTA_Ability_Weaver_TimeLapse *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_45708F0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Weaver_TimeLapse::~CDOTA_Ability_Weaver_TimeLapse  (line 841, @0x0000000002c0a470, libserver.so)  // inlines: StopListeningForAllEvents, ~CDOTA_Ability_Weaver_TimeLapse, ~CGameEventListener, ~IGameEventListener2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Weaver_TimeLapse::~CDOTA_Ability_Weaver_TimeLapse(
        CDOTA_Ability_Weaver_TimeLapse *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_45708F0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Weaver_TimeLapse::Schema_DynamicBinding  (line 846, @0x0000000002c009a0, libserver.so)
// globals: CDOTA_Ability_Weaver_TimeLapse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_TimeLapse::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_TimeLapse *const this)
{
  return CDOTA_Ability_Weaver_TimeLapse::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 846, @0x0000000002c009b0, libserver.so)
// globals: CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::DestructInstance  (line 846, @0x0000000002c009c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Weaver_TimeLapse>
void __fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::FreeInstance  (line 846, @0x0000000002c009e0, libserver.so)
void __fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::CanAllocate  (line 846, @0x0000000002c00a00, libserver.so)
bool __fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 846, @0x0000000002c00a10, libserver.so)
// globals: CDOTA_Ability_Weaver_TimeLapse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Weaver_TimeLapse::s_pSchemaBinding;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::AllocateInstance  (line 846, @0x0000000002c02cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::ConstructInstance  (line 846, @0x0000000002c04f90, libserver.so)  // inlines: CDOTA_Ability_Weaver_TimeLapse, CGameEventListener, Construct<CDOTA_Ability_Weaver_TimeLapse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 920) = 0;
    *p = &off_45708F0;
    *(p + 114) = off_4571370;
  }
  return p;
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 846, @0x0000000002c0b3b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 846, @0x0000000002c0b3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal  (line 846, @0x0000000002c18c30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "weaver_time_lapse", "CDOTA_Ability_Weaver_TimeLapse"
// globals: `guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass, CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass, __dso_handle, CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo, CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass);
    CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass._vptr_CEntityClass = off_4570870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass);
    __cxa_atexit(
      CDOTA_Ability_Weaver_TimeLapse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Weaver_TimeLapseClass != 0 )
    return &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass;
  if ( `guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo,
      "CDOTA_Ability_Weaver_TimeLapse",
      "weaver_time_lapse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo);
  }
  CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass.m_pClassInfo = &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo;
  CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass.m_pBaseClassInfo = CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Weaver_TimeLapseClass = &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass;
  CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClassInfo.m_pClass = &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass;
  CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Weaver_TimeLapseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Weaver_TimeLapse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Weaver_TimeLapseClass;
}


// CDOTA_Ability_Weaver_TimeLapse::YouForgotToImplementOrDeclareServerClass  (line 862, @0x0000000002bd3f70, libserver.so)
int __fastcall CDOTA_Ability_Weaver_TimeLapse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Weaver_TimeLapse *const this)
{
  return 0;
}


// CDOTA_Ability_Weaver_TimeLapse::GetServerClass  (line 862, @0x0000000002bdc7f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Weaver_TimeLapse::GetServerClass(CDOTA_Ability_Weaver_TimeLapse *const this)
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


// CDOTA_Ability_Weaver_TimeLapse::GetBehavior  (line 869, @0x0000000002bd43f0, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Weaver_TimeLapse::GetBehavior(CDOTA_Ability_Weaver_TimeLapse *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 8;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Weaver_TimeLapse::GetCooldown  (line 882, @0x0000000002beff90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Weaver_TimeLapse::GetCooldown(CDOTA_Ability_Weaver_TimeLapse *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Weaver_TimeLapse::Spawn  (line 895, @0x0000000002be5c60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, ListenForGameEvent, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::Spawn, FindUnitsInRadius, KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "npc_spawned", "modifier_weaver_timelapse"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Weaver_TimeLapse::Spawn(
        CDOTA_Ability_Weaver_TimeLapse *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 i; // rbx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CBaseEntity *OwnerEntity; // rsi
  CGameSceneNode *m_pParent; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vHeroUnits; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::Spawn(this, pKeyValues);
  this->m_bRegisteredForEvents = 1;
  this->m_nNPCSpawnedID = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
                            gameeventmanager,
                            &this->CGameEventListener,
                            "npc_spawned",
                            1);
  vHeroUnits.m_Size = 0;
  vHeroUnits.m_Memory.m_pMemory = 0;
  vHeroUnits.m_Memory.m_nAllocationCount = 0;
  vHeroUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &vHeroUnits, 3, 1, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_weaver_timelapse");
  for ( i = 0; vHeroUnits.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &vHeroUnits.m_Memory.m_pMemory[i];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      if ( vHeroUnits.m_Size <= ++i )
        goto LABEL_13;
    }
    OwnerEntity = 0;
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, OwnerEntity, this, "modifier_weaver_timelapse", &kv, 0);
  }
LABEL_13:
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vHeroUnits);
}


// CDOTA_Ability_Weaver_TimeLapse::FireGameEvent  (line 913, @0x0000000002bd5c50, libserver.so)  // inlines: GetEntityIndex, GetInstance, GetParent, IndexToIdentity, Instance, IsConsideredHero, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_weaver_timelapse"
void __fastcall CDOTA_Ability_Weaver_TimeLapse::FireGameEvent(
        CDOTA_Ability_Weaver_TimeLapse *const this,
        IGameEvent *event)
{
  int v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rbx
  CBaseEntity *OwnerEntity; // rsi
  CGameSceneNode *m_pParent; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( (*(event->_vptr_IGameEvent + 3))(event) == this->m_nNPCSpawnedID )
  {
    v4 = (*(event->_vptr_IGameEvent + 8))(event, "entindex", 0);
    if ( v4 <= 0x7FFE )
    {
      v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v5 != 0 )
      {
        v6 = &v5[v4 & 0x1FF];
        if ( v6 != 0 && (v6->m_EHandle.m_Index & 0x7FFF) == v4 )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_weaver_timelapse");
            OwnerEntity = 0;
            m_pParent = this->m_pGameSceneNode->m_pParent;
            if ( m_pParent != 0 )
              OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, OwnerEntity, this, "modifier_weaver_timelapse", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Weaver_TimeLapse::~CDOTA_Modifier_Weaver_TimeLapse  (line 931, @0x0000000002c02df0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Weaver_TimeLapse::~CDOTA_Modifier_Weaver_TimeLapse(
        CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  this->_vptr_CDOTA_Buff = &off_45713F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Weaver_TimeLapse::~CDOTA_Modifier_Weaver_TimeLapse  (line 931, @0x0000000002c02e10, libserver.so)  // inlines: ~CDOTA_Modifier_Weaver_TimeLapse
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Weaver_TimeLapse::~CDOTA_Modifier_Weaver_TimeLapse(
        CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  this->_vptr_CDOTA_Buff = &off_45713F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Weaver_TimeLapse::IsHidden  (line 936, @0x0000000002c00a20, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_TimeLapse::IsHidden(CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  return 1;
}


// CDOTA_Modifier_Weaver_TimeLapse::IsPurgable  (line 937, @0x0000000002c00a30, libserver.so)
bool __fastcall CDOTA_Modifier_Weaver_TimeLapse::IsPurgable(CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  return 0;
}


// CDOTA_Modifier_Weaver_TimeLapse::OnCreated  (line 960, @0x0000000002bd4850, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Weaver_TimeLapse::OnCreated(CDOTA_Modifier_Weaver_TimeLapse *const this, KeyValues *pKV)
{
  float v2; // xmm1_4

  this->m_bHasValidHistory = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
}


// CDOTA_Modifier_Weaver_TimeLapse::InitHistory  (line 968, @0x0000000002be3fb0, libserver.so)  // inlines: GetMana, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth
// callers: CDOTA_Modifier_Weaver_TimeLapse::OnIntervalThink
void __fastcall CDOTA_Modifier_Weaver_TimeLapse::InitHistory(CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  int v1; // r14d
  CDOTA_Modifier_Weaver_TimeLapse *v3; // r12
  CDOTA_Modifier_Weaver_TimeLapse *v4; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v6; // rax

  v1 = 11;
  v3 = this;
  v4 = this;
  do
  {
    v4 = (v4 + 12);
    v3 = (v3 + 4);
    Parent = CDOTA_Buff::GetParent(this);
    *(&v4->m_Functions[172].__delta + 4) = *CBaseEntity::GetAbsOrigin(Parent);
    v6 = CDOTA_Buff::GetParent(this);
    v3->m_PositionIndex[10].z = CBaseEntity::GetHealth(v6);
    v3->m_flLife[10] = CDOTA_Buff::GetParent(this)->m_flMana.m_Value;
    --v1;
  }
  while ( v1 != 0 );
}


// CDOTA_Modifier_Weaver_TimeLapse::OnIntervalThink  (line 982, @0x0000000002be4060, libserver.so)  // inlines: GetMana, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_Weaver_TimeLapse::InitHistory, CBaseEntity::GetAbsOrigin, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_Weaver_TimeLapse::OnIntervalThink(CDOTA_Modifier_Weaver_TimeLapse *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  Vector *m_PositionIndex; // rcx
  CDOTA_Modifier_Weaver_TimeLapse *v5; // rax
  int v6; // esi
  Vector *v7; // rdx
  vec_t x; // xmm0_4
  Vector *v9; // r8
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax

  if ( !this->m_bHasValidHistory )
  {
    this->m_bHasValidHistory = 1;
    CDOTA_Modifier_Weaver_TimeLapse::InitHistory(this);
  }
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    v3 = CDOTA_Buff::GetParent(this);
    if ( (*(v3->_vptr_IHandleEntity + 438))(v3) == 0 )
    {
      m_PositionIndex = this->m_PositionIndex;
      v5 = this;
      v6 = 0;
      v7 = &this->m_PositionIndex[1];
      while ( 1 )
      {
        x = v7->x;
        ++v6;
        v9 = v7;
        v5 = (v5 + 4);
        ++v7;
        m_PositionIndex->x = x;
        m_PositionIndex->y = v7[-1].y;
        m_PositionIndex->z = v7[-1].z;
        v5->m_PositionIndex[10].z = v5->m_flLife[0];
        v5->m_flLife[10] = v5->m_flMana[0];
        if ( v6 == 10 )
          break;
        m_PositionIndex = v9;
      }
      v10 = CDOTA_Buff::GetParent(this);
      this->m_PositionIndex[10] = *CBaseEntity::GetAbsOrigin(v10);
      v11 = CDOTA_Buff::GetParent(this);
      this->m_flLife[10] = CBaseEntity::GetHealth(v11);
      this->m_flMana[10] = CDOTA_Buff::GetParent(this)->m_flMana.m_Value;
    }
  }
}


// CDOTA_Ability_Weaver_TimeLapse::OnSpellStart  (line 1012, @0x0000000002bd6010, libserver.so)  // inlines: CEntityHandle, CHandle, GetAbilityData, GetEHandle, GetEntryIndex, GetOldestPosition, GetSerialNumber, Set, ToDOTABaseNPC, Vector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_BaseNPC::FindModifierByName, Purge, CBaseEntity::GetAbsAngles, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (19 total)
// strings: "modifier_weaver_timelapse", "particles/units/heroes/hero_weaver/weaver_timelapse.vpcf", "Hero_Weaver.TimeLapse"
void __fastcall CDOTA_Ability_Weaver_TimeLapse::OnSpellStart(CDOTA_Ability_Weaver_TimeLapse *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // cx
  CDOTA_Buff *ModifierByName; // rax
  vec_t *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  vec_t v16; // xmm0_4
  float v17; // xmm1_4
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  const Vector *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm3_4
  CDOTA_BaseNPC *v23; // rax
  CBaseEntity *CursorTarget; // rax
  QAngle hTarget[5]; // [rsp+20h] [rbp-40h] BYREF
  QAngle v26; // 0:^14.12
  Vector v27; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster == 0 || !Caster->m_bIsDOTANPC )
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(v23) )
      return;
LABEL_15:
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v3 = CursorTarget;
    if ( CursorTarget == 0 || !CursorTarget->m_bIsDOTANPC )
      return;
    goto LABEL_4;
  }
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v4) )
    goto LABEL_15;
LABEL_4:
  hTarget[0].x = NAN;
  m_pEntity = v3->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LODWORD(hTarget[0].x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, hTarget, 0);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_weaver_timelapse", 0);
  v8 = ModifierByName;
  if ( ModifierByName != 0 && BYTE4(ModifierByName[1].m_Functions[0].__delta) != 0 )
  {
    Purge(v3, this, 28);
    v26 = *CBaseEntity::GetAbsAngles(v3);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_weaver/weaver_timelapse.vpcf",
                 2,
                 0,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v12, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
    hTarget[0] = v26;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v13, Particle, 1, *&hTarget[0].x, hTarget[0].z);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 2, v3, 1, 0, vec3_invalid, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
    v16 = v8[746];
    v27.z = v8[748];
    hTarget[0].y = v8[747];
    hTarget[0].x = v16;
    *&v27.x = *&hTarget[0].x;
    hTarget[0].z = v27.z;
    FindClearSpaceForUnit(v3, v27, 1);
    CDOTA_BaseNPC::ModifyHealth(v3, v8[779], 0, 0, 0);
    CDOTA_BaseNPC::SetMana(v3, v8[790], v17);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Weaver.TimeLapse", 0.0, 0, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v20 = CBaseEntity::GetAbsOrigin(v3);
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v21, 0, m_iAbilityID, 0, 0, *&v20->x, v20->z, -1.0, v22);
  }
}


// CDOTA_Unit_Hero_Weaver::Spawn  (line 1055, @0x0000000002bd6340, libserver.so)  // inlines: SetAttributes
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, __dynamic_cast, CDOTA_BaseNPC::GetAbilityCount, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// strings: "RefreshIntrinsicModifier", "modifier_weaver_timelapse"
// globals: `typeinfo for'CDOTA_Ability_Weaver_TimeLapse
void __fastcall CDOTA_Unit_Hero_Weaver::Spawn(CDOTA_Unit_Hero_Weaver *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *v2; // r14
  int v4; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // r12
  CDOTA_Buff *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v2 = 0;
  v4 = 0;
  v9 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  while ( v4 < CDOTA_BaseNPC::GetAbilityCount(this) )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v4);
    v6 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && __dynamic_cast(
           AbilityByIndex,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_Weaver_TimeLapse,
           0) != 0 )
    {
      v2 = v6;
    }
    ++v4;
  }
  if ( v2 != 0 )
  {
    KeyValues::KeyValues(&kv, "RefreshIntrinsicModifier");
    v7 = CDOTA_BaseNPC::AddNewModifier(this, this, v2, "modifier_weaver_timelapse", &kv, 0);
    if ( v7 != 0 )
      v7->m_iAttributes |= (*(v7->_vptr_CDOTA_Buff + 7))(v7) | 1;
    KeyValues::~KeyValues(&kv);
  }
}


