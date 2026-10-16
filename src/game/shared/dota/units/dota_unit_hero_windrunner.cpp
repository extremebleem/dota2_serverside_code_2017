// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:40
class CDOTA_Unit_Hero_Windrunner : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Windrunner(CDOTA_Unit_Hero_Windrunner &);
	CDOTA_Unit_Hero_Windrunner(CDOTA_Unit_Hero_Windrunner &);
	CDOTA_Unit_Hero_Windrunner();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Windrunner();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:47
class C_CDOTA_Unit_Hero_Windrunner_MapInstall {
	C_CDOTA_Unit_Hero_Windrunner_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:62
class CDOTA_Ability_Windrunner_Shackleshot : public CDOTABaseAbility {
public:

private:

	int shackle_count;  // +0x390
	EHANDLE m_hTarget;  // +0x3a0
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
	CDOTA_Ability_Windrunner_Shackleshot(CDOTA_Ability_Windrunner_Shackleshot &);
	CDOTA_Ability_Windrunner_Shackleshot(CDOTA_Ability_Windrunner_Shackleshot &);
	CDOTA_Ability_Windrunner_Shackleshot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Windrunner_Shackleshot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[322] GetStunDuration
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:325
class CDOTA_Modifier_Windrunner_ShackleShot : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Windrunner_ShackleShot(CDOTA_Modifier_Windrunner_ShackleShot &);
	CDOTA_Modifier_Windrunner_ShackleShot(const CDOTA_Modifier_Windrunner_ShackleShot &);
	CDOTA_Modifier_Windrunner_ShackleShot();
	virtual ~CDOTA_Modifier_Windrunner_ShackleShot();

	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:342
class CDOTA_Ability_Windrunner_Powershot : public CDOTABaseAbility {
public:

private:

	float m_fStartTime;  // +0x398
	float m_fPower;  // +0x39c
	int m_iProjectile;  // +0x3a0
	float damage_reduction;  // +0x3a4
	int arrow_width;  // +0x3a8
	float tree_width;  // +0x3ac
	bool m_bAwardedKillEater;  // +0x3b0

	int m_nHeroesHit;  // +0x3b4
	int m_nFXIndex;  // +0x3b8
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
	CDOTA_Ability_Windrunner_Powershot(CDOTA_Ability_Windrunner_Powershot &);
	CDOTA_Ability_Windrunner_Powershot(CDOTA_Ability_Windrunner_Powershot &);
	CDOTA_Ability_Windrunner_Powershot();
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
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual bool WantsToChannelCancel();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Windrunner_Powershot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[331] WantsToChannelCancel
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[242] GetCooldown
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:378
class C_CDOTA_Ability_Windrunner_Powershot_MapInstall {
	C_CDOTA_Ability_Windrunner_Powershot_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:573
class CDOTA_Ability_Windrunner_Windrun : public CDOTABaseAbility {
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
	CDOTA_Ability_Windrunner_Windrun(CDOTA_Ability_Windrunner_Windrun &);
	CDOTA_Ability_Windrunner_Windrun(CDOTA_Ability_Windrunner_Windrun &);
	CDOTA_Ability_Windrunner_Windrun();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Windrunner_Windrun();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:586
class C_CDOTA_Ability_Windrunner_Windrun_MapInstall {
	C_CDOTA_Ability_Windrunner_Windrun_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:610
class CDOTA_Modifier_Windrunner_Windrun : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int movespeed_bonus_pct;  // +0xbac
	CDOTA_Modifier_Windrunner_Windrun();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Windrunner_Windrun();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:714
class CDOTA_Modifier_Windrunner_Windrun_Slow : public CDOTA_Buff {
public:

private:

	int enemy_movespeed_bonus_pct;  // +0xba8
	CDOTA_Modifier_Windrunner_Windrun_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Windrunner_Windrun_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:768
class CDOTA_Ability_Windrunner_FocusFire : public CDOTABaseAbility {
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
	CDOTA_Ability_Windrunner_FocusFire(CDOTA_Ability_Windrunner_FocusFire &);
	CDOTA_Ability_Windrunner_FocusFire(CDOTA_Ability_Windrunner_FocusFire &);
	CDOTA_Ability_Windrunner_FocusFire();
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
	virtual int GetCastRangeBonus();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Windrunner_FocusFire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[228] GetCastRangeBonus
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:786
class C_CDOTA_Ability_Windrunner_FocusFire_MapInstall {
	C_CDOTA_Ability_Windrunner_FocusFire_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_windrunner.cpp:865
class CDOTA_Modifier_Windrunner_FocusFire : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	int focusfire_damage_reduction;  // +0xbac
	int focusfire_damage_reduction_scepter;  // +0xbb0
	bool bActive;  // +0xbb4

	int bonus_attack_speed;  // +0xbb8
	CDOTA_Modifier_Windrunner_FocusFire();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnBuildingKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_Windrunner_FocusFire();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Windrunner::~CDOTA_Unit_Hero_Windrunner  (line 40, @0x0000000002a681e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Windrunner::~CDOTA_Unit_Hero_Windrunner(CDOTA_Unit_Hero_Windrunner *const this)
{
  this->_vptr_IHandleEntity = &off_43B9030;
  this->_vptr_INextBotEventResponder = &off_43BA010;
  this->_vptr_CObstructionObject = &off_43BA340;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Windrunner::~CDOTA_Unit_Hero_Windrunner  (line 40, @0x0000000002a68220, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Windrunner
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Windrunner::~CDOTA_Unit_Hero_Windrunner(CDOTA_Unit_Hero_Windrunner *const this)
{
  this->_vptr_IHandleEntity = &off_43B9030;
  this->_vptr_INextBotEventResponder = &off_43BA010;
  this->_vptr_CObstructionObject = &off_43BA340;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Windrunner::Schema_DynamicBinding  (line 42, @0x0000000002a620f0, libserver.so)
// globals: CDOTA_Unit_Hero_Windrunner::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Windrunner::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Windrunner *const this)
{
  return CDOTA_Unit_Hero_Windrunner::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002a62120, libserver.so)
// globals: CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002a62130, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Windrunner>
void __fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002a62150, libserver.so)
void __fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002a62170, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002a62180, libserver.so)
// globals: CDOTA_Unit_Hero_Windrunner::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Windrunner::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002a644b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002a65dc0, libserver.so)  // inlines: CDOTA_Unit_Hero_Windrunner, Construct<CDOTA_Unit_Hero_Windrunner>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43B9030;
    *(p + 236) = &off_43BA010;
    *(p + 257) = &off_43BA340;
  }
  return p;
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a6b520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a6b780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal  (line 42, @0x0000000002a75190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_windrunner", "CDOTA_Unit_Hero_Windrunner"
// globals: `guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass, CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass, __dso_handle, CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo, CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass);
    CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass._vptr_CEntityClass = off_43B8FB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Windrunner::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_WindrunnerClass != 0 )
    return &CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo,
      "CDOTA_Unit_Hero_Windrunner",
      "npc_dota_hero_windrunner",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo);
  }
  CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass.m_pClassInfo = &CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo;
  CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_WindrunnerClass = &CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass;
  CDOTA_Unit_Hero_Windrunner::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClassInfo.m_pClass = &CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass;
  CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_WindrunnerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Windrunner::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WindrunnerClass;
}


// CDOTA_Unit_Hero_Windrunner::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002a3fbc0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Windrunner::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Windrunner *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Windrunner::GetServerClass  (line 47, @0x0000000002a48af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Windrunner::GetServerClass(CDOTA_Unit_Hero_Windrunner *const this)
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


// CDOTA_Ability_Windrunner_Shackleshot::~CDOTA_Ability_Windrunner_Shackleshot  (line 62, @0x0000000002a679b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::~CDOTA_Ability_Windrunner_Shackleshot(
        CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  this->_vptr_IHandleEntity = &off_43BA410;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Windrunner_Shackleshot::~CDOTA_Ability_Windrunner_Shackleshot  (line 62, @0x0000000002a679d0, libserver.so)  // inlines: ~CDOTA_Ability_Windrunner_Shackleshot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::~CDOTA_Ability_Windrunner_Shackleshot(
        CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  this->_vptr_IHandleEntity = &off_43BA410;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Windrunner_Shackleshot::Schema_DynamicBinding  (line 64, @0x0000000002a62190, libserver.so)
// globals: CDOTA_Ability_Windrunner_Shackleshot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Shackleshot::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  return CDOTA_Ability_Windrunner_Shackleshot::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 64, @0x0000000002a621a0, libserver.so)
// globals: CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::DestructInstance  (line 64, @0x0000000002a621b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Windrunner_Shackleshot>
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::FreeInstance  (line 64, @0x0000000002a621d0, libserver.so)
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::CanAllocate  (line 64, @0x0000000002a621f0, libserver.so)
bool __fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 64, @0x0000000002a62200, libserver.so)
// globals: CDOTA_Ability_Windrunner_Shackleshot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Shackleshot::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::AllocateInstance  (line 64, @0x0000000002a644f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::ConstructInstance  (line 64, @0x0000000002a663a0, libserver.so)  // inlines: CDOTA_Ability_Windrunner_Shackleshot, CEntityHandle, CHandle, Construct<CDOTA_Ability_Windrunner_Shackleshot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = -1;
    *p = &off_43BA410;
  }
  return p;
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000002a6b150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000002a6b170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal  (line 64, @0x0000000002a752e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "windrunner_shackleshot", "CDOTA_Ability_Windrunner_Shackleshot"
// globals: `guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass, CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass, __dso_handle, CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo, CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass);
    CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass._vptr_CEntityClass = off_43BA390;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass);
    __cxa_atexit(
      CDOTA_Ability_Windrunner_Shackleshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Windrunner_ShackleshotClass != 0 )
    return &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass;
  if ( `guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo,
      "CDOTA_Ability_Windrunner_Shackleshot",
      "windrunner_shackleshot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo);
  }
  CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass.m_pClassInfo = &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo;
  CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass.m_pBaseClassInfo = CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Windrunner_ShackleshotClass = &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass;
  CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClassInfo.m_pClass = &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass;
  CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Windrunner_ShackleshotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Windrunner_Shackleshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_ShackleshotClass;
}


// CDOTA_Ability_Windrunner_Shackleshot::GetStolenActivityModifier  (line 70, @0x0000000002a62210, libserver.so)
const char *__fastcall CDOTA_Ability_Windrunner_Shackleshot::GetStolenActivityModifier(
        CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  return "shackleshot";
}


// CDOTA_Ability_Windrunner_Shackleshot::OnSpellStart  (line 85, @0x0000000002a54000, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "shackle_count", "arrow_speed", "particles/units/heroes/hero_windrunner/windrunner_shackleshot.vpcf", "Hero_Windrunner.ShackleshotCast"
void __fastcall CDOTA_Ability_Windrunner_Shackleshot::OnSpellStart(CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CBaseEntity *v10; // rax
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-18h]

  v17 = __readfsqword(0x28u);
  this->shackle_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shackle_count", -1, 0);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iSourceAttachment = 1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.bProvidesVision = 0;
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
  info.pszEffectName = "particles/units/heroes/hero_windrunner/windrunner_shackleshot.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_18;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_18;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_18:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  v9 = 0x7FFF;
  if ( v8->m_EHandle.m_Index != -1 )
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.bDodgeable = 1;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCursorTarget(this);
  if ( v10 != 0 && (v11 = v10->m_pEntity) != 0 )
  {
    v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
    if ( v11->m_EHandle.m_Index == -1 )
      v13 = 0x7FFF;
    else
      v13 = v11->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v13 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v14 = CDOTABaseAbility::GetCaster(this);
  this->m_vArrowStartPos = *CBaseEntity::GetAbsOrigin(v14);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_Windrunner.ShackleshotCast", 0.0, 0, 0);
}


// CDOTA_Ability_Windrunner_Shackleshot::OnProjectileHit  (line 109, @0x0000000002a5bfc0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DotProduct, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPerchedTree, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, RemoveAll, Set, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTABaseAbility::GetCaster, FindUnitsInRadius, acos, CDOTA_BaseNPC::FindModifierByName, sTrackingProjectileCreateInfo::sTrackingProjectileCreateInfo, CDOTA_ProjectileManager::CreateTrackingProjectile (35 total)
// strings: "shackle_distance", "shackle_angle", "modifier_windrunner_shackle_shot", "particles/units/heroes/hero_windrunner/windrunner_shackleshot.vpcf", "arrow_speed", "Hero_Windrunner.ShackleshotCast" (16 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDOTA_Ability_Windrunner_Shackleshot::OnProjectileHit(
        CDOTA_Ability_Windrunner_Shackleshot *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // r15
  int (**vptr_IHandleEntity)(...); // rax
  int LevelSpecialValue; // ebx
  const Vector *AbsOrigin; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v11; // xmm0_4
  const Vector *v12; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v14; // rbx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const Vector *v21; // r14
  const Vector *v22; // rax
  float v23; // xmm1_4
  __m128d v24; // xmm0
  float v25; // xmm3_4
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm1_4
  CEntityInstance *v39; // rax
  CEntityInstance *v40; // r12
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_Buff *v43; // r13
  CDOTA_ParticleManager *v44; // rax
  int v45; // r14d
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC_Hero *v49; // rdi
  CDOTA_BaseNPC_Hero *v50; // rsi
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_ParticleManager *v52; // rax
  __int64 v53; // r12
  int v54; // ebx
  const CBaseEntity *v55; // r14
  const Vector *v56; // r13
  const Vector *v57; // rax
  vec_t v58; // xmm1_4
  vec_t v59; // xmm0_4
  __m128d v60; // xmm0
  float v61; // xmm5_4
  CDOTA_Buff *ModifierByName; // rax
  CEntityInstance *v63; // rax
  void *v64; // rax
  const CBaseEntity *v65; // rbx
  const Vector *v66; // r12
  const Vector *v67; // rax
  float v68; // xmm1_4
  double v69; // xmm0_8
  __m128i v70; // xmm0
  unsigned int v71; // r14d
  float v72; // xmm1_4
  CDOTA_BaseNPC *v73; // rax
  CDOTA_Buff *v74; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v77; // rax
  CDOTA_ParticleManager *v78; // rax
  CDOTA_ParticleManager *v79; // rax
  int iBestEntityIndex; // [rsp+30h] [rbp-250h]
  float flRadius; // [rsp+38h] [rbp-248h]
  int iShackleTargets; // [rsp+3Ch] [rbp-244h]
  char iShackleTargetsa; // [rsp+3Ch] [rbp-244h]
  float shackle_angle; // [rsp+50h] [rbp-230h]
  const CBaseAnimating *shackle_anglea; // [rsp+50h] [rbp-230h]
  float fBestAngle; // [rsp+58h] [rbp-228h]
  float fBestAnglea; // [rsp+58h] [rbp-228h]
  float stun_duration; // [rsp+5Ch] [rbp-224h]
  float stun_durationa; // [rsp+5Ch] [rbp-224h]
  float stun_durationb; // [rsp+5Ch] [rbp-224h]
  Vector vArrowDirNormalized; // [rsp+60h] [rbp-220h] BYREF
  Vector vShackleLoc; // [rsp+70h] [rbp-210h]
  Vector vToTree; // [rsp+80h] [rbp-200h] BYREF
  __int128 vToTree_0; // [rsp+90h] [rbp-1F0h] OVERLAPPED BYREF
  int v96; // [rsp+A0h] [rbp-1E0h]
  int v97; // [rsp+A4h] [rbp-1DCh]
  KeyValues kv; // [rsp+D0h] [rbp-1B0h] BYREF
  int v99; // [rsp+E8h] [rbp-198h]
  int v100; // [rsp+ECh] [rbp-194h]
  int v101; // [rsp+F0h] [rbp-190h]
  char v102; // [rsp+111h] [rbp-16Fh]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+130h] [rbp-150h] BYREF
  unsigned __int64 v104; // [rsp+248h] [rbp-38h]
  Vector v105; // 0:xmm0_8.8,8:xmm1_4.4

  v104 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(hTarget);
  v4 = v3;
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 && LOBYTE(v3[71]._vptr_IHandleEntity) == 0 )
  {
    vptr_IHandleEntity = v3[58]._vptr_IHandleEntity;
    if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
      && (BYTE1(vptr_IHandleEntity) & 2) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4, this, 1) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shackle_distance", -1, 0);
      shackle_angle = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "shackle_angle", -1, 0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      vArrowDirNormalized.z = 0.0;
      v11 = y - this->m_vArrowStartPos.y;
      vArrowDirNormalized.x = x - this->m_vArrowStartPos.x;
      vArrowDirNormalized.y = v11;
      VectorNormalize(&vArrowDirNormalized);
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 64;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      flRadius = LevelSpecialValue;
      v12 = CBaseEntity::GetAbsOrigin(v4);
      Caster = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, v12, v4, flRadius, &entities, 2, 19, 0, 0, 0);
      iShackleTargets = this->shackle_count;
      if ( entities.m_Size <= 0 )
        goto LABEL_67;
      v14 = 0;
      fBestAngle = 360.0;
      iBestEntityIndex = -1;
      do
      {
        v15 = &entities.m_Memory.m_pMemory[v14];
        m_Index = v15->m_Index;
        if ( v15->m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && v4 != m_pInstance )
              {
                v21 = CBaseEntity::GetAbsOrigin(v4);
                v22 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v23 = v22->x - v21->x;
                *(&vToTree_0 + 4) = COERCE_UNSIGNED_INT(v22->y - v21->y);
                *&vToTree_0 = v23;
                VectorNormalize(&vToTree_0);
                v24.m128d_f64[0] = acos((((*&vToTree_0 * vArrowDirNormalized.x)
                                        + (*(&vToTree_0 + 1) * vArrowDirNormalized.y))
                                       + (*(&vToTree_0 + 2) * vArrowDirNormalized.z)))
                                 * 180.0
                                 / 3.141592653589793;
                v25 = _mm_movedup_pd(v24).m128d_f64[0];
                stun_duration = v25;
                if ( shackle_angle > v25 && fBestAngle > v25 )
                {
                  --iShackleTargets;
                  vShackleLoc = *CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( iShackleTargets <= 0 )
                  {
                    iBestEntityIndex = v14;
                    fBestAngle = stun_duration;
                  }
                  else
                  {
                    iBestEntityIndex = v14;
                    fBestAngle = stun_duration;
                    if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_windrunner_shackle_shot", 0) == 0 )
                    {
                      sTrackingProjectileCreateInfo::sTrackingProjectileCreateInfo(&kv);
                      kv.m_uValue = "particles/units/heroes/hero_windrunner/windrunner_shackleshot.vpcf";
                      *(&kv.CKeyValues_Data + 1) = this;
                      v99 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_speed", -1, 0);
                      m_pEntity = v4->m_pEntity;
                      if ( m_pEntity != 0 )
                      {
                        v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                        v28 = 0x7FFF;
                        if ( m_pEntity->m_EHandle.m_Index != -1 )
                          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v100) = v28 | v100 & 0x8000;
                        v100 = (v27 << 15) | v100 & 0x7FFF;
                      }
                      else
                      {
                        v100 = -1;
                      }
                      v29 = m_pInstance->m_pEntity;
                      if ( v29 != 0 )
                      {
                        v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
                        v31 = 0x7FFF;
                        if ( v29->m_EHandle.m_Index != -1 )
                          v31 = v29->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v101) = v31 | v101 & 0x8000;
                        v101 = (v30 << 15) | v101 & 0x7FFF;
                      }
                      else
                      {
                        v101 = -1;
                      }
                      v102 = 0;
                      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &kv);
                      CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
                      if ( CursorTarget != 0 && (v33 = CursorTarget->m_pEntity) != 0 )
                      {
                        v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
                        v35 = 0x7FFF;
                        if ( v33->m_EHandle.m_Index != -1 )
                          v35 = v33->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(this->m_hTarget.m_Index) = v35 | this->m_hTarget.m_Index & 0x8000;
                        this->m_hTarget.m_Index = (v34 << 15) | this->m_hTarget.m_Index & 0x7FFF;
                      }
                      else
                      {
                        this->m_hTarget.m_Index = -1;
                      }
                      v36 = CDOTABaseAbility::GetCaster(this);
                      this->m_vArrowStartPos = *CBaseEntity::GetAbsOrigin(v36);
                      v37 = CDOTABaseAbility::GetCaster(this);
                      CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_Windrunner.ShackleshotCast", 0.0, 0, 0);
                      iBestEntityIndex = v14;
                      fBestAngle = stun_duration;
                    }
                  }
                }
              }
            }
          }
        }
        ++v14;
      }
      while ( entities.m_Size > v14 );
      if ( iBestEntityIndex == -1 )
      {
LABEL_67:
        LODWORD(vToTree_0) = 0;
        *(&vToTree_0 + 1) = 0;
        v96 = 0;
        v97 = 0;
        v105 = *CBaseEntity::GetAbsOrigin(v4);
        CGridNav::GetStandingTreesAroundPoint(&g_GridNav, v105, flRadius, 0, &vToTree_0);
        if ( vToTree_0 <= 0 )
        {
          iShackleTargetsa = 0;
        }
        else
        {
          v53 = 0;
          v54 = 0;
          iShackleTargetsa = 0;
          fBestAnglea = 360.0;
          do
          {
            v55 = (*(**(*(&vToTree_0 + 1) + v53) + 64LL))(*(*(&vToTree_0 + 1) + v53));
            v56 = CBaseEntity::GetAbsOrigin(v4);
            v57 = CBaseEntity::GetAbsOrigin(v55);
            v58 = v57->x - v56->x;
            v59 = v57->y - v56->y;
            vToTree.z = 0.0;
            vToTree.x = v58;
            vToTree.y = v59;
            VectorNormalize(&vToTree);
            v60.m128d_f64[0] = acos((((vToTree.x * vArrowDirNormalized.x) + (vToTree.y * vArrowDirNormalized.y))
                                   + (vToTree.z * vArrowDirNormalized.z)))
                             * 180.0
                             / 3.141592653589793;
            v61 = _mm_movedup_pd(v60).m128d_f64[0];
            stun_durationb = v61;
            if ( shackle_angle > v61 && fBestAnglea > v61 )
            {
              iShackleTargetsa = 1;
              vShackleLoc = *CBaseEntity::GetAbsOrigin(v55);
              fBestAnglea = stun_durationb;
            }
            ++v54;
            v53 += 8;
          }
          while ( vToTree_0 > v54 );
        }
        LODWORD(vToTree_0) = 0;
        if ( (v97 & 0xC0000000) == 0 )
        {
          CUtlMemory<CDOTA_Tree *,int>::Purge((&vToTree_0 + 8));
          if ( (v97 & 0xC0000000) == 0 )
            CUtlMemory<CDOTA_Tree *,int>::Purge((&vToTree_0 + 8));
        }
        if ( iShackleTargetsa != 0 )
        {
          iBestEntityIndex = -1;
        }
        else
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v4, "modifier_monkey_king_bounce_perch", 0);
          if ( ModifierByName == 0
            || (LODWORD(vToTree_0) = HIDWORD(ModifierByName[1].m_References.m_pHead),
                (v63 = CEntityHandle::operator CEntityInstance *(&vToTree_0)) == 0)
            || (v64 = __dynamic_cast(v63, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTA_Tree, -2)) == 0 )
          {
            *v70.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fail_stun_duration", -1, 0);
            v71 = _mm_cvtsi128_si32(v70);
            KeyValues::KeyValues(&kv, "modifier_stun");
            KeyValues::SetFloat(&kv, "duration", v72);
            v73 = CDOTABaseAbility::GetCaster(this);
            v74 = CDOTA_BaseNPC::AddNewModifier(v4, v73, this, "modifier_stunned", &kv, 0);
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_windrunner/windrunner_shackleshot_single.vpcf",
                         1,
                         v4,
                         0,
                         0);
            *&vToTree_0 = v71;
            DWORD2(vToTree_0) = 0;
            v77 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v77, Particle, 1, *&vToTree_0, *(&vToTree_0 + 2));
            if ( v74 != 0 )
            {
              CDOTA_Buff::AddParticle(v74, Particle, 0, 0, -1, 0, 0);
            }
            else
            {
              v78 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v78, Particle);
            }
            CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Windrunner.ShackleshotStun", 0.0, 0, 0);
            goto LABEL_60;
          }
          v65 = (*(*v64 + 64LL))(v64);
          v66 = CBaseEntity::GetAbsOrigin(v4);
          v67 = CBaseEntity::GetAbsOrigin(v65);
          v68 = v67->x - v66->x;
          *(&vToTree_0 + 4) = COERCE_UNSIGNED_INT(v67->y - v66->y);
          *&vToTree_0 = v68;
          VectorNormalize(&vToTree_0);
          v69 = (((*&vToTree_0 * vArrowDirNormalized.x) + (*(&vToTree_0 + 1) * vArrowDirNormalized.y))
               + (*(&vToTree_0 + 2) * vArrowDirNormalized.z));
          if ( v69 > 1.0 || v69 < -1.0 )
            acos(v69);
          iShackleTargetsa = 1;
          iBestEntityIndex = -1;
          vShackleLoc = *CBaseEntity::GetAbsOrigin(v65);
        }
      }
      else
      {
        iShackleTargetsa = 0;
      }
      stun_durationa = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_windrunner_shackle_shot");
      KeyValues::SetFloat(&kv, "duration", v38);
      if ( iShackleTargetsa != 0 )
      {
        v40 = 0;
      }
      else
      {
        v39 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[iBestEntityIndex]);
        v40 = v39;
        if ( v39 == 0 || BYTE3(v39[7]._vptr_IHandleEntity) == 0 )
          v40 = 0;
        v41 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v40, v41, this, "modifier_windrunner_shackle_shot", &kv, 0);
      }
      v42 = CDOTABaseAbility::GetCaster(this);
      v43 = CDOTA_BaseNPC::AddNewModifier(v4, v42, this, "modifier_windrunner_shackle_shot", &kv, 0);
      v44 = GetParticleManager();
      if ( iShackleTargetsa != 0 )
      {
        v45 = CDOTA_ParticleManager::CreateParticle(
                v44,
                "particles/units/heroes/hero_windrunner/windrunner_shackleshot_pair_tree.vpcf",
                1,
                v4,
                0,
                0);
        v46 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v46, v45, 1, *&vShackleLoc.x, vShackleLoc.z);
      }
      else
      {
        v45 = CDOTA_ParticleManager::CreateParticle(
                v44,
                "particles/units/heroes/hero_windrunner/windrunner_shackleshot_pair.vpcf",
                1,
                v4,
                0,
                0);
        shackle_anglea = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[iBestEntityIndex]);
        v52 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v52, v45, 1, shackle_anglea, 1, 0, vec3_invalid, 1);
      }
      DWORD2(vToTree_0) = 0;
      *&vToTree_0 = LODWORD(stun_durationa);
      v47 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v47, v45, 2, *&vToTree_0, *(&vToTree_0 + 2));
      if ( v43 != 0 )
      {
        CDOTA_Buff::AddParticle(v43, v45, 0, 0, -1, 0, 0);
      }
      else
      {
        v79 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v79, v45);
      }
      CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Windrunner.ShackleshotBind", 0.0, 0, 0);
      if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        if ( LOBYTE(v4[71].m_pEntity) != 0
          || v40 == 0
          || (v40[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
          || LOBYTE(v40[71].m_pEntity) != 0 )
        {
          goto LABEL_57;
        }
        v48 = CDOTABaseAbility::GetCaster(this);
        if ( v48 != 0 && (v48->m_iUnitType & 1) != 0 )
          v49 = v48;
        else
          v49 = 0;
        v50 = 0;
        if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          v50 = v4;
        EconEntity_OnOwnerKillEaterEvent(
          v49,
          v50,
          kill_eater_event_t::kKillEaterEventType_Windrunner_DoubleShackles,
          1,
          INVALID_ITEM_DEF_INDEX);
        if ( (v4[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          goto LABEL_57;
      }
      else if ( v40 == 0 )
      {
        goto LABEL_60;
      }
      if ( (v40[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
LABEL_57:
        CResponseCriteriaSet::CResponseCriteriaSet(&vToTree_0);
        CResponseCriteriaSet::AppendCriteria(&vToTree_0, "shackled", "1", 1.0);
        m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &vToTree_0, 4, 0, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&vToTree_0);
      }
LABEL_60:
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1;
}


// CDOTA_Ability_Windrunner_Shackleshot::GetStunDuration  (line 316, @0x0000000002a59970, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Windrunner_Shackleshot::GetStunDuration(
        CDOTA_Ability_Windrunner_Shackleshot *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Windrunner_ShackleShot::~CDOTA_Modifier_Windrunner_ShackleShot  (line 325, @0x0000000002a65a40, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Windrunner_ShackleShot::~CDOTA_Modifier_Windrunner_ShackleShot(
        CDOTA_Modifier_Windrunner_ShackleShot *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Windrunner_ShackleShot::~CDOTA_Modifier_Windrunner_ShackleShot  (line 325, @0x0000000002a65a60, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned, ~CDOTA_Modifier_Windrunner_ShackleShot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Windrunner_ShackleShot::~CDOTA_Modifier_Windrunner_ShackleShot(
        CDOTA_Modifier_Windrunner_ShackleShot *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Ability_Windrunner_Powershot::~CDOTA_Ability_Windrunner_Powershot  (line 342, @0x0000000002a67a00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Windrunner_Powershot::~CDOTA_Ability_Windrunner_Powershot(
        CDOTA_Ability_Windrunner_Powershot *const this)
{
  this->_vptr_IHandleEntity = &off_43BB230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Windrunner_Powershot::~CDOTA_Ability_Windrunner_Powershot  (line 342, @0x0000000002a67a20, libserver.so)  // inlines: ~CDOTA_Ability_Windrunner_Powershot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Windrunner_Powershot::~CDOTA_Ability_Windrunner_Powershot(
        CDOTA_Ability_Windrunner_Powershot *const this)
{
  this->_vptr_IHandleEntity = &off_43BB230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Windrunner_Powershot::Schema_DynamicBinding  (line 344, @0x0000000002a62220, libserver.so)
// globals: CDOTA_Ability_Windrunner_Powershot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Powershot::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Powershot *const this)
{
  return CDOTA_Ability_Windrunner_Powershot::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 344, @0x0000000002a62230, libserver.so)
// globals: CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::DestructInstance  (line 344, @0x0000000002a62240, libserver.so)  // inlines: Destruct<CDOTA_Ability_Windrunner_Powershot>
void __fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::FreeInstance  (line 344, @0x0000000002a62260, libserver.so)
void __fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::CanAllocate  (line 344, @0x0000000002a62280, libserver.so)
bool __fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 344, @0x0000000002a62290, libserver.so)
// globals: CDOTA_Ability_Windrunner_Powershot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Powershot::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::AllocateInstance  (line 344, @0x0000000002a64530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::ConstructInstance  (line 344, @0x0000000002a663e0, libserver.so)  // inlines: CDOTA_Ability_Windrunner_Powershot, Construct<CDOTA_Ability_Windrunner_Powershot>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_43BB230;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 344, @0x0000000002a6b1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 344, @0x0000000002a6b1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal  (line 344, @0x0000000002a75430, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "windrunner_powershot", "CDOTA_Ability_Windrunner_Powershot"
// globals: `guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass, CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass, __dso_handle, CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo, CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass);
    CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass._vptr_CEntityClass = off_43BB1B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass);
    __cxa_atexit(
      CDOTA_Ability_Windrunner_Powershot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Windrunner_PowershotClass != 0 )
    return &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass;
  if ( `guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo,
      "CDOTA_Ability_Windrunner_Powershot",
      "windrunner_powershot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo);
  }
  CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass.m_pClassInfo = &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo;
  CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass.m_pBaseClassInfo = CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Windrunner_PowershotClass = &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass;
  CDOTA_Ability_Windrunner_Powershot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClassInfo.m_pClass = &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass;
  CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Windrunner_PowershotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Windrunner_Powershot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_PowershotClass;
}


// CDOTA_Ability_Windrunner_Powershot::WantsToChannelCancel  (line 353, @0x0000000002a622a0, libserver.so)
bool __fastcall CDOTA_Ability_Windrunner_Powershot::WantsToChannelCancel(
        CDOTA_Ability_Windrunner_Powershot *const this)
{
  return 0;
}


// CDOTA_Ability_Windrunner_Powershot::GetStolenActivityModifier  (line 355, @0x0000000002a622b0, libserver.so)
const char *__fastcall CDOTA_Ability_Windrunner_Powershot::GetStolenActivityModifier(
        CDOTA_Ability_Windrunner_Powershot *const this)
{
  return "powershot";
}


// CDOTA_Ability_Windrunner_Powershot::YouForgotToImplementOrDeclareServerClass  (line 378, @0x0000000002a3fbd0, libserver.so)
int __fastcall CDOTA_Ability_Windrunner_Powershot::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Windrunner_Powershot *const this)
{
  return 0;
}


// CDOTA_Ability_Windrunner_Powershot::GetServerClass  (line 378, @0x0000000002a48a30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Windrunner_Powershot::GetServerClass(
        CDOTA_Ability_Windrunner_Powershot *const this)
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


// CDOTA_Ability_Windrunner_Powershot::GetCooldown  (line 388, @0x0000000002a54300, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_windranger"
float __fastcall CDOTA_Ability_Windrunner_Powershot::GetCooldown(
        CDOTA_Ability_Windrunner_Powershot *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_windranger", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Windrunner_Powershot::OnSpellStart  (line 403, @0x0000000002a58380, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, DOTAGameRules, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, ~CPASAttenuationFilter, ~CPASFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, DOTA_EmitSound, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam (18 total)
// strings: "arrow_width", "tree_width", "Ability.PowershotPull", "particles/units/heroes/hero_windrunner/windrunner_spell_powershot_channel.vpcf", "bow_mid1"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_Windrunner_Powershot::OnSpellStart(CDOTA_Ability_Windrunner_Powershot *const this)
{
  float v1; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r13
  CDOTA_BaseNPC *v14; // r15
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // r13
  int v18; // ebx
  CDOTA_ParticleManager *v19; // rax
  __int64 v20; // [rsp+10h] [rbp-188h] BYREF
  __int128 vPos; // [rsp+18h] [rbp-180h] OVERLAPPED BYREF
  CPASAttenuationFilter filter; // [rsp+28h] [rbp-170h]

  v1 = 0.0;
  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v1;
  this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_reduction", -1, 0);
  this->arrow_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_width", -1, 0);
  this->tree_width = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "tree_width", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(6, "Ability.PowershotPull", Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v20 = *&AbsOrigin->x;
  *&vPos = AbsOrigin->z;
  CRecipientFilter::CRecipientFilter((&vPos + 8));
  *(&vPos + 1) = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS((&vPos + 8), &v20);
  *(&vPos + 1) = &off_3FECD70;
  CPASAttenuationFilter::Filter((&vPos + 8), &v20, 0.80000001, v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(v7);
  CRecipientFilter::RemoveRecipientsNotOnTeam((&vPos + 8), Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam((&vPos + 8), GlobalTeam);
  v10 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_windrunner/windrunner_spell_powershot_channel.vpcf",
                       2,
                       v10,
                       0,
                       0);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, m_nFXIndex, 0, v14, 5, "bow_mid1", *v13, 1);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = this->m_nFXIndex;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v18, 1, v17, 1, 0, vec3_invalid, 1);
  *(&vPos + 1) = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter((&vPos + 8));
}


// CDOTA_Ability_Windrunner_Powershot::OnChannelFinish  (line 436, @0x0000000002a58630, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetAbilityData, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::FindReplacementSound, DOTA_EmitSoundLocation, CDOTA_BaseNPC::StartGesture (16 total)
// strings: "arrow_speed", "arrow_range", "particles/units/heroes/hero_windrunner/windrunner_spell_powershot.vpcf", "Ability.Powershot"
void __fastcall CDOTA_Ability_Windrunner_Powershot::OnChannelFinish(
        CDOTA_Ability_Windrunner_Powershot *const this,
        bool bInterrupted)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r13d
  float v6; // xmm1_4
  float v7; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  int v12; // r14d
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // rax
  vec_t v17; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v24; // rax
  const char *ReplacementSound; // r13
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm3_4
  CDOTA_BaseNPC *v33; // rax
  const QAngle *AbsAngles; // rax
  float v35; // xmm0_4
  float arrow_speed; // [rsp+Ch] [rbp-C4h]
  Vector vDirection; // [rsp+10h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-B0h] BYREF

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  arrow_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_speed", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_range", -1, 0);
  if ( g_pGameRules != 0 )
  {
    v6 = 1.0;
    v7 = *&g_pGameRules[18].m_szQuestName[20] - this->m_fStartTime;
    if ( v7 <= 1.0 )
    {
      v6 = 0.0;
      if ( v7 >= 0.0 )
        v6 = *&g_pGameRules[18].m_szQuestName[20] - this->m_fStartTime;
    }
  }
  else
  {
    v6 = 1.0;
    v35 = 0.0 - this->m_fStartTime;
    if ( v35 <= 1.0 )
    {
      v6 = 0.0;
      if ( v35 >= 0.0 )
        v6 = 0.0 - this->m_fStartTime;
    }
  }
  this->m_fPower = v6;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v10 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v11 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v10;
  vDirection.x = v11;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v33);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  this->m_bAwardedKillEater = 0;
  this->m_nHeroesHit = 0;
  v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_windrunner/windrunner_spell_powershot.vpcf";
  info.fStartRadius = 0.0;
  y = vec3_origin.y;
  info.fEndRadius = 0.0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.bHasFrontalCone = 1;
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
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  info.vSpawnOrigin.x = v16->x;
  info.vSpawnOrigin.y = v16->y;
  v17 = v16->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vVelocity.y = vDirection.y * arrow_speed;
  info.vSpawnOrigin.z = v17;
  info.vVelocity.z = vDirection.z * arrow_speed;
  info.vVelocity.x = arrow_speed * vDirection.x;
  info.fDistance = ((vptr_IHandleEntity[228])(this) + LevelSpecialValue);
  info.fStartRadius = this->arrow_width;
  info.fEndRadius = info.fStartRadius;
  v19 = CDOTABaseAbility::GetCaster(this);
  if ( v19 != 0 && (m_pEntity = v19->m_pEntity) != 0 )
  {
    v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v22 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v22 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v21 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = v12;
  info.iVisionTeamNumber = m_Value;
  this->m_iProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v24 = CDOTABaseAbility::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v24, "Ability.Powershot");
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = CBaseEntity::GetAbsOrigin(v26);
  this->m_SoundEventGuid = DOTA_EmitSoundLocation(v27, ReplacementSound, 0);
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v28, 1517, 0.1, 0.1, 9, 0, 1.0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v31 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v31,
    1,
    m_iAbilityID,
    0,
    0,
    *&vec3_origin.x,
    vec3_origin.z,
    -1.0,
    v32);
}


// CDOTA_Ability_Windrunner_Powershot::OnProjectileThink  (line 496, @0x0000000002a47df0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CDOTABaseAbility::GetCaster, CGridNav::DestroyTreesAroundPoint, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Windrunner_Powershot::OnProjectileThink(
        CDOTA_Ability_Windrunner_Powershot *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // eax
  float v6; // xmm3_4
  __m128i z_low; // xmm3
  __m128i y_low; // xmm4
  int v9; // r14d
  int v10; // r15d
  SosFieldValueMem_t *v11; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v5, *vLocation, this->tree_width, v6);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v9 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v10 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v11 = operator new[](0xCu);
  fieldData.m_pData = v11;
  fieldData.m_nAllocSize = 12;
  *v11 = vLocation;
  *(v11 + 1) = v10;
  *(v11 + 2) = v9;
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


// CDOTA_Ability_Windrunner_Powershot::OnProjectileHit  (line 510, @0x0000000002a58b20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_windrunner/windrunner_powershot_dmg.vpcf", "attach_hitloc", "Hero_Windrunner.PowershotDamage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Windrunner_Powershot::OnProjectileHit(
        CDOTA_Ability_Windrunner_Powershot *const this,
        unsigned __int16 *hTarget,
        const CFieldPath *vLocation)
{
  int v5; // eax
  __int16 v6; // dx
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC_Hero *v22; // rdi
  int v23; // eax
  bool v24; // sf
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  float vision_duration; // [rsp+Ch] [rbp-24h]
  float vision_durationa; // [rsp+Ch] [rbp-24h]

  v5 = *hTarget;
  if ( (*hTarget + 2) <= 1
    || (v6 = *hTarget, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) == 0)
    || (v8 = &v7[v6 & 0x1FF]) == 0
    || v5 != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
    vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_POWERSHOT,
      Caster->m_iTeamNum.m_Value,
      vLocation,
      LevelSpecialValue,
      vision_duration,
      0);
    return 0;
  }
  vision_durationa = (*(this->_vptr_IHandleEntity + 247))(this) * this->m_fPower;
  v13 = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(v13, m_pInstance, this, vision_durationa, 2, 0);
  v14 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_windrunner/windrunner_powershot_dmg.vpcf",
                   2,
                   m_pInstance,
                   0,
                   v14);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v14, 0, m_pInstance, 5, "attach_hitloc", *AbsOrigin, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v14, 1, m_pInstance, 1, 0, vec3_invalid, 1);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v19, v14);
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
    && LOBYTE(m_pInstance[71].m_pEntity) == 0
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
  {
    v20 = 0;
    if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
    {
      v20 = m_pInstance;
    }
    v21 = CDOTABaseAbility::GetCaster(this);
    if ( v21 != 0 && (v21->m_iUnitType & 1) != 0 )
      v22 = v21;
    else
      v22 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v22,
      v20,
      kill_eater_event_t::kKillEaterEventType_Windrunner_PowershotKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  this->m_fPower = (1.0 - this->damage_reduction) * this->m_fPower;
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Windrunner.PowershotDamage", 0.0, 0, 0);
  if ( this->m_bAwardedKillEater )
    return 0;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    return 0;
  if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 )
    return 0;
  v23 = this->m_nHeroesHit + 1;
  v24 = this->m_nHeroesHit < 0;
  this->m_nHeroesHit = v23;
  if ( v24 ^ __OFSUB__(v23, 1) | (v23 == 1) )
    return 0;
  this->m_bAwardedKillEater = 1;
  v25 = CDOTABaseAbility::GetCaster(this);
  if ( v25 != 0 && (v25->m_iUnitType & 1) != 0 )
    v26 = v25;
  else
    v26 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v26,
    0,
    kill_eater_event_t::kKillEaterEventType_Windrunner_GoodPowershots,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 0;
}


// CDOTA_Ability_Windrunner_Powershot::GetAbilityDamageToTargetOverInterval  (line 559, @0x0000000002a42110, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Windrunner_Powershot::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Windrunner_Powershot *const this,
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


// CDOTA_Ability_Windrunner_Windrun::~CDOTA_Ability_Windrunner_Windrun  (line 573, @0x0000000002a67a50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Windrunner_Windrun::~CDOTA_Ability_Windrunner_Windrun(
        CDOTA_Ability_Windrunner_Windrun *const this)
{
  this->_vptr_IHandleEntity = &off_43BBD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Windrunner_Windrun::~CDOTA_Ability_Windrunner_Windrun  (line 573, @0x0000000002a67a70, libserver.so)  // inlines: ~CDOTA_Ability_Windrunner_Windrun
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Windrunner_Windrun::~CDOTA_Ability_Windrunner_Windrun(
        CDOTA_Ability_Windrunner_Windrun *const this)
{
  this->_vptr_IHandleEntity = &off_43BBD30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Windrunner_Windrun::Schema_DynamicBinding  (line 575, @0x0000000002a622c0, libserver.so)
// globals: CDOTA_Ability_Windrunner_Windrun::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Windrun::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Windrun *const this)
{
  return CDOTA_Ability_Windrunner_Windrun::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 575, @0x0000000002a622d0, libserver.so)
// globals: CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::DestructInstance  (line 575, @0x0000000002a622e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Windrunner_Windrun>
void __fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::FreeInstance  (line 575, @0x0000000002a62300, libserver.so)
void __fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::CanAllocate  (line 575, @0x0000000002a62320, libserver.so)
bool __fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 575, @0x0000000002a62330, libserver.so)
// globals: CDOTA_Ability_Windrunner_Windrun::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_Windrun::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::AllocateInstance  (line 575, @0x0000000002a64570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::ConstructInstance  (line 575, @0x0000000002a66430, libserver.so)  // inlines: CDOTA_Ability_Windrunner_Windrun, Construct<CDOTA_Ability_Windrunner_Windrun>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43BBD30;
  }
  return p;
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 575, @0x0000000002a6b1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 575, @0x0000000002a6b210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal  (line 575, @0x0000000002a75580, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Windrunner_Windrun"
// globals: `guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass, CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass, __dso_handle, CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo, CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo
CEntityClass *__cdecl CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass);
    CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass._vptr_CEntityClass = off_43BBCB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass);
    __cxa_atexit(
      CDOTA_Ability_Windrunner_Windrun::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Windrunner_WindrunClass != 0 )
    return &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass;
  if ( `guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo,
      "CDOTA_Ability_Windrunner_Windrun",
      "windrunner_windrun",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo);
  }
  CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass.m_pClassInfo = &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo;
  CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass.m_pBaseClassInfo = CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Windrunner_WindrunClass = &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass;
  CDOTA_Ability_Windrunner_Windrun::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClassInfo.m_pClass = &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass;
  CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Windrunner_WindrunClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Windrunner_Windrun::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_WindrunClass;
}


// CDOTA_Ability_Windrunner_Windrun::YouForgotToImplementOrDeclareServerClass  (line 586, @0x0000000002a3fbe0, libserver.so)
int __fastcall CDOTA_Ability_Windrunner_Windrun::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Windrunner_Windrun *const this)
{
  return 0;
}


// CDOTA_Ability_Windrunner_Windrun::GetServerClass  (line 586, @0x0000000002a48b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Windrunner_Windrun::GetServerClass(CDOTA_Ability_Windrunner_Windrun *const this)
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


// CDOTA_Ability_Windrunner_Windrun::OnSpellStart  (line 594, @0x0000000002a40f90, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_windrunner_windrun", "Ability.Windrun"
void __fastcall CDOTA_Ability_Windrunner_Windrun::OnSpellStart(CDOTA_Ability_Windrunner_Windrun *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_windrunner_windrun");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_windrunner_windrun", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Ability.Windrun", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Windrunner_Windrun::~CDOTA_Modifier_Windrunner_Windrun  (line 610, @0x0000000002a64cb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Windrunner_Windrun::~CDOTA_Modifier_Windrunner_Windrun(
        CDOTA_Modifier_Windrunner_Windrun *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BC7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Windrunner_Windrun::~CDOTA_Modifier_Windrunner_Windrun  (line 610, @0x0000000002a64cd0, libserver.so)  // inlines: ~CDOTA_Modifier_Windrunner_Windrun
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Windrunner_Windrun::~CDOTA_Modifier_Windrunner_Windrun(
        CDOTA_Modifier_Windrunner_Windrun *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BC7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Windrunner_Windrun::IsPermanent  (line 619, @0x0000000002a62340, libserver.so)
bool __fastcall CDOTA_Modifier_Windrunner_Windrun::IsPermanent(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 0;
}


// CDOTA_Modifier_Windrunner_Windrun::IsPurgable  (line 620, @0x0000000002a62350, libserver.so)
bool __fastcall CDOTA_Modifier_Windrunner_Windrun::IsPurgable(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 1;
}


// CDOTA_Modifier_Windrunner_Windrun::IsAura  (line 621, @0x0000000002a62360, libserver.so)
bool __fastcall CDOTA_Modifier_Windrunner_Windrun::IsAura(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 1;
}


// CDOTA_Modifier_Windrunner_Windrun::GetModifierAura  (line 622, @0x0000000002a62370, libserver.so)
// strings: "modifier_windrunner_windrun_slow"
const char *__fastcall CDOTA_Modifier_Windrunner_Windrun::GetModifierAura(
        CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return "modifier_windrunner_windrun_slow";
}


// CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchTeam  (line 623, @0x0000000002a62380, libserver.so)
int __fastcall CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchTeam(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 2;
}


// CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchType  (line 624, @0x0000000002a62390, libserver.so)
int __fastcall CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchType(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 19;
}


// CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchFlags  (line 625, @0x0000000002a623a0, libserver.so)
int __fastcall CDOTA_Modifier_Windrunner_Windrun::GetAuraSearchFlags(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 0;
}


// CDOTA_Modifier_Windrunner_Windrun::GetAuraRadius  (line 626, @0x0000000002a623b0, libserver.so)
int __fastcall CDOTA_Modifier_Windrunner_Windrun::GetAuraRadius(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Windrunner_Windrun::GetAuraDuration  (line 627, @0x0000000002a623c0, libserver.so)
float __fastcall CDOTA_Modifier_Windrunner_Windrun::GetAuraDuration(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return 2.5;
}


// CDOTA_Modifier_Windrunner_Windrun::GetEffectName  (line 629, @0x0000000002a623d0, libserver.so)
// strings: "particles/units/heroes/hero_windrunner/windrunner_windrun.vpcf"
const char *__fastcall CDOTA_Modifier_Windrunner_Windrun::GetEffectName(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  return "particles/units/heroes/hero_windrunner/windrunner_windrun.vpcf";
}


// CDOTA_Modifier_Windrunner_Windrun::OnCreated  (line 646, @0x0000000002a557d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Windrunner_Windrun::OnCreated(
        CDOTA_Modifier_Windrunner_Windrun *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movespeed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movespeed_bonus_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movespeed_bonus_pct = 0;
}


// CDOTA_Modifier_Windrunner_Windrun::OnRefresh  (line 654, @0x0000000002a55860, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Windrunner_Windrun::OnRefresh(
        CDOTA_Modifier_Windrunner_Windrun *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movespeed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movespeed_bonus_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movespeed_bonus_pct = 0;
}


// CDOTA_Modifier_Windrunner_Windrun::DeclareFunctions  (line 662, @0x0000000002a3fbf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Windrunner_Windrun::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Windrunner_Windrun::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_Windrunner_Windrun::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Windrunner_Windrun::DeclareFunctions(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Windrunner_Windrun::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[40].__pfn = CDOTA_Modifier_Windrunner_Windrun::GetModifierEvasion_Constant;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Windrunner_Windrun::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Windrunner_Windrun::GetActivityTranslationModifiers  (line 671, @0x0000000002a42410, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_Windrun::GetActivityTranslationModifiers(
        CDOTA_Modifier_Windrunner_Windrun *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = &loc_2;
  *&result.m_eType = 2;
  if ( params->nActivity != 1502 )
    *&result.m_eType = 2;
  LOBYTE(result.m_szVal) = 0;
  if ( params->nActivity == 1502 )
    result.m_szVal = "windrun";
  return result;
}


// CDOTA_Modifier_Windrunner_Windrun::OnDestroy  (line 684, @0x0000000002a41ea0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetCaster, CBaseEntity::StopSound, CDOTA_Buff::GetAbility, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
// strings: "Ability.Windrun"
void __fastcall CDOTA_Modifier_Windrunner_Windrun::OnDestroy(CDOTA_Modifier_Windrunner_Windrun *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // [rsp+8h] [rbp-18h]

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Ability.Windrun");
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
  }
}


// CDOTA_Modifier_Windrunner_Windrun::GetModifierMoveSpeedBonus_Percentage  (line 698, @0x0000000002a3fc50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_Windrun::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Windrunner_Windrun *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_bonus_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Windrunner_Windrun::GetModifierEvasion_Constant  (line 705, @0x0000000002a3fc70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_Windrun::GetModifierEvasion_Constant(
        CDOTA_Modifier_Windrunner_Windrun *const this,
        const CModifierParams *const params)
{
  return 0x42C8000000000001uLL;
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::~CDOTA_Modifier_Windrunner_Windrun_Slow  (line 714, @0x0000000002a64c60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::~CDOTA_Modifier_Windrunner_Windrun_Slow(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BCB10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::~CDOTA_Modifier_Windrunner_Windrun_Slow  (line 714, @0x0000000002a64c80, libserver.so)  // inlines: ~CDOTA_Modifier_Windrunner_Windrun_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::~CDOTA_Modifier_Windrunner_Windrun_Slow(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BCB10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::GetEffectName  (line 724, @0x0000000002a623e0, libserver.so)
// strings: "particles/units/heroes/hero_windrunner/windrunner_windrun_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::GetEffectName(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this)
{
  return "particles/units/heroes/hero_windrunner/windrunner_windrun_slow.vpcf";
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::OnCreated  (line 736, @0x0000000002a55350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "enemy_movespeed_bonus_pct"
void __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::OnCreated(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->enemy_movespeed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "enemy_movespeed_bonus_pct",
                                        -1,
                                        0);
  else
    this->enemy_movespeed_bonus_pct = 0;
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::OnRefresh  (line 743, @0x0000000002a552f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "enemy_movespeed_bonus_pct"
void __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::OnRefresh(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->enemy_movespeed_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "enemy_movespeed_bonus_pct",
                                        -1,
                                        0);
  else
    this->enemy_movespeed_bonus_pct = 0;
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::DeclareFunctions  (line 750, @0x0000000002a3fc90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Windrunner_Windrun_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::DeclareFunctions(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Windrunner_Windrun_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Windrunner_Windrun_Slow::GetModifierMoveSpeedBonus_Percentage  (line 757, @0x0000000002a3fcb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_Windrun_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Windrunner_Windrun_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->enemy_movespeed_bonus_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Windrunner_FocusFire::~CDOTA_Ability_Windrunner_FocusFire  (line 768, @0x0000000002a67aa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Windrunner_FocusFire::~CDOTA_Ability_Windrunner_FocusFire(
        CDOTA_Ability_Windrunner_FocusFire *const this)
{
  this->_vptr_IHandleEntity = &off_43BCE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Windrunner_FocusFire::~CDOTA_Ability_Windrunner_FocusFire  (line 768, @0x0000000002a67ac0, libserver.so)  // inlines: ~CDOTA_Ability_Windrunner_FocusFire
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Windrunner_FocusFire::~CDOTA_Ability_Windrunner_FocusFire(
        CDOTA_Ability_Windrunner_FocusFire *const this)
{
  this->_vptr_IHandleEntity = &off_43BCE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Windrunner_FocusFire::Schema_DynamicBinding  (line 770, @0x0000000002a623f0, libserver.so)
// globals: CDOTA_Ability_Windrunner_FocusFire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_FocusFire::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_FocusFire *const this)
{
  return CDOTA_Ability_Windrunner_FocusFire::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 770, @0x0000000002a62400, libserver.so)
// globals: CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::DestructInstance  (line 770, @0x0000000002a62410, libserver.so)  // inlines: Destruct<CDOTA_Ability_Windrunner_FocusFire>
void __fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::FreeInstance  (line 770, @0x0000000002a62430, libserver.so)
void __fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::CanAllocate  (line 770, @0x0000000002a62450, libserver.so)
bool __fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 770, @0x0000000002a62460, libserver.so)
// globals: CDOTA_Ability_Windrunner_FocusFire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Windrunner_FocusFire::s_pSchemaBinding;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::AllocateInstance  (line 770, @0x0000000002a645b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::ConstructInstance  (line 770, @0x0000000002a66460, libserver.so)  // inlines: CDOTA_Ability_Windrunner_FocusFire, Construct<CDOTA_Ability_Windrunner_FocusFire>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43BCE70;
  }
  return p;
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 770, @0x0000000002a6b240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 770, @0x0000000002a6b260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal  (line 770, @0x0000000002a756d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Windrunner_FocusFire"
// globals: `guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass, CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass, __dso_handle, CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo, CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo
CEntityClass *__cdecl CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass);
    CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass._vptr_CEntityClass = off_43BCDF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass);
    __cxa_atexit(
      CDOTA_Ability_Windrunner_FocusFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Windrunner_FocusFireClass != 0 )
    return &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass;
  if ( `guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo,
      "CDOTA_Ability_Windrunner_FocusFire",
      "windrunner_focusfire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo);
  }
  CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass.m_pClassInfo = &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo;
  CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass.m_pBaseClassInfo = CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Windrunner_FocusFireClass = &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass;
  CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClassInfo.m_pClass = &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass;
  CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Windrunner_FocusFireClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Windrunner_FocusFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Windrunner_FocusFireClass;
}


// CDOTA_Ability_Windrunner_FocusFire::GetCastRangeBonus  (line 776, @0x0000000002a62470, libserver.so)
int __fastcall CDOTA_Ability_Windrunner_FocusFire::GetCastRangeBonus(CDOTA_Ability_Windrunner_FocusFire *const this)
{
  return 0;
}


// CDOTA_Ability_Windrunner_FocusFire::GetCastRange  (line 777, @0x0000000002a6a530, libserver.so)  // inlines: GetAttackRange, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
int __fastcall CDOTA_Ability_Windrunner_FocusFire::GetCastRange(
        CDOTA_Ability_Windrunner_FocusFire *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r12
  CDOTA_BaseNPC *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm1_4
  float v19; // xmm0_4
  int result; // eax
  __int64 v21; // rdx
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &Caster->m_ModifierManager;
  v6 = Caster;
  v7 = Caster->m_ModifierManager.m_buffsForModifiers[71];
  if ( v7 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v8 = v6->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = v6->m_iAttackRange;
  if ( v8 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v22 = Modifier_Constant_Highest_Internal;
    v24 = v6->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v22;
    m_iAttackRange = v24;
  }
  v11 = v6->m_ModifierManager.m_buffsForModifiers[70];
  v12 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v13 = 0.0;
  if ( v11 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
  {
    v23 = Modifier_Constant_Highest_Internal;
    v25 = v12;
    v13 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v23;
    v12 = v25;
  }
  if ( Modifier_Constant_Highest_Internal > (v12 + v13) )
  {
    v21 = v6->m_ModifierManager.m_buffsForModifiers[71];
    result = 0;
    if ( v21 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
      return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               p_m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default);
  }
  else
  {
    v14 = v6->m_ModifierManager.m_buffsForModifiers[69];
    v15 = 0.0;
    v16 = v6->m_iAttackRange;
    if ( v14 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
    {
      v26 = v6->m_iAttackRange;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v16 = v26;
    }
    v17 = v6->m_ModifierManager.m_buffsForModifiers[70];
    v18 = v16 + v15;
    v19 = 0.0;
    if ( v17 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
    {
      v27 = v18;
      v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v18 = v27;
    }
    return (v19 + v18);
  }
  return result;
}


// CDOTA_Ability_Windrunner_FocusFire::YouForgotToImplementOrDeclareServerClass  (line 786, @0x0000000002a3fcd0, libserver.so)
int __fastcall CDOTA_Ability_Windrunner_FocusFire::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Windrunner_FocusFire *const this)
{
  return 0;
}


// CDOTA_Ability_Windrunner_FocusFire::GetServerClass  (line 786, @0x0000000002a488f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Windrunner_FocusFire::GetServerClass(
        CDOTA_Ability_Windrunner_FocusFire *const this)
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


// CDOTA_Ability_Windrunner_FocusFire::OnSpellStart  (line 795, @0x0000000002a5fe80, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GrowMemory, InState, IsInvulnerable, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::AddNewModifier, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CDOTA_BaseNPC::UnitEmitSound (17 total)
// strings: "modifier_windrunner_focusfire", "Ability.Focusfire"
void __fastcall CDOTA_Ability_Windrunner_FocusFire::OnSpellStart(CDOTA_Ability_Windrunner_FocusFire *const this)
{
  CBaseEntity *CursorTarget; // rax
  float v3; // xmm1_4
  CBaseEntity *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  CEntityIndex v10; // r14d
  CBaseEntity *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CUnitOrders attackOrder; // [rsp+0h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    KeyValues::KeyValues(&kv, "modifier_windrunner_focusfire");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v3);
    v4 = CDOTABaseAbility::GetCursorTarget(this);
    KeyValues::SetPtr(&kv, "target", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_windrunner_focusfire");
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_windrunner_focusfire", &kv, 0);
    attackOrder.m_bQueue = 0;
    attackOrder.m_nUnits.m_Size = 0;
    memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
    attackOrder.m_nOrderSequenceNumber = 0;
    attackOrder.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    attackOrder.m_nIssuerPlayerIndex = -1;
    attackOrder.m_vPosition.y = y;
    attackOrder.m_vPosition.z = vec3_origin.z;
    v9 = CDOTABaseAbility::GetCaster(this);
    v10.m_Data = CEntityInstance::GetEntityIndex(v9).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
    attackOrder.m_nUnits.m_Size = 1;
    if ( attackOrder.m_nUnits.m_Memory.m_pMemory != 0 )
      attackOrder.m_nUnits.m_Memory.m_pMemory->m_Data = v10.m_Data;
    attackOrder.m_nOrderType = 4;
    v11 = CDOTABaseAbility::GetCursorTarget(this);
    attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(v11);
    DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v12, "Ability.Focusfire", 0.0, 0, 0);
    attackOrder.m_nUnits.m_Size = 0;
    if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Windrunner_FocusFire::GetCooldown  (line 824, @0x0000000002a59990, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Windrunner_FocusFire::GetCooldown(
        CDOTA_Ability_Windrunner_FocusFire *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Windrunner_FocusFire::GetAbilityDamageToTargetOverInterval  (line 835, @0x0000000002a54380, libserver.so)  // inlines: Min<float>, RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAttackSpeed, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetDuration, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "focusfire_damage_reduction_scepter", "focusfire_damage_reduction"
__int64 __fastcall CDOTA_Ability_Windrunner_FocusFire::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Windrunner_FocusFire *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm1_4
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  bool HasScepter; // al
  const char *v13; // rsi
  int LevelSpecialValue; // eax
  __m128 v15; // xmm1
  float v17; // [rsp-8h] [rbp-24h]
  float AttackSpeed; // [rsp-4h] [rbp-20h]
  float v19; // [rsp-4h] [rbp-20h]
  float v20; // [rsp-4h] [rbp-20h]
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervala = CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(v8);
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_speed", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v15.m128_f32[0] = v9 - AttackSpeed;
      LODWORD(v10) = _mm_cmple_ss(0LL, v15).m128_u32[0] & LODWORD(fIntervala);
    }
    else
    {
      v10 = ((v9 * fIntervala) / AttackSpeed) + 0.0;
    }
    v19 = v10;
    v17 = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    v20 = (v19 - fIntervala) * v17;
    v11 = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(v11);
    v13 = "focusfire_damage_reduction_scepter";
    if ( !HasScepter )
      v13 = "focusfire_damage_reduction";
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v13, -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1))
          * (((v20 * v17) * ((100 - LevelSpecialValue) / 100.0))
           - ((v17 * fIntervala) * (1.0 - ((100 - LevelSpecialValue) / 100.0)))));
  }
  return result;
}


// CDOTA_Modifier_Windrunner_FocusFire::~CDOTA_Modifier_Windrunner_FocusFire  (line 865, @0x0000000002a64c10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Windrunner_FocusFire::~CDOTA_Modifier_Windrunner_FocusFire(
        CDOTA_Modifier_Windrunner_FocusFire *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BD930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Windrunner_FocusFire::~CDOTA_Modifier_Windrunner_FocusFire  (line 865, @0x0000000002a64c30, libserver.so)  // inlines: ~CDOTA_Modifier_Windrunner_FocusFire
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Windrunner_FocusFire::~CDOTA_Modifier_Windrunner_FocusFire(
        CDOTA_Modifier_Windrunner_FocusFire *const this)
{
  this->_vptr_CDOTA_Buff = &off_43BD930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Windrunner_FocusFire::IsPurgable  (line 871, @0x0000000002a62480, libserver.so)
bool __fastcall CDOTA_Modifier_Windrunner_FocusFire::IsPurgable(CDOTA_Modifier_Windrunner_FocusFire *const this)
{
  return 0;
}


// CDOTA_Modifier_Windrunner_FocusFire::OnCreated  (line 895, @0x0000000002a55f40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetPtr
// strings: "focusfire_damage_reduction", "focusfire_damage_reduction_scepter"
void __fastcall CDOTA_Modifier_Windrunner_FocusFire::OnCreated(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  _QWORD *Ptr; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  __int16 m_Index; // dx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->focusfire_damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "focusfire_damage_reduction",
                                         -1,
                                         0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_11:
    this->focusfire_damage_reduction_scepter = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_12:
    this->bonus_attack_speed = 0;
    goto LABEL_5;
  }
  this->focusfire_damage_reduction = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_3:
  this->focusfire_damage_reduction_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                               v5,
                                               "focusfire_damage_reduction_scepter",
                                               -1,
                                               0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_12;
LABEL_4:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_attack_speed", -1, 0);
LABEL_5:
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v8 = Ptr[1]) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    if ( *(v8 + 16) == -1 )
      v10 = 0x7FFF;
    else
      v10 = *(v8 + 16) & 0x7FFF;
    m_Index = this->m_hTarget.m_Index;
    this->bActive = 1;
    LOWORD(this->m_hTarget.m_Index) = v10 | m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
    this->bActive = 1;
  }
}


// CDOTA_Modifier_Windrunner_FocusFire::DeclareFunctions  (line 906, @0x0000000002a3fce0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Windrunner_FocusFire::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Windrunner_FocusFire::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Windrunner_FocusFire::OnAttack(CModifierParams const&), CDOTA_Modifier_Windrunner_FocusFire::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Windrunner_FocusFire::OnBuildingKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Windrunner_FocusFire::DeclareFunctions(CDOTA_Modifier_Windrunner_FocusFire *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Windrunner_FocusFire::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[28].__pfn = CDOTA_Modifier_Windrunner_FocusFire::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Windrunner_FocusFire::OnAttack;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Windrunner_FocusFire::GetActivityTranslationModifiers;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[149].__pfn = CDOTA_Modifier_Windrunner_FocusFire::OnBuildingKilled;
  this->m_Functions[149].__delta = 0;
}


// CDOTA_Modifier_Windrunner_FocusFire::OnBuildingKilled  (line 916, @0x0000000002a45b10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_FocusFire::OnBuildingKilled(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r9
  uint32 v7; // r8d
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v12; // rdi

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 1uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1 )
    return 1uLL;
  v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v8 == 0 )
    return 1uLL;
  v9 = &v8[params->htarget.m_Index & 0x1FF];
  if ( v9 == 0 )
    return 1uLL;
  if ( v7 != v9->m_EHandle.m_Index )
    return 1uLL;
  v10 = v9->m_pInstance;
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 || m_pInstance != v10 )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  v12 = 0;
  if ( Caster != 0 && Caster->m_bIsDOTANPC && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
    v12 = Caster;
  EconEntity_OnOwnerKillEaterEvent(
    v12,
    0,
    kill_eater_event_t::kKillEaterEventType_Windrunner_FocusFireBuildings,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Modifier_Windrunner_FocusFire::GetActivityTranslationModifiers  (line 936, @0x0000000002a3fd70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_FocusFire::GetActivityTranslationModifiers(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "focusfire";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Windrunner_FocusFire::GetModifierAttackSpeedBonus_Constant  (line 943, @0x0000000002a424e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_FocusFire::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->bActive )
  {
    *v2.m128i_i32 = this->bonus_attack_speed;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Windrunner_FocusFire::GetModifierDamageOutgoing_Percentage  (line 953, @0x0000000002a42510, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_FocusFire::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  __m128i v6; // xmm0
  int focusfire_damage_reduction_scepter; // edx
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->bActive )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    focusfire_damage_reduction_scepter = this->focusfire_damage_reduction_scepter;
    if ( !HasScepter )
      focusfire_damage_reduction_scepter = this->focusfire_damage_reduction;
    *v6.m128i_i32 = focusfire_damage_reduction_scepter;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Windrunner_FocusFire::OnAttack  (line 963, @0x0000000002a46410, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Windrunner_FocusFire::OnAttack(
        CDOTA_Modifier_Windrunner_FocusFire *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rcx
  uint32 v13; // eax
  CEntityInstance *v14; // rsi
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx

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
          v13 = this->m_hTarget.m_Index;
          v14 = 0;
          if ( v13 + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
              if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
                v14 = v16->m_pInstance;
            }
          }
          this->bActive = v12 == v14;
        }
      }
    }
  }
  return 1uLL;
}


