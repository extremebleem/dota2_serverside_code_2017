// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:40
class CDOTA_Unit_Hero_Bane : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Bane(CDOTA_Unit_Hero_Bane &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Bane();
	virtual ~CDOTA_Unit_Hero_Bane();
	virtual bool OnLoadState(KeyValues *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:57
class C_CDOTA_Unit_Hero_Bane_MapInstall {
	C_CDOTA_Unit_Hero_Bane_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:87
class CDOTA_Ability_Bane_Enfeeble : public CDOTABaseAbility {
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
	CDOTA_Ability_Bane_Enfeeble(CDOTA_Ability_Bane_Enfeeble &);
	CDOTA_Ability_Bane_Enfeeble(CDOTA_Ability_Bane_Enfeeble &);
	CDOTA_Ability_Bane_Enfeeble();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Bane_Enfeeble();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:123
class CDOTA_Modifier_Bane_Enfeeble : public CDOTA_Buff {
public:

private:

	int enfeeble_attack_reduction;  // +0xba8
	CDOTA_Modifier_Bane_Enfeeble();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Bane_Enfeeble();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:196
class CDOTA_Ability_Bane_BrainSap : public CDOTABaseAbility {
public:

private:

	int brain_sap_damage;  // +0x390
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
	CDOTA_Ability_Bane_BrainSap(CDOTA_Ability_Bane_BrainSap &);
	CDOTA_Ability_Bane_BrainSap(CDOTA_Ability_Bane_BrainSap &);
	CDOTA_Ability_Bane_BrainSap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetStolenActivityModifier();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Bane_BrainSap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[310] GetStolenActivityModifier
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:266
class CDOTA_Ability_Bane_Nightmare : public CDOTABaseAbility {
public:

private:

	int m_nNightmareSwapCount;  // +0x390
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
	CDOTA_Ability_Bane_Nightmare(CDOTA_Ability_Bane_Nightmare &);
	CDOTA_Ability_Bane_Nightmare(CDOTA_Ability_Bane_Nightmare &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Bane_Nightmare();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	void SetNightmareSwapCount(int);
	int GetNightmareSwapCount();
	virtual ~CDOTA_Ability_Bane_Nightmare();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// vtable[240] GetPotentialAbuseType
	// vtable[256] CastFilterResult
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:397
class CDOTA_Ability_Bane_NightmareEnd : public CDOTABaseAbility {
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
	CDOTA_Ability_Bane_NightmareEnd(CDOTA_Ability_Bane_NightmareEnd &);
	CDOTA_Ability_Bane_NightmareEnd(CDOTA_Ability_Bane_NightmareEnd &);
	CDOTA_Ability_Bane_NightmareEnd();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnToggle();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Bane_NightmareEnd();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[270] OnToggle
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:437
class CDOTA_Modifier_Bane_Nightmare : public CDOTA_Buff {
public:

private:

	int m_nSource;  // +0xba8
	float animation_rate;  // +0xbac
	CDOTA_Modifier_Bane_Nightmare();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool CanParentBeAutoAttacked();
	virtual bool IsDebuff();
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	ModifierVariant_t GetFixedVision(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Bane_Nightmare();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[13] CanParentBeAutoAttacked
	// vtable[12] IsDebuff
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:634
class CDOTA_Modifier_Bane_Nightmare_Invulnerable : public CDOTA_Modifier_Invulnerable {
public:

	CDOTA_Modifier_Bane_Nightmare_Invulnerable(CDOTA_Modifier_Bane_Nightmare_Invulnerable &);
	CDOTA_Modifier_Bane_Nightmare_Invulnerable(const CDOTA_Modifier_Bane_Nightmare_Invulnerable &);
	CDOTA_Modifier_Bane_Nightmare_Invulnerable();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Bane_Nightmare_Invulnerable();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:653
class CDOTA_Ability_Bane_FiendsGrip : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hGripTarget;  // +0x390
	int fiend_grip_damage;  // +0x394
	int fiend_grip_damage_scepter;  // +0x398
	float fiend_grip_duration_scepter;  // +0x39c
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
	CDOTA_Ability_Bane_FiendsGrip(CDOTA_Ability_Bane_FiendsGrip &);
	CDOTA_Ability_Bane_FiendsGrip(CDOTA_Ability_Bane_FiendsGrip &);
	CDOTA_Ability_Bane_FiendsGrip();
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
	virtual int GetAbilityDamage();
	virtual float GetChannelTime();
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Bane_FiendsGrip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[247] GetAbilityDamage
	// vtable[225] GetChannelTime
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:677
class C_CDOTA_Ability_Bane_FiendsGrip_MapInstall {
	C_CDOTA_Ability_Bane_FiendsGrip_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:819
class CDOTA_Modifier_Bane_FiendsGrip : public CDOTA_Buff {
public:

private:

	int fiend_grip_mana_drain;  // +0xba8
	CDOTA_Modifier_Bane_FiendsGrip();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t OnAbilityEndChannel(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual ~CDOTA_Modifier_Bane_FiendsGrip();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bane.cpp:979
class CDOTA_Modifier_Bane_FiendsGrip_Self : public CDOTA_Buff {
public:

	CDOTA_Modifier_Bane_FiendsGrip_Self(CDOTA_Modifier_Bane_FiendsGrip_Self &);
	CDOTA_Modifier_Bane_FiendsGrip_Self(const CDOTA_Modifier_Bane_FiendsGrip_Self &);
	CDOTA_Modifier_Bane_FiendsGrip_Self();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual bool CanParentBeAutoAttacked();
	virtual ~CDOTA_Modifier_Bane_FiendsGrip_Self();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[13] CanParentBeAutoAttacked
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Bane::Schema_DynamicBinding  (line 42, @0x0000000002a077b0, libserver.so)
// globals: CDOTA_Unit_Hero_Bane::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bane::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bane *const this)
{
  return CDOTA_Unit_Hero_Bane::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002a077e0, libserver.so)
// globals: CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002a077f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Bane>
void __fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002a07810, libserver.so)
void __fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002a07830, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002a07840, libserver.so)
// globals: CDOTA_Unit_Hero_Bane::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bane::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002a0ef40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002a132f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Bane, Construct<CDOTA_Unit_Hero_Bane>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_431E850;
    *(p + 236) = &off_431F830;
    *(p + 257) = &off_431FB60;
  }
  return p;
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a207b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a20a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Bane::GetEntityClassInternal  (line 42, @0x0000000002a3c230, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_bane", "CDOTA_Unit_Hero_Bane"
// globals: `guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass, CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass, __dso_handle, CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo, CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Bane::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass);
    CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass._vptr_CEntityClass = off_431E7D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Bane::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BaneClass != 0 )
    return &CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo,
      "CDOTA_Unit_Hero_Bane",
      "npc_dota_hero_bane",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo);
  }
  CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass.m_pClassInfo = &CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo;
  CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BaneClass = &CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass;
  CDOTA_Unit_Hero_Bane::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BaneClassInfo.m_pClass = &CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass;
  CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BaneClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Bane::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BaneClass;
}


// CDOTA_Unit_Hero_Bane::~CDOTA_Unit_Hero_Bane  (line 50, @0x0000000002a182f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Bane::~CDOTA_Unit_Hero_Bane(CDOTA_Unit_Hero_Bane *const this)
{
  this->_vptr_IHandleEntity = &off_431E850;
  this->_vptr_INextBotEventResponder = &off_431F830;
  this->_vptr_CObstructionObject = &off_431FB60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Bane::~CDOTA_Unit_Hero_Bane  (line 50, @0x0000000002a18330, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Bane
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Bane::~CDOTA_Unit_Hero_Bane(CDOTA_Unit_Hero_Bane *const this)
{
  this->_vptr_IHandleEntity = &off_431E850;
  this->_vptr_INextBotEventResponder = &off_431F830;
  this->_vptr_CObstructionObject = &off_431FB60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Bane::YouForgotToImplementOrDeclareServerClass  (line 57, @0x00000000029b42c0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Bane::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Bane *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Bane::GetServerClass  (line 57, @0x00000000029c93f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Bane::GetServerClass(CDOTA_Unit_Hero_Bane *const this)
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


// CDOTA_Unit_Hero_Bane::OnLoadState  (line 66, @0x00000000029b66b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "bane_nightmare_end"
bool __fastcall CDOTA_Unit_Hero_Bane::OnLoadState(CDOTA_Unit_Hero_Bane *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "bane_nightmare", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "bane_nightmare", "bane_nightmare_end", 1, 0);
  return 1;
}


// CDOTA_Ability_Bane_Enfeeble::~CDOTA_Ability_Bane_Enfeeble  (line 87, @0x0000000002a16890, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bane_Enfeeble::~CDOTA_Ability_Bane_Enfeeble(CDOTA_Ability_Bane_Enfeeble *const this)
{
  this->_vptr_IHandleEntity = &off_431FC30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bane_Enfeeble::~CDOTA_Ability_Bane_Enfeeble  (line 87, @0x0000000002a168b0, libserver.so)  // inlines: ~CDOTA_Ability_Bane_Enfeeble
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bane_Enfeeble::~CDOTA_Ability_Bane_Enfeeble(CDOTA_Ability_Bane_Enfeeble *const this)
{
  this->_vptr_IHandleEntity = &off_431FC30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bane_Enfeeble::Schema_DynamicBinding  (line 89, @0x0000000002a07850, libserver.so)
// globals: CDOTA_Ability_Bane_Enfeeble::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_Enfeeble::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_Enfeeble *const this)
{
  return CDOTA_Ability_Bane_Enfeeble::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 89, @0x0000000002a07860, libserver.so)
// globals: CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::DestructInstance  (line 89, @0x0000000002a07870, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bane_Enfeeble>
void __fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::FreeInstance  (line 89, @0x0000000002a07890, libserver.so)
void __fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::CanAllocate  (line 89, @0x0000000002a078b0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 89, @0x0000000002a078c0, libserver.so)
// globals: CDOTA_Ability_Bane_Enfeeble::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_Enfeeble::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::AllocateInstance  (line 89, @0x0000000002a0ef80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::ConstructInstance  (line 89, @0x0000000002a13b50, libserver.so)  // inlines: CDOTA_Ability_Bane_Enfeeble, Construct<CDOTA_Ability_Bane_Enfeeble>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_431FC30;
  }
  return p;
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x0000000002a1ec30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x0000000002a1ec50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal  (line 89, @0x0000000002a34d60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Bane_Enfeeble"
// globals: `guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass, CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass, __dso_handle, CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo, CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass);
    CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass._vptr_CEntityClass = off_431FBB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass);
    __cxa_atexit(
      CDOTA_Ability_Bane_Enfeeble::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bane_EnfeebleClass != 0 )
    return &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass;
  if ( `guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo,
      "CDOTA_Ability_Bane_Enfeeble",
      "bane_enfeeble",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo);
  }
  CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass.m_pClassInfo = &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo;
  CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass.m_pBaseClassInfo = CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bane_EnfeebleClass = &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass;
  CDOTA_Ability_Bane_Enfeeble::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClassInfo.m_pClass = &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass;
  CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bane_EnfeebleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bane_Enfeeble::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_EnfeebleClass;
}


// CDOTA_Ability_Bane_Enfeeble::GetGestureBasedActivity  (line 95, @0x0000000002a078d0, libserver.so)
Activity __fastcall CDOTA_Ability_Bane_Enfeeble::GetGestureBasedActivity(CDOTA_Ability_Bane_Enfeeble *const this)
{
  return 1674;
}


// CDOTA_Ability_Bane_Enfeeble::OnSpellStart  (line 103, @0x00000000029c08b0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "Hero_Bane.Enfeeble.Cast", "modifier_bane_enfeeble", "Hero_Bane.Enfeeble"
void __fastcall CDOTA_Ability_Bane_Enfeeble::OnSpellStart(CDOTA_Ability_Bane_Enfeeble *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // rbx
  __int64 v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Bane.Enfeeble.Cast", 0.0, 0, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v5 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v5 & 0x100) == 0 && (v5 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_bane_enfeeble");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v6);
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, v7, this, "modifier_bane_enfeeble", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Bane.Enfeeble", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Bane_Enfeeble::~CDOTA_Modifier_Bane_Enfeeble  (line 123, @0x0000000002a129c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bane_Enfeeble::~CDOTA_Modifier_Bane_Enfeeble(CDOTA_Modifier_Bane_Enfeeble *const this)
{
  this->_vptr_CDOTA_Buff = &off_43206F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bane_Enfeeble::~CDOTA_Modifier_Bane_Enfeeble  (line 123, @0x0000000002a129e0, libserver.so)  // inlines: ~CDOTA_Modifier_Bane_Enfeeble
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bane_Enfeeble::~CDOTA_Modifier_Bane_Enfeeble(CDOTA_Modifier_Bane_Enfeeble *const this)
{
  this->_vptr_CDOTA_Buff = &off_43206F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bane_Enfeeble::IsDebuff  (line 134, @0x0000000002a078e0, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_Enfeeble::IsDebuff(CDOTA_Modifier_Bane_Enfeeble *const this)
{
  return 1;
}


// CDOTA_Modifier_Bane_Enfeeble::IsPurgable  (line 135, @0x0000000002a078f0, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_Enfeeble::IsPurgable(CDOTA_Modifier_Bane_Enfeeble *const this)
{
  return 0;
}


// CDOTA_Modifier_Bane_Enfeeble::OnCreated  (line 146, @0x00000000029f83b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "enfeeble_attack_reduction", "special_bonus_unique_bane_1"
void __fastcall CDOTA_Modifier_Bane_Enfeeble::OnCreated(CDOTA_Modifier_Bane_Enfeeble *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->enfeeble_attack_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "enfeeble_attack_reduction",
                                        -1,
                                        0);
  else
    this->enfeeble_attack_reduction = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_bane_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->enfeeble_attack_reduction = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1)
                                     + this->enfeeble_attack_reduction);
}


// CDOTA_Modifier_Bane_Enfeeble::OnRefresh  (line 165, @0x00000000029f8130, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "enfeeble_attack_reduction", "special_bonus_unique_bane_1"
void __fastcall CDOTA_Modifier_Bane_Enfeeble::OnRefresh(CDOTA_Modifier_Bane_Enfeeble *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->enfeeble_attack_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "enfeeble_attack_reduction",
                                        -1,
                                        0);
  else
    this->enfeeble_attack_reduction = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_bane_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->enfeeble_attack_reduction = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1)
                                     + this->enfeeble_attack_reduction);
}


// CDOTA_Modifier_Bane_Enfeeble::DeclareFunctions  (line 178, @0x00000000029b42d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bane_Enfeeble::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bane_Enfeeble::DeclareFunctions(CDOTA_Modifier_Bane_Enfeeble *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Bane_Enfeeble::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Bane_Enfeeble::GetModifierPreAttack_BonusDamage  (line 185, @0x00000000029b42f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Enfeeble::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Bane_Enfeeble *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->enfeeble_attack_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Bane_BrainSap::~CDOTA_Ability_Bane_BrainSap  (line 196, @0x0000000002a168e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bane_BrainSap::~CDOTA_Ability_Bane_BrainSap(CDOTA_Ability_Bane_BrainSap *const this)
{
  this->_vptr_IHandleEntity = &off_4320A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bane_BrainSap::~CDOTA_Ability_Bane_BrainSap  (line 196, @0x0000000002a16900, libserver.so)  // inlines: ~CDOTA_Ability_Bane_BrainSap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bane_BrainSap::~CDOTA_Ability_Bane_BrainSap(CDOTA_Ability_Bane_BrainSap *const this)
{
  this->_vptr_IHandleEntity = &off_4320A50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bane_BrainSap::Schema_DynamicBinding  (line 198, @0x0000000002a07900, libserver.so)
// globals: CDOTA_Ability_Bane_BrainSap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_BrainSap::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_BrainSap *const this)
{
  return CDOTA_Ability_Bane_BrainSap::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 198, @0x0000000002a07910, libserver.so)
// globals: CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::DestructInstance  (line 198, @0x0000000002a07920, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bane_BrainSap>
void __fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::FreeInstance  (line 198, @0x0000000002a07940, libserver.so)
void __fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::CanAllocate  (line 198, @0x0000000002a07960, libserver.so)
bool __fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 198, @0x0000000002a07970, libserver.so)
// globals: CDOTA_Ability_Bane_BrainSap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_BrainSap::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::AllocateInstance  (line 198, @0x0000000002a0efc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::ConstructInstance  (line 198, @0x0000000002a13b80, libserver.so)  // inlines: CDOTA_Ability_Bane_BrainSap, Construct<CDOTA_Ability_Bane_BrainSap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4320A50;
  }
  return p;
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002a1ec80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002a1eca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal  (line 198, @0x0000000002a34eb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "bane_brain_sap", "CDOTA_Ability_Bane_BrainSap"
// globals: `guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass, CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass, __dso_handle, CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo, CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass);
    CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass._vptr_CEntityClass = off_43209D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass);
    __cxa_atexit(
      CDOTA_Ability_Bane_BrainSap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bane_BrainSapClass != 0 )
    return &CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass;
  if ( `guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo,
      "CDOTA_Ability_Bane_BrainSap",
      "bane_brain_sap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo);
  }
  CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass.m_pClassInfo = &CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo;
  CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass.m_pBaseClassInfo = CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bane_BrainSapClass = &CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass;
  CDOTA_Ability_Bane_BrainSap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_BrainSapClassInfo.m_pClass = &CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass;
  CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bane_BrainSapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bane_BrainSap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_BrainSapClass;
}


// CDOTA_Ability_Bane_BrainSap::GetStolenActivityModifier  (line 201, @0x0000000002a07980, libserver.so)
const char *__fastcall CDOTA_Ability_Bane_BrainSap::GetStolenActivityModifier(CDOTA_Ability_Bane_BrainSap *const this)
{
  return "brain_sap";
}


// CDOTA_Ability_Bane_BrainSap::OnSpellStart  (line 215, @0x00000000029ee890, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage (13 total)
// strings: "Hero_Bane.BrainSap.Target", "particles/units/heroes/hero_bane/bane_sap.vpcf", "attach_ability1", "attach_hitloc", "brain_sap_damage", "special_bonus_unique_bane_2" (7 total)
void __fastcall CDOTA_Ability_Bane_BrainSap::OnSpellStart(CDOTA_Ability_Bane_BrainSap *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v6; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v8; // r14
  const CBaseAnimating *v9; // r15
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  vec_t flDamagea; // [rsp+Ch] [rbp-34h]
  float flDamage; // [rsp+Ch] [rbp-34h]
  Vector v20; // 0:xmm0_8.8,8:xmm1_4.4

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Bane.BrainSap.Target", 0.0, 0, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_bane/bane_sap.vpcf",
                              2,
                              Caster,
                              0);
    v6 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    v8 = *&vec3_invalid.x;
    flDamagea = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      AbilityParticleEffect,
      0,
      v6,
      5,
      "attach_ability1",
      vec3_invalid,
      1);
    v9 = CDOTABaseAbility::GetCursorTarget(this);
    v10 = GetParticleManager();
    *&v20.x = v8;
    v20.z = flDamagea;
    CDOTA_ParticleManager::SetParticleControlEnt(v10, AbilityParticleEffect, 1, v9, 5, "attach_hitloc", v20, 1);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, AbilityParticleEffect);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "brain_sap_damage", -1, 0);
    this->brain_sap_damage = LevelSpecialValue;
    flDamage = LevelSpecialValue;
    v13 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v13, "special_bonus_unique_bane_2", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1) + flDamage;
    v15 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v15, v3, this, flDamage, 4, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Heal(v16, flDamage, this, 0, 1);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v17, "Hero_Bane.BrainSap", 0.0, 0, 0);
  }
}


// CDOTA_Ability_Bane_BrainSap::GetAbilityDamageToTargetOverInterval  (line 249, @0x00000000029e3650, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "brain_sap_damage"
int __fastcall CDOTA_Ability_Bane_BrainSap::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Bane_BrainSap *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  int result; // eax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    result = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "brain_sap_damage", -1, 0);
    this->brain_sap_damage = result;
  }
  return result;
}


// CDOTA_Ability_Bane_Nightmare::~CDOTA_Ability_Bane_Nightmare  (line 266, @0x0000000002a16930, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bane_Nightmare::~CDOTA_Ability_Bane_Nightmare(CDOTA_Ability_Bane_Nightmare *const this)
{
  this->_vptr_IHandleEntity = &off_4321550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bane_Nightmare::~CDOTA_Ability_Bane_Nightmare  (line 266, @0x0000000002a16950, libserver.so)  // inlines: ~CDOTA_Ability_Bane_Nightmare
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bane_Nightmare::~CDOTA_Ability_Bane_Nightmare(CDOTA_Ability_Bane_Nightmare *const this)
{
  this->_vptr_IHandleEntity = &off_4321550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bane_Nightmare::Schema_DynamicBinding  (line 268, @0x0000000002a07990, libserver.so)
// globals: CDOTA_Ability_Bane_Nightmare::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_Nightmare::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_Nightmare *const this)
{
  return CDOTA_Ability_Bane_Nightmare::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 268, @0x0000000002a079a0, libserver.so)
// globals: CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::DestructInstance  (line 268, @0x0000000002a079b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bane_Nightmare>
void __fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::FreeInstance  (line 268, @0x0000000002a079d0, libserver.so)
void __fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::CanAllocate  (line 268, @0x0000000002a079f0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 268, @0x0000000002a07a00, libserver.so)
// globals: CDOTA_Ability_Bane_Nightmare::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_Nightmare::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::AllocateInstance  (line 268, @0x0000000002a0f000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::ConstructInstance  (line 268, @0x0000000002a13bb0, libserver.so)  // inlines: CDOTA_Ability_Bane_Nightmare, Construct<CDOTA_Ability_Bane_Nightmare>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4321550;
  }
  return p;
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 268, @0x0000000002a1ecd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 268, @0x0000000002a1ecf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal  (line 268, @0x0000000002a35000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Bane_Nightmare"
// globals: `guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass, CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass, __dso_handle, CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo, CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass);
    CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass._vptr_CEntityClass = off_43214D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass);
    __cxa_atexit(
      CDOTA_Ability_Bane_Nightmare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bane_NightmareClass != 0 )
    return &CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass;
  if ( `guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo,
      "CDOTA_Ability_Bane_Nightmare",
      "bane_nightmare",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo);
  }
  CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass.m_pClassInfo = &CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo;
  CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass.m_pBaseClassInfo = CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bane_NightmareClass = &CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass;
  CDOTA_Ability_Bane_Nightmare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareClassInfo.m_pClass = &CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass;
  CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bane_NightmareClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bane_Nightmare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareClass;
}


// CDOTA_Ability_Bane_Nightmare::GetAssociatedSecondaryAbilities  (line 280, @0x0000000002a07a10, libserver.so)
// strings: "bane_nightmare_end"
const char *__fastcall CDOTA_Ability_Bane_Nightmare::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Bane_Nightmare *const this)
{
  return "bane_nightmare_end";
}


// CDOTA_Ability_Bane_Nightmare::IsHiddenWhenStolen  (line 281, @0x0000000002a07a20, libserver.so)
bool __fastcall CDOTA_Ability_Bane_Nightmare::IsHiddenWhenStolen(CDOTA_Ability_Bane_Nightmare *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_Nightmare::GetPotentialAbuseType  (line 283, @0x0000000002a07a30, libserver.so)
EAbilityAbuseType __fastcall CDOTA_Ability_Bane_Nightmare::GetPotentialAbuseType(
        CDOTA_Ability_Bane_Nightmare *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_Bane_Nightmare;
}


// CDOTA_Ability_Bane_Nightmare::OnUpgrade  (line 300, @0x00000000029b7d00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "bane_nightmare_end"
void __fastcall CDOTA_Ability_Bane_Nightmare::OnUpgrade(CDOTA_Ability_Bane_Nightmare *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "bane_nightmare_end", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount  (line 315, @0x00000000029cda80, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities
// callers: CDOTA_Modifier_Bane_Nightmare::OnDestroy, CDOTA_Modifier_Bane_Nightmare::OnCreated
// strings: "bane_nightmare_end"
void __fastcall CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount(
        CDOTA_Ability_Bane_Nightmare *const this,
        int nCount)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax

  if ( this->m_nNightmareSwapCount != 0 )
  {
    if ( this->m_nNightmareSwapCount <= 0 || nCount != 0 )
      goto LABEL_3;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "bane_nightmare", "bane_nightmare_end", 1, 0);
    this->m_nNightmareSwapCount = nCount;
  }
  else
  {
    if ( nCount <= 0 )
    {
LABEL_3:
      this->m_nNightmareSwapCount = nCount;
      return;
    }
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v5, "bane_nightmare", "bane_nightmare_end", 0, 1);
    this->m_nNightmareSwapCount = nCount;
  }
}


// CDOTA_Ability_Bane_Nightmare::GetNightmareSwapCount  (line 331, @0x00000000029cdc00, libserver.so)
int __fastcall CDOTA_Ability_Bane_Nightmare::GetNightmareSwapCount(CDOTA_Ability_Bane_Nightmare *const this)
{
  return this->m_nNightmareSwapCount;
}


// CDOTA_Ability_Bane_Nightmare::OnSpellStart  (line 339, @0x00000000029dd2d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "Hero_Bane.Nightmare", "nightmare_dot_interval", "modifier_bane_nightmare"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Bane_Nightmare::OnSpellStart(CDOTA_Ability_Bane_Nightmare *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v4; // rbx
  CDOTA_Buff *ModifierByName; // rdi
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // rdi
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Bane.Nightmare", 0.0, 0, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "nightmare_dot_interval", -1, 0);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v4, "modifier_bane_nightmare", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_bane_nightmare");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v6);
    KeyValues::SetInt(&kv, "source", 0);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v7, this, "modifier_bane_nightmare", &kv, 0);
    if ( (v4[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 && LOBYTE(v4[4].m_pfnMoveDone.__delta) == 0 )
    {
      v8 = CDOTABaseAbility::GetCaster(this);
      if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
        v9 = v8;
      else
        v9 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v9,
        0,
        kill_eater_event_t::kKillEaterEvent_DreamLeague_DreamPoints,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    CancelAttacksOfNPCsAttacking(v4);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Bane_Nightmare::CastFilterResult  (line 374, @0x00000000029b9b50, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Bane_Nightmare::CastFilterResult(
        CDOTA_Ability_Bane_Nightmare *const this,
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


// CDOTA_Ability_Bane_NightmareEnd::~CDOTA_Ability_Bane_NightmareEnd  (line 397, @0x0000000002a16980, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bane_NightmareEnd::~CDOTA_Ability_Bane_NightmareEnd(
        CDOTA_Ability_Bane_NightmareEnd *const this)
{
  this->_vptr_IHandleEntity = &off_4322050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bane_NightmareEnd::~CDOTA_Ability_Bane_NightmareEnd  (line 397, @0x0000000002a169a0, libserver.so)  // inlines: ~CDOTA_Ability_Bane_NightmareEnd
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bane_NightmareEnd::~CDOTA_Ability_Bane_NightmareEnd(
        CDOTA_Ability_Bane_NightmareEnd *const this)
{
  this->_vptr_IHandleEntity = &off_4322050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bane_NightmareEnd::Schema_DynamicBinding  (line 399, @0x0000000002a07a40, libserver.so)
// globals: CDOTA_Ability_Bane_NightmareEnd::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_NightmareEnd::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_NightmareEnd *const this)
{
  return CDOTA_Ability_Bane_NightmareEnd::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 399, @0x0000000002a07a50, libserver.so)
// globals: CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::DestructInstance  (line 399, @0x0000000002a07a60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bane_NightmareEnd>
void __fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::FreeInstance  (line 399, @0x0000000002a07a80, libserver.so)
void __fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::CanAllocate  (line 399, @0x0000000002a07aa0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 399, @0x0000000002a07ab0, libserver.so)
// globals: CDOTA_Ability_Bane_NightmareEnd::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_NightmareEnd::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::AllocateInstance  (line 399, @0x0000000002a0f040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::ConstructInstance  (line 399, @0x0000000002a13bf0, libserver.so)  // inlines: CDOTA_Ability_Bane_NightmareEnd, Construct<CDOTA_Ability_Bane_NightmareEnd>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4322050;
  }
  return p;
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 399, @0x0000000002a1ed20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 399, @0x0000000002a1ed40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal  (line 399, @0x0000000002a35150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "bane_nightmare_end", "CDOTA_Ability_Bane_NightmareEnd"
// globals: `guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass, CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass, __dso_handle, CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo, CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass);
    CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass._vptr_CEntityClass = off_4321FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass);
    __cxa_atexit(
      CDOTA_Ability_Bane_NightmareEnd::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bane_NightmareEndClass != 0 )
    return &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass;
  if ( `guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo,
      "CDOTA_Ability_Bane_NightmareEnd",
      "bane_nightmare_end",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo);
  }
  CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass.m_pClassInfo = &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo;
  CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass.m_pBaseClassInfo = CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bane_NightmareEndClass = &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass;
  CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClassInfo.m_pClass = &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass;
  CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bane_NightmareEndClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bane_NightmareEnd::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_NightmareEndClass;
}


// CDOTA_Ability_Bane_NightmareEnd::ProcsMagicStick  (line 402, @0x0000000002a07ac0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_NightmareEnd::ProcsMagicStick(CDOTA_Ability_Bane_NightmareEnd *const this)
{
  return 0;
}


// CDOTA_Ability_Bane_NightmareEnd::IsStealable  (line 405, @0x0000000002a07ad0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_NightmareEnd::IsStealable(CDOTA_Ability_Bane_NightmareEnd *const this)
{
  return 0;
}


// CDOTA_Ability_Bane_NightmareEnd::IsHiddenWhenStolen  (line 406, @0x0000000002a07ae0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_NightmareEnd::IsHiddenWhenStolen(CDOTA_Ability_Bane_NightmareEnd *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_NightmareEnd::OnToggle  (line 414, @0x00000000029dbbd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::OnToggle, FindUnitsInRadius, CDOTA_BaseNPC::RemoveModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_bane_nightmare", "modifier_bane_nightmare_invulnerable"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Bane_NightmareEnd::OnToggle(CDOTA_Ability_Bane_NightmareEnd *const this)
{
  int m_Value; // edi
  __int64 v3; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecUnits; // [rsp+20h] [rbp-40h] BYREF

  CDOTABaseAbility::OnToggle(this);
  m_Value = this->m_iTeamNum.m_Value;
  vecUnits.m_Size = 0;
  vecUnits.m_Memory.m_pMemory = 0;
  vecUnits.m_Memory.m_nAllocationCount = 0;
  vecUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &vecUnits, 3, 3, 64, 0, 0);
  v3 = 0;
  for ( i = 0; vecUnits.m_Size > i; ++v3 )
  {
    while ( 1 )
    {
      v5 = &vecUnits.m_Memory.m_pMemory[v3];
      m_Index = vecUnits.m_Memory.m_pMemory[v3].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v3;
      if ( vecUnits.m_Size <= i )
        goto LABEL_11;
    }
    CDOTA_BaseNPC::RemoveModifierByName(v9->m_pInstance, "modifier_bane_nightmare");
    CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_bane_nightmare_invulnerable");
    ++i;
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecUnits);
  if ( (vecUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecUnits.m_Memory);
    if ( (vecUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecUnits.m_Memory);
  }
}


// CDOTA_Modifier_Bane_Nightmare::~CDOTA_Modifier_Bane_Nightmare  (line 437, @0x0000000002a12970, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bane_Nightmare::~CDOTA_Modifier_Bane_Nightmare(
        CDOTA_Modifier_Bane_Nightmare *const this)
{
  this->_vptr_CDOTA_Buff = &off_4322B10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bane_Nightmare::~CDOTA_Modifier_Bane_Nightmare  (line 437, @0x0000000002a12990, libserver.so)  // inlines: ~CDOTA_Modifier_Bane_Nightmare
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bane_Nightmare::~CDOTA_Modifier_Bane_Nightmare(
        CDOTA_Modifier_Bane_Nightmare *const this)
{
  this->_vptr_CDOTA_Buff = &off_4322B10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bane_Nightmare::CanParentBeAutoAttacked  (line 452, @0x0000000002a07af0, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_Nightmare::CanParentBeAutoAttacked(CDOTA_Modifier_Bane_Nightmare *const this)
{
  return 0;
}


// CDOTA_Modifier_Bane_Nightmare::IsDebuff  (line 453, @0x0000000002a07b00, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_Nightmare::IsDebuff(CDOTA_Modifier_Bane_Nightmare *const this)
{
  return 1;
}


// CDOTA_Modifier_Bane_Nightmare::GetStatusEffectName  (line 458, @0x0000000002a07b10, libserver.so)
// strings: "particles/status_fx/status_effect_nightmare.vpcf"
const char *__fastcall CDOTA_Modifier_Bane_Nightmare::GetStatusEffectName(CDOTA_Modifier_Bane_Nightmare *const this)
{
  return "particles/status_fx/status_effect_nightmare.vpcf";
}


// CDOTA_Modifier_Bane_Nightmare::StatusEffectPriority  (line 459, @0x0000000002a07b20, libserver.so)
int __fastcall CDOTA_Modifier_Bane_Nightmare::StatusEffectPriority(CDOTA_Modifier_Bane_Nightmare *const this)
{
  return 20;
}


// CDOTA_Modifier_Bane_Nightmare::OnCreated  (line 471, @0x00000000029e0eb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (15 total)
// strings: "animation_rate", "nightmare_invuln_time", "modifier_bane_nightmare_invulnerable", "Hero_Bane.Nightmare.Loop"
void __fastcall CDOTA_Modifier_Bane_Nightmare::OnCreated(CDOTA_Modifier_Bane_Nightmare *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Bane_Nightmare *AbilityByName; // r12
  CDOTA_BaseNPC *v8; // r13
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4
  CDOTABaseAbility *v11; // r14
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "animation_rate", -1, 0);
  else
    this->animation_rate = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
  this->m_nSource = KeyValues::GetInt(pKV, "source", 2);
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "bane_nightmare", 0);
  if ( AbilityByName != 0 )
  {
    v8 = CDOTA_Buff::GetCaster(this);
    if ( v8 == CDOTA_Buff::GetParent(this) )
      CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount(AbilityByName, AbilityByName->m_nNightmareSwapCount + 1);
    if ( this->m_nSource == 0 )
      CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount(AbilityByName, AbilityByName->m_nNightmareSwapCount + 1);
  }
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "nightmare_invuln_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_bane_nightmare_invulnerable");
  KeyValues::SetFloat(&kv, "duration", v10);
  v11 = CDOTA_Buff::GetAbility(this);
  v12 = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, v12, v11, "modifier_bane_nightmare_invulnerable", &kv, 0);
  v14 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Bane.Nightmare.Loop", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Bane_Nightmare::OnDestroy  (line 509, @0x00000000029cdb20, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount
// strings: "Hero_Bane.Nightmare.Loop", "Hero_Bane.Nightmare.End"
void __fastcall CDOTA_Modifier_Bane_Nightmare::OnDestroy(CDOTA_Modifier_Bane_Nightmare *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Bane_Nightmare *AbilityByName; // r12
  CDOTA_BaseNPC *v6; // r13

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Bane.Nightmare.Loop");
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Bane.Nightmare.End", 0.0, 0, 0);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "bane_nightmare", 0);
    if ( AbilityByName != 0 )
    {
      v6 = CDOTA_Buff::GetCaster(this);
      if ( v6 == CDOTA_Buff::GetParent(this) )
        CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount(AbilityByName, AbilityByName->m_nNightmareSwapCount - 1);
      if ( this->m_nSource != 2 )
        CDOTA_Ability_Bane_Nightmare::SetNightmareSwapCount(AbilityByName, AbilityByName->m_nNightmareSwapCount - 1);
    }
  }
}


// CDOTA_Modifier_Bane_Nightmare::OnIntervalThink  (line 534, @0x00000000029b7540, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Bane_Nightmare::OnIntervalThink(CDOTA_Modifier_Bane_Nightmare *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
    v4 = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, v4, v3, 4, 0);
  }
}


// CDOTA_Modifier_Bane_Nightmare::DeclareFunctions  (line 546, @0x00000000029b4310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimationRate(CModifierParams const&), CDOTA_Modifier_Bane_Nightmare::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_Bane_Nightmare::OnAttackStart(CModifierParams const&), CDOTA_Modifier_Bane_Nightmare::GetFixedVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bane_Nightmare::DeclareFunctions(CDOTA_Modifier_Bane_Nightmare *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimationRate;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Bane_Nightmare::OnTakeDamage;
  this->m_Functions[119].__pfn = CDOTA_Modifier_Bane_Nightmare::OnAttackStart;
  this->m_Functions[123].__pfn = CDOTA_Modifier_Bane_Nightmare::OnAttackStart;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[123].__delta = 0;
  this->m_Functions[100].__pfn = CDOTA_Modifier_Bane_Nightmare::GetFixedVision;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__pfn = CDOTA_Modifier_Bane_Nightmare::GetFixedVision;
  this->m_Functions[101].__delta = 0;
}


// CDOTA_Modifier_Bane_Nightmare::GetFixedVision  (line 557, @0x00000000029b43c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Nightmare::GetFixedVision(
        CDOTA_Modifier_Bane_Nightmare *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimation  (line 563, @0x00000000029b43e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimation(
        CDOTA_Modifier_Bane_Nightmare *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimationRate  (line 570, @0x00000000029b4400, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Nightmare::GetOverrideAnimationRate(
        CDOTA_Modifier_Bane_Nightmare *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->animation_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bane_Nightmare::OnTakeDamage  (line 577, @0x00000000029ca890, libserver.so)  // inlines: Attacker, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, Unit, operator CBaseEntity*, operator CEntityInstance*, operator!=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CEntityHandle::operator CEntityInstance*, __dynamic_cast, CDOTA_Buff::Destroy, CDOTABaseAbility::LoadAbilityData
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Nightmare::OnTakeDamage(
        CDOTA_Modifier_Bane_Nightmare *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r13
  uint32 v11; // ecx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTABaseAbility *v14; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v16; // [rsp+8h] [rbp-28h]

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != CEntityHandle::operator CEntityInstance *(&params->inflictor) )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( Parent != CEntityHandle::operator CEntityInstance *(&params->hattacker) )
      {
        v11 = params->inflictor.m_Index;
        if ( v11 + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[params->inflictor.m_Index & 0x1FF];
            if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
            {
              v14 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              if ( v14 != 0 )
              {
                m_pAbilityData = v14->m_pAbilityData;
                if ( m_pAbilityData == 0 )
                {
                  v16 = v14;
                  CDOTABaseAbility::LoadAbilityData(v14, 0);
                  m_pAbilityData = v16->m_pAbilityData;
                }
                if ( (m_pAbilityData->m_iAbilityBehavior & 0x1000) == 0 )
                  CDOTA_Buff::Destroy(this, 0, 0, 0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Bane_Nightmare::OnAttackStart  (line 595, @0x00000000029ca610, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy, __stack_chk_fail, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (13 total)
// strings: "modifier_create_client", "creationtime", "stack_count", "modifier_bane_nightmare"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_Nightmare::OnAttackStart(
        CDOTA_Modifier_Bane_Nightmare *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r12
  CDOTABaseAbility *Ability; // rax
  int m_Id; // eax
  float v15; // xmm1_4
  float v16; // xmm1_4
  int v17; // eax
  int m_nSource; // edx
  CDOTABaseAbility *v19; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-28h]

  m_pInstance = 0;
  v22 = __readfsqword(0x28u);
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
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && CEntityHandle::operator CEntityInstance *(&params->hattacker) != 0 )
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
          if ( v11->m_pInstance != 0
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
            && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(v12, Ability, 1) )
            {
              m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_create_client");
                KeyValues::SetFloat(&kv, "creationtime", v15);
                (*(this->_vptr_CDOTA_Buff + 31))(this);
                KeyValues::SetFloat(&kv, "duration", v16);
                v17 = (*(this->_vptr_CDOTA_Buff + 27))(this);
                KeyValues::SetInt(&kv, "stack_count", v17);
                m_nSource = 1;
                if ( this->m_nSource != 0 )
                  m_nSource = this->m_nSource;
                KeyValues::SetInt(&kv, "source", m_nSource);
                this->m_nSource = 2;
                v19 = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v12, Caster, v19, "modifier_bane_nightmare", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Modifier_Bane_Nightmare::CheckState  (line 623, @0x00000000029b4420, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Bane_Nightmare::CheckState(
        CDOTA_Modifier_Bane_Nightmare *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x823uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFF7DCLL;
}


// CDOTA_Modifier_Bane_Nightmare_Invulnerable::~CDOTA_Modifier_Bane_Nightmare_Invulnerable  (line 634, @0x0000000002a12f90, libserver.so)  // inlines: ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bane_Nightmare_Invulnerable::~CDOTA_Modifier_Bane_Nightmare_Invulnerable(
        CDOTA_Modifier_Bane_Nightmare_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bane_Nightmare_Invulnerable::~CDOTA_Modifier_Bane_Nightmare_Invulnerable  (line 634, @0x0000000002a12fb0, libserver.so)  // inlines: ~CDOTA_Modifier_Bane_Nightmare_Invulnerable, ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bane_Nightmare_Invulnerable::~CDOTA_Modifier_Bane_Nightmare_Invulnerable(
        CDOTA_Modifier_Bane_Nightmare_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bane_Nightmare_Invulnerable::IsPurgable  (line 637, @0x0000000002a07b30, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_Nightmare_Invulnerable::IsPurgable(
        CDOTA_Modifier_Bane_Nightmare_Invulnerable *const this)
{
  return 0;
}


// CDOTA_Ability_Bane_FiendsGrip::~CDOTA_Ability_Bane_FiendsGrip  (line 653, @0x0000000002a169d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bane_FiendsGrip::~CDOTA_Ability_Bane_FiendsGrip(
        CDOTA_Ability_Bane_FiendsGrip *const this)
{
  this->_vptr_IHandleEntity = &off_4323190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bane_FiendsGrip::~CDOTA_Ability_Bane_FiendsGrip  (line 653, @0x0000000002a169f0, libserver.so)  // inlines: ~CDOTA_Ability_Bane_FiendsGrip
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bane_FiendsGrip::~CDOTA_Ability_Bane_FiendsGrip(
        CDOTA_Ability_Bane_FiendsGrip *const this)
{
  this->_vptr_IHandleEntity = &off_4323190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bane_FiendsGrip::Schema_DynamicBinding  (line 655, @0x0000000002a07b40, libserver.so)
// globals: CDOTA_Ability_Bane_FiendsGrip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_FiendsGrip::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_FiendsGrip *const this)
{
  return CDOTA_Ability_Bane_FiendsGrip::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 655, @0x0000000002a07b50, libserver.so)
// globals: CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::DestructInstance  (line 655, @0x0000000002a07b60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bane_FiendsGrip>
void __fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::FreeInstance  (line 655, @0x0000000002a07b80, libserver.so)
void __fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::CanAllocate  (line 655, @0x0000000002a07ba0, libserver.so)
bool __fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 655, @0x0000000002a07bb0, libserver.so)
// globals: CDOTA_Ability_Bane_FiendsGrip::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bane_FiendsGrip::s_pSchemaBinding;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::AllocateInstance  (line 655, @0x0000000002a0f080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::ConstructInstance  (line 655, @0x0000000002a13c20, libserver.so)  // inlines: CDOTA_Ability_Bane_FiendsGrip, CEntityHandle, CHandle, Construct<CDOTA_Ability_Bane_FiendsGrip>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4323190;
  }
  return p;
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 655, @0x0000000002a1ed70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 655, @0x0000000002a1ed90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal  (line 655, @0x0000000002a352a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Bane_FiendsGrip"
// globals: `guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass, CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass, __dso_handle, CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo, CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass);
    CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass._vptr_CEntityClass = off_4323110;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass);
    __cxa_atexit(
      CDOTA_Ability_Bane_FiendsGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bane_FiendsGripClass != 0 )
    return &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass;
  if ( `guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo,
      "CDOTA_Ability_Bane_FiendsGrip",
      "bane_fiends_grip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo);
  }
  CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass.m_pClassInfo = &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo;
  CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass.m_pBaseClassInfo = CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bane_FiendsGripClass = &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass;
  CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClassInfo.m_pClass = &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass;
  CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bane_FiendsGripClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bane_FiendsGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bane_FiendsGripClass;
}


// CDOTA_Ability_Bane_FiendsGrip::GetStolenActivityModifier  (line 664, @0x0000000002a07bc0, libserver.so)
const char *__fastcall CDOTA_Ability_Bane_FiendsGrip::GetStolenActivityModifier(
        CDOTA_Ability_Bane_FiendsGrip *const this)
{
  return "fiends_grip";
}


// CDOTA_Ability_Bane_FiendsGrip::GetAssociatedSecondaryAbilities  (line 665, @0x0000000002a07bd0, libserver.so)
const char *__fastcall CDOTA_Ability_Bane_FiendsGrip::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Bane_FiendsGrip *const this)
{
  return "bane_nightmare";
}


// CDOTA_Ability_Bane_FiendsGrip::YouForgotToImplementOrDeclareServerClass  (line 677, @0x00000000029b4440, libserver.so)
int __fastcall CDOTA_Ability_Bane_FiendsGrip::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Bane_FiendsGrip *const this)
{
  return 0;
}


// CDOTA_Ability_Bane_FiendsGrip::GetServerClass  (line 677, @0x00000000029c97f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Bane_FiendsGrip::GetServerClass(CDOTA_Ability_Bane_FiendsGrip *const this)
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


// CDOTA_Ability_Bane_FiendsGrip::OnSpellStart  (line 686, @0x00000000029eeab0, libserver.so)  // inlines: GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, IsInvulnerable, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound (18 total)
// strings: "fiend_grip_damage", "fiend_grip_damage_scepter", "fiend_grip_duration_scepter", "modifier_bane_fiends_grip", "fiend_grip_tick_interval", "griptick" (9 total)
void __fastcall CDOTA_Ability_Bane_FiendsGrip::OnSpellStart(CDOTA_Ability_Bane_FiendsGrip *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_Buff *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm1_4
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm3_4
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // r15
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v27; // rax
  float flDuration; // [rsp+Ch] [rbp-74h]
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  this->fiend_grip_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fiend_grip_damage", -1, 0);
  this->fiend_grip_damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      this,
                                      "fiend_grip_damage_scepter",
                                      -1,
                                      0);
  this->fiend_grip_duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        this,
                                        "fiend_grip_duration_scepter",
                                        -1,
                                        0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    if ( CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      this->m_hGripTarget.m_Index = -1;
      Caster = CDOTABaseAbility::GetCaster(this);
      (*(Caster->_vptr_INextBotEventResponder + 56))(&Caster->INextBot);
    }
    else
    {
      KeyValues::KeyValues(&kv, "modifier_bane_fiends_grip");
      v4 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(v4) )
      {
        flDuration = this->fiend_grip_duration_scepter;
        KeyValues::KeyValues(&kv2, "modifier_bane_fiends_grip_self");
        KeyValues::SetFloat(&kv2, "duration", v23);
        v24 = CDOTABaseAbility::GetCaster(this);
        v25 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v25, v24, this, "modifier_bane_fiends_grip_self", &kv2, 0);
        KeyValues::~KeyValues(&kv2);
      }
      else
      {
        flDuration = (*(this->_vptr_IHandleEntity + 225))(this);
      }
      KeyValues::SetFloat(&kv, "duration", v5);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_FRIENDSGRIP,
        v7->m_iTeamNum.m_Value,
        AbsOrigin,
        350.0,
        flDuration,
        1);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fiend_grip_tick_interval", -1, 0);
      KeyValues::SetFloat(&kv, "griptick", v8);
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = CDOTA_BaseNPC::AddNewModifier(v3, v9, this, "modifier_bane_fiends_grip", &kv, 0);
      if ( v10 == 0 || (*(v10 + 138) & 4) != 0 )
      {
        v27 = CDOTABaseAbility::GetCaster(this);
        (*(v27->_vptr_INextBotEventResponder + 56))(&v27->INextBot);
      }
      else
      {
        m_pEntity = v3->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v13 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hGripTarget.m_Index) = v13 | this->m_hGripTarget.m_Index & 0x8000;
          this->m_hGripTarget.m_Index = (v12 << 15) | this->m_hGripTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hGripTarget.m_Index = -1;
        }
        v14 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Bane.FiendsGrip.Cast", 0.0, 0, 0);
        CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Bane.FiendsGrip", 0.0, 0, 0);
        m_Value = v3->m_iTeamNum.m_Value;
        v16 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::MakeVisibleToTeam(v16, m_Value, flDuration, v17);
        m_pAbilityData = this->m_pAbilityData;
        if ( m_pAbilityData == 0 )
        {
          CDOTABaseAbility::LoadAbilityData(this, 0);
          m_pAbilityData = this->m_pAbilityData;
        }
        m_iAbilityID = m_pAbilityData->m_iAbilityID;
        v20 = CBaseEntity::GetAbsOrigin(v3);
        v21 = CDOTABaseAbility::GetCaster(this);
        CDOTAGamerules::SendProjectionAbilityMessage(
          g_pGameRules,
          v21,
          0,
          m_iAbilityID,
          0,
          0,
          *&v20->x,
          v20->z,
          flDuration,
          v22);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Bane_FiendsGrip::OnChannelFinish  (line 746, @0x00000000029c6140, libserver.so)  // inlines: Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator bool
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData, CDOTA_BaseNPC::RemoveModifierByName
// strings: "Hero_Bane.FiendsGrip.Cast", "modifier_bane_fiends_grip", "modifier_bane_fiends_grip_self", "Hero_Bane.FiendsGrip"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Bane_FiendsGrip::OnChannelFinish(
        CDOTA_Ability_Bane_FiendsGrip *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v11; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Bane.FiendsGrip.Cast");
  m_Index = this->m_hGripTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hGripTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hGripTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::RemoveModifierByName(v6->m_pInstance, "modifier_bane_fiends_grip");
          v11 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_bane_fiends_grip_self");
          CBaseEntity::StopSound(m_pInstance, "Hero_Bane.FiendsGrip");
        }
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
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v9, m_iAbilityID);
}


// CDOTA_Ability_Bane_FiendsGrip::GetAbilityDamage  (line 768, @0x00000000029b83d0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_Bane_FiendsGrip::GetAbilityDamage(CDOTA_Ability_Bane_FiendsGrip *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int fiend_grip_damage_scepter; // edx

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  fiend_grip_damage_scepter = this->fiend_grip_damage_scepter;
  if ( !HasScepter )
    return this->fiend_grip_damage;
  return fiend_grip_damage_scepter;
}


// CDOTA_Ability_Bane_FiendsGrip::GetChannelTime  (line 784, @0x00000000029dd480, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetChannelTime, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "fiend_grip_duration_scepter"
float __fastcall CDOTA_Ability_Bane_FiendsGrip::GetChannelTime(CDOTA_Ability_Bane_FiendsGrip *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float result; // xmm0_4

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetChannelTime(this);
  result = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fiend_grip_duration_scepter", -1, 0);
  this->fiend_grip_duration_scepter = result;
  return result;
}


// CDOTA_Ability_Bane_FiendsGrip::GetAbilityDamageToTargetOverInterval  (line 797, @0x00000000029e52f0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "fiend_grip_damage"
__int64 __fastcall CDOTA_Ability_Bane_FiendsGrip::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Bane_FiendsGrip *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    fIntervala = fminf(fInterval, (*(this->_vptr_IHandleEntity + 225))(this, pTarget));
    return (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fiend_grip_damage", -1, 0) * fIntervala);
  }
  return result;
}


// CDOTA_Ability_Bane_FiendsGrip::GetStunDuration  (line 810, @0x00000000029b4450, libserver.so)
float __fastcall CDOTA_Ability_Bane_FiendsGrip::GetStunDuration(CDOTA_Ability_Bane_FiendsGrip *const this)
{
  return (*(this->_vptr_IHandleEntity + 225))(this);
}


// CDOTA_Modifier_Bane_FiendsGrip::~CDOTA_Modifier_Bane_FiendsGrip  (line 819, @0x0000000002a12920, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::~CDOTA_Modifier_Bane_FiendsGrip(
        CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  this->_vptr_CDOTA_Buff = &off_4323C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bane_FiendsGrip::~CDOTA_Modifier_Bane_FiendsGrip  (line 819, @0x0000000002a12940, libserver.so)  // inlines: ~CDOTA_Modifier_Bane_FiendsGrip
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::~CDOTA_Modifier_Bane_FiendsGrip(
        CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  this->_vptr_CDOTA_Buff = &off_4323C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bane_FiendsGrip::GetPriority  (line 835, @0x0000000002a07be0, libserver.so)
int __fastcall CDOTA_Modifier_Bane_FiendsGrip::GetPriority(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  return 2;
}


// CDOTA_Modifier_Bane_FiendsGrip::IsDebuff  (line 837, @0x0000000002a07bf0, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_FiendsGrip::IsDebuff(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  return 1;
}


// CDOTA_Modifier_Bane_FiendsGrip::IsStunDebuff  (line 838, @0x0000000002a07c00, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_FiendsGrip::IsStunDebuff(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  return 1;
}


// CDOTA_Modifier_Bane_FiendsGrip::OnCreated  (line 848, @0x00000000029f96e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::InterruptChannel, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "fiend_grip_mana_drain", "fiend_grip_mana_drain_scepter", "griptick"
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::OnCreated(CDOTA_Modifier_Bane_FiendsGrip *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v8; // xmm1_4
  float Float; // xmm0_4
  float v10; // xmm1_4
  int fiend_grip_mana_drain_scepter[5]; // [rsp+Ch] [rbp-14h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->fiend_grip_mana_drain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "fiend_grip_mana_drain",
                                    -1,
                                    0);
  else
    this->fiend_grip_mana_drain = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    v6 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v6, fiend_grip_mana_drain_scepter, "fiend_grip_mana_drain_scepter");
    this->fiend_grip_mana_drain = fiend_grip_mana_drain_scepter[0];
  }
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::InterruptChannel(Parent);
  Float = KeyValues::GetFloat(pKV, "griptick", v8);
  CDOTA_Buff::StartIntervalThink(this, Float, v10);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Bane_FiendsGrip::OnDestroy  (line 873, @0x00000000029b9e90, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::InterruptChannel
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::OnDestroy(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(Caster);
}


// CDOTA_Modifier_Bane_FiendsGrip::OnIntervalThink  (line 882, @0x00000000029b9ef0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GiveMana, ApplyDamage
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::OnIntervalThink(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm0_4
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  int v7; // r15d
  CDOTABaseAbility *v8; // r14
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *Caster; // rax
  float flManaDrain; // [rsp+Ch] [rbp-34h]

  Parent = CDOTA_Buff::GetParent(this);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 && Parent != 0 )
  {
    if ( (Parent->m_nUnitState64.m_Value & 0x200) == 0 )
    {
      v7 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
      v8 = CDOTA_Buff::GetAbility(this);
      v9 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v9, v8, v7, 2, 0);
    }
    v4 = (this->fiend_grip_mana_drain * Parent->m_flMaxMana.m_Value) / 100.0;
    flManaDrain = v4;
    CDOTA_BaseNPC::ReduceMana(Parent, v4, v4);
    v5 = CDOTA_Buff::GetAbility(this);
    CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, v5, Parent, flManaDrain);
    v6 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::GiveMana(v6, flManaDrain, 0, 1);
  }
}


// CDOTA_Modifier_Bane_FiendsGrip::DeclareFunctions  (line 907, @0x00000000029b4470, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bane_FiendsGrip::OnAbilityEndChannel(CModifierParams const&), CDOTA_Modifier_Bane_FiendsGrip::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Bane_FiendsGrip::OnAttackStart(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::DeclareFunctions(CDOTA_Modifier_Bane_FiendsGrip *const this)
{
  this->m_Functions[131].__pfn = CDOTA_Modifier_Bane_FiendsGrip::OnAbilityEndChannel;
  this->m_Functions[131].__delta = 0;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[90].__pfn = CDOTA_Modifier_Bane_FiendsGrip::GetOverrideAnimation;
  this->m_Functions[119].__pfn = CDOTA_Modifier_Bane_FiendsGrip::OnAttackStart;
  this->m_Functions[119].__delta = 0;
}


// CDOTA_Modifier_Bane_FiendsGrip::OnAbilityEndChannel  (line 916, @0x00000000029c24e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_FiendsGrip::OnAbilityEndChannel(
        CDOTA_Modifier_Bane_FiendsGrip *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *m_pInstance; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  Ability = CDOTA_Buff::GetAbility(this);
  m_pInstance = 0;
  if ( params->ability.m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->ability.m_Index & 0x1FF];
      if ( v7 != 0 && params->ability.m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( Ability != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Bane_FiendsGrip::GetOverrideAnimation  (line 928, @0x00000000029b44d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_FiendsGrip::GetOverrideAnimation(
        CDOTA_Modifier_Bane_FiendsGrip *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Bane_FiendsGrip::CheckState  (line 935, @0x00000000029b44f0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Bane_FiendsGrip::CheckState(
        CDOTA_Modifier_Bane_FiendsGrip *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDFLL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x5F | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x20;
  buffState->m_nDisabledStateMask = v3;
}


// CDOTA_Modifier_Bane_FiendsGrip::OnAttackStart  (line 946, @0x00000000029c8190, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_bane_nightmare"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bane_FiendsGrip::OnAttackStart(
        CDOTA_Modifier_Bane_FiendsGrip *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *Caster; // rax
  uint32 v13; // ecx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityInstance *v16; // rbx
  char m_CScriptComponent_high; // r13
  int m_Id; // eax
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v21; // r14
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-28h]

  m_pInstance = 0;
  v25 = __readfsqword(0x28u);
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
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
  {
    v9 = params->hattacker.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hattacker.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
        {
          Caster = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::HasScepter(Caster) )
          {
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
                  if ( v15->m_pInstance != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
                  {
                    m_CScriptComponent_high = HIBYTE(v16[7].m_CScriptComponent);
                    if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                      && LOBYTE(v16[71]._vptr_IHandleEntity) == 0
                      && (BYTE1(v16[58]._vptr_IHandleEntity) & 1) == 0 )
                    {
                      m_Id = v16[43].m_iszPrivateVScripts.u.m_Id;
                      if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
                      {
                        v19 = CDOTA_Buff::GetCaster(this);
                        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v19, "bane_nightmare", 0);
                        v21 = AbilityByName;
                        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                        {
                          KeyValues::KeyValues(&kv, "modifier_bane_nightmare");
                          CDOTABaseAbility::GetDuration(v21);
                          KeyValues::SetFloat(&kv, "duration", v22);
                          KeyValues::SetInt(&kv, "source", 2);
                          v23 = CDOTA_Buff::GetCaster(this);
                          CDOTA_BaseNPC::AddNewModifier(v16, v23, v21, "modifier_bane_nightmare", &kv, 0);
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
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Bane_FiendsGrip_Self::~CDOTA_Modifier_Bane_FiendsGrip_Self  (line 979, @0x0000000002a13170, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bane_FiendsGrip_Self::~CDOTA_Modifier_Bane_FiendsGrip_Self(
        CDOTA_Modifier_Bane_FiendsGrip_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_4323F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bane_FiendsGrip_Self::~CDOTA_Modifier_Bane_FiendsGrip_Self  (line 979, @0x0000000002a13190, libserver.so)  // inlines: ~CDOTA_Modifier_Bane_FiendsGrip_Self
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bane_FiendsGrip_Self::~CDOTA_Modifier_Bane_FiendsGrip_Self(
        CDOTA_Modifier_Bane_FiendsGrip_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_4323F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bane_FiendsGrip_Self::IsPurgable  (line 984, @0x0000000002a07c10, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_FiendsGrip_Self::IsPurgable(CDOTA_Modifier_Bane_FiendsGrip_Self *const this)
{
  return 0;
}


// CDOTA_Modifier_Bane_FiendsGrip_Self::IsHidden  (line 985, @0x0000000002a07c20, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_FiendsGrip_Self::IsHidden(CDOTA_Modifier_Bane_FiendsGrip_Self *const this)
{
  return 1;
}


// CDOTA_Modifier_Bane_FiendsGrip_Self::CanParentBeAutoAttacked  (line 987, @0x0000000002a07c30, libserver.so)
bool __fastcall CDOTA_Modifier_Bane_FiendsGrip_Self::CanParentBeAutoAttacked(
        CDOTA_Modifier_Bane_FiendsGrip_Self *const this)
{
  return 0;
}


