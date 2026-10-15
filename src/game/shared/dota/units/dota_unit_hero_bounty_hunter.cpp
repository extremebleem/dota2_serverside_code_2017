// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:36
class CDOTA_Unit_Hero_BountyHunter : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_BountyHunter(CDOTA_Unit_Hero_BountyHunter &);
	CDOTA_Unit_Hero_BountyHunter(CDOTA_Unit_Hero_BountyHunter &);
	CDOTA_Unit_Hero_BountyHunter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_BountyHunter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:43
class C_CDOTA_Unit_Hero_BountyHunter_MapInstall {
	C_CDOTA_Unit_Hero_BountyHunter_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:57
class CDOTA_Ability_BountyHunter_ShurikenToss : public CDOTABaseAbility {
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
	CDOTA_Ability_BountyHunter_ShurikenToss(CDOTA_Ability_BountyHunter_ShurikenToss &);
	CDOTA_Ability_BountyHunter_ShurikenToss(CDOTA_Ability_BountyHunter_ShurikenToss &);
	CDOTA_Ability_BountyHunter_ShurikenToss();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	void CastShurikenToss(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_BountyHunter_ShurikenToss();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:78
class C_CDOTA_Ability_BountyHunter_ShurikenToss_MapInstall {
	C_CDOTA_Ability_BountyHunter_ShurikenToss_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:238
class CDOTA_Ability_BountyHunter_Jinada : public CDOTABaseAbility {
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
	CDOTA_Ability_BountyHunter_Jinada(CDOTA_Ability_BountyHunter_Jinada &);
	CDOTA_Ability_BountyHunter_Jinada(CDOTA_Ability_BountyHunter_Jinada &);
	CDOTA_Ability_BountyHunter_Jinada();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_BountyHunter_Jinada();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:248
class C_CDOTA_Ability_BountyHunter_Jinada_MapInstall {
	C_CDOTA_Ability_BountyHunter_Jinada_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:275
class CDOTA_Modifier_BountyHunter_Jinada : public CDOTA_Buff {
public:

private:

	int crit_multiplier;  // +0xba8
	float duration;  // +0xbac
	int nFXIndex;  // +0xbb0
	int nFXIndexB;  // +0xbb4
	bool m_bJinadaAttack;  // +0xbb8
	CDOTA_Modifier_BountyHunter_Jinada();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_BountyHunter_Jinada();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:453
class CDOTA_Modifier_BountyHunter_JinadaSlow : public CDOTA_Buff {
public:

private:

	int bonus_movespeed;  // +0xba8
	int bonus_attackspeed;  // +0xbac
	CDOTA_Modifier_BountyHunter_JinadaSlow();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_BountyHunter_JinadaSlow();

	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:524
class CDOTA_Ability_BountyHunter_WindWalk : public CDOTABaseAbility {
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
	CDOTA_Ability_BountyHunter_WindWalk(CDOTA_Ability_BountyHunter_WindWalk &);
	CDOTA_Ability_BountyHunter_WindWalk(CDOTA_Ability_BountyHunter_WindWalk &);
	CDOTA_Ability_BountyHunter_WindWalk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_BountyHunter_WindWalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:603
class CDOTA_Modifier_BountyHunter_WindWalk : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_BountyHunter_WindWalk();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_BountyHunter_WindWalk();

	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[91] OnAttack
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:679
class CDOTA_Ability_BountyHunter_Track : public CDOTABaseAbility {
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
	CDOTA_Ability_BountyHunter_Track(CDOTA_Ability_BountyHunter_Track &);
	CDOTA_Ability_BountyHunter_Track(CDOTA_Ability_BountyHunter_Track &);
	CDOTA_Ability_BountyHunter_Track();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_BountyHunter_Track();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:727
class CDOTA_Modifier_BountyHunter_Track : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	int m_nParentGold;  // +0xbac
	CDOTA_Modifier_BountyHunter_Track();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual int GetPriority();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual void OnThinkInternal();
	virtual ~CDOTA_Modifier_BountyHunter_Track();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[6] GetPriority
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] Tooltip
	// vtable[5] CheckState
	// vtable[10] AddCustomTransmiterData
	// vtable[62] OnThinkInternal
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bounty_hunter.cpp:997
class CDOTA_Modifier_BountyHunter_TrackEffect : public CDOTA_Buff {
public:

private:

	int bonus_move_speed_pct;  // +0xba8
	CDOTA_Modifier_BountyHunter_TrackEffect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_BountyHunter_TrackEffect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_BountyHunter::~CDOTA_Unit_Hero_BountyHunter  (line 36, @0x0000000002ba24c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_BountyHunter::~CDOTA_Unit_Hero_BountyHunter(CDOTA_Unit_Hero_BountyHunter *const this)
{
  this->_vptr_IHandleEntity = &off_44978F0;
  this->_vptr_INextBotEventResponder = &off_44988D0;
  this->_vptr_CObstructionObject = &off_4498C00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_BountyHunter::~CDOTA_Unit_Hero_BountyHunter  (line 36, @0x0000000002ba2500, libserver.so)  // inlines: ~CDOTA_Unit_Hero_BountyHunter
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_BountyHunter::~CDOTA_Unit_Hero_BountyHunter(CDOTA_Unit_Hero_BountyHunter *const this)
{
  this->_vptr_IHandleEntity = &off_44978F0;
  this->_vptr_INextBotEventResponder = &off_44988D0;
  this->_vptr_CObstructionObject = &off_4498C00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_BountyHunter::Schema_DynamicBinding  (line 38, @0x0000000002b8d290, libserver.so)
// globals: CDOTA_Unit_Hero_BountyHunter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_BountyHunter::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_BountyHunter *const this)
{
  return CDOTA_Unit_Hero_BountyHunter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 38, @0x0000000002b8d2c0, libserver.so)
// globals: CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::DestructInstance  (line 38, @0x0000000002b8d2d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_BountyHunter>
void __fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::FreeInstance  (line 38, @0x0000000002b8d2f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::CanAllocate  (line 38, @0x0000000002b8d310, libserver.so)
bool __fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 38, @0x0000000002b8d320, libserver.so)
// globals: CDOTA_Unit_Hero_BountyHunter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_BountyHunter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::AllocateInstance  (line 38, @0x0000000002b96b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::ConstructInstance  (line 38, @0x0000000002b9c340, libserver.so)  // inlines: CDOTA_Unit_Hero_BountyHunter, Construct<CDOTA_Unit_Hero_BountyHunter>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44978F0;
    *(p + 236) = &off_44988D0;
    *(p + 257) = &off_4498C00;
  }
  return p;
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002babf70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 38, @0x0000000002bac580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal  (line 38, @0x0000000002bcd700, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_bounty_hunter", "CDOTA_Unit_Hero_BountyHunter"
// globals: `guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass, CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass, __dso_handle, CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo, CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass);
    CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass._vptr_CEntityClass = off_4497870;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_BountyHunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BountyHunterClass != 0 )
    return &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass;
  if ( `guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo,
      "CDOTA_Unit_Hero_BountyHunter",
      "npc_dota_hero_bounty_hunter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo);
  }
  CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass.m_pClassInfo = &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo;
  CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass.m_pBaseClassInfo = CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BountyHunterClass = &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass;
  CDOTA_Unit_Hero_BountyHunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClassInfo.m_pClass = &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass;
  CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BountyHunterClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_BountyHunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BountyHunterClass;
}


// CDOTA_Unit_Hero_BountyHunter::YouForgotToImplementOrDeclareServerClass  (line 43, @0x0000000002b33e40, libserver.so)
int __fastcall CDOTA_Unit_Hero_BountyHunter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_BountyHunter *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_BountyHunter::GetServerClass  (line 43, @0x0000000002b4bca0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_BountyHunter::GetServerClass(CDOTA_Unit_Hero_BountyHunter *const this)
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


// CDOTA_Ability_BountyHunter_ShurikenToss::~CDOTA_Ability_BountyHunter_ShurikenToss  (line 57, @0x0000000002bc4130, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::~CDOTA_Ability_BountyHunter_ShurikenToss(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  this->_vptr_IHandleEntity = &off_4498CD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntitiesScepter);
  if ( (this->m_hHitEntitiesScepter.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntitiesScepter.m_Memory);
    if ( (this->m_hHitEntitiesScepter.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntitiesScepter.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_BountyHunter_ShurikenToss::~CDOTA_Ability_BountyHunter_ShurikenToss  (line 57, @0x0000000002bc41e0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_BountyHunter_ShurikenToss, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::~CDOTA_Ability_BountyHunter_ShurikenToss(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  this->_vptr_IHandleEntity = &off_4498CD0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntitiesScepter);
  if ( (this->m_hHitEntitiesScepter.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntitiesScepter.m_Memory);
    if ( (this->m_hHitEntitiesScepter.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntitiesScepter.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::Schema_DynamicBinding  (line 59, @0x0000000002b8d330, libserver.so)
// globals: CDOTA_Ability_BountyHunter_ShurikenToss::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  return CDOTA_Ability_BountyHunter_ShurikenToss::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 59, @0x0000000002b8d340, libserver.so)
// globals: CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::DestructInstance  (line 59, @0x0000000002b8d350, libserver.so)  // inlines: Destruct<CDOTA_Ability_BountyHunter_ShurikenToss>
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::FreeInstance  (line 59, @0x0000000002b8d370, libserver.so)
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::CanAllocate  (line 59, @0x0000000002b8d390, libserver.so)
bool __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 59, @0x0000000002b8d3a0, libserver.so)
// globals: CDOTA_Ability_BountyHunter_ShurikenToss::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_ShurikenToss::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::AllocateInstance  (line 59, @0x0000000002b96ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 59, @0x0000000002ba9a80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 59, @0x0000000002ba9aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::ConstructInstance  (line 59, @0x0000000002bc3990, libserver.so)  // inlines: CDOTA_Ability_BountyHunter_ShurikenToss, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_BountyHunter_ShurikenToss>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4498CD0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
    *(p + 234) = 0;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 239) = 0;
  }
  return p;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal  (line 59, @0x0000000002bc4e80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "bounty_hunter_shuriken_toss", "CDOTA_Ability_BountyHunter_ShurikenToss"
// globals: `guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass, CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass, __dso_handle, CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo, CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo
CEntityClass *__cdecl CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass);
    CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass._vptr_CEntityClass = off_4498C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass);
    __cxa_atexit(
      CDOTA_Ability_BountyHunter_ShurikenToss::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BountyHunter_ShurikenTossClass != 0 )
    return &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass;
  if ( `guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo,
      "CDOTA_Ability_BountyHunter_ShurikenToss",
      "bounty_hunter_shuriken_toss",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo);
  }
  CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass.m_pClassInfo = &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo;
  CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass.m_pBaseClassInfo = CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BountyHunter_ShurikenTossClass = &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass;
  CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClassInfo.m_pClass = &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass;
  CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BountyHunter_ShurikenTossClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BountyHunter_ShurikenToss::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_ShurikenTossClass;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::YouForgotToImplementOrDeclareServerClass  (line 78, @0x0000000002b33e50, libserver.so)
int __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  return 0;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::GetServerClass  (line 78, @0x0000000002b4bf20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_BountyHunter_ShurikenToss::GetServerClass(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
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


// CDOTA_Ability_BountyHunter_ShurikenToss::CastShurikenToss  (line 86, @0x0000000002b82ce0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GrowMemory, Set, operator=, operator[], sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, __stack_chk_fail
// callers: CDOTA_Ability_BountyHunter_ShurikenToss::OnSpellStart
// strings: "particles/units/heroes/hero_bounty_hunter/bounty_hunter_suriken_toss.vpcf", "Hero_BountyHunter.Shuriken"
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::CastShurikenToss(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this,
        CDOTA_BaseNPC *pTarget)
{
  int LevelSpecialValue; // r13d
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v9; // cx
  CEntityIdentity *v10; // rax
  __int16 v11; // si
  __int16 v12; // cx
  __int64 m_Size; // r12
  int v14; // eax
  CHandle<CBaseEntity> *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int v17; // [rsp+0h] [rbp-A0h]
  sTrackingProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntitiesScepter);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iSourceAttachment = 1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iVisionTeamNumber = -1;
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
  info.pszEffectName = "particles/units/heroes/hero_bounty_hunter/bounty_hunter_suriken_toss.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v9 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v9 & 0x7FFF;
    if ( pTarget == 0 )
      goto LABEL_18;
  }
  else
  {
    info.hSource.m_Index = -1;
    if ( pTarget == 0 )
      goto LABEL_18;
  }
  v10 = pTarget->m_pEntity;
  if ( v10 == 0 )
  {
LABEL_18:
    info.hTarget.m_Index = -1;
    v17 = -1;
    goto LABEL_12;
  }
  v11 = 0x7FFF;
  if ( v10->m_EHandle.m_Index != -1 )
    v11 = v10->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v11 & 0x7FFF;
  v12 = 0x7FFF;
  if ( v10->m_EHandle.m_Index != -1 )
    v12 = v10->m_EHandle.m_Index & 0x7FFF;
  v17 = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v12 & 0x7FFF;
LABEL_12:
  m_Size = this->m_hHitEntities.m_Size;
  v14 = this->m_hHitEntities.m_Size;
  if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
    v14 = this->m_hHitEntities.m_Size;
  }
  this->m_hHitEntities.m_Size = v14 + 1;
  v15 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
    v15->m_Index = v17;
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_BountyHunter.Shuriken", 0.0, 0, 0);
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::OnSpellStart  (line 111, @0x0000000002b82fd0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_Ability_BountyHunter_ShurikenToss::CastShurikenToss
void __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::OnSpellStart(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    CDOTA_Ability_BountyHunter_ShurikenToss::CastShurikenToss(this, CursorTarget);
}


// CDOTA_Ability_BountyHunter_ShurikenToss::OnProjectileHit_ExtraData  (line 125, @0x0000000002b86d40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName (22 total)
// strings: "bounce_aoe", "modifier_stunned", "Hero_BountyHunter.Shuriken.Impact", "modifier_bounty_hunter_track", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_suriken_toss.vpcf", "Hero_BountyHunter.Shuriken"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::OnProjectileHit_ExtraData(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // r14
  int (**vptr_IHandleEntity)(...); // rax
  int LevelSpecialValue; // r12d
  int v9; // ebx
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  __m128i v13; // xmm1
  float v14; // ebx
  CDOTA_BaseNPC *v15; // r12
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // rbx
  int v19; // r12d
  CHandle<CBaseEntity> *v20; // rdx
  uint32 v21; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *v25; // r13
  CEntityIdentity *v26; // rax
  int v27; // edx
  __int16 v28; // cx
  int v29; // eax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  CEntityIdentity *v32; // rax
  int v33; // edx
  __int16 v34; // cx
  CEntityIdentity *v35; // rax
  int v36; // edx
  __int16 v37; // cx
  CEntityIdentity *v38; // rax
  int v39; // edx
  __int16 v40; // cx
  __int64 v41; // rbx
  int v42; // eax
  CHandle<CBaseEntity> *v43; // rax
  CDOTA_BaseNPC *v45; // rax
  __int64 v46; // rbx
  CHandle<CBaseEntity> *v47; // rdx
  uint32 m_Index; // eax
  __int16 v49; // cx
  CEntityIdentity *v50; // rdx
  CEntityIdentity *v51; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIdentity *m_pEntity; // rax
  int v54; // edx
  __int16 v55; // cx
  int v56; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CEntityIdentity *v59; // rax
  int v60; // edx
  __int16 v61; // cx
  CEntityIdentity *v62; // rax
  int v63; // edx
  __int16 v64; // cx
  CEntityIdentity *v65; // rax
  int v66; // edx
  __int16 v67; // cx
  __int64 m_Size; // rbx
  int v69; // eax
  CHandle<CBaseEntity> v70[4]; // [rsp+40h] [rbp-F0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+90h] [rbp-A0h] BYREF
  unsigned __int64 v74; // [rsp+F8h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  v5 = CEntityHandle::operator CEntityInstance *(hTarget);
  v6 = v5;
  if ( v5 == 0 )
    return 1;
  if ( BYTE3(v5[7]._vptr_IHandleEntity) == 0 )
    return 1;
  vptr_IHandleEntity = v5[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
    || v6->m_bIsWaitingToSpawn.m_Value
    || (BYTE1(vptr_IHandleEntity) & 1) != 0
    || CDOTA_BaseNPC::TriggerSpellAbsorb(v6, this, 1) )
  {
    return 1;
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0);
  v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_aoe", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(Caster, v6, this, LevelSpecialValue, 2, 0);
  KeyValues::KeyValues(&kv, "modifier_stunned");
  KeyValues::SetFloat(&kv, "duration", v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v12, this, "modifier_stunned", &kv, 0);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_BountyHunter.Shuriken.Impact", 0.0, 0, 0);
  *v13.m128i_i32 = v9;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
  v15 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v17 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v17->m_iTeamNum.m_Value, AbsOrigin, v15, v14, &hEntities, 2, 3, 384, 1, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_41:
    v45 = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(v45) )
      goto LABEL_38;
    v46 = 0;
    if ( hEntities.m_Size <= 0 )
      goto LABEL_38;
    while ( 1 )
    {
      v47 = &hEntities.m_Memory.m_pMemory[v46];
      m_Index = v47->m_Index;
      if ( v47->m_Index + 2 > 1 )
      {
        v49 = v47->m_Index;
        v50 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v47->m_Index) >> 9) & 0x3F];
        if ( v50 != 0 )
        {
          v51 = &v50[v49 & 0x1FF];
          if ( v51 != 0 && m_Index == v51->m_EHandle.m_Index )
          {
            m_pInstance = v51->m_pInstance;
            if ( v51->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_bounty_hunter_track", 0) != 0 )
            {
              v70[0].m_Index = -1;
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v54 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v55 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v55 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v70[0].m_Index) = v55 | v70[0].m_Index & 0x8000;
                v70[0].m_Index = (v54 << 15) | v70[0].m_Index & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hHitEntitiesScepter,
                     v70) < 0
                && v6 != m_pInstance )
              {
                break;
              }
            }
          }
        }
      }
      if ( hEntities.m_Size <= ++v46 )
        goto LABEL_38;
    }
    v56 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.iSourceAttachment = 1;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.iVisionRadius = 0;
    info.vSourceLoc.z = z;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_bounty_hunter/bounty_hunter_suriken_toss.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = v56;
    v59 = v6->m_pEntity;
    if ( v59 != 0 )
    {
      v60 = (v59->m_EHandle.m_Index >> 15) - (v59->m_flags & 1);
      v61 = 0x7FFF;
      if ( v59->m_EHandle.m_Index != -1 )
        v61 = v59->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v61 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v60 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    v62 = m_pInstance->m_pEntity;
    if ( v62 != 0 )
    {
      v63 = (v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1);
      v64 = 0x7FFF;
      if ( v62->m_EHandle.m_Index != -1 )
        v64 = v62->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v64 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v63 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_BountyHunter.Shuriken", 0.0, 0, 0);
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v70[0].m_Index = -1;
    v65 = m_pInstance->m_pEntity;
    if ( v65 != 0 )
    {
      v66 = (v65->m_EHandle.m_Index >> 15) - (v65->m_flags & 1);
      v67 = 0x7FFF;
      if ( v65->m_EHandle.m_Index != -1 )
        v67 = v65->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v70[0].m_Index) = v67 | v70[0].m_Index & 0x8000;
      v70[0].m_Index = (v66 << 15) | v70[0].m_Index & 0x7FFF;
    }
    m_Size = this->m_hHitEntitiesScepter.m_Size;
    v69 = this->m_hHitEntitiesScepter.m_Size;
    if ( m_Size == this->m_hHitEntitiesScepter.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntitiesScepter.m_Memory, 1);
      v69 = this->m_hHitEntitiesScepter.m_Size;
    }
    this->m_hHitEntitiesScepter.m_Size = v69 + 1;
    v43 = &this->m_hHitEntitiesScepter.m_Memory.m_pMemory[m_Size];
    if ( v43 == 0 )
      goto LABEL_38;
  }
  else
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v20 = &hEntities.m_Memory.m_pMemory[v18];
      v21 = hEntities.m_Memory.m_pMemory[v18].m_Index;
      if ( v21 + 2 > 1 )
      {
        v22 = v20->m_Index;
        v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
        if ( v23 != 0 )
        {
          v24 = &v23[v22 & 0x1FF];
          if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
          {
            v25 = v24->m_pInstance;
            if ( v24->m_pInstance != 0
              && v25->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(v25, "modifier_bounty_hunter_track", 0) != 0 )
            {
              v70[0].m_Index = -1;
              v26 = v25->m_pEntity;
              if ( v26 != 0 )
              {
                v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
                v28 = 0x7FFF;
                if ( v26->m_EHandle.m_Index != -1 )
                  v28 = v26->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v70[0].m_Index) = v28 | v70[0].m_Index & 0x8000;
                v70[0].m_Index = (v27 << 15) | v70[0].m_Index & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hHitEntities,
                     v70) < 0 )
                break;
            }
          }
        }
      }
      ++v19;
      ++v18;
      if ( hEntities.m_Size <= v19 )
        goto LABEL_41;
    }
    v29 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.iSourceAttachment = 1;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    v30 = vec3_origin.y;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.y = v30;
    v31 = vec3_origin.z;
    info.iVisionRadius = 0;
    info.vSourceLoc.z = v31;
    info.bDrawsOnMinimap = 0;
    info.bDodgeable = 1;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_bounty_hunter/bounty_hunter_suriken_toss.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = v29;
    v32 = v6->m_pEntity;
    if ( v32 != 0 )
    {
      v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
      v34 = 0x7FFF;
      if ( v32->m_EHandle.m_Index != -1 )
        v34 = v32->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v34 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v33 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    v35 = v25->m_pEntity;
    if ( v35 != 0 )
    {
      v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
      v37 = 0x7FFF;
      if ( v35->m_EHandle.m_Index != -1 )
        v37 = v35->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v37 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v36 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_BountyHunter.Shuriken", 0.0, 0, 0);
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v70[0].m_Index = -1;
    v38 = v25->m_pEntity;
    if ( v38 != 0 )
    {
      v39 = (v38->m_EHandle.m_Index >> 15) - (v38->m_flags & 1);
      v40 = 0x7FFF;
      if ( v38->m_EHandle.m_Index != -1 )
        v40 = v38->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v70[0].m_Index) = v40 | v70[0].m_Index & 0x8000;
      v70[0].m_Index = (v39 << 15) | v70[0].m_Index & 0x7FFF;
    }
    v41 = this->m_hHitEntities.m_Size;
    v42 = this->m_hHitEntities.m_Size;
    if ( v41 == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v42 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v42 + 1;
    v43 = &this->m_hHitEntities.m_Memory.m_pMemory[v41];
    if ( v43 == 0 )
      goto LABEL_38;
  }
  v43->m_Index = v70[0];
LABEL_38:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::GetAbilityDamageToTargetOverInterval  (line 217, @0x0000000002b691c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 1);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_BountyHunter_ShurikenToss::GetStunDuration  (line 227, @0x0000000002b33e60, libserver.so)
float __fastcall CDOTA_Ability_BountyHunter_ShurikenToss::GetStunDuration(
        CDOTA_Ability_BountyHunter_ShurikenToss *const this)
{
  return 0.1;
}


// CDOTA_Ability_BountyHunter_Jinada::~CDOTA_Ability_BountyHunter_Jinada  (line 238, @0x0000000002ba0360, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_BountyHunter_Jinada::~CDOTA_Ability_BountyHunter_Jinada(
        CDOTA_Ability_BountyHunter_Jinada *const this)
{
  this->_vptr_IHandleEntity = &off_44997D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_BountyHunter_Jinada::~CDOTA_Ability_BountyHunter_Jinada  (line 238, @0x0000000002ba0380, libserver.so)  // inlines: ~CDOTA_Ability_BountyHunter_Jinada
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_BountyHunter_Jinada::~CDOTA_Ability_BountyHunter_Jinada(
        CDOTA_Ability_BountyHunter_Jinada *const this)
{
  this->_vptr_IHandleEntity = &off_44997D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BountyHunter_Jinada::Schema_DynamicBinding  (line 240, @0x0000000002b8d3b0, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Jinada::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_Jinada::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_Jinada *const this)
{
  return CDOTA_Ability_BountyHunter_Jinada::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 240, @0x0000000002b8d3c0, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::DestructInstance  (line 240, @0x0000000002b8d3d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_BountyHunter_Jinada>
void __fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::FreeInstance  (line 240, @0x0000000002b8d3f0, libserver.so)
void __fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::CanAllocate  (line 240, @0x0000000002b8d410, libserver.so)
bool __fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 240, @0x0000000002b8d420, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Jinada::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_Jinada::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::AllocateInstance  (line 240, @0x0000000002b96be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::ConstructInstance  (line 240, @0x0000000002b9cab0, libserver.so)  // inlines: CDOTA_Ability_BountyHunter_Jinada, Construct<CDOTA_Ability_BountyHunter_Jinada>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44997D0;
  }
  return p;
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002ba9ad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002ba9af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal  (line 240, @0x0000000002bc4fd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_BountyHunter_Jinada"
// globals: `guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass, CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass, __dso_handle, CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo, CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo
CEntityClass *__cdecl CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass);
    CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass._vptr_CEntityClass = off_4499750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass);
    __cxa_atexit(
      CDOTA_Ability_BountyHunter_Jinada::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BountyHunter_JinadaClass != 0 )
    return &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass;
  if ( `guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo,
      "CDOTA_Ability_BountyHunter_Jinada",
      "bounty_hunter_jinada",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo);
  }
  CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass.m_pClassInfo = &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo;
  CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass.m_pBaseClassInfo = CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BountyHunter_JinadaClass = &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass;
  CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClassInfo.m_pClass = &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass;
  CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BountyHunter_JinadaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BountyHunter_Jinada::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_JinadaClass;
}


// CDOTA_Ability_BountyHunter_Jinada::GetIntrinsicModifierName  (line 244, @0x0000000002b8d430, libserver.so)
// strings: "modifier_bounty_hunter_jinada"
const char *__fastcall CDOTA_Ability_BountyHunter_Jinada::GetIntrinsicModifierName(
        CDOTA_Ability_BountyHunter_Jinada *const this)
{
  return "modifier_bounty_hunter_jinada";
}


// CDOTA_Ability_BountyHunter_Jinada::YouForgotToImplementOrDeclareServerClass  (line 248, @0x0000000002b33e70, libserver.so)
int __fastcall CDOTA_Ability_BountyHunter_Jinada::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_BountyHunter_Jinada *const this)
{
  return 0;
}


// CDOTA_Ability_BountyHunter_Jinada::GetServerClass  (line 248, @0x0000000002b4be20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_BountyHunter_Jinada::GetServerClass(
        CDOTA_Ability_BountyHunter_Jinada *const this)
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


// CDOTA_Ability_BountyHunter_Jinada::GetCooldown  (line 259, @0x0000000002b69220, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_bounty_hunter"
float __fastcall CDOTA_Ability_BountyHunter_Jinada::GetCooldown(
        CDOTA_Ability_BountyHunter_Jinada *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_bounty_hunter", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Modifier_BountyHunter_Jinada::~CDOTA_Modifier_BountyHunter_Jinada  (line 275, @0x0000000002b9bc70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::~CDOTA_Modifier_BountyHunter_Jinada(
        CDOTA_Modifier_BountyHunter_Jinada *const this)
{
  this->_vptr_CDOTA_Buff = &off_449A290;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BountyHunter_Jinada::~CDOTA_Modifier_BountyHunter_Jinada  (line 275, @0x0000000002b9bc90, libserver.so)  // inlines: ~CDOTA_Modifier_BountyHunter_Jinada
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::~CDOTA_Modifier_BountyHunter_Jinada(
        CDOTA_Modifier_BountyHunter_Jinada *const this)
{
  this->_vptr_CDOTA_Buff = &off_449A290;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BountyHunter_Jinada::IsHidden  (line 280, @0x0000000002b8d440, libserver.so)
bool __fastcall CDOTA_Modifier_BountyHunter_Jinada::IsHidden(CDOTA_Modifier_BountyHunter_Jinada *const this)
{
  return 1;
}


// CDOTA_Modifier_BountyHunter_Jinada::OnCreated  (line 304, @0x0000000002b80240, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::StartIntervalThink
// strings: "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_r.vpcf", "attach_weapon1", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_l.vpcf", "attach_weapon2"
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::OnCreated(
        CDOTA_Modifier_BountyHunter_Jinada *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  int nFXIndex; // r13d
  const CBaseAnimating *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  __int64 v11; // r12
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  float v17; // xmm1_4
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v19; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->crit_multiplier = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->duration = 0.0;
    goto LABEL_4;
  }
  this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_multiplier", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->nFXIndex = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_r.vpcf",
                     2,
                     Parent,
                     0,
                     0);
  v7 = CDOTA_Buff::GetParent(this);
  nFXIndex = this->nFXIndex;
  v9 = v7;
  v10 = GetParticleManager();
  v11 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v10, nFXIndex, 0, v9, 5, "attach_weapon1", vec3_invalid, 1);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = GetParticleManager();
  this->nFXIndexB = CDOTA_ParticleManager::CreateParticle(
                      v13,
                      "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_l.vpcf",
                      2,
                      v12,
                      0,
                      0);
  v14 = CDOTA_Buff::GetParent(this);
  LODWORD(v12) = this->nFXIndexB;
  v15 = v14;
  v16 = GetParticleManager();
  *&v19.x = v11;
  v19.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v12, 0, v15, 5, "attach_weapon2", v19, 1);
  this->m_bJinadaAttack = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v17);
}


// CDOTA_Modifier_BountyHunter_Jinada::OnRefresh  (line 321, @0x0000000002b7dc50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::OnRefresh(
        CDOTA_Modifier_BountyHunter_Jinada *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->crit_multiplier = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->duration = 0.0;
    goto LABEL_4;
  }
  this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_multiplier", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_BountyHunter_Jinada::OnIntervalThink  (line 331, @0x0000000002b37200, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_r.vpcf", "attach_weapon1", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_l.vpcf", "attach_weapon2"
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::OnIntervalThink(CDOTA_Modifier_BountyHunter_Jinada *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  int v6; // r12d
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  int nFXIndex; // r13d
  const CBaseAnimating *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r12
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int nFXIndexB; // ebx
  const CBaseAnimating *v19; // r13
  CDOTA_ParticleManager *v20; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CDOTA_Buff::GetAbility(this) != 0
    && (Ability = CDOTA_Buff::GetAbility(this), (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0) )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 && this->nFXIndex == -1 )
    {
      v8 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      this->nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_r.vpcf",
                         2,
                         v8,
                         0,
                         0);
      v10 = CDOTA_Buff::GetParent(this);
      nFXIndex = this->nFXIndex;
      v12 = v10;
      v13 = GetParticleManager();
      v14 = *&vec3_invalid.x;
      vecFallbackPosition = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v13, nFXIndex, 0, v12, 5, "attach_weapon1", vec3_invalid, 1);
      v15 = CDOTA_Buff::GetParent(this);
      v16 = GetParticleManager();
      this->nFXIndexB = CDOTA_ParticleManager::CreateParticle(
                          v16,
                          "particles/units/heroes/hero_bounty_hunter/bounty_hunter_hand_l.vpcf",
                          2,
                          v15,
                          0,
                          0);
      v17 = CDOTA_Buff::GetParent(this);
      nFXIndexB = this->nFXIndexB;
      v19 = v17;
      v20 = GetParticleManager();
      *&v22.x = v14;
      v22.z = vecFallbackPosition;
      CDOTA_ParticleManager::SetParticleControlEnt(v20, nFXIndexB, 0, v19, 5, "attach_weapon2", v22, 1);
    }
  }
  else
  {
    v4 = this->nFXIndex;
    if ( v4 != -1 )
    {
      v5 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v5, v4, 1);
      v6 = this->nFXIndexB;
      v7 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v7, v6, 1);
      this->nFXIndex = -1;
      this->nFXIndexB = -1;
    }
  }
}


// CDOTA_Modifier_BountyHunter_Jinada::DeclareFunctions  (line 365, @0x0000000002b33e80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BountyHunter_Jinada::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_BountyHunter_Jinada::OnAttackStart(CModifierParams const&), CDOTA_Modifier_BountyHunter_Jinada::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_BountyHunter_Jinada::DeclareFunctions(CDOTA_Modifier_BountyHunter_Jinada *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_BountyHunter_Jinada::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[119].__pfn = CDOTA_Modifier_BountyHunter_Jinada::OnAttackStart;
  this->m_Functions[121].__pfn = CDOTA_Modifier_BountyHunter_Jinada::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_BountyHunter_Jinada::OnAttackStart  (line 373, @0x0000000002b46000, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Jinada::OnAttackStart(
        CDOTA_Modifier_BountyHunter_Jinada *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // r13
  CDOTABaseAbility *Ability; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && m_pInstance != 0
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && v11 != 0
    && (v11[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && m_pInstance->m_iTeamNum.m_Value != HIBYTE(v11[7].m_CScriptComponent) )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    this->m_bJinadaAttack = (*(Ability->_vptr_IHandleEntity + 245))(Ability);
  }
  return 1uLL;
}


// CDOTA_Modifier_BountyHunter_Jinada::OnAttackLanded  (line 392, @0x0000000002b49390, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_bounty_hunter_jinada_slow", "Hero_BountyHunter.Jinada"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Jinada::OnAttackLanded(
        CDOTA_Modifier_BountyHunter_Jinada *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v9; // edx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // r12
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rbx
  int m_Id; // eax
  CDOTABaseAbility *Ability; // rax
  float v20; // xmm1_4
  CDOTABaseAbility *v21; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-38h]

  v25 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && this->m_bJinadaAttack )
        {
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
          if ( v13 != 0 && LOBYTE(v13[71]._vptr_IHandleEntity) == 0 && (BYTE1(v13[58]._vptr_IHandleEntity) & 1) == 0 )
          {
            m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0
              && (m_Id & 0x193) != 0
              && HIBYTE(v13[7].m_CScriptComponent) != HIBYTE(v17[7].m_CScriptComponent)
              && LOBYTE(v17[71].m_pEntity) == 0 )
            {
              Ability = CDOTA_Buff::GetAbility(this);
              (*(Ability->_vptr_IHandleEntity + 241))(Ability, -1.0);
              this->m_bJinadaAttack = 0;
              KeyValues::KeyValues(&kv, "modifier_bounty_hunter_jinada_slow");
              KeyValues::SetFloat(&kv, "duration", v20);
              v21 = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v13, Caster, v21, "modifier_bounty_hunter_jinada_slow", &kv, 0);
              CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_BountyHunter.Jinada", 0.0, 0, 0);
              v23 = 0;
              if ( (v17[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                v23 = v17;
              if ( SLOBYTE(v23->m_nUnitState64.m_Value) < 0 && (v13[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                EconEntity_OnOwnerKillEaterEvent(
                  v23,
                  v13,
                  kill_eater_event_t::kKillEaterEventType_Bounty_InvisJinadaHits,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_BountyHunter_Jinada::GetModifierPreAttack_CriticalStrike  (line 430, @0x0000000002b45be0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Jinada::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_BountyHunter_Jinada *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rdx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  __m128i v12; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    *v2.m128i_i32 = this->crit_multiplier;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance) == 0
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    {
      m_pInstance = 0;
    }
    v7 = params->hattacker.m_Index;
    if ( v7 + 2 <= 1
      || (m_Index_low = LOWORD(params->hattacker.m_Index),
          (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
      || (v10 = &v9[m_Index_low & 0x1FF]) == 0
      || v7 != v10->m_EHandle.m_Index
      || (v11 = v10->m_pInstance) == 0
      || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
    {
      v11 = 0;
    }
    v12 = 0;
    if ( this->m_bJinadaAttack
      && m_pInstance != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
      && HIBYTE(m_pInstance[7].m_CScriptComponent) != HIBYTE(v11[7].m_CScriptComponent)
      && LOBYTE(v11[71].m_pEntity) == 0 )
    {
      *v12.m128i_i32 = this->crit_multiplier;
    }
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v12) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::~CDOTA_Modifier_BountyHunter_JinadaSlow  (line 453, @0x0000000002b9bc20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::~CDOTA_Modifier_BountyHunter_JinadaSlow(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_449A5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::~CDOTA_Modifier_BountyHunter_JinadaSlow  (line 453, @0x0000000002b9bc40, libserver.so)  // inlines: ~CDOTA_Modifier_BountyHunter_JinadaSlow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::~CDOTA_Modifier_BountyHunter_JinadaSlow(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_449A5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::GetEffectName  (line 459, @0x0000000002b8d450, libserver.so)
// strings: "particles/units/heroes/hero_bounty_hunter/bounty_hunter_jinda_slow.vpcf"
const char *__fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::GetEffectName(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  return "particles/units/heroes/hero_bounty_hunter/bounty_hunter_jinda_slow.vpcf";
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::GetStatusEffectName  (line 460, @0x0000000002b8d460, libserver.so)
// strings: "particles/units/heroes/hero_bounty_hunter/status_effect_bounty_hunter_jinda_slow.vpcf"
const char *__fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::GetStatusEffectName(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  return "particles/units/heroes/hero_bounty_hunter/status_effect_bounty_hunter_jinda_slow.vpcf";
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::StatusEffectPriority  (line 461, @0x0000000002b8d470, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::StatusEffectPriority(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  return 15;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::OnCreated  (line 481, @0x0000000002b6cdb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed", "bonus_attackspeed"
void __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::OnCreated(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attackspeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attackspeed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_movespeed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_attackspeed = 0;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::OnRefresh  (line 489, @0x0000000002b6d470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed", "bonus_attackspeed"
void __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::OnRefresh(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attackspeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attackspeed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_movespeed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_attackspeed = 0;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::DeclareFunctions  (line 498, @0x0000000002b33ee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::DeclareFunctions(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierMoveSpeedBonus_Percentage  (line 506, @0x0000000002b33f20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierAttackSpeedBonus_Constant  (line 513, @0x0000000002b33f40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_JinadaSlow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_BountyHunter_JinadaSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attackspeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_BountyHunter_WindWalk::~CDOTA_Ability_BountyHunter_WindWalk  (line 524, @0x0000000002ba03b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::~CDOTA_Ability_BountyHunter_WindWalk(
        CDOTA_Ability_BountyHunter_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_449A910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_BountyHunter_WindWalk::~CDOTA_Ability_BountyHunter_WindWalk  (line 524, @0x0000000002ba03d0, libserver.so)  // inlines: ~CDOTA_Ability_BountyHunter_WindWalk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::~CDOTA_Ability_BountyHunter_WindWalk(
        CDOTA_Ability_BountyHunter_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_449A910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BountyHunter_WindWalk::Schema_DynamicBinding  (line 526, @0x0000000002b8d480, libserver.so)
// globals: CDOTA_Ability_BountyHunter_WindWalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_WindWalk::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_WindWalk *const this)
{
  return CDOTA_Ability_BountyHunter_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 526, @0x0000000002b8d490, libserver.so)
// globals: CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::DestructInstance  (line 526, @0x0000000002b8d4a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_BountyHunter_WindWalk>
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::FreeInstance  (line 526, @0x0000000002b8d4c0, libserver.so)
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::CanAllocate  (line 526, @0x0000000002b8d4e0, libserver.so)
bool __fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 526, @0x0000000002b8d4f0, libserver.so)
// globals: CDOTA_Ability_BountyHunter_WindWalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::AllocateInstance  (line 526, @0x0000000002b96c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::ConstructInstance  (line 526, @0x0000000002b9cae0, libserver.so)  // inlines: CDOTA_Ability_BountyHunter_WindWalk, Construct<CDOTA_Ability_BountyHunter_WindWalk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_449A910;
  }
  return p;
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 526, @0x0000000002ba9b20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 526, @0x0000000002ba9b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal  (line 526, @0x0000000002bc5120, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "bounty_hunter_wind_walk", "CDOTA_Ability_BountyHunter_WindWalk"
// globals: `guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass, CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass, __dso_handle, CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo, CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass);
    CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass._vptr_CEntityClass = off_449A890;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass);
    __cxa_atexit(
      CDOTA_Ability_BountyHunter_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BountyHunter_WindWalkClass != 0 )
    return &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass;
  if ( `guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo,
      "CDOTA_Ability_BountyHunter_WindWalk",
      "bounty_hunter_wind_walk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo);
  }
  CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass.m_pClassInfo = &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo;
  CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass.m_pBaseClassInfo = CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BountyHunter_WindWalkClass = &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass;
  CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClassInfo.m_pClass = &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass;
  CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BountyHunter_WindWalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BountyHunter_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_WindWalkClass;
}


// CDOTA_Ability_BountyHunter_WindWalk::HasInvisibility  (line 534, @0x0000000002b8d500, libserver.so)
bool __fastcall CDOTA_Ability_BountyHunter_WindWalk::HasInvisibility(CDOTA_Ability_BountyHunter_WindWalk *const this)
{
  return 1;
}


// CDOTA_Ability_BountyHunter_WindWalk::OnSpellStart  (line 541, @0x0000000002b71d90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetParent
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_bounty_hunter_wind_walk", "fadetime", "Hero_BountyHunter.WindWalk", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_windwalk.vpcf"
void __fastcall CDOTA_Ability_BountyHunter_WindWalk::OnSpellStart(CDOTA_Ability_BountyHunter_WindWalk *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // rbx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  float duration; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_bounty_hunter_wind_walk");
  KeyValues::SetFloat(&kv, "duration", duration);
  KeyValues::SetFloat(&kv, "fadetime", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_bounty_hunter_wind_walk", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_BountyHunter.WindWalk", 0.0, 0, 0);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_bounty_hunter/bounty_hunter_windwalk.vpcf",
               2,
               0,
               0,
               0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_BountyHunter_WindWalk::OnSaveState  (line 565, @0x0000000002b42370, libserver.so)  // inlines: DOTAGameRules, FindModifierByName, GetGameTime
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, KeyValues::SetFloat
// strings: "modifier_bounty_hunter_wind_walk", "modifier_bounty_hunter_wind_walk_duration"
bool __fastcall CDOTA_Ability_BountyHunter_WindWalk::OnSaveState(
        CDOTA_Ability_BountyHunter_WindWalk *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v5; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v8; // xmm1_4

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v5, "modifier_bounty_hunter_wind_walk");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_bounty_hunter_wind_walk",
                     0);
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    KeyValues::SetFloat(pKV, "modifier_bounty_hunter_wind_walk_duration", v8);
  }
  return 1;
}


// CDOTA_Ability_BountyHunter_WindWalk::OnLoadState  (line 582, @0x0000000002b38880, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetFloat, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_bounty_hunter_wind_walk_duration", "modifier_bounty_hunter_wind_walk"
bool __fastcall CDOTA_Ability_BountyHunter_WindWalk::OnLoadState(
        CDOTA_Ability_BountyHunter_WindWalk *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  if ( KeyValues::GetFloat(pKV, "modifier_bounty_hunter_wind_walk_duration", v4) > 0.0 )
  {
    KeyValues::KeyValues(&kv, "modifier_bounty_hunter_wind_walk");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_bounty_hunter_wind_walk", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Modifier_BountyHunter_WindWalk::~CDOTA_Modifier_BountyHunter_WindWalk  (line 603, @0x0000000002b9a530, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BountyHunter_WindWalk::~CDOTA_Modifier_BountyHunter_WindWalk(
        CDOTA_Modifier_BountyHunter_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BountyHunter_WindWalk::~CDOTA_Modifier_BountyHunter_WindWalk  (line 603, @0x0000000002b9a550, libserver.so)  // inlines: ~CDOTA_Modifier_BountyHunter_WindWalk, ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BountyHunter_WindWalk::~CDOTA_Modifier_BountyHunter_WindWalk(
        CDOTA_Modifier_BountyHunter_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BountyHunter_WindWalk::CheckState  (line 618, @0x0000000002b3c400, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_BountyHunter_WindWalk::CheckState(
        CDOTA_Modifier_BountyHunter_WindWalk *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x2000000uLL;
    buffState->m_nDisabledStateMask &= ~0x2000000uLL;
  }
}


// CDOTA_Modifier_BountyHunter_WindWalk::DeclareFunctions  (line 630, @0x0000000002b33f60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BountyHunter_WindWalk::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_BountyHunter_WindWalk::DeclareFunctions(
        CDOTA_Modifier_BountyHunter_WindWalk *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 721);
  this->m_Functions[130].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_BountyHunter_WindWalk::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_BountyHunter_WindWalk::OnAttack  (line 642, @0x0000000002b33fe0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_WindWalk::OnAttack(
        CDOTA_Modifier_BountyHunter_WindWalk *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_BountyHunter_WindWalk::OnAttacked  (line 650, @0x0000000002b64530, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_WindWalk::OnAttacked(
        CDOTA_Modifier_BountyHunter_WindWalk *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CConcreteEntityList *v10; // rsi
  CEntityIdentity *v11; // rax
  __int64 v12; // rdx
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // rbx
  int m_Id; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v17; // r13
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+Ch] [rbp-34h]
  int bonus_damage[9]; // [rsp+1Ch] [rbp-24h] BYREF

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
          v10 = CEntityHandle::gm_pEntityList;
          if ( v9 + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = params->htarget.m_Index & 0x1FF;
              v10 = (8 * v12);
              v13 = &v11[v12];
              if ( v13 != 0 && v9 == v13->m_EHandle.m_Index )
              {
                v14 = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && BYTE3(v14[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(v14[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(v14[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  m_Id = v14[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
                  {
                    Ability = CDOTA_Buff::GetAbility(this);
                    DotaRetrieveAbilityValue<int>(Ability, bonus_damage, "bonus_damage");
                    flDamage = bonus_damage[0];
                    v17 = CDOTA_Buff::GetAbility(this);
                    Parent = CDOTA_Buff::GetParent(this);
                    ApplyDamage(Parent, v14, v17, flDamage, 1, 8);
                  }
                }
              }
            }
          }
          if ( (*(this->_vptr_CDOTA_Buff + 93))(this, v10) != 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_BountyHunter_Track::~CDOTA_Ability_BountyHunter_Track  (line 679, @0x0000000002ba0400, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_BountyHunter_Track::~CDOTA_Ability_BountyHunter_Track(
        CDOTA_Ability_BountyHunter_Track *const this)
{
  this->_vptr_IHandleEntity = &off_449B750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_BountyHunter_Track::~CDOTA_Ability_BountyHunter_Track  (line 679, @0x0000000002ba0420, libserver.so)  // inlines: ~CDOTA_Ability_BountyHunter_Track
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_BountyHunter_Track::~CDOTA_Ability_BountyHunter_Track(
        CDOTA_Ability_BountyHunter_Track *const this)
{
  this->_vptr_IHandleEntity = &off_449B750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_BountyHunter_Track::Schema_DynamicBinding  (line 681, @0x0000000002b8d510, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Track::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_Track::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_Track *const this)
{
  return CDOTA_Ability_BountyHunter_Track::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 681, @0x0000000002b8d520, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::DestructInstance  (line 681, @0x0000000002b8d530, libserver.so)  // inlines: Destruct<CDOTA_Ability_BountyHunter_Track>
void __fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::FreeInstance  (line 681, @0x0000000002b8d550, libserver.so)
void __fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::CanAllocate  (line 681, @0x0000000002b8d570, libserver.so)
bool __fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 681, @0x0000000002b8d580, libserver.so)
// globals: CDOTA_Ability_BountyHunter_Track::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_BountyHunter_Track::s_pSchemaBinding;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::AllocateInstance  (line 681, @0x0000000002b96c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::ConstructInstance  (line 681, @0x0000000002b9cb10, libserver.so)  // inlines: CDOTA_Ability_BountyHunter_Track, Construct<CDOTA_Ability_BountyHunter_Track>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_449B750;
  }
  return p;
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 681, @0x0000000002ba9b70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 681, @0x0000000002ba9b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal  (line 681, @0x0000000002bc5270, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_BountyHunter_Track"
// globals: `guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass, CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass, __dso_handle, CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo, CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo
CEntityClass *__cdecl CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass);
    CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass._vptr_CEntityClass = off_449B6D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass);
    __cxa_atexit(
      CDOTA_Ability_BountyHunter_Track::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_BountyHunter_TrackClass != 0 )
    return &CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass;
  if ( `guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo,
      "CDOTA_Ability_BountyHunter_Track",
      "bounty_hunter_track",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo);
  }
  CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass.m_pClassInfo = &CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo;
  CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass.m_pBaseClassInfo = CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_BountyHunter_TrackClass = &CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass;
  CDOTA_Ability_BountyHunter_Track::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClassInfo.m_pClass = &CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass;
  CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_BountyHunter_TrackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_BountyHunter_Track::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_BountyHunter_TrackClass;
}


// CDOTA_Ability_BountyHunter_Track::OnSpellStart  (line 691, @0x0000000002b71f30, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetAbilityData, GetLevelSpecialValueFor<float>, ToDOTABaseNPC, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues (26 total)
// strings: "modifier_bounty_hunter_track", "Hero_BountyHunter.Target", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_cast.vpcf", "attach_attack1", "attach_hitloc"
void __fastcall CDOTA_Ability_BountyHunter_Track::OnSpellStart(CDOTA_Ability_BountyHunter_Track *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v5; // rax
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v7; // r13
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int v12; // r15d
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm3_4
  CDOTA_BaseNPC *pEnt; // [rsp+10h] [rbp-1A0h]
  KeyValues kv; // [rsp+20h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v25; // [rsp+178h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  Caster = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v5 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v5);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v7 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_bounty_hunter_track");
    KeyValues::SetFloat(&kv, "duration", v8);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v9, this, "modifier_bounty_hunter_track", &kv, 0);
    DOTA_EmitSound(34, "Hero_BountyHunter.Target", v7);
    v10 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    v12 = CDOTA_ParticleManager::CreateParticle(
            ParticleManager,
            "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_cast.vpcf",
            2,
            v10,
            &filter,
            0);
    pEnt = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, v12, 0, pEnt, 5, "attach_attack1", vec3_invalid, 1);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, v12, 1, v7, 5, "attach_hitloc", vec3_invalid, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v15, v12, 2, v7, 1, 0, vec3_invalid, 1);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, v12);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    v20 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v20,
      0,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      -1.0,
      v21);
    KeyValues::~KeyValues(&kv);
  }
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_BountyHunter_Track::~CDOTA_Modifier_BountyHunter_Track  (line 727, @0x0000000002b9bbd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BountyHunter_Track::~CDOTA_Modifier_BountyHunter_Track(
        CDOTA_Modifier_BountyHunter_Track *const this)
{
  this->_vptr_CDOTA_Buff = &off_449C210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BountyHunter_Track::~CDOTA_Modifier_BountyHunter_Track  (line 727, @0x0000000002b9bbf0, libserver.so)  // inlines: ~CDOTA_Modifier_BountyHunter_Track
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BountyHunter_Track::~CDOTA_Modifier_BountyHunter_Track(
        CDOTA_Modifier_BountyHunter_Track *const this)
{
  this->_vptr_CDOTA_Buff = &off_449C210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BountyHunter_Track::IsAura  (line 736, @0x0000000002b8d590, libserver.so)
bool __fastcall CDOTA_Modifier_BountyHunter_Track::IsAura(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 1;
}


// CDOTA_Modifier_BountyHunter_Track::GetModifierAura  (line 737, @0x0000000002b8d5a0, libserver.so)
// strings: "modifier_bounty_hunter_track_effect"
const char *__fastcall CDOTA_Modifier_BountyHunter_Track::GetModifierAura(
        CDOTA_Modifier_BountyHunter_Track *const this)
{
  return "modifier_bounty_hunter_track_effect";
}


// CDOTA_Modifier_BountyHunter_Track::GetAuraSearchTeam  (line 739, @0x0000000002b8d5b0, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_Track::GetAuraSearchTeam(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 2;
}


// CDOTA_Modifier_BountyHunter_Track::GetAuraSearchType  (line 740, @0x0000000002b8d5c0, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_Track::GetAuraSearchType(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 3;
}


// CDOTA_Modifier_BountyHunter_Track::GetAuraSearchFlags  (line 741, @0x0000000002b8d5d0, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_Track::GetAuraSearchFlags(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 16;
}


// CDOTA_Modifier_BountyHunter_Track::GetAuraRadius  (line 742, @0x0000000002b8d5e0, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_Track::GetAuraRadius(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_BountyHunter_Track::GetPriority  (line 744, @0x0000000002b8d5f0, libserver.so)
int __fastcall CDOTA_Modifier_BountyHunter_Track::GetPriority(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 2;
}


// CDOTA_Modifier_BountyHunter_Track::IsPermanent  (line 746, @0x0000000002b8d600, libserver.so)
bool __fastcall CDOTA_Modifier_BountyHunter_Track::IsPermanent(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 0;
}


// CDOTA_Modifier_BountyHunter_Track::IsPurgable  (line 747, @0x0000000002b8d610, libserver.so)
bool __fastcall CDOTA_Modifier_BountyHunter_Track::IsPurgable(CDOTA_Modifier_BountyHunter_Track *const this)
{
  return 1;
}


// CDOTA_Modifier_BountyHunter_Track::OnCreated  (line 773, @0x0000000002b6fa30, libserver.so)  // inlines: AssignTo, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_shield.vpcf", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_trail.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_BountyHunter_Track::OnCreated(
        CDOTA_Modifier_BountyHunter_Track *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CTeam *GlobalTeam; // rax
  CTeam *v5; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int v9; // eax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  CReliableBroadcastRecipientFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v18; // [rsp+148h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CRecipientFilter::RemoveAllRecipients(&filter);
  GlobalTeam = GetGlobalTeam(this->m_iTeam);
  CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
  v5 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v5);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v9 = CDOTA_ParticleManager::CreateParticle(
         ParticleManager,
         "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_shield.vpcf",
         7,
         Parent,
         &filter,
         Caster);
  CDOTA_Buff::AddParticle(this, v9, 0, 0, -1, 0, 1);
  v10 = CDOTA_Buff::GetCaster(this);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  LODWORD(v10) = CDOTA_ParticleManager::CreateParticle(
                   v12,
                   "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_trail.vpcf",
                   3,
                   v11,
                   &filter,
                   v10);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, v10, 0, v13, 1, 0, vec3_invalid, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v10, 1, v15, 5, "attach_hitloc", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, v10, 0, 0, -1, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_BountyHunter_Track::OnRefresh  (line 797, @0x0000000002b6c1b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_BountyHunter_Track::OnRefresh(
        CDOTA_Modifier_BountyHunter_Track *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_BountyHunter_Track::OnDestroy  (line 805, @0x0000000002b896f0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPlayerID, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, ModifyGold, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_PlayerResource::ModifyGold, EconEntity_OnOwnerKillEaterEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (19 total)
// strings: "bonus_gold_radius", "bonus_gold_self", "gold_steal", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_reward.vpcf", "attach_hitloc"
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_BountyHunter_Track::OnDestroy(CDOTA_Modifier_BountyHunter_Track *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v2; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  __m128i v8; // xmm3
  CDOTA_BaseNPC_Hero *v9; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r13
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  __int64 v19; // r13
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  float v23; // ebx
  CDOTA_BaseNPC *v24; // r12
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rax
  __int64 v27; // r12
  int v28; // ebx
  CHandle<CBaseEntity> *v29; // rdx
  uint32 m_Index; // eax
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  CEntityInstance *m_pInstance; // r15
  __int64 m_Size; // r13
  int vptr_IHandleEntity; // r14d
  int *v37; // rdx
  int v38; // eax
  int *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rbx
  int iGoldChange; // [rsp+3Ch] [rbp-94h]
  vec_t vecFallbackPositiona; // [rsp+48h] [rbp-88h]
  CDOTA_BaseNPC_Hero *vecFallbackPosition; // [rsp+48h] [rbp-88h]
  int bonus_gold_radius; // [rsp+50h] [rbp-80h] BYREF
  int nBountyGold; // [rsp+54h] [rbp-7Ch] BYREF
  int bonus_gold; // [rsp+58h] [rbp-78h] BYREF
  float gold_steal; // [rsp+5Ch] [rbp-74h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > AlreadyReceivedBonusPlayers; // [rsp+60h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hNearbyAllies; // [rsp+80h] [rbp-50h] BYREF
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
    return;
  v2 = CDOTA_Buff::GetParent(this);
  if ( (*(v2->_vptr_IHandleEntity + 436))(v2) != 0 )
    return;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &bonus_gold_radius, "bonus_gold_radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &nBountyGold, "bonus_gold_self");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &bonus_gold, "bonus_gold");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v6, &gold_steal, "gold_steal");
  Caster = CDOTA_Buff::GetCaster(this);
  v9 = Caster;
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
  {
    CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, Caster[1].m_pfnBlocked.__delta, nBountyGold, 1, 12);
    EconEntity_OnOwnerKillEaterEvent(
      v9,
      0,
      kill_eater_event_t::kKillEaterEventType_Bounty_TrackGold,
      nBountyGold,
      INVALID_ITEM_DEF_INDEX);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_reward.vpcf",
                 2,
                 v9,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 0, v9, 5, "attach_hitloc", *AbsOrigin, 1);
    v14 = CDOTA_Buff::GetParent(this);
    v15 = CBaseEntity::GetAbsOrigin(v14);
    v16 = CDOTA_Buff::GetParent(this);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 1, v16, 5, "attach_hitloc", *v15, 1);
    v18 = GetParticleManager();
    v19 = *&vec3_invalid.x;
    vecFallbackPositiona = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v18, Particle, 2, v9, 1, 0, vec3_invalid, 1);
    v20 = CDOTA_Buff::GetParent(this);
    v21 = GetParticleManager();
    *&v52.x = v19;
    v52.z = vecFallbackPositiona;
    CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 3, v20, 1, 0, v52, 1);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
    vecFallbackPosition = v9;
  }
  else
  {
    vecFallbackPosition = 0;
  }
  *v8.m128i_i32 = bonus_gold_radius;
  AlreadyReceivedBonusPlayers.m_Size = 0;
  AlreadyReceivedBonusPlayers.m_Memory.m_pMemory = 0;
  AlreadyReceivedBonusPlayers.m_Memory.m_nAllocationCount = 0;
  AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize = 0;
  v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  hNearbyAllies.m_Size = 0;
  hNearbyAllies.m_Memory.m_pMemory = 0;
  hNearbyAllies.m_Memory.m_nAllocationCount = 0;
  hNearbyAllies.m_Memory.m_nGrowSize = 0;
  v24 = CDOTA_Buff::GetParent(this);
  v25 = CDOTA_Buff::GetParent(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  FindUnitsInRadius(this->m_iTeam, v26, v24, v23, &hNearbyAllies, 1, 1, 0x2000, 0, 0);
  v27 = 0;
  v28 = 0;
  if ( hNearbyAllies.m_Size > 0 )
  {
    while ( 1 )
    {
      v29 = &hNearbyAllies.m_Memory.m_pMemory[v27];
      m_Index = hNearbyAllies.m_Memory.m_pMemory[v27].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_9;
      v31 = v29->m_Index;
      v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_Index) >> 9) & 0x3F];
      if ( v32 == 0 )
        goto LABEL_9;
      v33 = &v32[v31 & 0x1FF];
      if ( v33 == 0 )
        goto LABEL_9;
      if ( m_Index != v33->m_EHandle.m_Index )
        goto LABEL_9;
      m_pInstance = v33->m_pInstance;
      if ( v33->m_pInstance == 0
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || vecFallbackPosition == m_pInstance )
      {
        goto LABEL_9;
      }
      m_Size = AlreadyReceivedBonusPlayers.m_Size;
      vptr_IHandleEntity = m_pInstance[100]._vptr_IHandleEntity;
      if ( AlreadyReceivedBonusPlayers.m_Size <= 0 )
        goto LABEL_23;
      if ( vptr_IHandleEntity != *AlreadyReceivedBonusPlayers.m_Memory.m_pMemory )
      {
        v37 = AlreadyReceivedBonusPlayers.m_Memory.m_pMemory + 1;
        v38 = 0;
        while ( ++v38 != AlreadyReceivedBonusPlayers.m_Size )
        {
          if ( vptr_IHandleEntity == *v37++ )
          {
            if ( v38 >= 0 )
              goto LABEL_9;
            break;
          }
        }
LABEL_23:
        iGoldChange = bonus_gold;
        if ( AlreadyReceivedBonusPlayers.m_Size == AlreadyReceivedBonusPlayers.m_Memory.m_nAllocationCount )
          CUtlMemory<int,int>::Grow(&AlreadyReceivedBonusPlayers.m_Memory, 1);
        ++AlreadyReceivedBonusPlayers.m_Size;
        v39 = &AlreadyReceivedBonusPlayers.m_Memory.m_pMemory[m_Size];
        if ( v39 != 0 )
          *v39 = vptr_IHandleEntity;
        CDOTA_PlayerResource::ModifyGold(
          g_pDOTAPlayerResource,
          m_pInstance[100]._vptr_IHandleEntity,
          iGoldChange,
          1,
          12);
        if ( vecFallbackPosition == 0 )
          goto LABEL_9;
        CDOTA_CombatLog::AddAlliedGoldEvent(&g_DOTACombatLog, vecFallbackPosition->m_iPlayerID.m_Value, iGoldChange);
        ++v28;
        ++v27;
        if ( hNearbyAllies.m_Size <= v28 )
          break;
      }
      else
      {
LABEL_9:
        ++v28;
        ++v27;
        if ( hNearbyAllies.m_Size <= v28 )
          break;
      }
    }
  }
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    v40 = CDOTA_Buff::GetParent(this);
    if ( v40 != 0 && (v40->m_iUnitType & 1) != 0 )
      v41 = v40;
    else
      v41 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      vecFallbackPosition,
      v41,
      kill_eater_event_t::kKillEaterEventType_Bounty_TrackedKills,
      1,
      INVALID_ITEM_DEF_INDEX);
    if ( v41->m_flInvisibilityLevel > 0.0 )
      EconEntity_OnOwnerKillEaterEvent(
        vecFallbackPosition,
        v41,
        kill_eater_event_t::kKillEaterEventType_Bounty_TrackedInvisKills,
        1,
        INVALID_ITEM_DEF_INDEX);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hNearbyAllies);
  AlreadyReceivedBonusPlayers.m_Size = 0;
  if ( (AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&AlreadyReceivedBonusPlayers.m_Memory);
    if ( (AlreadyReceivedBonusPlayers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&AlreadyReceivedBonusPlayers.m_Memory);
  }
}


// CDOTA_Modifier_BountyHunter_Track::CheckState  (line 909, @0x0000000002b33ff0, libserver.so)  // inlines: Disable
void __fastcall CDOTA_Modifier_BountyHunter_Track::CheckState(
        CDOTA_Modifier_BountyHunter_Track *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


// CDOTA_Modifier_BountyHunter_Track::DeclareFunctions  (line 918, @0x0000000002b34010, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BountyHunter_Track::OnDeath(CModifierParams const&), CDOTA_Modifier_BountyHunter_Track::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_BountyHunter_Track::DeclareFunctions(CDOTA_Modifier_BountyHunter_Track *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_BountyHunter_Track::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 697);
  this->m_Functions[151].__delta = 0;
  this->m_Functions[158].__pfn = CDOTA_Modifier_BountyHunter_Track::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_BountyHunter_Track::GetModifierProvidesFOWVision  (line 928, @0x0000000002b43e00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_shadow_dance"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Track::GetModifierProvidesFOWVision(
        CDOTA_Modifier_BountyHunter_Track *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *Parent; // rax
  bool v5; // zf
  ModifierVariant_t result; // 0:rax.16

  result.m_eType = params->htarget.m_Index;
  if ( (result.m_eType + 2) > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (result.m_szVal = &v3[params->htarget.m_Index & 0x1FF], result.m_szVal != 0)
    && result.m_eType == *(result.m_szVal + 4)
    && *result.m_szVal != 0
    && (*&result.m_eType = 1, this->m_iTeam != *(*result.m_szVal + 383LL)) )
  {
    result.m_szVal = 0;
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_shadow_dance", 0) == 0;
    *&result.m_eType = 0x3F80000000000001LL;
    if ( !v5 )
      *&result.m_eType = 1;
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_BountyHunter_Track::OnDeath  (line 942, @0x0000000002b44590, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_ModifierManager::RemoveModifierByName
// strings: "modifier_bounty_hunter_track"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Track::OnDeath(
        CDOTA_Modifier_BountyHunter_Track *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_ModifierManager::RemoveModifierByName(&Parent->m_ModifierManager, "modifier_bounty_hunter_track");
  return 1uLL;
}


// CDOTA_Modifier_BountyHunter_Track::Tooltip  (line 957, @0x0000000002b34060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_Track::Tooltip(
        CDOTA_Modifier_BountyHunter_Track *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nParentGold;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_BountyHunter_Track::AddCustomTransmiterData  (line 964, @0x0000000002b39ab0, libserver.so)  // inlines: set_armor, set_has_armor
// calls: CDOTA_Buff::GetParent, CDOTA_PlayerResource::GetGold, CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_BountyHunter_Track::AddCustomTransmiterData(
        CDOTA_Modifier_BountyHunter_Track *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  CDOTA_BaseNPC *Parent; // rax
  int v5; // eax
  int Gold; // eax

  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 414))(Parent);
  Gold = CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v5);
  this->m_nParentGold = Gold;
  *(entry + 4) |= 0x800u;
  *(entry + 17) = Gold;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_BountyHunter_Track::OnThinkInternal  (line 971, @0x0000000002b39b20, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_PlayerResource::GetGold, CDOTA_Buff::SendBuffRefreshToClients
void __fastcall CDOTA_Modifier_BountyHunter_Track::OnThinkInternal(CDOTA_Modifier_BountyHunter_Track *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // eax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 414))(Parent);
  if ( CDOTA_PlayerResource::GetGold(g_pDOTAPlayerResource, v3) != this->m_nParentGold )
    CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Modifier_BountyHunter_TrackEffect::~CDOTA_Modifier_BountyHunter_TrackEffect  (line 997, @0x0000000002b9bb80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::~CDOTA_Modifier_BountyHunter_TrackEffect(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_449C530;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_BountyHunter_TrackEffect::~CDOTA_Modifier_BountyHunter_TrackEffect  (line 997, @0x0000000002b9bba0, libserver.so)  // inlines: ~CDOTA_Modifier_BountyHunter_TrackEffect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::~CDOTA_Modifier_BountyHunter_TrackEffect(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_449C530;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_BountyHunter_TrackEffect::OnCreated  (line 1018, @0x0000000002b6e9e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "bonus_move_speed_pct", "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_haste.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::OnCreated(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  __int64 v9; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_move_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_move_speed_pct", -1, 0);
  else
    this->bonus_move_speed_pct = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_bounty_hunter/bounty_hunter_track_haste.vpcf",
                      2,
                      Parent,
                      0,
                      Caster);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = GetParticleManager();
  v9 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Parent, 0, v7, 1, 0, vec3_invalid, 1);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  *&v13.x = v9;
  v13.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 1, v10, 5, "attach_hitloc", v13, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_BountyHunter_TrackEffect::OnRefresh  (line 1030, @0x0000000002b6c570, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_move_speed_pct"
void __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::OnRefresh(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_move_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_move_speed_pct", -1, 0);
  else
    this->bonus_move_speed_pct = 0;
}


// CDOTA_Modifier_BountyHunter_TrackEffect::DeclareFunctions  (line 1037, @0x0000000002b34080, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_BountyHunter_TrackEffect::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::DeclareFunctions(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_BountyHunter_TrackEffect::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_BountyHunter_TrackEffect::GetModifierMoveSpeedBonus_Percentage  (line 1044, @0x0000000002b340a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_BountyHunter_TrackEffect::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_BountyHunter_TrackEffect *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_move_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


