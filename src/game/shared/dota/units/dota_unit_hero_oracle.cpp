// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:37
class CDOTA_Unit_Hero_Oracle : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nFXDeath;  // +0x16ec
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
	CDOTA_Unit_Hero_Oracle(CDOTA_Unit_Hero_Oracle &);
	CDOTA_Unit_Hero_Oracle(CDOTA_Unit_Hero_Oracle &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsesConstantGesture(bool);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDeathEffectName();
	virtual void OnDeath();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Hero_Oracle();
	virtual void CalculateActivityModifiers(Activity);
	virtual ~CDOTA_Unit_Hero_Oracle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[380] UsesConstantGesture
	// vtable[159] ModifyOrAppendCriteria
	// vtable[6] Precache
	// vtable[502] GetDeathEffectName
	// vtable[470] OnDeath
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:83
class C_CDOTA_Unit_Hero_Oracle_MapInstall {
	C_CDOTA_Unit_Hero_Oracle_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:188
class CDOTA_Ability_Oracle_FortunesEnd : public CDOTABaseAbility {
public:

private:

	int damage;  // +0x390
	int radius;  // +0x394
	int bolt_speed;  // +0x398
	float maximum_purge_duration;  // +0x39c
	float minimum_purge_duration;  // +0x3a0
	float m_flStartTime;  // +0x3a4
	float m_flDuration;  // +0x3a8
	bool m_bAbsorbed;  // +0x3ac

	EHANDLE m_hTarget;  // +0x3b0
	int m_nFXIndex;  // +0x3b4
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
	CDOTA_Ability_Oracle_FortunesEnd(CDOTA_Ability_Oracle_FortunesEnd &);
	CDOTA_Ability_Oracle_FortunesEnd(CDOTA_Ability_Oracle_FortunesEnd &);
	CDOTA_Ability_Oracle_FortunesEnd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Oracle_FortunesEnd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:230
class C_CDOTA_Ability_Oracle_FortunesEnd_MapInstall {
	C_CDOTA_Ability_Oracle_FortunesEnd_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:435
class CDOTA_Modifier_Oracle_FortunesEndChannelTarget : public CDOTA_Buff {
public:

	CDOTA_Modifier_Oracle_FortunesEndChannelTarget(CDOTA_Modifier_Oracle_FortunesEndChannelTarget &);
	CDOTA_Modifier_Oracle_FortunesEndChannelTarget(const CDOTA_Modifier_Oracle_FortunesEndChannelTarget &);
	CDOTA_Modifier_Oracle_FortunesEndChannelTarget();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Oracle_FortunesEndChannelTarget();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:449
class CDOTA_Modifier_Oracle_FortunesEndPurge : public CDOTA_Buff {
public:

	CDOTA_Modifier_Oracle_FortunesEndPurge();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Oracle_FortunesEndPurge();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:502
class CDOTA_Ability_Oracle_FatesEdict : public CDOTABaseAbility {
public:

private:

	bool m_bTargetIsAlly;  // +0x390
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
	CDOTA_Ability_Oracle_FatesEdict(CDOTA_Ability_Oracle_FatesEdict &);
	CDOTA_Ability_Oracle_FatesEdict(CDOTA_Ability_Oracle_FatesEdict &);
	CDOTA_Ability_Oracle_FatesEdict();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual ~CDOTA_Ability_Oracle_FatesEdict();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[159] ModifyOrAppendCriteria
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:557
class CDOTA_Modifier_Oracle_FatesEdict : public CDOTA_Buff {
public:

	CDOTA_Modifier_Oracle_FatesEdict();
	virtual bool IsDebuff();
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Oracle_FatesEdict();

	// vtable[12] IsDebuff
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:680
class CDOTA_Ability_Oracle_PurifyingFlames : public CDOTABaseAbility {
public:

private:

	bool m_bTargetIsAlly;  // +0x390
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
	CDOTA_Ability_Oracle_PurifyingFlames(CDOTA_Ability_Oracle_PurifyingFlames &);
	CDOTA_Ability_Oracle_PurifyingFlames(CDOTA_Ability_Oracle_PurifyingFlames &);
	CDOTA_Ability_Oracle_PurifyingFlames();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual float GetCooldown(int);
	virtual float GetCastPoint();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Oracle_PurifyingFlames();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[159] ModifyOrAppendCriteria
	// vtable[242] GetCooldown
	// vtable[231] GetCastPoint
	// vtable[256] CastFilterResult
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:702
class C_CDOTA_Ability_Oracle_PurifyingFlames_MapInstall {
	C_CDOTA_Ability_Oracle_PurifyingFlames_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:816
class CDOTA_Modifier_Oracle_PurifyingFlames : public CDOTA_Buff {
public:

private:

	float heal_per_second;  // +0xba8
	float tick_rate;  // +0xbac
	CDOTA_Modifier_Oracle_PurifyingFlames();
	virtual bool IsPurgable();
	virtual bool IsDebuff();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Oracle_PurifyingFlames();

	// vtable[14] IsPurgable
	// vtable[12] IsDebuff
	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:887
class CDOTA_Ability_Oracle_FalsePromise : public CDOTABaseAbility {
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
	CDOTA_Ability_Oracle_FalsePromise(CDOTA_Ability_Oracle_FalsePromise &);
	CDOTA_Ability_Oracle_FalsePromise(CDOTA_Ability_Oracle_FalsePromise &);
	CDOTA_Ability_Oracle_FalsePromise();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual ~CDOTA_Ability_Oracle_FalsePromise();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:964
class CDOTA_Modifier_Oracle_FalsePromiseTimer : public CDOTA_Buff {
public:

	CDOTA_Modifier_Oracle_FalsePromiseTimer();
	virtual bool IsPurgable();
	virtual bool IsDebuff();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Oracle_FalsePromiseTimer();

	// vtable[14] IsPurgable
	// vtable[12] IsDebuff
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_oracle.cpp:992
class CDOTA_Modifier_Oracle_FalsePromise : public CDOTA_Buff {
	struct sDamageSources {
		EHANDLE hSourceNPC;  // +0x0
		EHANDLE hInflictor;  // +0x4
		float flAmount;  // +0x8
		int nDamageType;  // +0xc
		int nDamageCategory;  // +0x10
		int nDamageFlags;  // +0x14
		sDamageSources();
		sDamageSources(const sDamageSources &);

		// sizeof = 24
	};

	struct sHealingSources {
		EHANDLE hSource;  // +0x0
		float flAmount;  // +0x4
		sHealingSources();
		sHealingSources(const sHealingSources &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	bool m_bWaitingForInvulnerability;  // +0xbd8
	bool m_bDisableHealing;  // +0xbd9

	float m_flHealthOnCreated;  // +0xbdc
	int m_nFXIndex;  // +0xbe0
	float m_flRunningDmg;  // +0xbe4
	float m_flRunningHealth;  // +0xbe8
	CDOTA_Modifier_Oracle_FalsePromise();
	virtual bool IsPurgable();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	ModifierVariant_t GetDisableHealing(const CModifierParams &);
	ModifierVariant_t OnHealReceived(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Oracle_FalsePromise();

	// vtable[14] IsPurgable
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// sizeof = 3056
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Oracle::~CDOTA_Unit_Hero_Oracle  (line 37, @0x0000000002c9a590, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Oracle::~CDOTA_Unit_Hero_Oracle(CDOTA_Unit_Hero_Oracle *const this)
{
  this->_vptr_IHandleEntity = &off_45FCD70;
  this->_vptr_INextBotEventResponder = &off_45FDD50;
  this->_vptr_CObstructionObject = &off_45FE080;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Oracle::~CDOTA_Unit_Hero_Oracle  (line 37, @0x0000000002c9a5d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Oracle
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Oracle::~CDOTA_Unit_Hero_Oracle(CDOTA_Unit_Hero_Oracle *const this)
{
  this->_vptr_IHandleEntity = &off_45FCD70;
  this->_vptr_INextBotEventResponder = &off_45FDD50;
  this->_vptr_CObstructionObject = &off_45FE080;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Oracle::Schema_DynamicBinding  (line 39, @0x0000000002c8c200, libserver.so)
// globals: CDOTA_Unit_Hero_Oracle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Oracle::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Oracle *const this)
{
  return CDOTA_Unit_Hero_Oracle::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002c8c230, libserver.so)
// globals: CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002c8c240, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Oracle>
void __fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002c8c260, libserver.so)
void __fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002c8c280, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002c8c290, libserver.so)
// globals: CDOTA_Unit_Hero_Oracle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Oracle::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002c90c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002c94280, libserver.so)  // inlines: CDOTA_Unit_Hero_Oracle, Construct<CDOTA_Unit_Hero_Oracle>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_45FCD70;
    *(p + 236) = &off_45FDD50;
    *(p + 257) = &off_45FE080;
  }
  return p;
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca34d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca3a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Oracle::GetEntityClassInternal  (line 39, @0x0000000002cbd1a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_oracle", "CDOTA_Unit_Hero_Oracle"
// globals: `guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass, CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass, __dso_handle, CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo, CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Oracle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass);
    CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass._vptr_CEntityClass = off_45FCCF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Oracle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_OracleClass != 0 )
    return &CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo,
      "CDOTA_Unit_Hero_Oracle",
      "npc_dota_hero_oracle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo);
  }
  CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass.m_pClassInfo = &CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo;
  CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_OracleClass = &CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass;
  CDOTA_Unit_Hero_Oracle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_OracleClassInfo.m_pClass = &CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass;
  CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_OracleClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Oracle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_OracleClass;
}


// CDOTA_Unit_Hero_Oracle::UsesConstantGesture  (line 44, @0x0000000002c8c2a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Oracle::UsesConstantGesture(CDOTA_Unit_Hero_Oracle *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Oracle::GetDeathEffectName  (line 48, @0x0000000002c8c2b0, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Oracle::GetDeathEffectName(CDOTA_Unit_Hero_Oracle *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Oracle::CalculateActivityModifiers  (line 59, @0x0000000002c978d0, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_Oracle::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Oracle *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 195.0 && v3 <= 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 145.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
}


// CDOTA_Unit_Hero_Oracle::YouForgotToImplementOrDeclareServerClass  (line 83, @0x0000000002c1e570, libserver.so)
int __fastcall CDOTA_Unit_Hero_Oracle::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Oracle *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Oracle::GetServerClass  (line 83, @0x0000000002c34cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Oracle::GetServerClass(CDOTA_Unit_Hero_Oracle *const this)
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


// CDOTA_Unit_Hero_Oracle::Precache  (line 93, @0x0000000002c225b0, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_necrolyte/necrolyte_pulse_enemy.vpcf"
void __fastcall CDOTA_Unit_Hero_Oracle::Precache(
        CDOTA_Unit_Hero_Oracle *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_necrolyte/necrolyte_pulse_enemy.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Oracle::OnAlive  (line 102, @0x0000000002c1e580, libserver.so)
void __fastcall CDOTA_Unit_Hero_Oracle::OnAlive(CDOTA_Unit_Hero_Oracle *const this)
{
  ;
}


// CDOTA_Unit_Hero_Oracle::OnDying  (line 116, @0x0000000002c1e590, libserver.so)
void __fastcall CDOTA_Unit_Hero_Oracle::OnDying(CDOTA_Unit_Hero_Oracle *const this)
{
  ;
}


// CDOTA_Unit_Hero_Oracle::OnDeath  (line 132, @0x0000000002c1e8c0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Oracle::OnDeath(CDOTA_Unit_Hero_Oracle *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Unit_Hero_Oracle::ModifyOrAppendCriteria  (line 154, @0x0000000002c829d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Get, GetActiveConcept, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPCHero, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, RandomInt, DOTAGameManager, CDOTAGameManager::GetHeroUnitNameByID, CResponseCriteriaSet::AppendCriteria, CUtlMemory<int, int>::Purge, CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase, _Unwind_Resume, CUtlMemory<int, int>::Grow
// strings: "targetclassname"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_Oracle::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Oracle *const this,
        CResponseCriteriaSet *const criteria)
{
  CDOTA_Speech *m_pSpeech; // rax
  __int64 v4; // rbx
  __int64 i; // r12
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  int v8; // esi
  CEntityIdentity *v9; // rdx
  CHandle<CDOTA_BaseNPC_Hero> *v10; // rdx
  uint32 m_Index; // eax
  int v12; // ebx
  CDOTAGameManager *v13; // rax
  const char *HeroUnitNameByID; // rax
  CEntityInstance *m_pInstance; // rax
  int m_pEntity; // r15d
  int m_Size; // esi
  int *v18; // rax
  CUtlVector<int,CUtlMemory<int,int> > m_enemyHeroIDs; // [rsp+20h] [rbp-50h] BYREF

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, criteria);
  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech == 0 || m_pSpeech->m_iActiveConcept != 28 )
    return;
  m_enemyHeroIDs.m_Size = 0;
  m_enemyHeroIDs.m_Memory.m_pMemory = 0;
  m_enemyHeroIDs.m_Memory.m_nAllocationCount = 0;
  m_enemyHeroIDs.m_Memory.m_nGrowSize = 0;
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
    goto LABEL_15;
  v4 = 0;
  for ( i = 0; ; i = v8 )
  {
    v10 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v4];
    m_Index = v10->m_Index;
    if ( v10->m_Index + 2 > 1 )
    {
      v6 = v10->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
        break;
    }
    ++v4;
    v8 = i;
    if ( g_HeroList.m_hHeroList.m_Size <= v4 )
      goto LABEL_13;
LABEL_10:
    ;
  }
  v8 = i;
  v9 = &v7[v6 & 0x1FF];
  if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
  {
    m_pInstance = v9->m_pInstance;
    if ( v9->m_pInstance != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && HIBYTE(m_pInstance[7].m_CScriptComponent) != this->m_iTeamNum.m_Value )
    {
      m_pEntity = m_pInstance[100].m_pEntity;
      if ( m_enemyHeroIDs.m_Memory.m_nAllocationCount == i )
      {
        CUtlMemory<int,int>::Grow(&m_enemyHeroIDs.m_Memory, 1);
        m_Size = m_enemyHeroIDs.m_Size;
      }
      else
      {
        m_Size = i;
      }
      v8 = m_Size + 1;
      m_enemyHeroIDs.m_Size = v8;
      v18 = &m_enemyHeroIDs.m_Memory.m_pMemory[i];
      if ( v18 != 0 )
        *v18 = m_pEntity;
    }
  }
  if ( g_HeroList.m_hHeroList.m_Size > ++v4 )
    goto LABEL_10;
LABEL_13:
  if ( v8 > 0 )
  {
    v12 = m_enemyHeroIDs.m_Memory.m_pMemory[RandomInt(0, (v8 - 1))];
    v13 = DOTAGameManager();
    HeroUnitNameByID = CDOTAGameManager::GetHeroUnitNameByID(v13, v12);
    CResponseCriteriaSet::AppendCriteria(criteria, "targetclassname", HeroUnitNameByID, 1.0);
  }
LABEL_15:
  if ( (m_enemyHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&m_enemyHeroIDs.m_Memory);
    if ( (m_enemyHeroIDs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&m_enemyHeroIDs.m_Memory);
  }
}


// CDOTA_Ability_Oracle_FortunesEnd::~CDOTA_Ability_Oracle_FortunesEnd  (line 188, @0x0000000002c99580, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::~CDOTA_Ability_Oracle_FortunesEnd(
        CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45FE150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Oracle_FortunesEnd::~CDOTA_Ability_Oracle_FortunesEnd  (line 188, @0x0000000002c995a0, libserver.so)  // inlines: ~CDOTA_Ability_Oracle_FortunesEnd
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::~CDOTA_Ability_Oracle_FortunesEnd(
        CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  this->_vptr_IHandleEntity = &off_45FE150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Oracle_FortunesEnd::Schema_DynamicBinding  (line 190, @0x0000000002c8c2c0, libserver.so)
// globals: CDOTA_Ability_Oracle_FortunesEnd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FortunesEnd::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  return CDOTA_Ability_Oracle_FortunesEnd::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 190, @0x0000000002c8c2d0, libserver.so)
// globals: CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::DestructInstance  (line 190, @0x0000000002c8c2e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Oracle_FortunesEnd>
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::FreeInstance  (line 190, @0x0000000002c8c300, libserver.so)
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::CanAllocate  (line 190, @0x0000000002c8c320, libserver.so)
bool __fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 190, @0x0000000002c8c330, libserver.so)
// globals: CDOTA_Ability_Oracle_FortunesEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FortunesEnd::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::AllocateInstance  (line 190, @0x0000000002c90c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::ConstructInstance  (line 190, @0x0000000002c954e0, libserver.so)  // inlines: CDOTA_Ability_Oracle_FortunesEnd, CEntityHandle, CHandle, Construct<CDOTA_Ability_Oracle_FortunesEnd>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 236) = -1;
    *p = &off_45FE150;
  }
  return p;
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 190, @0x0000000002ca32e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 190, @0x0000000002ca3300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal  (line 190, @0x0000000002cbc480, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "oracle_fortunes_end", "CDOTA_Ability_Oracle_FortunesEnd"
// globals: `guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass, CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass, __dso_handle, CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo, CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo
CEntityClass *__cdecl CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass);
    CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass._vptr_CEntityClass = off_45FE0D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass);
    __cxa_atexit(
      CDOTA_Ability_Oracle_FortunesEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Oracle_FortunesEndClass != 0 )
    return &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass;
  if ( `guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo,
      "CDOTA_Ability_Oracle_FortunesEnd",
      "oracle_fortunes_end",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo);
  }
  CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass.m_pClassInfo = &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo;
  CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass.m_pBaseClassInfo = CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Oracle_FortunesEndClass = &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass;
  CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClassInfo.m_pClass = &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass;
  CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Oracle_FortunesEndClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Oracle_FortunesEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FortunesEndClass;
}


// CDOTA_Ability_Oracle_FortunesEnd::YouForgotToImplementOrDeclareServerClass  (line 230, @0x0000000002c1e5a0, libserver.so)
int __fastcall CDOTA_Ability_Oracle_FortunesEnd::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  return 0;
}


// CDOTA_Ability_Oracle_FortunesEnd::GetServerClass  (line 230, @0x0000000002c34af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Oracle_FortunesEnd::GetServerClass(CDOTA_Ability_Oracle_FortunesEnd *const this)
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


// CDOTA_Ability_Oracle_FortunesEnd::OnSpellStart  (line 239, @0x0000000002c6a320, libserver.so)  // inlines: DOTAGameRules, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, ToDOTABaseNPC, operator CBaseEntity*, operator->, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCaster, DOTA_EmitSound, KeyValues::KeyValues (16 total)
// strings: "maximum_purge_duration", "minimum_purge_duration", "particles/units/heroes/hero_oracle/oracle_fortune_cast_tgt.vpcf", "attach_hitloc", "particles/units/heroes/hero_oracle/oracle_fortune_cast.vpcf", "attach_attack1" (9 total)
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::OnSpellStart(CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  float v2; // r12d
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // si
  int v7; // edx
  CBaseEntity *v8; // rax
  int AbilityParticleEffect; // r14d
  const CBaseEntity *v10; // rax
  const Vector *AbsOrigin; // r15
  const CBaseAnimating *v12; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r14
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r14
  CDOTA_BaseNPC *v22; // r15
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r13
  CDOTA_BaseNPC *v28; // rax
  const CBaseAnimating *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const CBaseAnimating *v32; // r14
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->bolt_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_speed", -1, 0);
  this->maximum_purge_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "maximum_purge_duration", -1, 0);
  this->minimum_purge_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "minimum_purge_duration", -1, 0);
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v2 = 0.0;
  this->m_flStartTime = v2 - (*(this->_vptr_IHandleEntity + 232))(this);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    m_pEntity = CursorTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    v8 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_oracle/oracle_fortune_cast_tgt.vpcf",
                              1,
                              v8,
                              0);
    v10 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      AbilityParticleEffect,
      1,
      v12,
      5,
      "attach_hitloc",
      *AbsOrigin,
      1);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v14, AbilityParticleEffect);
    Caster = CDOTABaseAbility::GetCaster(this);
    LODWORD(v12) = CDOTABaseAbility::CreateAbilityParticleEffect(
                     this,
                     "particles/units/heroes/hero_oracle/oracle_fortune_cast.vpcf",
                     2,
                     Caster,
                     0);
    v16 = CDOTABaseAbility::GetCaster(this);
    v17 = CBaseEntity::GetAbsOrigin(v16);
    v18 = CDOTABaseAbility::GetCaster(this);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v19, v12, 0, v18, 5, "attach_attack1", *v17, 1);
    v20 = CDOTABaseAbility::GetCaster(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, v12, 1, v22, 5, "attach_hitloc", *v21, 1);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, v12);
    v25 = CDOTABaseAbility::GetCaster(this);
    this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                         this,
                         "particles/units/heroes/hero_oracle/oracle_fortune_channel.vpcf",
                         2,
                         v25,
                         0);
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    v28 = CDOTABaseAbility::GetCaster(this);
    LODWORD(v21) = this->m_nFXIndex;
    v29 = v28;
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, v21, 0, v29, 5, "attach_attack1", *v27, 1);
    v31 = CDOTABaseAbility::GetCaster(this);
    LODWORD(v27) = this->m_nFXIndex;
    v32 = v31;
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v33, v27, 1, v32, 1, 0, vec3_invalid, 1);
    v34 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Oracle.FortunesEnd.Channel", v34);
    KeyValues::KeyValues(&kv, "modifier_oracle_fortunes_end_channel_target");
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v35, this, "modifier_oracle_fortunes_end_channel_target", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
}


// CDOTA_Ability_Oracle_FortunesEnd::OnChannelFinish  (line 283, @0x0000000002c32070, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DOTAGameRules, Get, GetAbilityData, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, __stack_chk_fail, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, DOTA_EmitSound, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::LoadAbilityData
// strings: "Hero_Oracle.FortunesEnd.Channel", "particles/units/heroes/hero_oracle/oracle_fortune_prj.vpcf", "Hero_Oracle.FortunesEnd.Attack", "modifier_oracle_fortunes_end_channel_target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Oracle_FortunesEnd::OnChannelFinish(
        CDOTA_Ability_Oracle_FortunesEnd *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float maximum_purge_duration; // xmm0_4
  float v9; // xmm1_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int bolt_speed; // eax
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  uint32 v16; // eax
  int m_Value; // eax
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v20; // rax
  unsigned __int8 v21; // r14
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm3_4
  CDOTA_BaseNPC *v27; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-90h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Oracle.FortunesEnd.Channel");
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return;
  v6 = &v5[this->m_hTarget.m_Index & 0x1FF];
  if ( v6 == 0 )
    return;
  if ( m_Index != v6->m_EHandle.m_Index )
    return;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return;
  if ( g_pGameRules != 0 )
  {
    maximum_purge_duration = this->maximum_purge_duration;
    v9 = *&g_pGameRules[18].m_szQuestName[20] - this->m_flStartTime;
    if ( v9 <= maximum_purge_duration )
      goto LABEL_10;
  }
  else
  {
    v9 = 0.0 - this->m_flStartTime;
    maximum_purge_duration = this->maximum_purge_duration;
    if ( v9 <= maximum_purge_duration )
    {
LABEL_10:
      maximum_purge_duration = this->minimum_purge_duration;
      if ( maximum_purge_duration <= v9 )
        maximum_purge_duration = v9;
    }
  }
  info.bProvidesVision = 0;
  this->m_flDuration = maximum_purge_duration;
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iSourceAttachment = 1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_oracle/oracle_fortune_prj.vpcf";
  bolt_speed = this->bolt_speed;
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
  info.iMoveSpeed = bolt_speed;
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( v13 != 0 && (m_pEntity = v13->m_pEntity) != 0 )
  {
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  v16 = this->m_hTarget.m_Index;
  info.bProvidesVision = 1;
  info.hTarget.m_Index = v16;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iSourceAttachment = 2;
  info.iVisionTeamNumber = m_Value;
  info.iVisionRadius = this->radius;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  if ( !this->m_bStolen.m_Value )
  {
    v27 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v27, 1540, 0.0, 0.2, 0, 0, 1.0);
  }
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  v20 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Oracle.FortunesEnd.Attack", v20);
  CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_oracle_fortunes_end_channel_target");
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    v21 = m_pInstance->m_iTeamNum.m_Value;
    if ( v21 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v25 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v25,
        0,
        m_iAbilityID,
        0,
        0,
        *&AbsOrigin->x,
        AbsOrigin->z,
        -1.0,
        v26);
    }
  }
}


// CDOTA_Ability_Oracle_FortunesEnd::OnProjectileHit  (line 328, @0x0000000002c505c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, CGameSceneNode::GetOwnerEntity, FindUnitsInRadius, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues (23 total)
// strings: "particles/units/heroes/hero_oracle/oracle_fortune_aoe.vpcf", "attach_hitloc", "modifier_oracle_fortunes_end_purge", "Hero_Oracle.FortunesEnd.Target", "modifier_oracle_fates_edict", "particles/units/heroes/hero_oracle/oracle_fortune_dmg.vpcf"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Oracle_FortunesEnd::OnProjectileHit(
        CDOTA_Ability_Oracle_FortunesEnd *const this,
        const CEntityHandle *hTarget,
        const CFieldPath *vLocation)
{
  CEntityInstance *v5; // rax
  char m_CScriptComponent_high; // r12
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *Caster; // rax
  __m128i v9; // xmm3
  float v10; // r12d
  CDOTA_BaseNPC *v11; // r13
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  float v19; // xmm1_4
  __int64 v20; // r12
  int v21; // ebx
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v28; // rax
  __m128i v29; // xmm2
  float v30; // r15d
  CDOTA_BaseNPC *v31; // rax
  int v32; // r15d
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  float flRadius; // [rsp+30h] [rbp-90h]
  const Vector *flRadiusa; // [rsp+30h] [rbp-90h]
  CDOTA_BaseNPC *pEnt; // [rsp+38h] [rbp-88h]
  double v42; // [rsp+40h] [rbp-80h]
  double v43; // [rsp+40h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  v5 = CEntityHandle::operator CEntityInstance *(hTarget);
  pEnt = v5;
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    m_CScriptComponent_high = HIBYTE(v5[7].m_CScriptComponent);
    if ( m_CScriptComponent_high == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      || !CDOTA_BaseNPC::TriggerSpellAbsorb(pEnt, this, 1) )
    {
      m_Value = pEnt->m_iTeamNum.m_Value;
      if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
        Purge(pEnt, this, 4);
      CBaseEntity::GetAbsOrigin(pEnt);
      flRadius = this->radius;
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_LIGHTNINGBOLT,
        Caster->m_iTeamNum.m_Value,
        vLocation,
        flRadius,
        2.0,
        1);
      *v9.m128i_i32 = this->radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
      v11 = CDOTABaseAbility::GetCaster(this);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      else
        OwnerEntity = 0;
      FindUnitsInRadius(OwnerEntity->m_iTeamNum.m_Value, vLocation, v11, v10, &entities, 2, 3, 80, 0, 0);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_oracle/oracle_fortune_aoe.vpcf",
                                2,
                                0,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        ParticleManager,
        AbilityParticleEffect,
        0,
        *&vLocation->u.m_pPaths,
        *&vLocation->u.m_FixedPaths[4].m_nValue);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v16,
        AbilityParticleEffect,
        1,
        pEnt,
        5,
        "attach_hitloc",
        *&vLocation->u.m_pPaths,
        1);
      *&v42 = this->radius;
      *(&v42 + 1) = *&v42;
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v17, AbilityParticleEffect, 2, v42, *&v42);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v18, AbilityParticleEffect);
      KeyValues::KeyValues(&kv, "modifier_oracle_fortunes_end_purge");
      KeyValues::SetFloat(&kv, "duration", v19);
      DOTA_EmitSound(10, "Hero_Oracle.FortunesEnd.Target", pEnt);
      if ( entities.m_Size > 0 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          while ( 1 )
          {
            v22 = &entities.m_Memory.m_pMemory[v20];
            m_Index = entities.m_Memory.m_pMemory[v20].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v24 = v22->m_Index;
              v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
              if ( v25 != 0 )
              {
                v26 = &v25[v24 & 0x1FF];
                if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
                {
                  m_pInstance = v26->m_pInstance;
                  if ( v26->m_pInstance != 0
                    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
                  {
                    break;
                  }
                }
              }
            }
            ++v21;
            ++v20;
            if ( entities.m_Size <= v21 )
              goto LABEL_19;
          }
          Purge(m_pInstance, this, 2);
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_oracle_fates_edict");
          v28 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v28, this, "modifier_oracle_fortunes_end_purge", &kv, 0);
          *v29.m128i_i32 = this->damage;
          v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
          v31 = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(v31, m_pInstance, this, v30, 2, 0);
          v32 = CDOTABaseAbility::CreateAbilityParticleEffect(
                  this,
                  "particles/units/heroes/hero_oracle/oracle_fortune_dmg.vpcf",
                  1,
                  m_pInstance,
                  0);
          flRadiusa = CBaseEntity::GetAbsOrigin(m_pInstance);
          v33 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v33, v32, 1, m_pInstance, 5, "attach_hitloc", *flRadiusa, 1);
          *&v43 = this->radius;
          *(&v43 + 1) = *&v43;
          v34 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v34, v32, 2, v43, *&v43);
          AbsOrigin = CBaseEntity::GetAbsOrigin(pEnt);
          v36 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v36, v32, 3, pEnt, 5, "attach_hitloc", *AbsOrigin, 1);
          v37 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v37, v32);
          ++v21;
          ++v20;
        }
        while ( entities.m_Size > v21 );
      }
LABEL_19:
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1;
}


// CDOTA_Ability_Oracle_FortunesEnd::GetAbilityDamageToTargetOverInterval  (line 417, @0x0000000002c64c30, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Oracle_FortunesEnd::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Oracle_FortunesEnd *const this,
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


// CDOTA_Ability_Oracle_FortunesEnd::GetStunDuration  (line 427, @0x0000000002c64c90, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "maximum_purge_duration"
float __fastcall CDOTA_Ability_Oracle_FortunesEnd::GetStunDuration(CDOTA_Ability_Oracle_FortunesEnd *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "maximum_purge_duration", -1, 1);
}


// CDOTA_Modifier_Oracle_FortunesEndChannelTarget::~CDOTA_Modifier_Oracle_FortunesEndChannelTarget  (line 435, @0x0000000002c93aa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Oracle_FortunesEndChannelTarget::~CDOTA_Modifier_Oracle_FortunesEndChannelTarget(
        CDOTA_Modifier_Oracle_FortunesEndChannelTarget *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FEBD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Oracle_FortunesEndChannelTarget::~CDOTA_Modifier_Oracle_FortunesEndChannelTarget  (line 435, @0x0000000002c93ac0, libserver.so)  // inlines: ~CDOTA_Modifier_Oracle_FortunesEndChannelTarget
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Oracle_FortunesEndChannelTarget::~CDOTA_Modifier_Oracle_FortunesEndChannelTarget(
        CDOTA_Modifier_Oracle_FortunesEndChannelTarget *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FEBD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_FortunesEndChannelTarget::IsHidden  (line 440, @0x0000000002c8c340, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FortunesEndChannelTarget::IsHidden(
        CDOTA_Modifier_Oracle_FortunesEndChannelTarget *const this)
{
  return 1;
}


// CDOTA_Modifier_Oracle_FortunesEndChannelTarget::IsPurgable  (line 441, @0x0000000002c8c350, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FortunesEndChannelTarget::IsPurgable(
        CDOTA_Modifier_Oracle_FortunesEndChannelTarget *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::~CDOTA_Modifier_Oracle_FortunesEndPurge  (line 449, @0x0000000002c91040, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::~CDOTA_Modifier_Oracle_FortunesEndPurge(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FEF30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::~CDOTA_Modifier_Oracle_FortunesEndPurge  (line 449, @0x0000000002c91060, libserver.so)  // inlines: ~CDOTA_Modifier_Oracle_FortunesEndPurge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::~CDOTA_Modifier_Oracle_FortunesEndPurge(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FEF30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::IsDebuff  (line 456, @0x0000000002c8c360, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::IsDebuff(CDOTA_Modifier_Oracle_FortunesEndPurge *const this)
{
  return 1;
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::GetAttributes  (line 458, @0x0000000002c8c370, libserver.so)
int __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::GetAttributes(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this)
{
  return 4;
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::OnCreated  (line 470, @0x0000000002c1e5b0, libserver.so)
void __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::OnCreated(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::DeclareFunctions  (line 481, @0x0000000002c1e5c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Oracle_FortunesEndPurge::GetModifierMoveSpeed_Limit(CModifierParams const&)
void __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::DeclareFunctions(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this)
{
  this->m_Functions[20].__pfn = CDOTA_Modifier_Oracle_FortunesEndPurge::GetModifierMoveSpeed_Limit;
  this->m_Functions[20].__delta = 0;
}


// CDOTA_Modifier_Oracle_FortunesEndPurge::GetModifierMoveSpeed_Limit  (line 489, @0x0000000002c1e5e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FortunesEndPurge::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_Oracle_FortunesEndPurge *const this,
        const CModifierParams *const params)
{
  return 0x3DCCCCCD00000001uLL;
}


// CDOTA_Ability_Oracle_FatesEdict::~CDOTA_Ability_Oracle_FatesEdict  (line 502, @0x0000000002c995d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Oracle_FatesEdict::~CDOTA_Ability_Oracle_FatesEdict(
        CDOTA_Ability_Oracle_FatesEdict *const this)
{
  this->_vptr_IHandleEntity = &off_45FF290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Oracle_FatesEdict::~CDOTA_Ability_Oracle_FatesEdict  (line 502, @0x0000000002c995f0, libserver.so)  // inlines: ~CDOTA_Ability_Oracle_FatesEdict
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Oracle_FatesEdict::~CDOTA_Ability_Oracle_FatesEdict(
        CDOTA_Ability_Oracle_FatesEdict *const this)
{
  this->_vptr_IHandleEntity = &off_45FF290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Oracle_FatesEdict::Schema_DynamicBinding  (line 504, @0x0000000002c8c380, libserver.so)
// globals: CDOTA_Ability_Oracle_FatesEdict::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FatesEdict::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FatesEdict *const this)
{
  return CDOTA_Ability_Oracle_FatesEdict::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 504, @0x0000000002c8c390, libserver.so)
// globals: CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::DestructInstance  (line 504, @0x0000000002c8c3a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Oracle_FatesEdict>
void __fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::FreeInstance  (line 504, @0x0000000002c8c3c0, libserver.so)
void __fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::CanAllocate  (line 504, @0x0000000002c8c3e0, libserver.so)
bool __fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 504, @0x0000000002c8c3f0, libserver.so)
// globals: CDOTA_Ability_Oracle_FatesEdict::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FatesEdict::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::AllocateInstance  (line 504, @0x0000000002c90ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::ConstructInstance  (line 504, @0x0000000002c95520, libserver.so)  // inlines: CDOTA_Ability_Oracle_FatesEdict, Construct<CDOTA_Ability_Oracle_FatesEdict>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45FF290;
  }
  return p;
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 504, @0x0000000002ca3330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 504, @0x0000000002ca3350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal  (line 504, @0x0000000002cc4960, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Oracle_FatesEdict"
// globals: `guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass, CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo, CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo
CEntityClass *__cdecl CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass) != 0 )
  {
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pClassInfo = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_flags = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pInputs = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_nInputCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pOutputs = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_nOutputCount = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pGameClass = 0;
    CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass._vptr_CEntityClass = off_45FF210;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass);
    __cxa_atexit(
      CDOTA_Ability_Oracle_FatesEdict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Oracle_FatesEdictClass != 0 )
    return &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass;
  if ( `guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo,
      "CDOTA_Ability_Oracle_FatesEdict",
      "oracle_fates_edict",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo);
  }
  CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pClassInfo = &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo;
  CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pBaseClassInfo = CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Oracle_FatesEdictClass = &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass;
  CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClassInfo.m_pClass = &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass;
  CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Oracle_FatesEdictClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Oracle_FatesEdict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FatesEdictClass;
}


// CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria  (line 518, @0x0000000002c24680, libserver.so)  // inlines: CUtlSymbol
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "isally"
// globals: `guard variable for'CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly, CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly
void __fastcall CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(
        CDOTA_Ability_Oracle_FatesEdict *const this,
        CResponseCriteriaSet *const criteria)
{
  float v4; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t v5; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::ModifyOrAppendCriteria(this, criteria);
  if ( `guard variable for'CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("isally");
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly);
  }
  v4 = 0.0;
  if ( this->m_bTargetIsAlly )
    v4 = 1.0;
  v5.m_Id = CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v5, v4, 1.0);
}


// CDOTA_Ability_Oracle_FatesEdict::OnSpellStart  (line 529, @0x0000000002c55ca0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "modifier_oracle_fates_edict", "particles/units/heroes/hero_oracle/oracle_fatesedict_cast.vpcf", "attach_attack1", "attach_hitloc", "Hero_Oracle.FatesEdict.Cast"
void __fastcall CDOTA_Ability_Oracle_FatesEdict::OnSpellStart(CDOTA_Ability_Oracle_FatesEdict *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *duration; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_oracle_fates_edict");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_oracle_fates_edict", &kv, 0);
      this->m_bTargetIsAlly = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == v3->m_iTeamNum.m_Value;
      v7 = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_oracle/oracle_fatesedict_cast.vpcf",
                                3,
                                v7,
                                0);
      v9 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      duration = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        ParticleManager,
        AbilityParticleEffect,
        0,
        duration,
        5,
        "attach_attack1",
        *AbsOrigin,
        1);
      v12 = CBaseEntity::GetAbsOrigin(v3);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v13, AbilityParticleEffect, 1, v3, 5, "attach_hitloc", *v12, 1);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v14, AbilityParticleEffect);
      v15 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Oracle.FatesEdict.Cast", v15);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Oracle_FatesEdict::~CDOTA_Modifier_Oracle_FatesEdict  (line 557, @0x0000000002c90ff0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::~CDOTA_Modifier_Oracle_FatesEdict(
        CDOTA_Modifier_Oracle_FatesEdict *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FFD50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Oracle_FatesEdict::~CDOTA_Modifier_Oracle_FatesEdict  (line 557, @0x0000000002c91010, libserver.so)  // inlines: ~CDOTA_Modifier_Oracle_FatesEdict
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::~CDOTA_Modifier_Oracle_FatesEdict(
        CDOTA_Modifier_Oracle_FatesEdict *const this)
{
  this->_vptr_CDOTA_Buff = &off_45FFD50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_FatesEdict::IsDebuff  (line 562, @0x0000000002c8c400, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FatesEdict::IsDebuff(CDOTA_Modifier_Oracle_FatesEdict *const this)
{
  return 1;
}


// CDOTA_Modifier_Oracle_FatesEdict::OnCreated  (line 582, @0x0000000002c1f020, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "Hero_Oracle.FatesEdict"
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::OnCreated(
        CDOTA_Modifier_Oracle_FatesEdict *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Oracle.FatesEdict", Parent);
}


// CDOTA_Modifier_Oracle_FatesEdict::OnDestroy  (line 600, @0x0000000002c1f900, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// strings: "Hero_Oracle.FatesEdict"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::OnDestroy(CDOTA_Modifier_Oracle_FatesEdict *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v5; // rdi
  CDOTA_BaseNPC_Hero *v6; // rsi

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Oracle.FatesEdict");
  v3 = CDOTA_Buff::GetParent(this);
  if ( v3->m_iTeamNum.m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
    && (v3->m_iUnitType & 1) != 0
    && !v3->m_bIsIllusion.m_Value
    && (*(v3->_vptr_IHandleEntity + 408))(v3) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( Caster == 0 || (v5 = Caster, (Caster->m_iUnitType & 1) == 0) )
      v5 = 0;
    v6 = 0;
    if ( (v3->m_iUnitType & 1) != 0 )
      v6 = v3;
    EconEntity_OnOwnerKillEaterEvent(
      v5,
      v6,
      kill_eater_event_t::kKillEaterEvent_Oracle_FatesEdictKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_Modifier_Oracle_FatesEdict::DeclareFunctions  (line 621, @0x0000000002c1e600, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Oracle_FatesEdict::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Oracle_FatesEdict::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Oracle_FatesEdict::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::DeclareFunctions(CDOTA_Modifier_Oracle_FatesEdict *const this)
{
  this->m_Functions[104].__pfn = CDOTA_Modifier_Oracle_FatesEdict::GetAbsoluteNoDamageMagical;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[49].__pfn = CDOTA_Modifier_Oracle_FatesEdict::GetModifierMagicalResistanceBonus;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Oracle_FatesEdict::OnAttacked;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Oracle_FatesEdict::GetAbsoluteNoDamageMagical  (line 630, @0x0000000002c1e660, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FatesEdict::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Oracle_FatesEdict *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Oracle_FatesEdict::GetModifierMagicalResistanceBonus  (line 637, @0x0000000002c1e680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FatesEdict::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Oracle_FatesEdict *const this,
        const CModifierParams *const params)
{
  return 0x42C8000000000001uLL;
}


// CDOTA_Modifier_Oracle_FatesEdict::OnAttacked  (line 644, @0x0000000002c312e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_oracle/oracle_fatesedict_hit.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FatesEdict::OnAttacked(
        CDOTA_Modifier_Oracle_FatesEdict *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CBaseAnimating *v12; // r12
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rax
  int BuffParticleEffect; // ebx
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax

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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || !v12->m_bIsDOTANPC )
          {
            v12 = 0;
          }
          v13 = params->hattacker.m_Index;
          if ( v13 + 2 > 1 )
          {
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[params->hattacker.m_Index & 0x1FF];
              if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
              {
                v16 = v15->m_pInstance;
                if ( v15->m_pInstance != 0
                  && BYTE3(v16[7]._vptr_IHandleEntity) != 0
                  && v12 != 0
                  && HIBYTE(v16[7].m_CScriptComponent) != v12->m_iTeamNum.m_Value )
                {
                  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                         this,
                                         "particles/units/heroes/hero_oracle/oracle_fatesedict_hit.vpcf",
                                         3,
                                         v12,
                                         0);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
                  ParticleManager = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    ParticleManager,
                    BuffParticleEffect,
                    0,
                    v12,
                    5,
                    "attach_hitloc",
                    *AbsOrigin,
                    1);
                  v20 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v20, BuffParticleEffect, 1, v12, 1, 0, vec3_invalid, 1);
                  v21 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v21, BuffParticleEffect);
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


// CDOTA_Modifier_Oracle_FatesEdict::CheckState  (line 666, @0x0000000002c1e6a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Oracle_FatesEdict::CheckState(
        CDOTA_Modifier_Oracle_FatesEdict *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Ability_Oracle_PurifyingFlames::~CDOTA_Ability_Oracle_PurifyingFlames  (line 680, @0x0000000002c99620, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::~CDOTA_Ability_Oracle_PurifyingFlames(
        CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  this->_vptr_IHandleEntity = &off_46000B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Oracle_PurifyingFlames::~CDOTA_Ability_Oracle_PurifyingFlames  (line 680, @0x0000000002c99640, libserver.so)  // inlines: ~CDOTA_Ability_Oracle_PurifyingFlames
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::~CDOTA_Ability_Oracle_PurifyingFlames(
        CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  this->_vptr_IHandleEntity = &off_46000B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Oracle_PurifyingFlames::Schema_DynamicBinding  (line 682, @0x0000000002c8c410, libserver.so)
// globals: CDOTA_Ability_Oracle_PurifyingFlames::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  return CDOTA_Ability_Oracle_PurifyingFlames::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 682, @0x0000000002c8c420, libserver.so)
// globals: CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::DestructInstance  (line 682, @0x0000000002c8c430, libserver.so)  // inlines: Destruct<CDOTA_Ability_Oracle_PurifyingFlames>
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::FreeInstance  (line 682, @0x0000000002c8c450, libserver.so)
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::CanAllocate  (line 682, @0x0000000002c8c470, libserver.so)
bool __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 682, @0x0000000002c8c480, libserver.so)
// globals: CDOTA_Ability_Oracle_PurifyingFlames::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_PurifyingFlames::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::AllocateInstance  (line 682, @0x0000000002c90ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::ConstructInstance  (line 682, @0x0000000002c95550, libserver.so)  // inlines: CDOTA_Ability_Oracle_PurifyingFlames, Construct<CDOTA_Ability_Oracle_PurifyingFlames>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46000B0;
  }
  return p;
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 682, @0x0000000002ca3380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 682, @0x0000000002ca33a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal  (line 682, @0x0000000002cbc5d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "oracle_purifying_flames", "CDOTA_Ability_Oracle_PurifyingFlames"
// globals: `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass, CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass, __dso_handle, CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo, CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass);
    CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass._vptr_CEntityClass = off_4600030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass);
    __cxa_atexit(
      CDOTA_Ability_Oracle_PurifyingFlames::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Oracle_PurifyingFlamesClass != 0 )
    return &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass;
  if ( `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo,
      "CDOTA_Ability_Oracle_PurifyingFlames",
      "oracle_purifying_flames",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo);
  }
  CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass.m_pClassInfo = &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo;
  CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass.m_pBaseClassInfo = CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Oracle_PurifyingFlamesClass = &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass;
  CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClassInfo.m_pClass = &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass;
  CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Oracle_PurifyingFlamesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Oracle_PurifyingFlames::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_PurifyingFlamesClass;
}


// CDOTA_Ability_Oracle_PurifyingFlames::YouForgotToImplementOrDeclareServerClass  (line 702, @0x0000000002c1e6b0, libserver.so)
int __fastcall CDOTA_Ability_Oracle_PurifyingFlames::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  return 0;
}


// CDOTA_Ability_Oracle_PurifyingFlames::GetServerClass  (line 702, @0x0000000002c34b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Oracle_PurifyingFlames::GetServerClass(
        CDOTA_Ability_Oracle_PurifyingFlames *const this)
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


// CDOTA_Ability_Oracle_PurifyingFlames::GetCooldown  (line 712, @0x0000000002c57b60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Oracle_PurifyingFlames::GetCooldown(
        CDOTA_Ability_Oracle_PurifyingFlames *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Oracle_PurifyingFlames::GetCastPoint  (line 725, @0x0000000002c57bb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastPoint, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "castpoint_scepter"
float __fastcall CDOTA_Ability_Oracle_PurifyingFlames::GetCastPoint(CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "castpoint_scepter", 1, 0);
  else
    return CDOTABaseAbility::GetCastPoint(this);
}


// CDOTA_Ability_Oracle_PurifyingFlames::CastFilterResult  (line 738, @0x0000000002c22dc0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Oracle_PurifyingFlames::CastFilterResult(
        CDOTA_Ability_Oracle_PurifyingFlames *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax
  bool IsDisableHelpSetForPlayerID; // dl

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( (pTarget->m_iUnitType & 1) == 0 )
      return 0;
    m_Value = pTarget->m_iTeamNum.m_Value;
    if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      return 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    IsDisableHelpSetForPlayerID = CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                                    g_pDOTAPlayerResource,
                                    pTarget->m_nControllingPlayerID,
                                    Caster->m_nControllingPlayerID);
    result = 25;
    if ( !IsDisableHelpSetForPlayerID )
      return 0;
  }
  return result;
}


// CDOTA_Ability_Oracle_PurifyingFlames::OnSpellStart  (line 755, @0x0000000002c6a790, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues (17 total)
// strings: "particles/units/heroes/hero_oracle/oracle_purifyingflames_hit.vpcf", "attach_hitloc", "particles/units/heroes/hero_oracle/oracle_purifyingflames_cast.vpcf", "attach_attack1", "modifier_oracle_purifying_flames"
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::OnSpellStart(CDOTA_Ability_Oracle_PurifyingFlames *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  int LevelSpecialValue; // eax
  unsigned __int8 m_Value; // r14
  int v7; // r13d
  CDOTA_BaseNPC *v8; // rax
  int AbilityParticleEffect; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r14
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int v18; // r13d
  const Vector *v19; // r14
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
      m_Value = v3->m_iTeamNum.m_Value;
      v7 = LevelSpecialValue;
      if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(Caster, v3, this, v7, 2, 128);
      }
      else
      {
        v8 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v8, v3, this, v7, 2, 0);
      }
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_oracle/oracle_purifyingflames_hit.vpcf",
                                1,
                                v3,
                                0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        ParticleManager,
        AbilityParticleEffect,
        1,
        v3,
        5,
        "attach_hitloc",
        *AbsOrigin,
        1);
      v12 = CDOTABaseAbility::GetCaster(this);
      v13 = CBaseEntity::GetAbsOrigin(v12);
      v14 = CDOTABaseAbility::GetCaster(this);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, AbilityParticleEffect, 2, v14, 5, "attach_hitloc", *v13, 1);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v16, AbilityParticleEffect);
      v17 = CDOTABaseAbility::GetCaster(this);
      v18 = CDOTABaseAbility::CreateAbilityParticleEffect(
              this,
              "particles/units/heroes/hero_oracle/oracle_purifyingflames_cast.vpcf",
              1,
              v17,
              0);
      v19 = CBaseEntity::GetAbsOrigin(v3);
      v20 = CDOTABaseAbility::GetCaster(this);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, v18, 1, v20, 5, "attach_attack1", *v19, 1);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v22, v18);
      KeyValues::KeyValues(&kv, "modifier_oracle_purifying_flames");
      KeyValues::SetFloat(&kv, "duration", v23);
      v24 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v24, this, "modifier_oracle_purifying_flames", &kv, 0);
      this->m_bTargetIsAlly = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == v3->m_iTeamNum.m_Value;
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria  (line 793, @0x0000000002c24730, libserver.so)  // inlines: CUtlSymbol
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "isally"
// globals: `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly, CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly
void __fastcall CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(
        CDOTA_Ability_Oracle_PurifyingFlames *const this,
        CResponseCriteriaSet *const criteria)
{
  float v4; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t v5; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::ModifyOrAppendCriteria(this, criteria);
  if ( `guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("isally");
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly);
  }
  v4 = 0.0;
  if ( this->m_bTargetIsAlly )
    v4 = 1.0;
  v5.m_Id = CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symIsAlly.m_Id;
  CResponseCriteriaSet::AppendCriteria(criteria, &v5, v4, 1.0);
}


// CDOTA_Ability_Oracle_PurifyingFlames::GetAbilityDamageToTargetOverInterval  (line 804, @0x0000000002c64cb0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Oracle_PurifyingFlames::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Oracle_PurifyingFlames *const this,
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


// CDOTA_Modifier_Oracle_PurifyingFlames::~CDOTA_Modifier_Oracle_PurifyingFlames  (line 816, @0x0000000002c90fa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::~CDOTA_Modifier_Oracle_PurifyingFlames(
        CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  this->_vptr_CDOTA_Buff = &off_4600B70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Oracle_PurifyingFlames::~CDOTA_Modifier_Oracle_PurifyingFlames  (line 816, @0x0000000002c90fc0, libserver.so)  // inlines: ~CDOTA_Modifier_Oracle_PurifyingFlames
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::~CDOTA_Modifier_Oracle_PurifyingFlames(
        CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  this->_vptr_CDOTA_Buff = &off_4600B70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_PurifyingFlames::IsPurgable  (line 821, @0x0000000002c8c490, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::IsPurgable(CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  return 1;
}


// CDOTA_Modifier_Oracle_PurifyingFlames::IsDebuff  (line 822, @0x0000000002c8c4a0, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::IsDebuff(CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_PurifyingFlames::GetAttributes  (line 824, @0x0000000002c8c4b0, libserver.so)
int __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::GetAttributes(CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  return 2;
}


// CDOTA_Modifier_Oracle_PurifyingFlames::OnCreated  (line 840, @0x0000000002c59ce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "heal_per_second", "tick_rate", "Hero_Oracle.PurifyingFlames", "Hero_Oracle.PurifyingFlames.Damage"
void __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::OnCreated(
        CDOTA_Modifier_Oracle_PurifyingFlames *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->heal_per_second = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    LevelSpecialValue = 0.0;
    this->tick_rate = 0.0;
    goto LABEL_4;
  }
  this->heal_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "heal_per_second", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "tick_rate", -1, 0);
  this->tick_rate = LevelSpecialValue;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Oracle.PurifyingFlames", Parent);
  v8 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Oracle.PurifyingFlames.Damage", v8);
}


// CDOTA_Modifier_Oracle_PurifyingFlames::OnIntervalThink  (line 861, @0x0000000002c22480, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::OnIntervalThink(
        CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax
  int heal_per_second; // r13d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v7; // rax
  float flAmount; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetParent(this) != 0 && CDOTA_Buff::GetCaster(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    flAmount = this->heal_per_second;
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(Parent, flAmount, Ability, 0, 1);
    heal_per_second = this->heal_per_second;
    v5 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v7 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
    SendOverheadEventMessage(v7, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v5, heal_per_second, 0);
  }
}


// CDOTA_Modifier_Oracle_PurifyingFlames::OnDestroy  (line 874, @0x0000000002c1f8e0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Oracle.PurifyingFlames"
void __fastcall CDOTA_Modifier_Oracle_PurifyingFlames::OnDestroy(CDOTA_Modifier_Oracle_PurifyingFlames *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Oracle.PurifyingFlames");
}


// CDOTA_Ability_Oracle_FalsePromise::~CDOTA_Ability_Oracle_FalsePromise  (line 887, @0x0000000002c99670, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Oracle_FalsePromise::~CDOTA_Ability_Oracle_FalsePromise(
        CDOTA_Ability_Oracle_FalsePromise *const this)
{
  this->_vptr_IHandleEntity = &off_4600ED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Oracle_FalsePromise::~CDOTA_Ability_Oracle_FalsePromise  (line 887, @0x0000000002c99690, libserver.so)  // inlines: ~CDOTA_Ability_Oracle_FalsePromise
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Oracle_FalsePromise::~CDOTA_Ability_Oracle_FalsePromise(
        CDOTA_Ability_Oracle_FalsePromise *const this)
{
  this->_vptr_IHandleEntity = &off_4600ED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Oracle_FalsePromise::Schema_DynamicBinding  (line 889, @0x0000000002c8c4c0, libserver.so)
// globals: CDOTA_Ability_Oracle_FalsePromise::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FalsePromise::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FalsePromise *const this)
{
  return CDOTA_Ability_Oracle_FalsePromise::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 889, @0x0000000002c8c4d0, libserver.so)
// globals: CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::DestructInstance  (line 889, @0x0000000002c8c4e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Oracle_FalsePromise>
void __fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::FreeInstance  (line 889, @0x0000000002c8c500, libserver.so)
void __fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::CanAllocate  (line 889, @0x0000000002c8c520, libserver.so)
bool __fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 889, @0x0000000002c8c530, libserver.so)
// globals: CDOTA_Ability_Oracle_FalsePromise::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Oracle_FalsePromise::s_pSchemaBinding;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::AllocateInstance  (line 889, @0x0000000002c90d20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::ConstructInstance  (line 889, @0x0000000002c95580, libserver.so)  // inlines: CDOTA_Ability_Oracle_FalsePromise, Construct<CDOTA_Ability_Oracle_FalsePromise>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4600ED0;
  }
  return p;
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 889, @0x0000000002ca33d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 889, @0x0000000002ca33f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal  (line 889, @0x0000000002cbc720, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Oracle_FalsePromise"
// globals: `guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass, CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass, __dso_handle, CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo, CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass);
    CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass._vptr_CEntityClass = off_4600E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass);
    __cxa_atexit(
      CDOTA_Ability_Oracle_FalsePromise::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Oracle_FalsePromiseClass != 0 )
    return &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass;
  if ( `guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo,
      "CDOTA_Ability_Oracle_FalsePromise",
      "oracle_false_promise",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo);
  }
  CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass.m_pClassInfo = &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo;
  CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass.m_pBaseClassInfo = CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Oracle_FalsePromiseClass = &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass;
  CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClassInfo.m_pClass = &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass;
  CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Oracle_FalsePromiseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Oracle_FalsePromise::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Oracle_FalsePromiseClass;
}


// CDOTA_Ability_Oracle_FalsePromise::OnSpellStart  (line 900, @0x0000000002c6aaa0, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, InState, IsInvulnerable, SetBool, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::SetInt, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager (22 total)
// strings: "special_bonus_unique_oracle", "modifier_oracle_false_promise_timer", "modifier_oracle_false_promise", "cancelattack", "particles/units/heroes/hero_oracle/oracle_false_promise_cast.vpcf", "attach_hitloc" (10 total)
void __fastcall CDOTA_Ability_Oracle_FalsePromise::OnSpellStart(CDOTA_Ability_Oracle_FalsePromise *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r15
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  const Vector *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const Vector *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm3_4
  CDOTA_BaseNPC *pEnt; // [rsp+10h] [rbp-80h]
  CDOTA_BaseNPC *pEnta; // [rsp+10h] [rbp-80h]
  int nFXIndexB; // [rsp+18h] [rbp-78h]
  int nFXIndexBa; // [rsp+18h] [rbp-78h]
  int nFXIndexBb; // [rsp+18h] [rbp-78h]
  float duration; // [rsp+1Ch] [rbp-74h]
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_oracle", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + duration;
    KeyValues::KeyValues(&kv, "modifier_oracle_false_promise_timer");
    KeyValues::SetFloat(&kv, "duration", v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_oracle_false_promise_timer", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_oracle_false_promise");
    KeyValues::SetInt(&kv2, "cancelattack", 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_oracle_false_promise", &kv2, 0);
    nFXIndexB = CDOTABaseAbility::CreateAbilityParticleEffect(
                  this,
                  "particles/units/heroes/hero_oracle/oracle_false_promise_cast.vpcf",
                  1,
                  v3,
                  0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, nFXIndexB, 1, v3, 5, "attach_hitloc", *AbsOrigin, 1);
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    pEnt = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, nFXIndexB, 2, pEnt, 1, 0, *v12, 1);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CBaseEntity::GetAbsOrigin(v14);
    pEnta = CDOTABaseAbility::GetCaster(this);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, nFXIndexB, 3, pEnta, 5, "attach_hitloc", *v15, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v17, nFXIndexB);
    nFXIndexBa = CDOTABaseAbility::CreateAbilityParticleEffect(
                   this,
                   "particles/units/heroes/hero_oracle/oracle_false_promise_cast_enemy.vpcf",
                   2,
                   0,
                   0);
    v18 = CBaseEntity::GetAbsOrigin(v3);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v19, nFXIndexBa, 0, *&v18->x, v18->z);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, nFXIndexBa);
    v21 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Oracle.FalsePromise.Cast", v21);
    DOTA_EmitSound(10, "Hero_Oracle.FalsePromise.Target", v3);
    DOTA_EmitSound(1, "Hero_Oracle.FalsePromise.FP", v3);
    Purge(v3, this, 28);
    if ( CDOTABaseAbility::GetCaster(this) != 0 )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      nFXIndexBb = m_pAbilityData->m_iAbilityID;
      v23 = CBaseEntity::GetAbsOrigin(v3);
      v24 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v24,
        0,
        nFXIndexBb,
        0,
        v3,
        *&v23->x,
        v23->z,
        duration,
        v25);
    }
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Oracle_FalsePromise::OnProjectileHit_ExtraData  (line 946, @0x0000000002c2e120, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::GetFloat, CDOTABaseAbility::GetCaster, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Oracle_FalsePromise::OnProjectileHit_ExtraData(
        CDOTA_Ability_Oracle_FalsePromise *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData,
        double a5,
        float a6)
{
  int v7; // eax
  __int16 v8; // dx
  CEntityIdentity *v9; // rsi
  CEntityIdentity *v10; // rsi
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  float flDamage; // [rsp+Ch] [rbp-14h]

  v7 = *hTarget;
  if ( (*hTarget + 2) > 1
    && (v8 = *hTarget, (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0)
    && (v10 = &v9[v8 & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    flDamage = KeyValues::GetFloat(pExtraData, "flDamage", a6);
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, flDamage, 4, 0);
    return 1;
  }
  else
  {
    KeyValues::GetFloat(pExtraData, "flDamage", a6);
    return 1;
  }
}


// CDOTA_Modifier_Oracle_FalsePromiseTimer::~CDOTA_Modifier_Oracle_FalsePromiseTimer  (line 964, @0x0000000002c90f50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Oracle_FalsePromiseTimer::~CDOTA_Modifier_Oracle_FalsePromiseTimer(
        CDOTA_Modifier_Oracle_FalsePromiseTimer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4601990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Oracle_FalsePromiseTimer::~CDOTA_Modifier_Oracle_FalsePromiseTimer  (line 964, @0x0000000002c90f70, libserver.so)  // inlines: ~CDOTA_Modifier_Oracle_FalsePromiseTimer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Oracle_FalsePromiseTimer::~CDOTA_Modifier_Oracle_FalsePromiseTimer(
        CDOTA_Modifier_Oracle_FalsePromiseTimer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4601990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_FalsePromiseTimer::IsPurgable  (line 969, @0x0000000002c8c540, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FalsePromiseTimer::IsPurgable(
        CDOTA_Modifier_Oracle_FalsePromiseTimer *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_FalsePromiseTimer::IsDebuff  (line 970, @0x0000000002c8c550, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FalsePromiseTimer::IsDebuff(CDOTA_Modifier_Oracle_FalsePromiseTimer *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_FalsePromiseTimer::OnDestroy  (line 979, @0x0000000002c2af90, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_oracle_false_promise"
void __fastcall CDOTA_Modifier_Oracle_FalsePromiseTimer::OnDestroy(CDOTA_Modifier_Oracle_FalsePromiseTimer *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( !Parent->m_bIsWaitingToSpawn.m_Value && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
  {
    v3 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_oracle_false_promise");
  }
}


// CDOTA_Modifier_Oracle_FalsePromise::~CDOTA_Modifier_Oracle_FalsePromise  (line 992, @0x0000000002cc8780, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int>::Purge, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, int>::Purge
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::~CDOTA_Modifier_Oracle_FalsePromise(
        CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_4601CB0;
  CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>>::RemoveAll(&this->m_vHealingSources);
  if ( (this->m_vHealingSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>::Purge(&this->m_vHealingSources.m_Memory);
    if ( (this->m_vHealingSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>::Purge(&this->m_vHealingSources.m_Memory);
  }
  v2 = (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vDamageSources.m_Size = 0;
  if ( !v2
    || (CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory),
        (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Oracle_FalsePromise::~CDOTA_Modifier_Oracle_FalsePromise  (line 992, @0x0000000002cc8830, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Oracle_FalsePromise, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int>::Purge, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, int>::Purge
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::~CDOTA_Modifier_Oracle_FalsePromise(
        CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  bool v2; // zf

  this->_vptr_CDOTA_Buff = &off_4601CB0;
  CUtlVectorBase<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>>::RemoveAll(&this->m_vHealingSources);
  if ( (this->m_vHealingSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>::Purge(&this->m_vHealingSources.m_Memory);
    if ( (this->m_vHealingSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>::Purge(&this->m_vHealingSources.m_Memory);
  }
  v2 = (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_vDamageSources.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory);
    if ( (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Oracle_FalsePromise::IsPurgable  (line 997, @0x0000000002c8c560, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FalsePromise::IsPurgable(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_FalsePromise::IsDebuff  (line 998, @0x0000000002c8c570, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FalsePromise::IsDebuff(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  return 0;
}


// CDOTA_Modifier_Oracle_FalsePromise::IsHidden  (line 999, @0x0000000002c8c580, libserver.so)
bool __fastcall CDOTA_Modifier_Oracle_FalsePromise::IsHidden(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  return 1;
}


// CDOTA_Modifier_Oracle_FalsePromise::OnCreated  (line 1044, @0x0000000002c20780, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_oracle/oracle_false_promise_indicator.vpcf"
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::OnCreated(
        CDOTA_Modifier_Oracle_FalsePromise *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // eax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  int BuffParticleEffect; // eax
  int v8; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v11; // rax

  this->m_bDisableHealing = 1;
  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  this->m_flRunningDmg = 0.0;
  this->m_flRunningHealth = 0.0;
  this->m_bWaitingForInvulnerability = 0;
  this->m_flHealthOnCreated = Health;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v5);
  v6 = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_oracle/oracle_false_promise_indicator.vpcf",
                         7,
                         v6,
                         0);
  this->m_nFXIndex = BuffParticleEffect;
  v8 = BuffParticleEffect;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v8, 1, 0.0, 0.0);
  m_nFXIndex = this->m_nFXIndex;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, m_nFXIndex, 2, 0.0, 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 1);
}


// CDOTA_Modifier_Oracle_FalsePromise::OnIntervalThink  (line 1074, @0x0000000002c2afe0, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_oracle_false_promise_timer"
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::OnIntervalThink(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  if ( this->m_bWaitingForInvulnerability
    || (v3 = CDOTA_Buff::GetParent(this),
        CDOTA_BaseNPC::FindModifierByName(v3, "modifier_oracle_false_promise_timer", 0) == 0) )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent->m_bIsWaitingToSpawn.m_Value || (Parent->m_nUnitState64.m_Value & 0x100) != 0 )
      this->m_bWaitingForInvulnerability = 1;
    else
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Oracle_FalsePromise::DeclareFunctions  (line 1097, @0x0000000002c1e6c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Oracle_FalsePromise::GetModifierAvoidDamage(CModifierParams const&), CDOTA_Modifier_Oracle_FalsePromise::GetDisableHealing(CModifierParams const&), CDOTA_Modifier_Oracle_FalsePromise::OnHealReceived(CModifierParams const&)
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::DeclareFunctions(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  this->m_Functions[42].__pfn = CDOTA_Modifier_Oracle_FalsePromise::GetModifierAvoidDamage;
  this->m_Functions[42].__delta = 0;
  this->m_Functions[111].__delta = 0;
  this->m_Functions[111].__pfn = CDOTA_Modifier_Oracle_FalsePromise::GetDisableHealing;
  this->m_Functions[148].__pfn = CDOTA_Modifier_Oracle_FalsePromise::OnHealReceived;
  this->m_Functions[148].__delta = 0;
}


// CDOTA_Modifier_Oracle_FalsePromise::GetModifierAvoidDamage  (line 1106, @0x0000000002c85c50, libserver.so)  // inlines: AddToTail, AttackerNPC, CEntityHandle, CHandle, CopyConstruct<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources>, Element, FStrEq, Get, GetAbilityName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTAAbility, ToDOTABaseNPC, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sDamageSources
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::AddParticle, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources, int>::Grow, __dynamic_cast
// strings: "particles/units/heroes/hero_oracle/oracle_false_promise_attacked.vpcf", "attach_hitloc", "particles/units/heroes/hero_oracle/oracle_false_promise_hit.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FalsePromise::GetModifierAvoidDamage(
        CDOTA_Modifier_Oracle_FalsePromise *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float fDamage; // xmm2_4
  uint32 v8; // r15d
  int nDamageType; // r12d
  int nDamageCategory; // r13d
  int nDamageflags; // r14d
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  __int64 m_Size; // rax
  int v15; // edx
  CDOTA_Modifier_Oracle_FalsePromise::sDamageSources *v16; // rax
  int m_nFXIndex; // r12d
  float v18; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  int v28; // r12d
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // r13
  CDOTA_BaseNPC *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  __m128i v33; // xmm0
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v36; // cx
  void *v37; // rax
  char **v38; // rax
  char *v39; // rsi
  int v40; // [rsp+8h] [rbp-68h]
  float v41; // [rsp+Ch] [rbp-64h]
  float v42; // [rsp+Ch] [rbp-64h]
  float v43; // [rsp+Ch] [rbp-64h]
  __int64 v44; // [rsp+10h] [rbp-60h]
  int sNewSource; // [rsp+20h] [rbp-50h]
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( !this->m_bWaitingForInvulnerability )
  {
    m_Index = params->hattacker.m_Index;
    sNewSource = -1;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          {
            m_pEntity = m_pInstance->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v36 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              sNewSource = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v36 & 0x7FFF;
            }
          }
        }
      }
    }
    fDamage = params->fDamage;
    v8 = params->inflictor.m_Index;
    nDamageType = params->nDamageType;
    nDamageCategory = params->nDamageCategory;
    nDamageflags = params->nDamageflags;
    if ( fDamage >= 0.0 )
    {
      if ( v8 + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[params->inflictor.m_Index & 0x1FF];
          if ( v13 != 0 && v8 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          {
            v43 = params->fDamage;
            v37 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            fDamage = v43;
            if ( v37 != 0 )
            {
              v38 = *(v37 + 111);
              if ( v38 != 0 )
              {
                v39 = *v38;
                if ( *v38 != 0 )
                {
                  v33 = 0;
                  if ( v39 == "item_armlet" )
                    goto LABEL_18;
                  v33 = 0;
                  if ( strcmp(v39, "item_armlet") == 0 )
                    goto LABEL_18;
                }
              }
            }
          }
        }
      }
      m_Size = this->m_vDamageSources.m_Size;
      if ( m_Size == this->m_vDamageSources.m_Memory.m_nAllocationCount )
      {
        v40 = this->m_vDamageSources.m_Size;
        v42 = fDamage;
        CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sDamageSources,int>::Grow(&this->m_vDamageSources.m_Memory, 1);
        v15 = this->m_vDamageSources.m_Size;
        m_Size = v40;
        fDamage = v42;
      }
      else
      {
        v15 = this->m_vDamageSources.m_Size;
      }
      this->m_vDamageSources.m_Size = v15 + 1;
      v16 = &this->m_vDamageSources.m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
      {
        v16->hInflictor.m_Index = v8;
        v16->flAmount = fDamage;
        v16->nDamageType = nDamageType;
        v16->nDamageCategory = nDamageCategory;
        v16->hSourceNPC.m_Index = sNewSource;
        v16->nDamageFlags = nDamageflags;
      }
      m_nFXIndex = this->m_nFXIndex;
      v41 = fDamage;
      v18 = fDamage + this->m_flRunningDmg;
      this->m_flRunningDmg = v18;
      v44 = LODWORD(v18) | 0x3F80000000000000LL;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 1, *&v44, 1.0);
      if ( v41 > 75.0 )
      {
        Parent = CDOTA_Buff::GetParent(this);
        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                               this,
                               "particles/units/heroes/hero_oracle/oracle_false_promise_attacked.vpcf",
                               1,
                               Parent,
                               0);
        v22 = CDOTA_Buff::GetParent(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
        v24 = CDOTA_Buff::GetParent(this);
        v25 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v25, BuffParticleEffect, 1, v24, 5, "attach_hitloc", *AbsOrigin, 1);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v26, BuffParticleEffect);
        v27 = CDOTA_Buff::GetParent(this);
        v28 = CDOTA_Buff::CreateBuffParticleEffect(
                this,
                "particles/units/heroes/hero_oracle/oracle_false_promise_hit.vpcf",
                1,
                v27,
                0);
        v29 = CDOTA_Buff::GetParent(this);
        v30 = CBaseEntity::GetAbsOrigin(v29);
        v31 = CDOTA_Buff::GetParent(this);
        v32 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v32, v28, 1, v31, 5, "attach_hitloc", *v30, 1);
        CDOTA_Buff::AddParticle(this, v28, 0, 0, -1, 0, 0);
      }
    }
    v33 = 0x3F800000u;
LABEL_18:
    *&result.m_eType = (_mm_cvtsi128_si32(v33) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Oracle_FalsePromise::OnHealReceived  (line 1153, @0x0000000002c86060, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sHealingSources
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FalsePromise::OnHealReceived(
        CDOTA_Modifier_Oracle_FalsePromise *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float fGain; // xmm2_4
  uint32 v10; // r13d
  int m_nFXIndex; // r12d
  float v12; // xmm0_4
  __m128d v13; // xmm0
  unsigned int v14; // xmm3_4
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 m_Size; // r12
  float v17; // xmm2_4
  int v18; // eax
  CDOTA_Modifier_Oracle_FalsePromise::sHealingSources *v19; // rax
  float v20; // [rsp+Ch] [rbp-34h]
  __int64 v21; // [rsp+10h] [rbp-30h]

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
          fGain = params->fGain;
          v10 = params->inflictor.m_Index;
          if ( fGain >= 0.0 && !this->m_bWaitingForInvulnerability )
          {
            m_nFXIndex = this->m_nFXIndex;
            v20 = fGain;
            v12 = fGain + this->m_flRunningHealth;
            this->m_flRunningHealth = v12;
            v13.m128d_f64[1] = v12;
            v13.m128d_f64[0] = v12 * 0.1;
            *&v14 = _mm_movedup_pd(v13).m128d_f64[0];
            v21 = v14 | 0x3F80000000000000LL;
            ParticleManager = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 2, *&v21, 1.0);
            m_Size = this->m_vHealingSources.m_Size;
            v17 = v20;
            v18 = this->m_vHealingSources.m_Size;
            if ( m_Size == this->m_vHealingSources.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CDOTA_Modifier_Oracle_FalsePromise::sHealingSources,int>::Grow(
                &this->m_vHealingSources.m_Memory,
                1);
              v18 = this->m_vHealingSources.m_Size;
              v17 = v20;
            }
            this->m_vHealingSources.m_Size = v18 + 1;
            v19 = &this->m_vHealingSources.m_Memory.m_pMemory[m_Size];
            if ( v19 != 0 )
            {
              v19->hSource.m_Index = v10;
              v19->flAmount = v17;
            }
          }
        }
      }
    }
  }
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Oracle_FalsePromise::CheckState  (line 1178, @0x0000000002c1e720, libserver.so)
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::CheckState(
        CDOTA_Modifier_Oracle_FalsePromise *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_Oracle_FalsePromise::GetDisableHealing  (line 1188, @0x0000000002c1e730, libserver.so)  // inlines: ModifierVariant_t
ModifierVariant_t __fastcall CDOTA_Modifier_Oracle_FalsePromise::GetDisableHealing(
        CDOTA_Modifier_Oracle_FalsePromise *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  v2 = 0;
  if ( this->m_bDisableHealing )
    v2 = 0x3F800000u;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Oracle_FalsePromise::OnDestroy  (line 1196, @0x0000000002c52a20, libserver.so)  // inlines: CUtlSymbol, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::Heal, DOTA_EmitSoundLocationWithCaster, __cxa_guard_acquire (25 total)
// strings: "Hero_Oracle.FalsePromise.FP", "particles/units/heroes/hero_oracle/oracle_false_promise_heal.vpcf", "attach_hitloc", "Hero_Oracle.FalsePromise.Healed", "abilityname", "modifier_oracle_false_promise_timer" (10 total)
// globals: `guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived, `guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP, CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived, CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP, CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(CDOTA_Modifier_Oracle_FalsePromise *const this)
{
  CDOTABaseAbility *Ability; // rax
  int m_Size; // edx
  __int64 v4; // rax
  float v5; // xmm3_4
  float v6; // xmm1_4
  int v7; // ecx
  float v8; // xmm2_4
  CDOTA_Modifier_Oracle_FalsePromise::sDamageSources *m_pMemory; // rdx
  CDOTA_Modifier_Oracle_FalsePromise::sDamageSources *v10; // rax
  __int64 v11; // rcx
  CDOTA_BaseNPC *Parent; // rax
  float v13; // xmm3_4
  CDOTA_BaseNPC *v14; // rax
  int v15; // r12d
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r13
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTABaseAbility *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // r12
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // r13
  char v28; // al
  float v29; // xmm0_4
  int Health; // eax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v35; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v37; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v39; // rax
  int v40; // eax
  __int64 v41; // r13
  int v42; // r12d
  float v43; // xmm0_4
  CDOTA_Modifier_Oracle_FalsePromise::sDamageSources *v44; // rdi
  float *p_m_Index; // rdx
  uint32 m_Index; // ecx
  CEntityIdentity *v47; // rsi
  CEntityIdentity *v48; // rsi
  CDOTA_BaseNPC *m_pInstance; // r15
  int v50; // r14d
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rdi
  CDOTA_BaseNPC *v53; // rsi
  CDOTABaseAbility *v54; // rdx
  float v55; // xmm0_4
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v59; // rdi
  CDOTA_BaseNPC_Hero *v60; // rsi
  CDOTA_Modifier_Oracle_FalsePromise::sDamageSources *v61; // rdi
  CEntityIdentity *v62; // r8
  CEntityIdentity *v63; // r8
  CDOTA_BaseNPC *v64; // rsi
  CDOTA_BaseNPC *v65; // rax
  CDOTA_BaseNPC *v66; // [rsp+10h] [rbp-A0h]
  float flDamageReduction; // [rsp+1Ch] [rbp-94h]
  float v68; // [rsp+20h] [rbp-90h]
  float v69; // [rsp+20h] [rbp-90h]
  float v70; // [rsp+20h] [rbp-90h]
  CDOTABaseAbility *v71; // [rsp+20h] [rbp-90h]
  float flAmount; // [rsp+28h] [rbp-88h]
  float flAmounta; // [rsp+28h] [rbp-88h]
  CDOTABaseAbility *flAmountb; // [rsp+28h] [rbp-88h]
  float flAmountc; // [rsp+28h] [rbp-88h]
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+30h] [rbp-80h] BYREF
  float radius; // [rsp+3Ch] [rbp-74h] BYREF
  Vector vPos; // [rsp+40h] [rbp-70h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &radius, "radius");
  m_Size = this->m_vHealingSources.m_Size;
  this->m_bDisableHealing = 0;
  if ( m_Size <= 0 )
  {
    v5 = 0.0;
  }
  else
  {
    v4 = 0;
    v5 = 0.0;
    do
    {
      v6 = this->m_vHealingSources.m_Memory.m_pMemory[v4++].flAmount;
      v5 = v5 + (v6 + v6);
    }
    while ( m_Size > v4 );
  }
  v7 = this->m_vDamageSources.m_Size;
  v8 = 0.0;
  if ( v7 > 0 )
  {
    m_pMemory = this->m_vDamageSources.m_Memory.m_pMemory;
    v8 = 0.0;
    v10 = m_pMemory + 1;
    v11 = &m_pMemory[(v7 - 1) + 1];
    while ( 1 )
    {
      v8 = v8 + m_pMemory->flAmount;
      m_pMemory = v10;
      if ( v10 == v11 )
        break;
      ++v10;
    }
  }
  v68 = v8;
  flAmount = v5;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Oracle.FalsePromise.FP");
  v13 = flAmount;
  if ( flAmount <= v68 )
  {
    flAmounta = v68;
    v69 = v13;
    v33 = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_oracle/oracle_false_promise_dmg.vpcf",
                           1,
                           v33,
                           0);
    v35 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v35);
    v37 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      BuffParticleEffect,
      1,
      v37,
      5,
      "attach_hitloc",
      *AbsOrigin,
      1);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v39, BuffParticleEffect);
    if ( flAmounta <= 0.0 )
      flDamageReduction = 0.0;
    else
      flDamageReduction = (flAmounta - v69) / flAmounta;
    v40 = this->m_vDamageSources.m_Size;
    v41 = 0;
    v42 = 0;
    v43 = 0.0;
    while ( v42 < v40 )
    {
      v44 = this->m_vDamageSources.m_Memory.m_pMemory;
      p_m_Index = &v44[v41].hSourceNPC.m_Index;
      m_Index = v44[v41].hSourceNPC.m_Index;
      if ( m_Index + 2 > 1
        && (v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*p_m_Index >> 9) & 0x3F]) != 0
        && (v48 = &v47[*p_m_Index & 0x1FF]) != 0
        && m_Index == v48->m_EHandle.m_Index
        && v48->m_pInstance != 0
        && BYTE3(v48->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        m_pInstance = v48->m_pInstance;
      }
      else
      {
        m_pInstance = 0;
      }
      if ( ++v42 < v40 )
      {
        v61 = &v44[++v41];
        if ( v61->hSourceNPC.m_Index + 2 <= 1
          || (v62 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v61->hSourceNPC.m_Index) >> 9) & 0x3F]) == 0
          || (v63 = &v62[v61->hSourceNPC.m_Index & 0x1FF]) == 0
          || v61->hSourceNPC.m_Index != v63->m_EHandle.m_Index
          || (v64 = v63->m_pInstance, v63->m_pInstance == 0)
          || !v64->m_bIsDOTANPC )
        {
          v64 = 0;
        }
        if ( m_pInstance == v64 && *(p_m_Index + 5) == v61->nDamageFlags )
        {
          v43 = v43 + p_m_Index[2];
          continue;
        }
      }
      else
      {
        ++v41;
      }
      v50 = p_m_Index[5] & 0x80 | 0x227;
      v70 = (v43 + p_m_Index[2]) * flDamageReduction;
      flAmountb = CDOTA_Buff::GetAbility(this);
      v51 = CDOTA_Buff::GetParent(this);
      v52 = m_pInstance;
      v53 = v51;
      v54 = flAmountb;
      v55 = v70;
      if ( m_pInstance == 0 )
      {
        v71 = flAmountb;
        flAmountc = v55;
        v66 = v51;
        v65 = CDOTA_Buff::GetParent(this);
        v53 = v66;
        v52 = v65;
        v54 = v71;
        v55 = flAmountc;
      }
      ApplyDamage(v52, v53, v54, v55, 4, v50);
      v40 = this->m_vDamageSources.m_Size;
      v43 = 0.0;
    }
    v56 = CDOTA_Buff::GetParent(this);
    vPos = *CBaseEntity::GetAbsOrigin(v56);
    v57 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Oracle.FalsePromise.Damaged", v57);
  }
  else
  {
    v14 = CDOTA_Buff::GetParent(this);
    v15 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_oracle/oracle_false_promise_heal.vpcf",
            1,
            v14,
            0);
    v16 = CDOTA_Buff::GetParent(this);
    v17 = CBaseEntity::GetAbsOrigin(v16);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v19, v15, 1, v18, 5, "attach_hitloc", *v17, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, v15);
    v21 = CDOTA_Buff::GetAbility(this);
    v22 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v22, flAmount - v68, v21, 0, 1);
    v23 = CDOTA_Buff::GetParent(this);
    v24 = v23;
    if ( (v23->m_iUnitType & 1) != 0 && !v23->m_bIsIllusion.m_Value && v68 > this->m_flHealthOnCreated )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      if ( Caster == 0 || (v59 = Caster, (Caster->m_iUnitType & 1) == 0) )
        v59 = 0;
      v60 = 0;
      if ( (v24->m_iUnitType & 1) != 0 )
        v60 = v24;
      EconEntity_OnOwnerKillEaterEvent(
        v59,
        v60,
        kill_eater_event_t::kKillEaterEvent_Oracle_FalsePromiseSaves,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v25 = CDOTA_Buff::GetParent(this);
    vPos = *CBaseEntity::GetAbsOrigin(v25);
    v26 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Oracle.FalsePromise.Healed", v26);
  }
  this->m_flRunningHealth = 0.0;
  this->m_flRunningDmg = 0.0;
  v27 = CDOTA_Buff::GetParent(this);
  if ( `guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("targetsurvived");
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived);
  }
  if ( `guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("survived_hp");
    __cxa_guard_release(&`guard variable for'CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP);
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&vPos);
  CResponseCriteriaSet::AppendCriteria(&vPos, "abilityname", "oracle_false_promise", 1.0);
  v28 = (*(v27->_vptr_IHandleEntity + 408))(v27);
  v29 = 0.0;
  if ( v28 != 0 )
    v29 = 1.0;
  criteria.m_Id = CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symTargetSurvived.m_Id;
  CResponseCriteriaSet::AppendCriteria(&vPos, &criteria, v29, 1.0);
  Health = CBaseEntity::GetHealth(v27);
  criteria.m_Id = CDOTA_Modifier_Oracle_FalsePromise::OnDestroy(void)::symSurvivedHP.m_Id;
  CResponseCriteriaSet::AppendCriteria(&vPos, &criteria, Health, 1.0);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &vPos, 4, 0, 0, 0, 0);
  v32 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v32, "modifier_oracle_false_promise_timer");
  CResponseCriteriaSet::~CResponseCriteriaSet(&vPos);
}


