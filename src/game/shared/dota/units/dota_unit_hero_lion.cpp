// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:38
class CDOTA_Unit_Hero_Lion : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Lion(CDOTA_Unit_Hero_Lion &);
	CDOTA_Unit_Hero_Lion(CDOTA_Unit_Hero_Lion &);
	CDOTA_Unit_Hero_Lion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsDemon();
	virtual ~CDOTA_Unit_Hero_Lion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[402] IsDemon
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:48
class C_CDOTA_Unit_Hero_Lion_MapInstall {
	C_CDOTA_Unit_Hero_Lion_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:69
class CDOTA_Ability_Lion_Impale : public CDOTABaseAbility {
public:

private:

	int width;  // +0x390
	float duration;  // +0x394
	int speed;  // +0x398
	float length_buffer;  // +0x39c
	float range;  // +0x3a0
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
	CDOTA_Ability_Lion_Impale(CDOTA_Ability_Lion_Impale &);
	CDOTA_Ability_Lion_Impale(CDOTA_Ability_Lion_Impale &);
	CDOTA_Ability_Lion_Impale();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Lion_Impale();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:94
class C_CDOTA_Ability_Lion_Impale_MapInstall {
	C_CDOTA_Ability_Lion_Impale_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:195
class CDOTA_Modifier_Lion_Impale : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	bool m_bDamageApplied;  // +0xbbc
	CDOTA_Modifier_Lion_Impale();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual int GetAttributes();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	void TryToApplyDamage();
	virtual ~CDOTA_Modifier_Lion_Impale();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[7] GetAttributes
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:338
class CDOTA_Ability_Lion_Voodoo : public CDOTABaseAbility {
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
	CDOTA_Ability_Lion_Voodoo(CDOTA_Ability_Lion_Voodoo &);
	CDOTA_Ability_Lion_Voodoo(CDOTA_Ability_Lion_Voodoo &);
	CDOTA_Ability_Lion_Voodoo();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Lion_Voodoo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:387
class CDOTA_Modifier_Lion_Voodoo : public CDOTA_Modifier_Hexed {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_Lion_Voodoo();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetHexType();
	virtual const char * GetDefaultHexModel();
	virtual float GetMoveSpeedModifier();
	virtual ~CDOTA_Modifier_Lion_Voodoo();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[89] GetHexType
	// vtable[90] GetDefaultHexModel
	// vtable[92] GetMoveSpeedModifier
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:434
class CDOTA_Ability_Lion_ManaDrain : public CDOTABaseAbility {
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
	CDOTA_Ability_Lion_ManaDrain(CDOTA_Ability_Lion_ManaDrain &);
	CDOTA_Ability_Lion_ManaDrain(CDOTA_Ability_Lion_ManaDrain &);
	CDOTA_Ability_Lion_ManaDrain();
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
	virtual void OnChannelThink(float);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool WantsToChannelCancel();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Lion_ManaDrain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[296] OnChannelThink
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[331] WantsToChannelCancel
	// vtable[310] GetStolenActivityModifier
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:458
class C_CDOTA_Ability_Lion_ManaDrain_MapInstall {
	C_CDOTA_Ability_Lion_ManaDrain_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:622
class CDOTA_Modifier_Lion_ManaDrain : public CDOTA_Buff {
public:

private:

	int mana_per_second;  // +0xba8
	int break_distance;  // +0xbac
	float tick_interval;  // +0xbb0
	float m_fAppliedTime;  // +0xbb4
	int m_nTotalManaDrained;  // +0xbb8
	CDOTA_Modifier_Lion_ManaDrain();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	void PerformDrain();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual ~CDOTA_Modifier_Lion_ManaDrain();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] Tooltip
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:801
class CDOTA_Ability_Lion_FingerOfDeath : public CDOTABaseAbility {
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
	CDOTA_Ability_Lion_FingerOfDeath(CDOTA_Ability_Lion_FingerOfDeath &);
	CDOTA_Ability_Lion_FingerOfDeath(CDOTA_Ability_Lion_FingerOfDeath &);
	CDOTA_Ability_Lion_FingerOfDeath();
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
	virtual int GetAbilityDamage();
	virtual int GetManaCost(int);
	virtual float GetCooldown(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lion_FingerOfDeath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[247] GetAbilityDamage
	// vtable[273] GetManaCost
	// vtable[242] GetCooldown
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:824
class C_CDOTA_Ability_Lion_FingerOfDeath_MapInstall {
	C_CDOTA_Ability_Lion_FingerOfDeath_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lion.cpp:941
class CDOTA_Modifier_Lion_FingerOfDeath : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lion_FingerOfDeath();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Lion_FingerOfDeath();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Lion::~CDOTA_Unit_Hero_Lion  (line 38, @0x0000000002ac67b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Lion::~CDOTA_Unit_Hero_Lion(CDOTA_Unit_Hero_Lion *const this)
{
  this->_vptr_IHandleEntity = &off_43FC690;
  this->_vptr_INextBotEventResponder = &off_43FD670;
  this->_vptr_CObstructionObject = &off_43FD9A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Lion::~CDOTA_Unit_Hero_Lion  (line 38, @0x0000000002ac67f0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Lion
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Lion::~CDOTA_Unit_Hero_Lion(CDOTA_Unit_Hero_Lion *const this)
{
  this->_vptr_IHandleEntity = &off_43FC690;
  this->_vptr_INextBotEventResponder = &off_43FD670;
  this->_vptr_CObstructionObject = &off_43FD9A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Lion::Schema_DynamicBinding  (line 40, @0x0000000002ab93d0, libserver.so)
// globals: CDOTA_Unit_Hero_Lion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lion::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lion *const this)
{
  return CDOTA_Unit_Hero_Lion::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002ab9400, libserver.so)
// globals: CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002ab9410, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Lion>
void __fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002ab9430, libserver.so)
void __fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002ab9450, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002ab9460, libserver.so)
// globals: CDOTA_Unit_Hero_Lion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lion::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002abeec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002ac4940, libserver.so)  // inlines: CDOTA_Unit_Hero_Lion, Construct<CDOTA_Unit_Hero_Lion>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43FC690;
    *(p + 236) = &off_43FD670;
    *(p + 257) = &off_43FD9A0;
  }
  return p;
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002acd190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002acd4d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Lion::GetEntityClassInternal  (line 40, @0x0000000002adcc00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_lion", "CDOTA_Unit_Hero_Lion"
// globals: `guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass, CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass, __dso_handle, CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo, CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Lion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass);
    CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass._vptr_CEntityClass = off_43FC610;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Lion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LionClass != 0 )
    return &CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo,
      "CDOTA_Unit_Hero_Lion",
      "npc_dota_hero_lion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo);
  }
  CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass.m_pClassInfo = &CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo;
  CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LionClass = &CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass;
  CDOTA_Unit_Hero_Lion::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LionClassInfo.m_pClass = &CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass;
  CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LionClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Lion::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LionClass;
}


// CDOTA_Unit_Hero_Lion::IsDemon  (line 45, @0x0000000002ab9470, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Lion::IsDemon(const CDOTA_Unit_Hero_Lion *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Lion::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002a77cb0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Lion::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Lion *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Lion::GetServerClass  (line 48, @0x0000000002a8a470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Lion::GetServerClass(CDOTA_Unit_Hero_Lion *const this)
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


// CDOTA_Unit_Hero_Lion::Spawn  (line 57, @0x0000000002a7a030, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Lion::Spawn(CDOTA_Unit_Hero_Lion *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_Lion_Impale::~CDOTA_Ability_Lion_Impale  (line 69, @0x0000000002ac56b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lion_Impale::~CDOTA_Ability_Lion_Impale(CDOTA_Ability_Lion_Impale *const this)
{
  this->_vptr_IHandleEntity = &off_43FDA70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lion_Impale::~CDOTA_Ability_Lion_Impale  (line 69, @0x0000000002ac56d0, libserver.so)  // inlines: ~CDOTA_Ability_Lion_Impale
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lion_Impale::~CDOTA_Ability_Lion_Impale(CDOTA_Ability_Lion_Impale *const this)
{
  this->_vptr_IHandleEntity = &off_43FDA70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lion_Impale::Schema_DynamicBinding  (line 71, @0x0000000002ab9480, libserver.so)
// globals: CDOTA_Ability_Lion_Impale::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_Impale::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_Impale *const this)
{
  return CDOTA_Ability_Lion_Impale::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 71, @0x0000000002ab9490, libserver.so)
// globals: CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::DestructInstance  (line 71, @0x0000000002ab94a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lion_Impale>
void __fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::FreeInstance  (line 71, @0x0000000002ab94c0, libserver.so)
void __fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::CanAllocate  (line 71, @0x0000000002ab94e0, libserver.so)
bool __fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 71, @0x0000000002ab94f0, libserver.so)
// globals: CDOTA_Ability_Lion_Impale::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_Impale::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::AllocateInstance  (line 71, @0x0000000002abef00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::ConstructInstance  (line 71, @0x0000000002ac2b40, libserver.so)  // inlines: CDOTA_Ability_Lion_Impale, Construct<CDOTA_Ability_Lion_Impale>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43FDA70;
  }
  return p;
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002acc060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002acc080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lion_Impale::GetEntityClassInternal  (line 71, @0x0000000002adcd50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Lion_Impale"
// globals: `guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass, CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass, __dso_handle, CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo, CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lion_Impale::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass);
    CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass._vptr_CEntityClass = off_43FD9F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass);
    __cxa_atexit(
      CDOTA_Ability_Lion_Impale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lion_ImpaleClass != 0 )
    return &CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass;
  if ( `guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo,
      "CDOTA_Ability_Lion_Impale",
      "lion_impale",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo);
  }
  CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass.m_pClassInfo = &CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo;
  CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass.m_pBaseClassInfo = CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lion_ImpaleClass = &CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass;
  CDOTA_Ability_Lion_Impale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ImpaleClassInfo.m_pClass = &CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass;
  CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lion_ImpaleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lion_Impale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ImpaleClass;
}


// CDOTA_Ability_Lion_Impale::GetStolenActivityModifier  (line 80, @0x0000000002ab9500, libserver.so)
const char *__fastcall CDOTA_Ability_Lion_Impale::GetStolenActivityModifier(CDOTA_Ability_Lion_Impale *const this)
{
  return "impale";
}


// CDOTA_Ability_Lion_Impale::YouForgotToImplementOrDeclareServerClass  (line 94, @0x0000000002a77cc0, libserver.so)
int __fastcall CDOTA_Ability_Lion_Impale::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lion_Impale *const this)
{
  return 0;
}


// CDOTA_Ability_Lion_Impale::GetServerClass  (line 94, @0x0000000002a8a670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lion_Impale::GetServerClass(CDOTA_Ability_Lion_Impale *const this)
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


// CDOTA_Ability_Lion_Impale::OnUpgrade  (line 103, @0x0000000002aa3800, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::OnUpgrade
// strings: "length_buffer"
void __fastcall CDOTA_Ability_Lion_Impale::OnUpgrade(CDOTA_Ability_Lion_Impale *const this)
{
  this->width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "width", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->length_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "length_buffer", -1, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Lion_Impale::OnSpellStart  (line 114, @0x0000000002a82260, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsAngles, AngleVectors (13 total)
// strings: "particles/units/heroes/hero_lion/lion_spell_impale.vpcf", "particles/units/heroes/hero_lion/lion_spell_impale_staff.vpcf", "attach_attack1", "Hero_Lion.Impale"
void __fastcall CDOTA_Ability_Lion_Impale::OnSpellStart(CDOTA_Ability_Lion_Impale *const this)
{
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float y; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm0_4
  int v10; // eax
  vec_t v11; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  float speed; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CDOTA_BaseNPC *v19; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // r13
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const QAngle *AbsAngles; // rax
  float length_buffer; // [rsp+Ch] [rbp-C4h]
  Vector vDirection; // [rsp+20h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = CBaseEntity::GetAbsOrigin(Caster);
  v8 = x - v7->x;
  v9 = y - v7->y;
  vDirection.z = 0.0;
  vDirection.x = v8;
  vDirection.y = v9;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v25 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v25);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  length_buffer = this->length_buffer;
  v10 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v11 = vec3_origin.y;
  info.bHasFrontalCone = 1;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v11;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v11;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v11;
  this->range = v10 + length_buffer;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_lion/lion_spell_impale.vpcf";
  info.vSpawnOrigin.z = z;
  info.vVelocity.z = z;
  info.vAcceleration.z = z;
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bCheckStartPosition = 0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
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
  v13 = CDOTABaseAbility::GetCaster(this);
  info.vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v13);
  speed = this->speed;
  info.vVelocity.y = vDirection.y * speed;
  info.vVelocity.z = vDirection.z * speed;
  info.vVelocity.x = speed * vDirection.x;
  info.fDistance = this->range;
  info.fStartRadius = this->width;
  info.fEndRadius = info.fStartRadius;
  v15 = CDOTABaseAbility::GetCaster(this);
  if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
  {
    v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v18 = 0x7FFF;
    else
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bHasFrontalCone = 0;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v19 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_lion/lion_spell_impale_staff.vpcf",
                   2,
                   v19,
                   0,
                   0);
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v19, 0, v21, 5, "attach_attack1", vec3_invalid, 1);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, v19);
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Lion.Impale", 0.0, 0, 0);
}


// CDOTA_Ability_Lion_Impale::OnProjectileHit  (line 154, @0x0000000002a84540, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (14 total)
// strings: "modifier_lion_impale", "particles/units/heroes/hero_lion/lion_spell_impale_hit_spikes.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Lion_Impale::OnProjectileHit(
        CDOTA_Ability_Lion_Impale *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v16; // rax
  const Vector *v17; // r13
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-28h]

  v21 = __readfsqword(0x28u);
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
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0
            && !m_pInstance->m_bIsWaitingToSpawn.m_Value
            && (m_Value & 0x100) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            KeyValues::KeyValues(&kv, "modifier_lion_impale");
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_lion_impale", &kv, 0);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_lion/lion_spell_impale_hit_spikes.vpcf",
                         2,
                         0,
                         0,
                         0);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v16 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v16, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
            v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v18 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 2, m_pInstance, 5, "attach_hitloc", *v17, 1);
            v19 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Lion_Impale::GetAbilityDamageToTargetOverInterval  (line 176, @0x0000000002a7c800, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lion_Impale::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lion_Impale *const this,
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


// CDOTA_Ability_Lion_Impale::GetStunDuration  (line 186, @0x0000000002a9b9a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Lion_Impale::GetStunDuration(CDOTA_Ability_Lion_Impale *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Lion_Impale::~CDOTA_Modifier_Lion_Impale  (line 195, @0x0000000002ac1730, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lion_Impale::~CDOTA_Modifier_Lion_Impale(CDOTA_Modifier_Lion_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FE530;
  this->_vptr_CVerticalMotionController = &off_43FE820;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lion_Impale::~CDOTA_Modifier_Lion_Impale  (line 195, @0x0000000002ac1760, libserver.so)  // inlines: ~CDOTA_Modifier_Lion_Impale
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lion_Impale::~CDOTA_Modifier_Lion_Impale(CDOTA_Modifier_Lion_Impale *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FE530;
  this->_vptr_CVerticalMotionController = &off_43FE820;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lion_Impale::IsStunDebuff  (line 209, @0x0000000002ab9510, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_Impale::IsStunDebuff(CDOTA_Modifier_Lion_Impale *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_Impale::GetAttributes  (line 211, @0x0000000002ac47e0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Lion_Impale::GetAttributes(CDOTA_Modifier_Lion_Impale *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Lion_Impale::IsVerticalMotionValidToApply  (line 215, @0x0000000002ab9520, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Lion_Impale::IsVerticalMotionValidToApply(CDOTA_Modifier_Lion_Impale *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Lion_Impale::GetEffectName  (line 220, @0x0000000002ab9550, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Lion_Impale::GetEffectName(CDOTA_Modifier_Lion_Impale *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Lion_Impale::GetEffectAttachType  (line 221, @0x0000000002ab9560, libserver.so)
int __fastcall CDOTA_Modifier_Lion_Impale::GetEffectAttachType(CDOTA_Modifier_Lion_Impale *const this)
{
  return 7;
}


// CDOTA_Modifier_Lion_Impale::DeclareFunctions  (line 238, @0x0000000002a77cd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lion_Impale::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lion_Impale::DeclareFunctions(CDOTA_Modifier_Lion_Impale *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Lion_Impale::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Lion_Impale::GetOverrideAnimation  (line 245, @0x0000000002a77cf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lion_Impale::GetOverrideAnimation(
        CDOTA_Modifier_Lion_Impale *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Lion_Impale::CheckState  (line 252, @0x0000000002a77d10, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Lion_Impale::CheckState(
        CDOTA_Modifier_Lion_Impale *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Lion_Impale::OnCreated  (line 261, @0x0000000002a7cf10, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Modifier_Lion_Impale::TryToApplyDamage, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Lion.ImpaleHitTarget"
void __fastcall CDOTA_Modifier_Lion_Impale::OnCreated(CDOTA_Modifier_Lion_Impale *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  this->m_flCurTime = 0.0;
  this->m_bDamageApplied = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  this->m_flStartZ = GetGroundHeight(AbsOrigin, Parent);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = (*(v6->_vptr_IHandleEntity + 376))(v6);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v8, 1508, 0.2, 0.2, 0, 0, 1.0);
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Lion.ImpaleHitTarget", 0.0, 0, 0);
  }
  else if ( !this->m_bDamageApplied )
  {
    CDOTA_Modifier_Lion_Impale::TryToApplyDamage(this);
  }
}


// CDOTA_Modifier_Lion_Impale::UpdateVerticalMotion  (line 283, @0x0000000002a7d0a0, libserver.so)  // inlines: TryToApplyDamage
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Lion_Impale::TryToApplyDamage
// strings: "Hero_Lion.ImpaleTargetLand"
void __fastcall CDOTA_Modifier_Lion_Impale::UpdateVerticalMotion(
        CDOTA_Modifier_Lion_Impale *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt,
        double a5,
        double a6,
        float a7)
{
  CVerticalMotionController *v8; // rdi
  float v9; // xmm1_4
  float v10; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v12; // rax

  v8 = &this->CVerticalMotionController;
  v9 = *&v8[1]._vptr_CVerticalMotionController + a3;
  v10 = *(&v8->m_nPriority + 1);
  *&v8[1]._vptr_CVerticalMotionController = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 0.51999998, 350.0, a7) != 0 )
  {
    if ( !this->m_bDamageApplied )
      CDOTA_Modifier_Lion_Impale::TryToApplyDamage(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
    v12 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_Lion.ImpaleTargetLand", 0.0, 0, 0);
  }
}


// CDOTA_Modifier_Lion_Impale::OnVerticalMotionInterrupted  (line 300, @0x0000000002a7cff0, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_Lion_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Lion_Impale::OnVerticalMotionInterrupted(CDOTA_Modifier_Lion_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Lion_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
}


// CDOTA_Modifier_Lion_Impale::OnDestroy  (line 310, @0x0000000002a7d040, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Modifier_Lion_Impale::TryToApplyDamage, CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Lion_Impale::OnDestroy(CDOTA_Modifier_Lion_Impale *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Lion_Impale::TryToApplyDamage(this);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1508);
}


// CDOTA_Modifier_Lion_Impale::TryToApplyDamage  (line 322, @0x0000000002a7cea0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
// callers: CDOTA_Modifier_Lion_Impale::OnCreated, CDOTA_Modifier_Lion_Impale::OnVerticalMotionInterrupted, CDOTA_Modifier_Lion_Impale::OnDestroy, CDOTA_Modifier_Lion_Impale::UpdateVerticalMotion, CDOTA_Modifier_Lion_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_Lion_Impale::TryToApplyDamage(CDOTA_Modifier_Lion_Impale *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  this->m_bDamageApplied = 1;
  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3, 2, 0);
}


// CDOTA_Modifier_Lion_Impale::TryToApplyDamage  (line 322, @0x0000000002a91800, libserver.so)
// calls: CDOTA_Modifier_Lion_Impale::TryToApplyDamage
void __fastcall CDOTA_Modifier_Lion_Impale::TryToApplyDamage(CDOTA_Modifier_Lion_Impale *const this)
{
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Lion_Impale::TryToApplyDamage(this);
}


// CDOTA_Ability_Lion_Voodoo::~CDOTA_Ability_Lion_Voodoo  (line 338, @0x0000000002ac5700, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lion_Voodoo::~CDOTA_Ability_Lion_Voodoo(CDOTA_Ability_Lion_Voodoo *const this)
{
  this->_vptr_IHandleEntity = &off_43FE8F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lion_Voodoo::~CDOTA_Ability_Lion_Voodoo  (line 338, @0x0000000002ac5720, libserver.so)  // inlines: ~CDOTA_Ability_Lion_Voodoo
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lion_Voodoo::~CDOTA_Ability_Lion_Voodoo(CDOTA_Ability_Lion_Voodoo *const this)
{
  this->_vptr_IHandleEntity = &off_43FE8F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lion_Voodoo::Schema_DynamicBinding  (line 340, @0x0000000002ab9570, libserver.so)
// globals: CDOTA_Ability_Lion_Voodoo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_Voodoo::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_Voodoo *const this)
{
  return CDOTA_Ability_Lion_Voodoo::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 340, @0x0000000002ab9580, libserver.so)
// globals: CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::DestructInstance  (line 340, @0x0000000002ab9590, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lion_Voodoo>
void __fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::FreeInstance  (line 340, @0x0000000002ab95b0, libserver.so)
void __fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::CanAllocate  (line 340, @0x0000000002ab95d0, libserver.so)
bool __fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 340, @0x0000000002ab95e0, libserver.so)
// globals: CDOTA_Ability_Lion_Voodoo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_Voodoo::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::AllocateInstance  (line 340, @0x0000000002abef40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::ConstructInstance  (line 340, @0x0000000002ac2b70, libserver.so)  // inlines: CDOTA_Ability_Lion_Voodoo, Construct<CDOTA_Ability_Lion_Voodoo>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43FE8F0;
  }
  return p;
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 340, @0x0000000002acc0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 340, @0x0000000002acc0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal  (line 340, @0x0000000002adcea0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Lion_Voodoo"
// globals: `guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass, CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass, __dso_handle, CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo, CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass);
    CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass._vptr_CEntityClass = off_43FE870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass);
    __cxa_atexit(
      CDOTA_Ability_Lion_Voodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lion_VoodooClass != 0 )
    return &CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass;
  if ( `guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo,
      "CDOTA_Ability_Lion_Voodoo",
      "lion_voodoo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo);
  }
  CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass.m_pClassInfo = &CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo;
  CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass.m_pBaseClassInfo = CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lion_VoodooClass = &CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass;
  CDOTA_Ability_Lion_Voodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_VoodooClassInfo.m_pClass = &CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass;
  CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lion_VoodooClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lion_Voodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_VoodooClass;
}


// CDOTA_Ability_Lion_Voodoo::OnSpellStart  (line 353, @0x0000000002a9a530, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, IsMagicImmune, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::Kill, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_lion_voodoo", "Hero_Lion.Voodoo"
void __fastcall CDOTA_Ability_Lion_Voodoo::OnSpellStart(CDOTA_Ability_Lion_Voodoo *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x200) == 0
      && !v3->m_bIsWaitingToSpawn.m_Value
      && (v4 & 0x100) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      if ( v3->m_bIsIllusion.m_Value )
      {
        Caster = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(v3, this, Caster, 0.0, 0);
      }
      else
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_lion_voodoo");
        KeyValues::SetFloat(&kv, "duration", v5);
        v6 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_lion_voodoo", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Lion.Voodoo", 0.0, 0, 0);
    }
  }
}


// CDOTA_Ability_Lion_Voodoo::GetSlowDuration  (line 379, @0x0000000002a9b9c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Lion_Voodoo::GetSlowDuration(CDOTA_Ability_Lion_Voodoo *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Lion_Voodoo::~CDOTA_Modifier_Lion_Voodoo  (line 387, @0x0000000002ac16e0, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lion_Voodoo::~CDOTA_Modifier_Lion_Voodoo(CDOTA_Modifier_Lion_Voodoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lion_Voodoo::~CDOTA_Modifier_Lion_Voodoo  (line 387, @0x0000000002ac1700, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed, ~CDOTA_Modifier_Lion_Voodoo
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lion_Voodoo::~CDOTA_Modifier_Lion_Voodoo(CDOTA_Modifier_Lion_Voodoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lion_Voodoo::IsDebuff  (line 392, @0x0000000002ab95f0, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_Voodoo::IsDebuff(CDOTA_Modifier_Lion_Voodoo *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_Voodoo::GetEffectName  (line 396, @0x0000000002ab9600, libserver.so)
// strings: "particles/units/heroes/hero_lion/lion_spell_voodoo.vpcf"
const char *__fastcall CDOTA_Modifier_Lion_Voodoo::GetEffectName(CDOTA_Modifier_Lion_Voodoo *const this)
{
  return "particles/units/heroes/hero_lion/lion_spell_voodoo.vpcf";
}


// CDOTA_Modifier_Lion_Voodoo::GetHexType  (line 398, @0x0000000002ab9610, libserver.so)
// strings: "particles/world_creature_fx/frog.vpcf"
const char *__fastcall CDOTA_Modifier_Lion_Voodoo::GetHexType(CDOTA_Modifier_Lion_Voodoo *const this)
{
  return "particles/world_creature_fx/frog.vpcf";
}


// CDOTA_Modifier_Lion_Voodoo::GetDefaultHexModel  (line 399, @0x0000000002ab9620, libserver.so)
// strings: "models/props_gameplay/frog.vmdl"
const char *__fastcall CDOTA_Modifier_Lion_Voodoo::GetDefaultHexModel(CDOTA_Modifier_Lion_Voodoo *const this)
{
  return "models/props_gameplay/frog.vmdl";
}


// CDOTA_Modifier_Lion_Voodoo::GetMoveSpeedModifier  (line 400, @0x0000000002ab9630, libserver.so)
float __fastcall CDOTA_Modifier_Lion_Voodoo::GetMoveSpeedModifier(CDOTA_Modifier_Lion_Voodoo *const this)
{
  return this->movespeed;
}


// CDOTA_Modifier_Lion_Voodoo::OnCreated  (line 411, @0x0000000002aac700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Hexed::OnCreated, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle
// strings: "Hero_Lion.Hex.Target", "particles/units/heroes/hero_lion/lion_spell_voodoo_ambient.vpcf"
void __fastcall CDOTA_Modifier_Lion_Voodoo::OnCreated(CDOTA_Modifier_Lion_Voodoo *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed", -1, 0);
  else
    this->movespeed = 0;
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_Lion.Hex.Target");
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, ReplacementSound, 0.0, 0, 0);
  }
  CDOTA_Modifier_Hexed::OnCreated(this, pKV);
  v8 = CDOTA_Buff::GetCaster(this);
  v9 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_lion/lion_spell_voodoo_ambient.vpcf",
               1,
               v9,
               0,
               v8);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
}


// CDOTA_Ability_Lion_ManaDrain::~CDOTA_Ability_Lion_ManaDrain  (line 434, @0x0000000002ae62a0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Lion_ManaDrain::~CDOTA_Ability_Lion_ManaDrain(CDOTA_Ability_Lion_ManaDrain *const this)
{
  this->_vptr_IHandleEntity = &off_43FF730;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Victims);
  if ( (this->m_Victims.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Victims.m_Memory),
        (this->m_Victims.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Victims.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Lion_ManaDrain::~CDOTA_Ability_Lion_ManaDrain  (line 434, @0x0000000002ae6380, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Lion_ManaDrain, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Lion_ManaDrain::~CDOTA_Ability_Lion_ManaDrain(CDOTA_Ability_Lion_ManaDrain *const this)
{
  this->_vptr_IHandleEntity = &off_43FF730;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Victims);
  if ( (this->m_Victims.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Victims.m_Memory);
    if ( (this->m_Victims.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Victims.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lion_ManaDrain::Schema_DynamicBinding  (line 436, @0x0000000002ab9640, libserver.so)
// globals: CDOTA_Ability_Lion_ManaDrain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_ManaDrain::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_ManaDrain *const this)
{
  return CDOTA_Ability_Lion_ManaDrain::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 436, @0x0000000002ab9650, libserver.so)
// globals: CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::DestructInstance  (line 436, @0x0000000002ab9660, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lion_ManaDrain>
void __fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::FreeInstance  (line 436, @0x0000000002ab9680, libserver.so)
void __fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::CanAllocate  (line 436, @0x0000000002ab96a0, libserver.so)
bool __fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 436, @0x0000000002ab96b0, libserver.so)
// globals: CDOTA_Ability_Lion_ManaDrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_ManaDrain::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::AllocateInstance  (line 436, @0x0000000002abef80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::ConstructInstance  (line 436, @0x0000000002aca880, libserver.so)  // inlines: CDOTA_Ability_Lion_ManaDrain, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Lion_ManaDrain>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_43FF730;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 436, @0x0000000002acc100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 436, @0x0000000002acc120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal  (line 436, @0x0000000002adcff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Lion_ManaDrain"
// globals: `guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass, CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass, __dso_handle, CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo, CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass);
    CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass._vptr_CEntityClass = off_43FF6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass);
    __cxa_atexit(
      CDOTA_Ability_Lion_ManaDrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lion_ManaDrainClass != 0 )
    return &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass;
  if ( `guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo,
      "CDOTA_Ability_Lion_ManaDrain",
      "lion_mana_drain",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo);
  }
  CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass.m_pClassInfo = &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo;
  CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass.m_pBaseClassInfo = CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lion_ManaDrainClass = &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass;
  CDOTA_Ability_Lion_ManaDrain::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClassInfo.m_pClass = &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass;
  CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lion_ManaDrainClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lion_ManaDrain::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_ManaDrainClass;
}


// CDOTA_Ability_Lion_ManaDrain::WantsToChannelCancel  (line 449, @0x0000000002ab96c0, libserver.so)
bool __fastcall CDOTA_Ability_Lion_ManaDrain::WantsToChannelCancel(CDOTA_Ability_Lion_ManaDrain *const this)
{
  return 0;
}


// CDOTA_Ability_Lion_ManaDrain::GetStolenActivityModifier  (line 451, @0x0000000002ab96d0, libserver.so)
const char *__fastcall CDOTA_Ability_Lion_ManaDrain::GetStolenActivityModifier(
        CDOTA_Ability_Lion_ManaDrain *const this)
{
  return "mana_drain";
}


// CDOTA_Ability_Lion_ManaDrain::YouForgotToImplementOrDeclareServerClass  (line 458, @0x0000000002a77d20, libserver.so)
int __fastcall CDOTA_Ability_Lion_ManaDrain::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lion_ManaDrain *const this)
{
  return 0;
}


// CDOTA_Ability_Lion_ManaDrain::GetServerClass  (line 458, @0x0000000002a89730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lion_ManaDrain::GetServerClass(CDOTA_Ability_Lion_ManaDrain *const this)
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


// CDOTA_Ability_Lion_ManaDrain::OnSpellStart  (line 467, @0x0000000002ab0db0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius (19 total)
// strings: "modifier_lion_mana_drain", "special_bonus_unique_lion"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lion_ManaDrain::OnSpellStart(CDOTA_Ability_Lion_ManaDrain *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r15
  CDOTA_BaseNPC *v4; // rax
  unsigned __int64 m_Value; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v9; // cx
  __int64 m_Size; // rbx
  int v11; // eax
  CHandle<CBaseEntity> *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v15; // rbx
  int LevelSpecialValue; // eax
  __m128i v17; // xmm1
  float v18; // ebx
  CDOTA_BaseNPC *v19; // r13
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v21; // rax
  __int64 v22; // rbx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *v29; // rax
  __int16 v30; // cx
  __int64 v31; // r14
  int v32; // eax
  CHandle<CBaseEntity> *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  int iBonusTargets; // [rsp+34h] [rbp-8Ch]
  int v36; // [rsp+40h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    m_Value = v3->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0 && !v3->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_lion_mana_drain");
      KeyValues::SetFloat(&kv, "duration", v6);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_lion_mana_drain", &kv, 0);
      entities.m_Size = -1;
      m_pEntity = v3->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v9 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        entities.m_Size = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
      }
      m_Size = this->m_Victims.m_Size;
      v11 = this->m_Victims.m_Size;
      if ( m_Size == this->m_Victims.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_Victims.m_Memory, 1);
        v11 = this->m_Victims.m_Size;
      }
      this->m_Victims.m_Size = v11 + 1;
      v12 = &this->m_Victims.m_Memory.m_pMemory[m_Size];
      if ( v12 != 0 )
        v12->m_Index = entities.m_Size;
      v13 = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "special_bonus_unique_lion", 0);
      v15 = AbilityByName;
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      {
        iBonusTargets = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v15, "radius", 1, 1);
        if ( iBonusTargets > 0 )
        {
          *v17.m128i_i32 = LevelSpecialValue;
          entities.m_Size = 0;
          entities.m_Memory.m_pMemory = 0;
          entities.m_Memory.m_nAllocationCount = 0;
          entities.m_Memory.m_nGrowSize = 0;
          v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
          v19 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
          v21 = CDOTABaseAbility::GetCaster(this);
          FindUnitsInRadius(v21->m_iTeamNum.m_Value, AbsOrigin, v19, v18, &entities, 2, 19, 0, 0, 0);
          if ( entities.m_Size > 0 )
          {
            v22 = 0;
            do
            {
              v23 = &entities.m_Memory.m_pMemory[v22];
              m_Index = v23->m_Index;
              if ( v23->m_Index + 2 > 1 )
              {
                v25 = v23->m_Index;
                v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
                if ( v26 != 0 )
                {
                  v27 = &v26[v25 & 0x1FF];
                  if ( v27 != 0 && m_Index == v27->m_EHandle.m_Index )
                  {
                    m_pInstance = v27->m_pInstance;
                    if ( v27->m_pInstance != 0
                      && m_pInstance->m_bIsDOTANPC
                      && v3 != m_pInstance
                      && (*(this->_vptr_IHandleEntity + 256))(this, v27->m_pInstance) == 0 )
                    {
                      v29 = m_pInstance->m_pEntity;
                      v36 = -1;
                      if ( v29 != 0 )
                      {
                        v30 = 0x7FFF;
                        if ( v29->m_EHandle.m_Index != -1 )
                          v30 = v29->m_EHandle.m_Index & 0x7FFF;
                        v36 = (((v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1)) << 15) | v30 & 0x7FFF;
                      }
                      v31 = this->m_Victims.m_Size;
                      v32 = this->m_Victims.m_Size;
                      if ( v31 == this->m_Victims.m_Memory.m_nAllocationCount )
                      {
                        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_Victims.m_Memory, 1);
                        v32 = this->m_Victims.m_Size;
                      }
                      this->m_Victims.m_Size = v32 + 1;
                      v33 = &this->m_Victims.m_Memory.m_pMemory[v31];
                      if ( v33 != 0 )
                        v33->m_Index = v36;
                      v34 = CDOTABaseAbility::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, this, "modifier_lion_mana_drain", &kv, 0);
                      if ( --iBonusTargets == 0 )
                        break;
                    }
                  }
                }
              }
              ++v22;
            }
            while ( entities.m_Size > v22 );
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
        }
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Interrupt(v4);
  }
}


// CDOTA_Ability_Lion_ManaDrain::OnChannelThink  (line 530, @0x0000000002aadab0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::InterruptChannel, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove
// strings: "modifier_lion_mana_drain"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lion_ManaDrain::OnChannelThink(
        CDOTA_Ability_Lion_ManaDrain *const this,
        double a2,
        float flInterval)
{
  int m_Size; // eax
  int v5; // ebx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_Victims; // r14
  __int64 v7; // r12
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v15; // rax

  m_Size = this->m_Victims.m_Size;
  v5 = m_Size - 1;
  if ( m_Size - 1 < 0 )
    goto LABEL_13;
  p_m_Victims = &this->m_Victims;
  v7 = v5;
  do
  {
    while ( 1 )
    {
      v8 = &this->m_Victims.m_Memory.m_pMemory[v7];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        v10 = v8->m_Index;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
        if ( v11 == 0 )
          goto LABEL_3;
        v12 = &v11[v10 & 0x1FF];
        if ( v12 == 0 )
          goto LABEL_3;
        if ( m_Index != v12->m_EHandle.m_Index )
          goto LABEL_3;
        m_pInstance = v12->m_pInstance;
        if ( v12->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
          goto LABEL_3;
        if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_lion_mana_drain", 0) != 0 )
          break;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_Victims, v5);
      }
LABEL_3:
      --v5;
      --v7;
      if ( v5 == -1 )
        goto LABEL_12;
    }
    --v5;
    --v7;
    Caster = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::GetAbsOrigin(Caster);
    CBaseEntity::GetAbsOrigin(m_pInstance);
  }
  while ( v5 != -1 );
LABEL_12:
  m_Size = this->m_Victims.m_Size;
LABEL_13:
  if ( m_Size == 0 )
  {
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(v15);
  }
}


// CDOTA_Ability_Lion_ManaDrain::OnChannelFinish  (line 579, @0x0000000002aadbf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_lion_mana_drain"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lion_ManaDrain::OnChannelFinish(
        CDOTA_Ability_Lion_ManaDrain *const this,
        bool bInterrupted)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_Victims; // r12
  CHandle<CBaseEntity> *m_pMemory; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  p_m_Victims = &this->m_Victims;
  while ( this->m_Victims.m_Size > 0 )
  {
    m_pMemory = this->m_Victims.m_Memory.m_pMemory;
    m_Index = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v6 = m_pMemory->m_Index;
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[v6 & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          m_pInstance = v8->m_pInstance;
          if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_lion_mana_drain");
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_Victims, 0);
  }
}


// CDOTA_Ability_Lion_ManaDrain::CastFilterResult  (line 597, @0x0000000002a7b830, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Lion_ManaDrain::CastFilterResult(
        CDOTA_Ability_Lion_ManaDrain *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 2, 19, 128, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
  {
    result = 23;
    if ( pTarget->m_flMana.m_Value != 0.0 )
      return 0;
  }
  return result;
}


// CDOTA_Ability_Lion_ManaDrain::GetCustomCastError  (line 611, @0x0000000002a77d30, libserver.so)
// strings: "#dota_hud_error_only_cast_mana_units"
const char *__fastcall CDOTA_Ability_Lion_ManaDrain::GetCustomCastError(
        CDOTA_Ability_Lion_ManaDrain *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_only_cast_mana_units";
  if ( pTarget->m_flMana.m_Value != 0.0 )
    return "";
  return result;
}


// CDOTA_Modifier_Lion_ManaDrain::~CDOTA_Modifier_Lion_ManaDrain  (line 622, @0x0000000002ac1690, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lion_ManaDrain::~CDOTA_Modifier_Lion_ManaDrain(
        CDOTA_Modifier_Lion_ManaDrain *const this)
{
  this->_vptr_CDOTA_Buff = &off_44001F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lion_ManaDrain::~CDOTA_Modifier_Lion_ManaDrain  (line 622, @0x0000000002ac16b0, libserver.so)  // inlines: ~CDOTA_Modifier_Lion_ManaDrain
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lion_ManaDrain::~CDOTA_Modifier_Lion_ManaDrain(
        CDOTA_Modifier_Lion_ManaDrain *const this)
{
  this->_vptr_CDOTA_Buff = &off_44001F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lion_ManaDrain::IsDebuff  (line 632, @0x0000000002ab96e0, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_ManaDrain::IsDebuff(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_ManaDrain::IsPurgable  (line 633, @0x0000000002ab96f0, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_ManaDrain::IsPurgable(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  return 0;
}


// CDOTA_Modifier_Lion_ManaDrain::GetNumAvoidLocations  (line 645, @0x0000000002ab9700, libserver.so)
int __fastcall CDOTA_Modifier_Lion_ManaDrain::GetNumAvoidLocations(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_ManaDrain::GetAvoidLocation  (line 646, @0x0000000002ac3410, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Lion_ManaDrain::GetAvoidLocation(
        CDOTA_Modifier_Lion_ManaDrain *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Lion_ManaDrain::AvoidFilter  (line 647, @0x0000000002ac23b0, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Lion_ManaDrain::AvoidFilter(
        CDOTA_Modifier_Lion_ManaDrain *const this,
        CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) == pEntity;
}


// CDOTA_Modifier_Lion_ManaDrain::AvoidStrength  (line 648, @0x0000000002acd650, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Lion_ManaDrain::AvoidStrength(
        CDOTA_Modifier_Lion_ManaDrain *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v6 = (*&m_pInstance[44].m_iszPrivateVScripts.u.m_Id - 500.0) / 700.0;
  if ( v6 < 0.0 )
    return 0.60000002;
  result = 0.30000001;
  if ( v6 <= 1.0 )
    return (v6 * -0.30000001) + 0.60000002;
  return result;
}


// CDOTA_Modifier_Lion_ManaDrain::GetAvoidRadius  (line 649, @0x0000000002ab9710, libserver.so)
float __fastcall CDOTA_Modifier_Lion_ManaDrain::GetAvoidRadius(CDOTA_Modifier_Lion_ManaDrain *const this, int iAvoid)
{
  return this->break_distance + 100.0;
}


// CDOTA_Modifier_Lion_ManaDrain::IsAvoidMagical  (line 650, @0x0000000002ab9730, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_ManaDrain::IsAvoidMagical(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_ManaDrain::OnCreated  (line 671, @0x0000000002aacbe0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "mana_per_second", "break_distance", "special_bonus_unique_lion"
void __fastcall CDOTA_Modifier_Lion_ManaDrain::OnCreated(CDOTA_Modifier_Lion_ManaDrain *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // rax
  int v10; // eax
  float v11; // xmm0_4
  float tick_interval; // xmm0_4
  float flExtraRange; // [rsp+Ch] [rbp-14h]
  float flExtraRangea; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->mana_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "mana_per_second", -1, 0);
  else
    this->mana_per_second = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->break_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "break_distance", -1, 0);
  else
    this->break_distance = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "tick_interval", -1, 0);
  else
    this->tick_interval = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lion", 0);
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_iLevel.m_Value <= 0 )
      flExtraRange = 0.0;
    else
      flExtraRange = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  }
  else
  {
    flExtraRange = 0.0;
  }
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    flExtraRangea = this->break_distance + flExtraRange;
    v9 = CDOTA_Buff::GetAbility(this);
    v10 = (*(v9->_vptr_IHandleEntity + 228))(v9);
    v8 = flExtraRangea;
    this->break_distance = (v10 + flExtraRangea);
  }
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fAppliedTime = v11;
  tick_interval = this->tick_interval;
  this->m_nTotalManaDrained = 0;
  CDOTA_Buff::StartIntervalThink(this, tick_interval, v8);
}


// CDOTA_Modifier_Lion_ManaDrain::PerformDrain  (line 711, @0x0000000002a91820, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_BaseNPC::GiveMana
// callers: CDOTA_Modifier_Lion_ManaDrain::OnIntervalThink
void __fastcall CDOTA_Modifier_Lion_ManaDrain::PerformDrain(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // eax
  float v5; // xmm0_4
  int v6; // r13d
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v8; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(Caster, Parent) )
    {
      m_Value = Parent->m_flMana.m_Value;
      v5 = this->mana_per_second * this->tick_interval;
      if ( v5 <= m_Value )
        v6 = v5;
      else
        v6 = m_Value;
      CDOTA_BaseNPC::ReduceMana(Parent, v6, v6);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, Ability, Parent, v6);
      v8 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::GiveMana(v8, v6, 0, 1);
      this->m_nTotalManaDrained += v6;
    }
  }
}


// CDOTA_Modifier_Lion_ManaDrain::OnDestroy  (line 736, @0x0000000002a7c240, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::InterruptChannel
// strings: "special_bonus_unique_lion"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Lion_ManaDrain::OnDestroy(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Parent; // rax
  int m_nTotalManaDrained; // r13d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // rdi
  CDOTA_BaseNPC *v10; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lion", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
  {
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(v10);
  }
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
    {
      m_nTotalManaDrained = this->m_nTotalManaDrained;
      v6 = CDOTA_Buff::GetParent(this);
      if ( v6 == 0 || (v7 = v6, (v6->m_iUnitType & 1) == 0) )
        v7 = 0;
      v8 = CDOTA_Buff::GetCaster(this);
      if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
        v9 = v8;
      else
        v9 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v9,
        v7,
        kill_eater_event_t::kKillEaterEventType_Lion_ManaDrained,
        m_nTotalManaDrained,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Modifier_Lion_ManaDrain::OnIntervalThink  (line 761, @0x0000000002a91900, libserver.so)  // inlines: FastSqrt, GetDistanceToEntity, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Modifier_Lion_ManaDrain::PerformDrain, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Lion_ManaDrain::OnIntervalThink(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  CDOTA_BaseNPC *v2; // r12
  CDOTA_BaseNPC *v3; // r13
  const Vector *AbsOrigin; // r12
  const Vector *v5; // rax
  float v6; // xmm0_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Parent; // rax

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Kill(Parent, Ability, Caster, 0.0, 0);
  }
  else
  {
    v2 = CDOTA_Buff::GetCaster(this);
    v3 = CDOTA_Buff::GetParent(this);
    if ( v2 != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
      v5 = CBaseEntity::GetAbsOrigin(v3);
      v6 = fsqrt(
             (((v5->x - AbsOrigin->x) * (v5->x - AbsOrigin->x)) + ((v5->y - AbsOrigin->y) * (v5->y - AbsOrigin->y)))
           + ((v5->z - AbsOrigin->z) * (v5->z - AbsOrigin->z)));
    }
    else
    {
      v6 = -1.0;
    }
    if ( v6 > this->break_distance )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    else
      CDOTA_Modifier_Lion_ManaDrain::PerformDrain(this);
  }
}


// CDOTA_Modifier_Lion_ManaDrain::DeclareFunctions  (line 783, @0x0000000002a77d60, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lion_ManaDrain::DeclareFunctions(CDOTA_Modifier_Lion_ManaDrain *const this)
{
  this->m_Functions[151].__pfn = (&stru_10 + 697);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Lion_ManaDrain::Tooltip  (line 790, @0x0000000002a77d80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lion_ManaDrain::Tooltip(
        CDOTA_Modifier_Lion_ManaDrain *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->mana_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lion_FingerOfDeath::~CDOTA_Ability_Lion_FingerOfDeath  (line 801, @0x0000000002ac5750, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::~CDOTA_Ability_Lion_FingerOfDeath(
        CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  this->_vptr_IHandleEntity = &off_4400550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lion_FingerOfDeath::~CDOTA_Ability_Lion_FingerOfDeath  (line 801, @0x0000000002ac5770, libserver.so)  // inlines: ~CDOTA_Ability_Lion_FingerOfDeath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::~CDOTA_Ability_Lion_FingerOfDeath(
        CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  this->_vptr_IHandleEntity = &off_4400550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lion_FingerOfDeath::Schema_DynamicBinding  (line 803, @0x0000000002ab9740, libserver.so)
// globals: CDOTA_Ability_Lion_FingerOfDeath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_FingerOfDeath::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  return CDOTA_Ability_Lion_FingerOfDeath::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 803, @0x0000000002ab9750, libserver.so)
// globals: CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::DestructInstance  (line 803, @0x0000000002ab9760, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lion_FingerOfDeath>
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::FreeInstance  (line 803, @0x0000000002ab9780, libserver.so)
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::CanAllocate  (line 803, @0x0000000002ab97a0, libserver.so)
bool __fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 803, @0x0000000002ab97b0, libserver.so)
// globals: CDOTA_Ability_Lion_FingerOfDeath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lion_FingerOfDeath::s_pSchemaBinding;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::AllocateInstance  (line 803, @0x0000000002abefc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::ConstructInstance  (line 803, @0x0000000002ac2ba0, libserver.so)  // inlines: CDOTA_Ability_Lion_FingerOfDeath, Construct<CDOTA_Ability_Lion_FingerOfDeath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4400550;
  }
  return p;
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 803, @0x0000000002acc150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 803, @0x0000000002acc170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal  (line 803, @0x0000000002add140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Lion_FingerOfDeath"
// globals: `guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass, CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass, __dso_handle, CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo, CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass);
    CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass._vptr_CEntityClass = off_44004D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass);
    __cxa_atexit(
      CDOTA_Ability_Lion_FingerOfDeath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lion_FingerOfDeathClass != 0 )
    return &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass;
  if ( `guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo,
      "CDOTA_Ability_Lion_FingerOfDeath",
      "lion_finger_of_death",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo);
  }
  CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass.m_pClassInfo = &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo;
  CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass.m_pBaseClassInfo = CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lion_FingerOfDeathClass = &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass;
  CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClassInfo.m_pClass = &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass;
  CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lion_FingerOfDeathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lion_FingerOfDeath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lion_FingerOfDeathClass;
}


// CDOTA_Ability_Lion_FingerOfDeath::GetAOERadius  (line 809, @0x0000000002ae6590, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "splash_radius_scepter"
float __fastcall CDOTA_Ability_Lion_FingerOfDeath::GetAOERadius(CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "splash_radius_scepter", -1, 0);
  else
    return 0.0;
}


// CDOTA_Ability_Lion_FingerOfDeath::GetStolenActivityModifier  (line 815, @0x0000000002ab97c0, libserver.so)
// strings: "finger"
const char *__fastcall CDOTA_Ability_Lion_FingerOfDeath::GetStolenActivityModifier(
        CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  return "finger";
}


// CDOTA_Ability_Lion_FingerOfDeath::YouForgotToImplementOrDeclareServerClass  (line 824, @0x0000000002a77da0, libserver.so)
int __fastcall CDOTA_Ability_Lion_FingerOfDeath::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  return 0;
}


// CDOTA_Ability_Lion_FingerOfDeath::GetServerClass  (line 824, @0x0000000002a89770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lion_FingerOfDeath::GetServerClass(CDOTA_Ability_Lion_FingerOfDeath *const this)
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


// CDOTA_Ability_Lion_FingerOfDeath::OnSpellStart  (line 833, @0x0000000002a9bf20, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage (21 total)
// strings: "modifier_lion_finger_of_death", "Hero_Lion.FingerOfDeathImpact", "particles/units/heroes/hero_lion/lion_spell_finger_of_death.vpcf", "attach_attack2", "attach_hitloc", "Hero_Lion.FingerOfDeath" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lion_FingerOfDeath::OnSpellStart(CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  float v3; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  const Vector *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm3_4
  CDOTA_BaseNPC *v11; // rbx
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // r13
  CDOTA_ParticleManager *v18; // rax
  const CBaseAnimating *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  __int64 v21; // r13
  vec_t z; // r14d
  const CBaseAnimating *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  __m128i v29; // xmm0
  float v30; // r14d
  CDOTA_BaseNPC *v31; // r13
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v33; // rax
  __int64 v34; // rbx
  CHandle<CBaseEntity> *v35; // rdx
  uint32 m_Index; // eax
  __int16 v37; // cx
  CEntityIdentity *v38; // rdx
  CEntityIdentity *v39; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v41; // xmm1_4
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_BaseNPC *v46; // rax
  const Vector *v47; // rax
  CDOTA_BaseNPC *v48; // r14
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTA_BaseNPC *v54; // [rsp+38h] [rbp-88h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-38h]
  Vector vecFallbackPosition; // 0:^40.12
  Vector v59; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v60; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v61; // 0:xmm0_8.8,8:xmm1_4.4

  v57 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v54 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_delay", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_lion_finger_of_death");
      KeyValues::SetFloat(&kv, "duration", v3);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v54, Caster, this, "modifier_lion_finger_of_death", &kv, 0);
      KeyValues::~KeyValues(&kv);
      CDOTA_BaseNPC::UnitEmitSound(v54, "Hero_Lion.FingerOfDeathImpact", 0.0, 0, 0);
      v5 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(v5) )
      {
        *v29.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "splash_radius_scepter", -1, 0);
        v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
        entities.m_Size = 0;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        entities.m_Memory.m_nGrowSize = 0;
        v31 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v54);
        v33 = CDOTABaseAbility::GetCaster(this);
        FindUnitsInRadius(v33->m_iTeamNum.m_Value, AbsOrigin, v31, v30, &entities, 2, 19, 0, 0, 0);
        if ( entities.m_Size > 0 )
        {
          v34 = 0;
          do
          {
            while ( 1 )
            {
              v35 = &entities.m_Memory.m_pMemory[v34];
              m_Index = v35->m_Index;
              if ( v35->m_Index + 2 > 1 )
              {
                v37 = v35->m_Index;
                v38 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v35->m_Index) >> 9) & 0x3F];
                if ( v38 != 0 )
                {
                  v39 = &v38[v37 & 0x1FF];
                  if ( v39 != 0 && m_Index == v39->m_EHandle.m_Index )
                  {
                    m_pInstance = v39->m_pInstance;
                    if ( v39->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && v54 != m_pInstance )
                      break;
                  }
                }
              }
              if ( entities.m_Size <= ++v34 )
                goto LABEL_21;
            }
            KeyValues::KeyValues(&kv, "modifier_lion_finger_of_death");
            KeyValues::SetFloat(&kv, "duration", v41);
            v42 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v42, this, "modifier_lion_finger_of_death", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Lion.FingerOfDeathImpact", 0.0, 0, 0);
            v43 = CDOTABaseAbility::GetCaster(this);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_lion/lion_spell_finger_of_death.vpcf",
                         2,
                         0,
                         0,
                         v43);
            v46 = CDOTABaseAbility::GetCaster(this);
            v47 = CBaseEntity::GetAbsOrigin(v46);
            vecFallbackPosition.y = v47->y + 0.0;
            vecFallbackPosition.z = v47->z + 96.0;
            vecFallbackPosition.x = v47->x + 0.0;
            v48 = CDOTABaseAbility::GetCaster(this);
            v49 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              v49,
              Particle,
              0,
              v48,
              5,
              "attach_attack2",
              vecFallbackPosition,
              1);
            v50 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              v50,
              Particle,
              1,
              m_pInstance,
              5,
              "attach_hitloc",
              vec3_invalid,
              1);
            v51 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v51, Particle, 2, m_pInstance, 1, 0, vec3_invalid, 1);
            v52 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v52, Particle, 3, v54, 0, 0, vec3_invalid, 1);
            v53 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v53, Particle);
            KeyValues::~KeyValues(&kv);
            ++v34;
          }
          while ( entities.m_Size > v34 );
        }
LABEL_21:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      }
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v8 = CBaseEntity::GetAbsOrigin(v54);
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v9, 0, m_iAbilityID, 0, 0, *&v8->x, v8->z, -1.0, v10);
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = GetParticleManager();
    LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                     v12,
                     "particles/units/heroes/hero_lion/lion_spell_finger_of_death.vpcf",
                     2,
                     0,
                     0,
                     v11);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = CBaseEntity::GetAbsOrigin(v13);
    v15 = v14->y + 0.0;
    v16 = v14->z + 96.0;
    *&entities.m_Size = v14->x + 0.0;
    *(&entities.m_Size + 1) = v15;
    *&entities.m_Memory.m_pMemory = v16;
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v18, v11, 0, v17, 5, "attach_attack2", *&entities.m_Size, 1);
    v19 = CDOTABaseAbility::GetCursorTarget(this);
    v20 = GetParticleManager();
    v21 = *&vec3_invalid.x;
    z = vec3_invalid.z;
    *&v59.x = *&vec3_invalid.x;
    v59.z = z;
    CDOTA_ParticleManager::SetParticleControlEnt(v20, v11, 1, v19, 5, "attach_hitloc", v59, 1);
    v23 = CDOTABaseAbility::GetCursorTarget(this);
    v24 = GetParticleManager();
    *&v60.x = v21;
    v60.z = z;
    CDOTA_ParticleManager::SetParticleControlEnt(v24, v11, 2, v23, 1, 0, v60, 1);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = GetParticleManager();
    *&v61.x = v21;
    v61.z = z;
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v11, 3, v25, 0, 0, v61, 1);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v27, v11);
    v28 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_Lion.FingerOfDeath", 0.0, 0, 0);
  }
}


// CDOTA_Ability_Lion_FingerOfDeath::GetAbilityDamage  (line 899, @0x0000000002aa0de0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Lion_FingerOfDeath::GetAbilityDamage(CDOTA_Ability_Lion_FingerOfDeath *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v4; // rsi

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = "damage_scepter";
  if ( !HasScepter )
    v4 = "damage";
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v4, -1, 0);
}


// CDOTA_Ability_Lion_FingerOfDeath::GetManaCost  (line 906, @0x0000000002aa0e20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetManaCost, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_cost_scepter"
int __fastcall CDOTA_Ability_Lion_FingerOfDeath::GetManaCost(CDOTA_Ability_Lion_FingerOfDeath *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_cost_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Ability_Lion_FingerOfDeath::GetCooldown  (line 918, @0x0000000002a9b9e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Lion_FingerOfDeath::GetCooldown(
        CDOTA_Ability_Lion_FingerOfDeath *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Lion_FingerOfDeath::GetAbilityDamageToTargetOverInterval  (line 930, @0x0000000002aa0e70, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lion_FingerOfDeath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lion_FingerOfDeath *const this,
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


// CDOTA_Modifier_Lion_FingerOfDeath::~CDOTA_Modifier_Lion_FingerOfDeath  (line 941, @0x0000000002ac1640, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lion_FingerOfDeath::~CDOTA_Modifier_Lion_FingerOfDeath(
        CDOTA_Modifier_Lion_FingerOfDeath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4401010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lion_FingerOfDeath::~CDOTA_Modifier_Lion_FingerOfDeath  (line 941, @0x0000000002ac1660, libserver.so)  // inlines: ~CDOTA_Modifier_Lion_FingerOfDeath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lion_FingerOfDeath::~CDOTA_Modifier_Lion_FingerOfDeath(
        CDOTA_Modifier_Lion_FingerOfDeath *const this)
{
  this->_vptr_CDOTA_Buff = &off_4401010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lion_FingerOfDeath::IsDebuff  (line 946, @0x0000000002ab97d0, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_FingerOfDeath::IsDebuff(CDOTA_Modifier_Lion_FingerOfDeath *const this)
{
  return 1;
}


// CDOTA_Modifier_Lion_FingerOfDeath::IsPurgable  (line 947, @0x0000000002ab97e0, libserver.so)
bool __fastcall CDOTA_Modifier_Lion_FingerOfDeath::IsPurgable(CDOTA_Modifier_Lion_FingerOfDeath *const this)
{
  return 0;
}


// CDOTA_Modifier_Lion_FingerOfDeath::OnDestroy  (line 954, @0x0000000002a7a800, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, EconEntity_OnOwnerKillEaterEvent
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Lion_FingerOfDeath::OnDestroy(CDOTA_Modifier_Lion_FingerOfDeath *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // rdi

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3, 2, 0);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    v7 = CDOTA_Buff::GetParent(this);
    if ( (v7->m_iUnitType & 1) != 0 && !v7->m_bIsIllusion.m_Value )
    {
      v8 = CDOTA_Buff::GetParent(this);
      if ( (*(v8->_vptr_IHandleEntity + 408))(v8) == 0 )
      {
        v9 = CDOTA_Buff::GetParent(this);
        if ( v9 == 0 || (v10 = v9, (v9->m_iUnitType & 1) == 0) )
          v10 = 0;
        v11 = CDOTA_Buff::GetCaster(this);
        if ( v11 != 0 && (v11->m_iUnitType & 1) != 0 )
          v12 = v11;
        else
          v12 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v12,
          v10,
          kill_eater_event_t::kKillEaterEventType_Lion_FingerKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
  }
}


