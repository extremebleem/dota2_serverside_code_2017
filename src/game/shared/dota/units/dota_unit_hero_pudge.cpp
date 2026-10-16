// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:35
class CDOTA_Unit_Hero_Pudge : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Pudge(CDOTA_Unit_Hero_Pudge &);
	CDOTA_Unit_Hero_Pudge(CDOTA_Unit_Hero_Pudge &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Hero_Pudge();
	virtual ~CDOTA_Unit_Hero_Pudge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:53
class C_CDOTA_Unit_Hero_Pudge_MapInstall {
	C_CDOTA_Unit_Hero_Pudge_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:101
class CDOTA_Ability_Pudge_MeatHook : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	float hook_speed;  // +0x3a8
	int hook_width;  // +0x3ac
	int hook_distance;  // +0x3b0
	bool m_bRetracting;  // +0x3b4
	bool m_bDiedInHook;  // +0x3b5

	EHANDLE m_hVictim;  // +0x3b8
	bool m_bChainDetached;  // +0x3d4

	int m_iChainParticle;  // +0x3d8
	EHANDLE m_hSourceCaster;  // +0x3dc
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
	CDOTA_Ability_Pudge_MeatHook(CDOTA_Ability_Pudge_MeatHook &);
	CDOTA_Ability_Pudge_MeatHook(CDOTA_Ability_Pudge_MeatHook &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Pudge_MeatHook();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnOwnerDied();
	virtual float GetCooldown(int);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnAbilityPhaseInterrupted();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetAvoidRadius();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual ~CDOTA_Ability_Pudge_MeatHook();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[271] OnOwnerDied
	// vtable[242] GetCooldown
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[307] OnStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[327] GetAvoidRadius
	// vtable[330] GetAvoidStrength
	// sizeof = 992
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:158
class C_CDOTA_Ability_Pudge_MeatHook_MapInstall {
	C_CDOTA_Ability_Pudge_MeatHook_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:574
class CDOTA_Modifier_Pudge_Meat_Hook_PathingFix : public CDOTA_Buff {
public:

	CDOTA_Modifier_Pudge_Meat_Hook_PathingFix();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix();

	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:636
class CDOTA_Modifier_Pudge_Meat_Hook : public CDOTA_Buff {
public:

	CDOTA_Modifier_Pudge_Meat_Hook();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual bool IsMotionController();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Pudge_Meat_Hook();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[21] IsMotionController
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:684
class CDOTA_Ability_Pudge_Rot : public CDOTABaseAbility {
public:

private:

	int rot_damage;  // +0x390
	float m_flLastRotTime;  // +0x394
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
	CDOTA_Ability_Pudge_Rot(CDOTA_Ability_Pudge_Rot &);
	CDOTA_Ability_Pudge_Rot(CDOTA_Ability_Pudge_Rot &);
	CDOTA_Ability_Pudge_Rot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnToggle();
	virtual bool ProcsMagicStick();
	virtual bool ShouldSpeakAbilityConcept(int);
	void SetLastRotTime(float);
	float GetLastRotTime();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Pudge_Rot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[270] OnToggle
	// vtable[239] ProcsMagicStick
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:707
class C_CDOTA_Ability_Pudge_Rot_MapInstall {
	C_CDOTA_Ability_Pudge_Rot_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:769
class CDOTA_Modifier_Pudge_Rot : public CDOTA_Buff {
public:

private:

	int rot_damage;  // +0xba8
	int rot_slow;  // +0xbac
	float m_flLastRotTime;  // +0xbb8
	CDOTA_Modifier_Pudge_Rot();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual int GetAttributes();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Pudge_Rot();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:939
class C_CDOTA_Ability_Pudge_FleshHeap_MapInstall {
	C_CDOTA_Ability_Pudge_FleshHeap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:976
class CDOTA_Modifier_Pudge_FleshHeap : public CDOTA_Buff {
public:

private:

	int flesh_heap_magic_resist;  // +0xba8
	float flesh_heap_strength_buff_amount;  // +0xbac
	CDOTA_Modifier_Pudge_FleshHeap();
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	virtual ~CDOTA_Modifier_Pudge_FleshHeap();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[53] GetMatchPermanentBuff
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:1074
class CDOTA_Ability_Pudge_Dismember : public CDOTABaseAbility {
	class NetworkVar_m_hVictim {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	typedef CDOTA_Ability_Pudge_Dismember ThisClass;

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
	CDOTA_Ability_Pudge_Dismember(CDOTA_Ability_Pudge_Dismember &);
	CDOTA_Ability_Pudge_Dismember(CDOTA_Ability_Pudge_Dismember &);
	CDOTA_Ability_Pudge_Dismember();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual int GetConceptRecipientType();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual float GetChannelTime();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Pudge_Dismember();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[299] GetConceptRecipientType
	// vtable[300] SpeakTrigger
	// vtable[225] GetChannelTime
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:1098
class C_CDOTA_Ability_Pudge_Dismember_MapInstall {
	C_CDOTA_Ability_Pudge_Dismember_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_pudge.cpp:1206
class CDOTA_Modifier_Pudge_Dismember : public CDOTA_Buff {
public:

	int dismember_damage;  // +0xba8
	float strength_damage;  // +0xbac
	int m_nTicks;  // +0xbb0
	int m_nMaxTicks;  // +0xbb4
	CDOTA_Modifier_Pudge_Dismember();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsStunDebuff();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_Pudge_Dismember();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[16] IsStunDebuff
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Pudge::~CDOTA_Unit_Hero_Pudge  (line 35, @0x0000000002a18d90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Pudge::~CDOTA_Unit_Hero_Pudge(CDOTA_Unit_Hero_Pudge *const this)
{
  this->_vptr_IHandleEntity = &off_437AA70;
  this->_vptr_INextBotEventResponder = &off_437BA50;
  this->_vptr_CObstructionObject = &off_437BD80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Pudge::~CDOTA_Unit_Hero_Pudge  (line 35, @0x0000000002a18dd0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Pudge
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Pudge::~CDOTA_Unit_Hero_Pudge(CDOTA_Unit_Hero_Pudge *const this)
{
  this->_vptr_IHandleEntity = &off_437AA70;
  this->_vptr_INextBotEventResponder = &off_437BA50;
  this->_vptr_CObstructionObject = &off_437BD80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Pudge::Schema_DynamicBinding  (line 37, @0x0000000002a0ba40, libserver.so)
// globals: CDOTA_Unit_Hero_Pudge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Pudge::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Pudge *const this)
{
  return CDOTA_Unit_Hero_Pudge::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002a0ba70, libserver.so)
// globals: CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002a0ba80, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Pudge>
void __fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002a0baa0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002a0bac0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002a0bad0, libserver.so)
// globals: CDOTA_Unit_Hero_Pudge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Pudge::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002a10480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002a13770, libserver.so)  // inlines: CDOTA_Unit_Hero_Pudge, Construct<CDOTA_Unit_Hero_Pudge>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_437AA70;
    *(p + 236) = &off_437BA50;
    *(p + 257) = &off_437BD80;
  }
  return p;
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a20670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a20be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Pudge::GetEntityClassInternal  (line 37, @0x0000000002a3cb60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_pudge", "CDOTA_Unit_Hero_Pudge"
// globals: `guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass, CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass, __dso_handle, CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo, CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Pudge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass);
    CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass._vptr_CEntityClass = off_437A9F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Pudge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PudgeClass != 0 )
    return &CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo,
      "CDOTA_Unit_Hero_Pudge",
      "npc_dota_hero_pudge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo);
  }
  CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass.m_pClassInfo = &CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo;
  CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PudgeClass = &CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass;
  CDOTA_Unit_Hero_Pudge::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PudgeClassInfo.m_pClass = &CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass;
  CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PudgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Pudge::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PudgeClass;
}


// CDOTA_Unit_Hero_Pudge::YouForgotToImplementOrDeclareServerClass  (line 53, @0x00000000029b5ff0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Pudge::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Pudge *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Pudge::GetServerClass  (line 53, @0x00000000029c9bb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Pudge::GetServerClass(CDOTA_Unit_Hero_Pudge *const this)
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


// CDOTA_Unit_Hero_Pudge::Spawn  (line 61, @0x00000000029bb200, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Pudge::Spawn(CDOTA_Unit_Hero_Pudge *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
}


// CDOTA_Unit_Hero_Pudge::OnAlive  (line 72, @0x00000000029c0a90, libserver.so)  // inlines: GetTogglableWearable, MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_BaseNPC_Hero::CacheTogglableWearable, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Unit_Hero_Pudge::OnAlive(CDOTA_Unit_Hero_Pudge *const this)
{
  CEconWearable *v2; // rbx

  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  v2 = this->m_pTogglableWearable[0];
  if ( v2 != 0 )
  {
    (*(v2->_vptr_IHandleEntity + 188))(this->m_pTogglableWearable[0], v2->m_fEffects.m_Value & 0xFFFFFFDF);
    v2->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(v2);
    (*(this->m_pTogglableWearable[0]->_vptr_IHandleEntity + 213))(this->m_pTogglableWearable[0]);
  }
}


// CDOTA_Unit_Hero_Pudge::OnDying  (line 89, @0x00000000029b6000, libserver.so)
void __fastcall CDOTA_Unit_Hero_Pudge::OnDying(CDOTA_Unit_Hero_Pudge *const this)
{
  ;
}


// CDOTA_Ability_Pudge_MeatHook::~CDOTA_Ability_Pudge_MeatHook  (line 101, @0x0000000002a17df0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pudge_MeatHook::~CDOTA_Ability_Pudge_MeatHook(CDOTA_Ability_Pudge_MeatHook *const this)
{
  this->_vptr_IHandleEntity = &off_437BE50;
  this->_vptr_CHorizontalMotionController = &off_437C8D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pudge_MeatHook::~CDOTA_Ability_Pudge_MeatHook  (line 101, @0x0000000002a17e20, libserver.so)  // inlines: ~CDOTA_Ability_Pudge_MeatHook
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pudge_MeatHook::~CDOTA_Ability_Pudge_MeatHook(CDOTA_Ability_Pudge_MeatHook *const this)
{
  this->_vptr_IHandleEntity = &off_437BE50;
  this->_vptr_CHorizontalMotionController = &off_437C8D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pudge_MeatHook::Schema_DynamicBinding  (line 103, @0x0000000002a0bae0, libserver.so)
// globals: CDOTA_Ability_Pudge_MeatHook::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_MeatHook::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_MeatHook *const this)
{
  return CDOTA_Ability_Pudge_MeatHook::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 103, @0x0000000002a0bb00, libserver.so)
// globals: CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::DestructInstance  (line 103, @0x0000000002a0bb10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pudge_MeatHook>
void __fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::FreeInstance  (line 103, @0x0000000002a0bb30, libserver.so)
void __fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::CanAllocate  (line 103, @0x0000000002a0bb50, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 103, @0x0000000002a0bb60, libserver.so)
// globals: CDOTA_Ability_Pudge_MeatHook::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_MeatHook::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::AllocateInstance  (line 103, @0x0000000002a104c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 992);
  memset(v1, 0, 0x3E0u);
  return v1;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::ConstructInstance  (line 103, @0x0000000002a14820, libserver.so)  // inlines: CDOTA_Ability_Pudge_MeatHook, CEntityHandle, CHandle, CHorizontalMotionController, Construct<CDOTA_Ability_Pudge_MeatHook>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_437BE50;
    *(p + 114) = &off_437C8D8;
    *(p + 238) = -1;
    *(p + 247) = -1;
  }
  return p;
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 103, @0x0000000002a20260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 103, @0x0000000002a20280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal  (line 103, @0x0000000002a3a400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Pudge_MeatHook"
// globals: `guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass, CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass, __dso_handle, CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo, CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass);
    CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass._vptr_CEntityClass = off_437BDD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass);
    __cxa_atexit(
      CDOTA_Ability_Pudge_MeatHook::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pudge_MeatHookClass != 0 )
    return &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass;
  if ( `guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo,
      "CDOTA_Ability_Pudge_MeatHook",
      "pudge_meat_hook",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo);
  }
  CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass.m_pClassInfo = &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo;
  CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass.m_pBaseClassInfo = CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pudge_MeatHookClass = &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass;
  CDOTA_Ability_Pudge_MeatHook::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClassInfo.m_pClass = &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass;
  CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pudge_MeatHookClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pudge_MeatHook::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_MeatHookClass;
}


// CDOTA_Ability_Pudge_MeatHook::PlaysDefaultAnimWhenStolen  (line 126, @0x0000000002a0bb70, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_MeatHook::PlaysDefaultAnimWhenStolen(CDOTA_Ability_Pudge_MeatHook *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_MeatHook::GetStolenActivityModifier  (line 127, @0x0000000002a0bb80, libserver.so)
const char *__fastcall CDOTA_Ability_Pudge_MeatHook::GetStolenActivityModifier(
        CDOTA_Ability_Pudge_MeatHook *const this)
{
  return "hook";
}


// CDOTA_Ability_Pudge_MeatHook::GetAvoidRadius  (line 133, @0x0000000002a33ce0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hook_width"
float __fastcall CDOTA_Ability_Pudge_MeatHook::GetAvoidRadius(CDOTA_Ability_Pudge_MeatHook *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hook_width", -1, 0) + 150.0;
}


// CDOTA_Ability_Pudge_MeatHook::GetAvoidStrength  (line 134, @0x0000000002a0bb90, libserver.so)
float __fastcall CDOTA_Ability_Pudge_MeatHook::GetAvoidStrength(
        CDOTA_Ability_Pudge_MeatHook *const this,
        CDOTA_Bot *pBot)
{
  return 0.80000001;
}


// CDOTA_Ability_Pudge_MeatHook::YouForgotToImplementOrDeclareServerClass  (line 158, @0x00000000029b6010, libserver.so)
int __fastcall CDOTA_Ability_Pudge_MeatHook::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pudge_MeatHook *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_MeatHook::GetServerClass  (line 158, @0x00000000029c99b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pudge_MeatHook::GetServerClass(CDOTA_Ability_Pudge_MeatHook *const this)
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


// CDOTA_Ability_Pudge_MeatHook::GetCooldown  (line 167, @0x00000000029df000, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Pudge_MeatHook::GetCooldown(CDOTA_Ability_Pudge_MeatHook *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && CDOTABaseAbility::GetEffectiveLevel(this) >= 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Pudge_MeatHook::OnStolen  (line 175, @0x00000000029b6800, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CDOTABaseAbility::GetCaster
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnStolen(
        CDOTA_Ability_Pudge_MeatHook *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  if ( pSourceAbility != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(pSourceAbility);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v6 = 0x7FFF;
      else
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSourceCaster.m_Index) = v6 | this->m_hSourceCaster.m_Index & 0x8000;
      this->m_hSourceCaster.m_Index = (v5 << 15) | this->m_hSourceCaster.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSourceCaster.m_Index = -1;
    }
  }
}


// CDOTA_Ability_Pudge_MeatHook::OnAbilityPhaseStart  (line 185, @0x00000000029b9150, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Pudge_MeatHook::OnAbilityPhaseStart(CDOTA_Ability_Pudge_MeatHook *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1516, 0.1, 0.0, 9, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Pudge_MeatHook::OnAbilityPhaseInterrupted  (line 194, @0x00000000029ba9f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnAbilityPhaseInterrupted(CDOTA_Ability_Pudge_MeatHook *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1516);
}


// CDOTA_Ability_Pudge_MeatHook::UpdateHorizontalMotion  (line 201, @0x00000000029c4640, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator+, operator-
// calls: CBaseEntity::SetAbsOrigin, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl
// strings: "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Pudge_MeatHook::UpdateHorizontalMotion(
        CDOTA_Ability_Pudge_MeatHook *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseEntity *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  float v11; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  int m_iChainParticle; // r12d
  const CBaseAnimating *v14; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int v16; // xmm2_4
  float v17; // xmm0_4
  unsigned int v18; // xmm1_4
  int v19; // ebx
  CDOTA_ParticleManager *v20; // rax
  double v21; // [rsp+10h] [rbp-30h]
  float v22; // [rsp+18h] [rbp-28h]

  m_Index = this->m_hVictim.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVictim.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hVictim.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CBaseEntity::SetAbsOrigin(v7->m_pInstance, &this->m_vProjectileLocation);
          Caster = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
          v11 = fsqrt(
                  ((this->m_vCasterPosition.x - AbsOrigin->x) * (this->m_vCasterPosition.x - AbsOrigin->x))
                + ((this->m_vCasterPosition.y - AbsOrigin->y) * (this->m_vCasterPosition.y - AbsOrigin->y)));
          if ( !this->m_bChainDetached && (v11 > 128.0 || m_pInstance[3].m_vecVelocity.m_Value.x < 0.0) )
          {
            this->m_bChainDetached = 1;
            v12 = CDOTABaseAbility::GetCaster(this);
            m_iChainParticle = this->m_iChainParticle;
            v14 = v12;
            ParticleManager = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              ParticleManager,
              m_iChainParticle,
              0,
              v14,
              2,
              "attach_hitloc",
              vec3_invalid,
              1);
            *&v16 = this->m_vCasterPosition.y + 0.0;
            v17 = this->m_vCasterPosition.z + 96.0;
            *&v18 = this->m_vCasterPosition.x + 0.0;
            v19 = this->m_iChainParticle;
            v22 = v17;
            v21 = COERCE_DOUBLE(__PAIR64__(v16, v18));
            v20 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v20, v19, 0, v21, v22);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Pudge_MeatHook::OnHorizontalMotionInterrupted  (line 221, @0x00000000029c4800, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_BaseNPC::RemoveModifierByName
// strings: "attach_weapon_chain_rt", "modifier_pudge_meat_hook"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnHorizontalMotionInterrupted(CDOTA_Ability_Pudge_MeatHook *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v8; // rax
  int m_iChainParticle; // ebx
  const CBaseAnimating *v10; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  Vector vecFallbackPosition; // 0:^10.12

  m_Index = this->m_hVictim.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVictim.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hVictim.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Caster = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
          vecFallbackPosition.z = AbsOrigin->z + 96.0;
          vecFallbackPosition.y = AbsOrigin->y + 0.0;
          vecFallbackPosition.x = AbsOrigin->x + 0.0;
          v8 = CDOTABaseAbility::GetCaster(this);
          m_iChainParticle = this->m_iChainParticle;
          v10 = v8;
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(
            ParticleManager,
            m_iChainParticle,
            1,
            v10,
            5,
            "attach_weapon_chain_rt",
            vecFallbackPosition,
            1);
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_pudge_meat_hook");
        }
      }
    }
  }
}


// CDOTA_Ability_Pudge_MeatHook::OnSpellStart  (line 233, @0x00000000029ec790, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTogglableWearable, NormalizeInPlace, Set, ToDOTABaseNPC, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator*, operator*=, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect (25 total)
// strings: "hook_speed", "hook_width", "Hero_Pudge.AttackHookExtend", "modifier_followthrough", "particles/units/heroes/hero_pudge/pudge_meathook.vpcf", "attach_weapon_chain_rt" (11 total)
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnSpellStart(CDOTA_Ability_Pudge_MeatHook *const this)
{
  EHANDLE *p_m_hVictim; // rdi
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm3_4
  vec_t y; // xmm4_4
  vec_t z; // xmm5_4
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // r12
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  float hook_distance; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm2_4
  vec_t v17; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  unsigned int v22; // xmm1_4
  vec_t v23; // xmm0_4
  unsigned int v24; // xmm2_4
  float v25; // xmm0_4
  int AbilityParticleEffect; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm1_4
  CDOTA_BaseNPC *v32; // r15
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  float hook_width; // xmm1_4
  float v36; // xmm2_4
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // r15
  int m_iChainParticle; // r14d
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  float v45; // xmm1_4
  CDOTA_BaseNPC *v46; // rax
  float v47; // xmm1_4
  CDOTA_BaseNPC *v48; // rax
  float v49; // xmm1_4
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // rax
  vec_t v52; // xmm1_4
  vec_t v53; // xmm2_4
  vec_t v54; // xmm0_4
  vec_t v55; // xmm0_4
  float hook_speed; // xmm0_4
  CDOTA_BaseNPC *v57; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v59; // eax
  __int16 v60; // cx
  CDOTALocomotor *v61; // rax
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v63; // rdi
  CDOTA_BaseNPC *v64; // r12
  CDOTA_BaseNPC *v65; // rax
  const QAngle *AbsAngles; // rax
  vec_t v67; // [rsp+14h] [rbp-13Ch]
  vec_t v68; // [rsp+18h] [rbp-138h]
  vec_t v69; // [rsp+1Ch] [rbp-134h]
  Vector vDirection; // [rsp+20h] [rbp-130h] BYREF
  Vector vTargetPos; // [rsp+30h] [rbp-120h]
  Vector vKillSwitch; // [rsp+40h] [rbp-110h]
  Vector vecFallbackPosition; // [rsp+50h] [rbp-100h]
  sLinearProjectileCreateInfo info; // [rsp+60h] [rbp-F0h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-70h] BYREF
  KeyValues kv_hook; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v77; // [rsp+118h] [rbp-38h]

  p_m_hVictim = &this->m_hVictim;
  LOBYTE(p_m_hVictim[7].m_Index) = 0;
  v77 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(p_m_hVictim);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    v61 = (*(v3->_vptr_IHandleEntity + 376))(v3);
    CDOTALocomotor::InterruptMotionControllers(v61, 1);
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v63 = *&Caster[1].m_vecVelocity.m_vecY.m_nEncoder;
    v64 = Caster;
    if ( v63 != 0 )
    {
      CBaseEntity::AddEffects(v63, 32);
      (*(**&v64[1].m_vecVelocity.m_vecY.m_nEncoder + 1704LL))(*&v64[1].m_vecVelocity.m_vecY.m_nEncoder);
    }
  }
  this->hook_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hook_speed", -1, 0);
  this->hook_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hook_width", -1, 0);
  this->hook_distance = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->m_vProjectileLocation.x = AbsOrigin->x;
  this->m_vProjectileLocation.y = y;
  this->m_vProjectileLocation.z = z;
  v67 = x;
  v68 = y;
  v69 = z;
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v11 = *(&info.pszEffectName + 1) - v10->y;
  v12 = *&info.pszEffectName - v10->x;
  vDirection.z = 0.0;
  vDirection.y = v11;
  vDirection.x = v12;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v65 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v65);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  hook_distance = this->hook_distance;
  vDirection.x = vDirection.x * hook_distance;
  vDirection.y = vDirection.y * hook_distance;
  vDirection.z = hook_distance * vDirection.z;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = v15->x + vDirection.x;
  v17 = v15->z + vDirection.z;
  this->m_vTargetPosition.y = v15->y + vDirection.y;
  this->m_vTargetPosition.x = v16;
  this->m_vTargetPosition.z = v17;
  VectorNormalize(&vDirection);
  v18 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v18, "Hero_Pudge.AttackHookExtend", 0.0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_followthrough");
  KeyValues::SetFloat(&kv, "duration", v19);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v21, v20, this, "modifier_followthrough", &kv, 0);
  *&v22 = this->m_vTargetPosition.y + 0.0;
  v23 = this->m_vTargetPosition.z + 96.0;
  *&v24 = this->m_vTargetPosition.x + 0.0;
  *&vKillSwitch.y = 0;
  vTargetPos.z = v23;
  v25 = this->hook_distance;
  *&vTargetPos.x = __PAIR64__(v22, v24);
  vKillSwitch.x = (v25 / this->hook_speed) + (v25 / this->hook_speed);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_pudge/pudge_meathook.vpcf",
                            2,
                            0,
                            0);
  this->m_iChainParticle = AbilityParticleEffect;
  LODWORD(v20) = AbilityParticleEffect;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleAlwaysSimulate(ParticleManager, v20);
  v28 = CDOTABaseAbility::GetCaster(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = v29->z + 96.0;
  v31 = v29->x + 0.0;
  vecFallbackPosition.y = v29->y + 0.0;
  vecFallbackPosition.z = v30;
  vecFallbackPosition.x = v31;
  v32 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v20) = this->m_iChainParticle;
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v33, v20, 0, v32, 5, "attach_weapon_chain_rt", vecFallbackPosition, 1);
  LODWORD(v20) = this->m_iChainParticle;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, v20, 1, *&vTargetPos.x, vTargetPos.z);
  hook_width = this->hook_width;
  v36 = this->hook_distance;
  LODWORD(v20) = this->m_iChainParticle;
  *&info.pszEffectName = this->hook_speed;
  *(&info.pszEffectName + 1) = v36;
  *&info.pAbility = hook_width;
  v37 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v37, v20, 2, *&info.pszEffectName, *&info.pAbility);
  LODWORD(v20) = this->m_iChainParticle;
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v20, 3, *&vKillSwitch.x, vKillSwitch.z);
  info.pszEffectName = 1065353216;
  LODWORD(v20) = this->m_iChainParticle;
  LODWORD(info.pAbility) = 0;
  v39 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v39, v20, 4, *&info.pszEffectName, *&info.pAbility);
  info.pszEffectName = 0;
  LODWORD(v20) = this->m_iChainParticle;
  LODWORD(info.pAbility) = 0;
  v40 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v40, v20, 5, *&info.pszEffectName, *&info.pAbility);
  if ( this->m_bStolen.m_Value )
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_hSourceCaster);
  else
    v41 = CDOTABaseAbility::GetCaster(this);
  m_iChainParticle = this->m_iChainParticle;
  v43 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v43, m_iChainParticle, 7, v41, 2, 0, vec3_invalid, 1);
  KeyValues::KeyValues(&kv_hook, "PudgeHook");
  KeyValues::SetInt(&kv_hook, "chainparticle", this->m_iChainParticle);
  v44 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v44);
  KeyValues::SetFloat(&kv_hook, "start_pos_x", v45);
  v46 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v46);
  KeyValues::SetFloat(&kv_hook, "start_pos_y", v47);
  v48 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v48);
  KeyValues::SetFloat(&kv_hook, "start_pos_z", v49);
  v50 = CDOTABaseAbility::GetCaster(this);
  v51 = CBaseEntity::GetAbsOrigin(v50);
  v52 = vec3_origin.y;
  this->m_vCasterPosition.x = v51->x;
  v53 = vec3_origin.x;
  this->m_vCasterPosition.y = v51->y;
  v54 = v51->z;
  info.vAcceleration.x = v53;
  info.vAcceleration.y = v52;
  this->m_vCasterPosition.z = v54;
  v55 = vec3_origin.z;
  info.vSpawnOrigin.x = v67;
  info.vAcceleration.z = v55;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
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
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = this;
  info.vSpawnOrigin.y = v68;
  hook_speed = this->hook_speed;
  info.vSpawnOrigin.z = v69;
  info.vVelocity.y = vDirection.y * hook_speed;
  info.vVelocity.z = vDirection.z * hook_speed;
  info.vVelocity.x = hook_speed * vDirection.x;
  info.fDistance = this->hook_distance;
  info.fStartRadius = this->hook_width;
  info.fEndRadius = info.fStartRadius;
  v57 = CDOTABaseAbility::GetCaster(this);
  if ( v57 != 0 && (m_pEntity = v57->m_pEntity) != 0 )
  {
    v59 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v60 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v60 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v60 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v59 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.pKVExtraData = &kv_hook;
  info.iUnitTargetTeam = 3;
  info.iUnitTargetType = 19;
  info.iUnitTargetFlags = 592;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  this->m_bRetracting = 0;
  this->m_bDiedInHook = 0;
  this->m_hVictim.m_Index = -1;
  KeyValues::~KeyValues(&kv_hook);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData  (line 331, @0x00000000029ed120, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, GetTogglableWearable, IndexToIdentity, IsConsideredHero, IsValid, Length2D, Length2DSqr, LookupEntity, MarkPVSInformationDirty, NormalizeInPlace, RemoveEffects, Set, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*=, operator+, operator-, operator=, operator==, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC::HasScepter, ApplyDamage, CDotaStatManager::IncrementPlayerStat<int>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_BaseNPC::UnitEmitSound, CDOTALocomotor::ApplyHorizontalMotionController (44 total)
// strings: "hookedtarget", "pudge.creeps_hooked", "Hero_Pudge.AttackHookImpact", "modifier_pudge_meat_hook", "particles/units/heroes/hero_pudge/pudge_meathook_impact.vpcf", "attach_hitloc" (13 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
_BOOL8 __fastcall CDOTA_Ability_Pudge_MeatHook::OnProjectileHit_ExtraData(
        CDOTA_Ability_Pudge_MeatHook *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pKV)
{
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  _BOOL4 m_bRetracting; // r13d
  float v13; // xmm2_4
  char m_CScriptComponent_high; // r15
  float v15; // xmm2_4
  int v16; // r15d
  CDOTA_BaseNPC *v17; // rax
  __m128i v18; // xmm5
  int v19; // r15d
  CDOTA_BaseNPC *v20; // rax
  double v21; // xmm0_8
  CDOTA_BaseNPC *v22; // rax
  CBaseMultiplayerPlayer *v23; // rax
  const char *v24; // rcx
  int LevelSpecialValue; // r15d
  const Vector *v26; // r15
  CDOTA_BaseNPC *v27; // rax
  CEntityIdentity *v28; // rdx
  int v29; // eax
  __int16 v30; // cx
  CDOTALocomotor *v31; // rax
  char v32; // r15
  CDOTA_BaseNPC *v33; // rax
  char v34; // r15
  int AbilityParticleEffect; // r15d
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v40; // rax
  float v41; // xmm2_4
  float v42; // xmm1_4
  float y; // xmm0_4
  float hook_speed; // xmm0_4
  vec_t v45; // xmm3_4
  vec_t v46; // xmm4_4
  CDOTA_BaseNPC *v47; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v49; // eax
  __int16 v50; // cx
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  const Vector *v53; // rax
  vec_t v54; // xmm0_4
  vec_t v55; // xmm1_4
  CDOTA_BaseNPC *v56; // r14
  int v57; // r12d
  CDOTA_ParticleManager *v58; // rax
  CDOTA_BaseNPC *v59; // rax
  CDOTA_BaseNPC *v60; // rax
  CDOTA_BaseNPC *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  int m_Id; // eax
  CDOTA_BaseNPC *v65; // rax
  CBaseEntity *v66; // r12
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // r12
  CDOTALocomotor *v69; // rax
  const Vector *v70; // rax
  int Int; // r12d
  CDOTA_ParticleManager *v72; // rax
  CDOTA_BaseNPC *v73; // rax
  char v74; // r15
  float v75; // xmm2_4
  CDOTA_BaseNPC *v76; // rax
  CBaseMultiplayerPlayer *v77; // rax
  CDOTA_BaseNPC_Hero *v78; // r15
  CDOTA_BaseNPC *v79; // rax
  CDOTA_BaseNPC_Hero *v80; // rdi
  CDOTA_BaseNPC *v81; // rax
  CDOTA_BaseNPC_Hero *v82; // r15
  CDOTA_BaseNPC *v83; // rax
  CDOTA_BaseNPC_Hero *v84; // rdi
  __m128i v85; // xmm0
  const Vector *v86; // rax
  float v87; // xmm1_4
  CDOTA_BaseNPC *v88; // rax
  const Vector *v89; // rax
  int m_iChainParticle; // r14d
  vec_t v91; // xmm0_4
  vec_t v92; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int v94; // r12d
  CDOTA_ParticleManager *v95; // rax
  int v96; // r12d
  CDOTA_ParticleManager *v97; // rax
  CDOTA_BaseNPC *v98; // rax
  CDOTA_BaseNPC_Hero *v99; // r15
  CDOTA_BaseNPC *v100; // rax
  CDOTA_BaseNPC_Hero *v101; // rdi
  bool bTargetPulled; // [rsp+1Bh] [rbp-165h]
  vec_t z; // [rsp+1Ch] [rbp-164h]
  float x; // [rsp+20h] [rbp-160h]
  float vision_durationa; // [rsp+24h] [rbp-15Ch]
  float vision_duration; // [rsp+24h] [rbp-15Ch]
  float vision_durationb; // [rsp+24h] [rbp-15Ch]
  float pHeroa; // [rsp+28h] [rbp-158h]
  float pHero; // [rsp+28h] [rbp-158h]
  CDOTA_BaseNPC_Hero *pHerob; // [rsp+28h] [rbp-158h]
  float pHeroc; // [rsp+28h] [rbp-158h]
  Vector vVelocity; // [rsp+30h] [rbp-150h] BYREF
  QAngle newVictimAngles; // [rsp+40h] [rbp-140h] BYREF
  Vector v114; // [rsp+50h] [rbp-130h]
  Vector vecFallbackPosition; // [rsp+60h] [rbp-120h]
  CResponseCriteriaSet criteria; // [rsp+70h] [rbp-110h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+B0h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+130h] [rbp-50h] BYREF
  unsigned __int64 v119; // [rsp+148h] [rbp-38h]

  m_pInstance = 0;
  v119 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( (*hTarget + 2) > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[*hTarget & 0x1FF];
      if ( v11 != 0 && *hTarget == v11->m_EHandle.m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  if ( Caster == m_pInstance )
    return 0;
  m_bRetracting = this->m_bRetracting;
  if ( !m_bRetracting )
  {
    if ( m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
    {
      m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
      if ( (m_Id & 0x80u) == 0 && (m_Id & 3) == 0 )
        return m_bRetracting;
    }
    else
    {
      m_pInstance = 0;
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "hookedtarget", 1.0, v13);
    if ( m_pInstance == 0 )
    {
      bTargetPulled = 0;
LABEL_31:
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
      if ( m_pInstance != 0 )
        AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      else
        AbsOrigin = &this->m_vTargetPosition;
      x = AbsOrigin->x;
      vision_duration = AbsOrigin->y;
      z = AbsOrigin->z;
      v40 = CDOTABaseAbility::GetCaster(this);
      v41 = v40->m_flHullRadius + v40->m_flCollisionPadding;
      if ( m_pInstance != 0 )
        v41 = v41 + (*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity);
      v42 = this->m_vCasterPosition.x;
      vVelocity.z = 0.0;
      y = this->m_vCasterPosition.y;
      vVelocity.x = v42 - x;
      vVelocity.y = y - vision_duration;
      pHero = fsqrt((vVelocity.x * vVelocity.x) + (vVelocity.y * vVelocity.y)) - v41;
      VectorNormalize(&vVelocity);
      VectorAngles(&vVelocity, &newVictimAngles);
      if ( m_pInstance != 0 )
      {
        newVictimAngles.x = 0.0;
        newVictimAngles.z = 0.0;
        CBaseEntity::SetAbsAngles(m_pInstance, &newVictimAngles);
      }
      hook_speed = this->hook_speed;
      info.bHasFrontalCone = 1;
      info.bCheckStartPosition = 0;
      info.bProvidesVision = 0;
      info.bDrawsOnMinimap = 0;
      info.bVisibleToEnemies = 1;
      v45 = vec3_origin.z;
      info.iUnitTargetFlags = 0;
      info.iVisionTeamNumber = -1;
      info.vAcceleration.z = v45;
      v46 = vec3_origin.y;
      info.bIgnoreSource = 0;
      info.vAcceleration.x = vec3_origin.x;
      vVelocity.x = vVelocity.x * hook_speed;
      vVelocity.y = vVelocity.y * hook_speed;
      vVelocity.z = hook_speed * vVelocity.z;
      info.hSource.m_Index = -1;
      info.pszEffectName = 0;
      info.vAcceleration.y = v46;
      info.fStartRadius = 0.0;
      info.fEndRadius = 0.0;
      info.iUnitTargetTeam = 0;
      info.iUnitTargetType = 0;
      info.iVisionRadius = -1;
      info.bStickyFoWReveal = 0;
      info.pKVExtraData = 0;
      info.fExpireTime = 0.0;
      info.fMaxSpeed = 0.0;
      info.pAbility = this;
      info.vVelocity = vVelocity;
      info.vSpawnOrigin.x = x;
      info.vSpawnOrigin.y = vision_duration;
      info.vSpawnOrigin.z = z;
      info.fDistance = pHero;
      v47 = CDOTABaseAbility::GetCaster(this);
      if ( v47 != 0 && (m_pEntity = v47->m_pEntity) != 0 )
      {
        v49 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v50 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v50 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v50 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v49 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      info.pKVExtraData = pKV;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      this->m_vProjectileLocation.x = x;
      this->m_vProjectileLocation.y = vision_duration;
      this->m_vProjectileLocation.z = z;
      if ( m_pInstance != 0
        && (v51 = CDOTABaseAbility::GetCaster(this), !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v51))
        && bTargetPulled )
      {
        v89 = CBaseEntity::GetAbsOrigin(m_pInstance);
        m_iChainParticle = this->m_iChainParticle;
        v91 = v89->z + 96.0;
        v92 = v89->x + 0.0;
        v114.y = v89->y + 0.0;
        v114.z = v91;
        v114.x = v92;
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          ParticleManager,
          m_iChainParticle,
          1,
          m_pInstance,
          5,
          "attach_hitloc",
          v114,
          1);
        *&vecFallbackPosition.x = 0;
        v94 = this->m_iChainParticle;
        vecFallbackPosition.z = 0.0;
        v95 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v95, v94, 4, *&vecFallbackPosition.x, vecFallbackPosition.z);
        *&vecFallbackPosition.x = 1065353216;
        v96 = this->m_iChainParticle;
        vecFallbackPosition.z = 0.0;
        v97 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v97, v96, 5, *&vecFallbackPosition.x, vecFallbackPosition.z);
      }
      else
      {
        v52 = CDOTABaseAbility::GetCaster(this);
        v53 = CBaseEntity::GetAbsOrigin(v52);
        v54 = v53->z + 96.0;
        v55 = v53->x + 0.0;
        vecFallbackPosition.y = v53->y + 0.0;
        vecFallbackPosition.z = v54;
        vecFallbackPosition.x = v55;
        v56 = CDOTABaseAbility::GetCaster(this);
        v57 = this->m_iChainParticle;
        v58 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          v58,
          v57,
          1,
          v56,
          5,
          "attach_weapon_chain_rt",
          vecFallbackPosition,
          1);
      }
      v59 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v59, "Hero_Pudge.AttackHookRetract", 0.0, 0, 0);
      v60 = CDOTABaseAbility::GetCaster(this);
      if ( (*(v60->_vptr_IHandleEntity + 408))(v60) != 0 )
      {
        v61 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::RemoveGesture(v61, 1516);
        v62 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::StartGesture(v62, 1520, 0.0, 0.2, 9, 0, 1.0);
      }
      this->m_bRetracting = 1;
      m_bRetracting = 1;
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      return m_bRetracting;
    }
    m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
    if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v16 = (*(this->_vptr_IHandleEntity + 247))(this);
      v17 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(v17) )
      {
        *v85.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_scepter", -1, 0);
        v19 = _mm_cvtsi128_si32(v85);
      }
      else
      {
        *v18.m128i_i32 = v16;
        v19 = _mm_cvtsi128_si32(v18);
      }
      v20 = CDOTABaseAbility::GetCaster(this);
      v21 = ApplyDamage(v20, m_pInstance, this, *&v19, 4, 0);
      if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v21) == 0 )
        this->m_bDiedInHook = 1;
    }
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v74 = HIBYTE(m_pInstance[7].m_CScriptComponent);
      if ( v74 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
      {
        CResponseCriteriaSet::AppendCriteria(&criteria, "hookedtarget", 1.0, v75);
        v76 = CDOTABaseAbility::GetCaster(this);
        v77 = (*(v76->_vptr_IHandleEntity + 413))(v76);
        CDotaStatManager::IncrementPlayerStat<int>(g_pDotaStatManager, v77, 1, "pudge.enemy_heroes_hooked");
        v78 = 0;
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v78 = m_pInstance;
        }
        v79 = CDOTABaseAbility::GetCaster(this);
        if ( v79 != 0 && (v79->m_iUnitType & 1) != 0 )
          v80 = v79;
        else
          v80 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v80,
          v78,
          kill_eater_event_t::kKillEaterEventType_Pudge_EnemyHeroesHooked,
          1,
          INVALID_ITEM_DEF_INDEX);
        v81 = CDOTABaseAbility::GetCaster(this);
        if ( !CBaseModelEntity::CanBeSeenByTeam(m_pInstance, v81->m_iTeamNum.m_Value) )
        {
          v99 = ToDOTABaseNPCRealHero(m_pInstance);
          v100 = CDOTABaseAbility::GetCaster(this);
          if ( v100 != 0 && (v100->m_iUnitType & 1) != 0 )
            v101 = v100;
          else
            v101 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v101,
            v99,
            kill_eater_event_t::kKillEaterEventType_Pudge_UnseenEnemyHeroesHooked,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        if ( this->m_bDiedInHook )
        {
          v82 = ToDOTABaseNPCRealHero(m_pInstance);
          v83 = CDOTABaseAbility::GetCaster(this);
          if ( v83 != 0 && (v83->m_iUnitType & 1) != 0 )
            v84 = v83;
          else
            v84 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v84,
            v82,
            kill_eater_event_t::kKillEaterEventType_Pudge_HookKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        goto LABEL_20;
      }
      CResponseCriteriaSet::AppendCriteria(&criteria, "hookedtarget", 1.0, v75);
      v98 = CDOTABaseAbility::GetCaster(this);
      v23 = (*(v98->_vptr_IHandleEntity + 413))(v98);
      v24 = "pudge.friendly_heroes_hooked";
    }
    else
    {
      CResponseCriteriaSet::AppendCriteria(&criteria, "hookedtarget", 1.0, v15);
      v22 = CDOTABaseAbility::GetCaster(this);
      v23 = (*(v22->_vptr_IHandleEntity + 413))(v22);
      v24 = "pudge.creeps_hooked";
    }
    CDotaStatManager::IncrementPlayerStat<int>(g_pDotaStatManager, v23, 1, v24);
LABEL_20:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
    vision_durationa = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
    pHeroa = LevelSpecialValue;
    v26 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v27 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_MEATHOOK,
      v27->m_iTeamNum.m_Value,
      v26,
      pHeroa,
      vision_durationa,
      0);
    v28 = m_pInstance->m_pEntity;
    if ( v28 != 0 )
    {
      v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
      v30 = 0x7FFF;
      if ( v28->m_EHandle.m_Index != -1 )
        v30 = v28->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hVictim.m_Index) = v30 | this->m_hVictim.m_Index & 0x8000;
      this->m_hVictim.m_Index = (v29 << 15) | this->m_hVictim.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hVictim.m_Index = -1;
    }
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Pudge.AttackHookImpact", 0.0, 0, 0);
    v31 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
    if ( CDOTALocomotor::ApplyHorizontalMotionController(v31, &this->CHorizontalMotionController, 0) )
    {
      v32 = HIBYTE(m_pInstance[7].m_CScriptComponent);
      if ( v32 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
        && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
      {
        CDOTA_BaseNPC::Interrupt(m_pInstance);
      }
      KeyValues::KeyValues(&kv, "modifier_pudge_meat_hook");
      v33 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v33, this, "modifier_pudge_meat_hook", &kv, 0);
      KeyValues::~KeyValues(&kv);
      bTargetPulled = 1;
    }
    else
    {
      bTargetPulled = 0;
    }
    v34 = HIBYTE(m_pInstance[7].m_CScriptComponent);
    if ( v34 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_pudge/pudge_meathook_impact.vpcf",
                                2,
                                m_pInstance,
                                0);
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v36,
        AbilityParticleEffect,
        0,
        m_pInstance,
        5,
        "attach_hitloc",
        vec3_invalid,
        1);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v37, AbilityParticleEffect);
    }
    goto LABEL_31;
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0 && (CDOTABaseAbility::GetCaster(this)->m_iUnitType & 1) != 0 )
  {
    v65 = CDOTABaseAbility::GetCaster(this);
    if ( v65 != 0 )
    {
      v66 = *&v65[1].m_vecVelocity.m_vecY.m_nEncoder;
      if ( v66 != 0 )
      {
        pHerob = v65;
        (*(v66->_vptr_IHandleEntity + 188))(v66, v66->m_fEffects.m_Value & 0xFFFFFFDF);
        v66->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
        CBaseEntity::DispatchUpdateTransmitState(v66);
        (*(pHerob->m_pTogglableWearable[0]->_vptr_IHandleEntity + 213))(pHerob->m_pTogglableWearable[0]);
      }
    }
  }
  v67 = CEntityHandle::operator CEntityInstance *(&this->m_hVictim);
  v68 = v67;
  if ( v67 != 0 && BYTE3(v67[7]._vptr_IHandleEntity) != 0 )
  {
    vision_durationb = vLocation->x;
    pHeroc = vLocation->y;
    v69 = (*(v67->_vptr_IHandleEntity + 376))(v67);
    CDOTALocomotor::RemoveHorizontalMotionController(v69, &this->CHorizontalMotionController);
    CDOTA_BaseNPC::RemoveModifierByName(v68, "modifier_pudge_meat_hook");
    v70 = CBaseEntity::GetAbsOrigin(v68);
    if ( (((v70->x - vision_durationb) * (v70->x - vision_durationb)) + ((v70->y - pHeroc) * (v70->y - pHeroc))) > 1.0
      && !this->m_bDiedInHook )
    {
      FindClearSpaceForUnit(v68, this->m_vCasterPosition, 0);
      v86 = CBaseEntity::GetAbsOrigin(v68);
      if ( CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, v86) )
      {
        KeyValues::KeyValues(&kv, "modifier_pudge_meat_hook_pathingfix");
        KeyValues::SetFloat(&kv, "duration", v87);
        v88 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v68, v88, this, "modifier_pudge_meat_hook_pathingfix", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  this->m_hVictim.m_Index = -1;
  Int = KeyValues::GetInt(pKV, "chainparticle", -1);
  v72 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v72, Int, 0);
  v73 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v73, "Hero_Pudge.AttackHookRetractStop", 0.0, 0, 0);
  return m_bRetracting;
}


// CDOTA_Ability_Pudge_MeatHook::OnProjectileThink  (line 547, @0x00000000029b6020, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnProjectileThink(
        CDOTA_Ability_Pudge_MeatHook *const this,
        const Vector *const vLocation)
{
  this->m_vProjectileLocation = *vLocation;
}


// CDOTA_Ability_Pudge_MeatHook::OnOwnerDied  (line 554, @0x00000000029baa10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Pudge_MeatHook::OnOwnerDied(CDOTA_Ability_Pudge_MeatHook *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1516);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1520);
}


// CDOTA_Ability_Pudge_MeatHook::GetAbilityDamageToTargetOverInterval  (line 562, @0x00000000029bb350, libserver.so)
int __fastcall CDOTA_Ability_Pudge_MeatHook::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Pudge_MeatHook *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return (*(this->_vptr_IHandleEntity + 247))(this, pTarget, fInterval);
  else
    return 0;
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix  (line 574, @0x0000000002a10f70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  this->_vptr_CDOTA_Buff = &off_437C970;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix  (line 574, @0x0000000002a10f90, libserver.so)  // inlines: ~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::~CDOTA_Modifier_Pudge_Meat_Hook_PathingFix(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  this->_vptr_CDOTA_Buff = &off_437C970;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::IsHidden  (line 580, @0x0000000002a0bba0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::IsHidden(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::IsPurgable  (line 581, @0x0000000002a0bbb0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::IsPurgable(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  return 0;
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnCreated  (line 593, @0x00000000029b6b10, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnCreated(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnIntervalThink  (line 602, @0x00000000029bb230, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTAGamerules::IsPointInBadResultPosition, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnIntervalThink(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v4; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  if ( !CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, AbsOrigin) )
  {
    (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 0.5);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v4);
  }
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::CheckState  (line 616, @0x00000000029b6050, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::CheckState(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFFLL;
}


// CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnDestroy  (line 626, @0x00000000029b8ba0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook_PathingFix::OnDestroy(
        CDOTA_Modifier_Pudge_Meat_Hook_PathingFix *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v4, *AbsOrigin, 0);
}


// CDOTA_Modifier_Pudge_Meat_Hook::~CDOTA_Modifier_Pudge_Meat_Hook  (line 636, @0x0000000002a10f20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook::~CDOTA_Modifier_Pudge_Meat_Hook(
        CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  this->_vptr_CDOTA_Buff = &off_437CC90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pudge_Meat_Hook::~CDOTA_Modifier_Pudge_Meat_Hook  (line 636, @0x0000000002a10f40, libserver.so)  // inlines: ~CDOTA_Modifier_Pudge_Meat_Hook
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook::~CDOTA_Modifier_Pudge_Meat_Hook(
        CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  this->_vptr_CDOTA_Buff = &off_437CC90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pudge_Meat_Hook::IsDebuff  (line 641, @0x0000000002a0bbc0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook::IsDebuff(CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Meat_Hook::IsStunDebuff  (line 642, @0x0000000002a0bbd0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook::IsStunDebuff(CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Meat_Hook::IsMotionController  (line 643, @0x0000000002a0bbe0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook::IsMotionController(CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Meat_Hook::IsPurgable  (line 645, @0x0000000002a0bbf0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Meat_Hook::IsPurgable(CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  return 0;
}


// CDOTA_Modifier_Pudge_Meat_Hook::GetOverrideAnimation  (line 653, @0x0000000002a0bc00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pudge_Meat_Hook::GetOverrideAnimation(
        CDOTA_Modifier_Pudge_Meat_Hook *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Pudge_Meat_Hook::CheckState  (line 661, @0x00000000029bc0b0, libserver.so)  // inlines: Enable, GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook::CheckState(
        CDOTA_Modifier_Pudge_Meat_Hook *const this,
        CDOTABuffState *const buffState)
{
  unsigned __int8 m_Value; // r13

  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
    if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value
      && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
    {
      buffState->m_nEnabledStateMask |= 0x20uLL;
      buffState->m_nDisabledStateMask &= ~0x20uLL;
    }
  }
}


// CDOTA_Modifier_Pudge_Meat_Hook::DeclareFunctions  (line 676, @0x00000000029b6080, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Pudge_Meat_Hook::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pudge_Meat_Hook::DeclareFunctions(CDOTA_Modifier_Pudge_Meat_Hook *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Pudge_Meat_Hook::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Ability_Pudge_Rot::~CDOTA_Ability_Pudge_Rot  (line 684, @0x0000000002a17e60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pudge_Rot::~CDOTA_Ability_Pudge_Rot(CDOTA_Ability_Pudge_Rot *const this)
{
  this->_vptr_IHandleEntity = &off_437CFF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pudge_Rot::~CDOTA_Ability_Pudge_Rot  (line 684, @0x0000000002a17e80, libserver.so)  // inlines: ~CDOTA_Ability_Pudge_Rot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pudge_Rot::~CDOTA_Ability_Pudge_Rot(CDOTA_Ability_Pudge_Rot *const this)
{
  this->_vptr_IHandleEntity = &off_437CFF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pudge_Rot::Schema_DynamicBinding  (line 686, @0x0000000002a0bc20, libserver.so)
// globals: CDOTA_Ability_Pudge_Rot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_Rot::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_Rot *const this)
{
  return CDOTA_Ability_Pudge_Rot::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 686, @0x0000000002a0bc30, libserver.so)
// globals: CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::DestructInstance  (line 686, @0x0000000002a0bc40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pudge_Rot>
void __fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::FreeInstance  (line 686, @0x0000000002a0bc60, libserver.so)
void __fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::CanAllocate  (line 686, @0x0000000002a0bc80, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 686, @0x0000000002a0bc90, libserver.so)
// globals: CDOTA_Ability_Pudge_Rot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_Rot::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::AllocateInstance  (line 686, @0x0000000002a10500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::ConstructInstance  (line 686, @0x0000000002a14880, libserver.so)  // inlines: CDOTA_Ability_Pudge_Rot, Construct<CDOTA_Ability_Pudge_Rot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_437CFF0;
  }
  return p;
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 686, @0x0000000002a202b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 686, @0x0000000002a202d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pudge_Rot::GetEntityClassInternal  (line 686, @0x0000000002a3a550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Pudge_Rot"
// globals: `guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass, CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass, __dso_handle, CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo, CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pudge_Rot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass);
    CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass._vptr_CEntityClass = off_437CF70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass);
    __cxa_atexit(
      CDOTA_Ability_Pudge_Rot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pudge_RotClass != 0 )
    return &CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass;
  if ( `guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo,
      "CDOTA_Ability_Pudge_Rot",
      "pudge_rot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo);
  }
  CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass.m_pClassInfo = &CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo;
  CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass.m_pBaseClassInfo = CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pudge_RotClass = &CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass;
  CDOTA_Ability_Pudge_Rot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_RotClassInfo.m_pClass = &CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass;
  CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pudge_RotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pudge_Rot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_RotClass;
}


// CDOTA_Ability_Pudge_Rot::ProcsMagicStick  (line 692, @0x0000000002a0bca0, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_Rot::ProcsMagicStick(CDOTA_Ability_Pudge_Rot *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_Rot::ShouldSpeakAbilityConcept  (line 693, @0x0000000002a19210, libserver.so)  // inlines: IsSpeaking
// calls: CDOTABaseAbility::GetCaster, CDOTA_Speech::IsSpeaking
bool __fastcall CDOTA_Ability_Pudge_Rot::ShouldSpeakAbilityConcept(CDOTA_Ability_Pudge_Rot *const this, int iConcept)
{
  CDOTA_Speech *m_pSpeech; // rdi
  bool result; // al

  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  result = 1;
  if ( m_pSpeech != 0 )
    return !CDOTA_Speech::IsSpeaking(m_pSpeech);
  return result;
}


// CDOTA_Ability_Pudge_Rot::GetAOERadius  (line 698, @0x0000000002a33d10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "rot_radius"
float __fastcall CDOTA_Ability_Pudge_Rot::GetAOERadius(CDOTA_Ability_Pudge_Rot *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rot_radius", -1, 0);
}


// CDOTA_Ability_Pudge_Rot::YouForgotToImplementOrDeclareServerClass  (line 707, @0x00000000029b60a0, libserver.so)
int __fastcall CDOTA_Ability_Pudge_Rot::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Pudge_Rot *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_Rot::GetServerClass  (line 707, @0x00000000029c9db0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pudge_Rot::GetServerClass(CDOTA_Ability_Pudge_Rot *const this)
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


// CDOTA_Ability_Pudge_Rot::OnToggle  (line 715, @0x00000000029e6c30, libserver.so)  // inlines: FStrEq, SetBool, _V_strcmp
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster, CDOTA_Buff::GetName, CDOTA_Buff::Destroy, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "modifier_pudge_rot", "aura_apply_modifier", "rot_radius", "aura_search_team", "aura_search_type"
void __fastcall CDOTA_Ability_Pudge_Rot::OnToggle(CDOTA_Ability_Pudge_Rot *const this)
{
  int i; // ebx
  CDOTA_BaseNPC *v3; // rax
  CDOTA_Buff *BuffByIndex; // rax
  CDOTA_Buff *v5; // r13
  CDOTA_BaseNPC *v6; // r15
  const char *Name; // rax
  CDOTA_BaseNPC *v8; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value
    && (v8 = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::FindAbilityByName(v8, "pudge_rot", 0) != 0) )
  {
    KeyValues::KeyValues(&kv, "modifier_pudge_rot");
    KeyValues::SetInt(&kv, "aura", 1);
    KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_pudge_rot");
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rot_radius", -1, 0);
    KeyValues::SetInt(&kv, "aura_radius", LevelSpecialValue);
    KeyValues::SetInt(&kv, "aura_search_team", 2);
    KeyValues::SetInt(&kv, "aura_search_type", 19);
    Caster = CDOTABaseAbility::GetCaster(this);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v11, Caster, this, "modifier_pudge_rot", &kv, 0);
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::IsChanneling(v12) )
    {
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v13, 1547, 0.2, 0.2, 9, 0, 1.0);
    }
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    for ( i = 0; i < CDOTABaseAbility::GetCaster(this)->m_ModifierManager.m_bufflist.m_Size; ++i )
    {
      v3 = CDOTABaseAbility::GetCaster(this);
      BuffByIndex = CDOTA_ModifierManager::GetBuffByIndex(&v3->m_ModifierManager, i, 0);
      v5 = BuffByIndex;
      if ( BuffByIndex != 0 )
      {
        v6 = CDOTA_Buff::GetCaster(BuffByIndex);
        if ( v6 == CDOTABaseAbility::GetCaster(this) && (*(v5 + 138) & 4) == 0 )
        {
          Name = CDOTA_Buff::GetName(v5);
          if ( Name == "modifier_pudge_rot" || strcmp(Name, "modifier_pudge_rot") == 0 )
          {
            CDOTA_Buff::Destroy(v5, 0, 0, 0);
            return;
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Pudge_Rot::GetAbilityDamageToTargetOverInterval  (line 755, @0x00000000029e4af0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "rot_damage"
__int64 __fastcall CDOTA_Ability_Pudge_Rot::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Pudge_Rot *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rot_damage", -1, 0);
    this->rot_damage = LevelSpecialValue;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * (LevelSpecialValue * fInterval));
  }
  return result;
}


// CDOTA_Modifier_Pudge_Rot::~CDOTA_Modifier_Pudge_Rot  (line 769, @0x0000000002a10ed0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pudge_Rot::~CDOTA_Modifier_Pudge_Rot(CDOTA_Modifier_Pudge_Rot *const this)
{
  this->_vptr_CDOTA_Buff = &off_437DAB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pudge_Rot::~CDOTA_Modifier_Pudge_Rot  (line 769, @0x0000000002a10ef0, libserver.so)  // inlines: ~CDOTA_Modifier_Pudge_Rot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pudge_Rot::~CDOTA_Modifier_Pudge_Rot(CDOTA_Modifier_Pudge_Rot *const this)
{
  this->_vptr_CDOTA_Buff = &off_437DAB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pudge_Rot::IsDebuff  (line 774, @0x0000000002a0bcb0, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Rot::IsDebuff(CDOTA_Modifier_Pudge_Rot *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Rot::GetAttributes  (line 781, @0x0000000002a131d0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Pudge_Rot::GetAttributes(CDOTA_Modifier_Pudge_Rot *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Pudge_Rot::GetTexture  (line 786, @0x0000000002a0bcc0, libserver.so)
const char *__fastcall CDOTA_Modifier_Pudge_Rot::GetTexture(CDOTA_Modifier_Pudge_Rot *const this)
{
  return "pudge_rot";
}


// CDOTA_Modifier_Pudge_Rot::OnCreated  (line 804, @0x00000000029f9170, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::CheckAura
// strings: "rot_damage", "rot_slow"
void __fastcall CDOTA_Modifier_Pudge_Rot::OnCreated(CDOTA_Modifier_Pudge_Rot *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // r12
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->rot_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "rot_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->rot_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "rot_slow", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->rot_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->rot_slow = 0;
LABEL_4:
  this->m_flLastRotTime = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster == CDOTA_Buff::GetParent(this) )
  {
    this->m_flLastRotTime = *(&CDOTA_Buff::GetAbility(this)[1]._vptr_IHandleEntity + 1);
    CDOTA_Buff::CheckAura(this);
  }
  CDOTA_Buff::StartIntervalThink(this, 0.0, v6);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Pudge_Rot::OnDestroy  (line 839, @0x00000000029b60b0, libserver.so)
void __fastcall CDOTA_Modifier_Pudge_Rot::OnDestroy(CDOTA_Modifier_Pudge_Rot *const this)
{
  ;
}


// CDOTA_Modifier_Pudge_Rot::DeclareFunctions  (line 861, @0x00000000029b72b0, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// globals: CDOTA_Modifier_Pudge_Rot::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pudge_Rot::DeclareFunctions(CDOTA_Modifier_Pudge_Rot *const this)
{
  CDOTA_BaseNPC *Caster; // r12

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != CDOTA_Buff::GetParent(this) )
  {
    this->m_Functions[13].__delta = 0;
    this->m_Functions[13].__pfn = CDOTA_Modifier_Pudge_Rot::GetModifierMoveSpeedBonus_Percentage;
  }
}


// CDOTA_Modifier_Pudge_Rot::GetModifierMoveSpeedBonus_Percentage  (line 872, @0x00000000029b60c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pudge_Rot::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Pudge_Rot *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->rot_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pudge_Rot::OnIntervalThink  (line 879, @0x00000000029f98a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<int>, SetLastRotTime
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, ApplyDamage
// strings: "rot_tick", "rot_damage", "special_bonus_unique_pudge_2"
void __fastcall CDOTA_Modifier_Pudge_Rot::OnIntervalThink(CDOTA_Modifier_Pudge_Rot *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v8; // r15d
  CDOTA_BaseNPC *v9; // r14
  CDOTABaseAbility *v10; // r13
  CDOTA_BaseNPC *Parent; // rax
  float flRotTick; // [rsp+8h] [rbp-38h]
  float flDamage; // [rsp+Ch] [rbp-34h]

  Caster = CDOTA_Buff::GetCaster(this);
  Ability = CDOTA_Buff::GetAbility(this);
  flRotTick = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "rot_tick", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "rot_damage", -1, 0);
    this->rot_damage = LevelSpecialValue;
    flDamage = LevelSpecialValue;
  }
  else
  {
    this->rot_damage = 0;
    flDamage = 0.0;
  }
  v6 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, "special_bonus_unique_pudge_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  if ( flRotTick <= (*&g_pGameRules[18].m_szQuestName[20] - this->m_flLastRotTime) )
  {
    this->m_flLastRotTime = *&g_pGameRules[18].m_szQuestName[20];
    v8 = 0;
    v9 = CDOTA_Buff::GetCaster(this);
    if ( v9 == CDOTA_Buff::GetParent(this) )
    {
      LOBYTE(v8) = 64;
      Caster = CDOTA_Buff::GetParent(this);
      HIDWORD(CDOTA_Buff::GetAbility(this)[1]._vptr_IHandleEntity) = *&g_pGameRules[18].m_szQuestName[20];
    }
    if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 && CDOTA_Buff::GetAbility(this)->m_bToggleState.m_Value )
    {
      v10 = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      ApplyDamage(Caster, Parent, v10, flDamage * flRotTick, 2, v8);
    }
  }
}


// CDOTA_Modifier_Pudge_Rot::IsAura  (line 921, @0x00000000029b7280, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Pudge_Rot::IsAura(CDOTA_Modifier_Pudge_Rot *const this)
{
  CDOTA_BaseNPC *Caster; // r12

  Caster = CDOTA_Buff::GetCaster(this);
  return Caster == CDOTA_Buff::GetParent(this);
}


// CDOTA_Ability_Pudge_FleshHeap::GetDataDescMap  (line 934, @0x00000000029b60e0, libserver.so)
// globals: CDOTA_Ability_Pudge_FleshHeap::m_DataMap
datamap_t *__fastcall CDOTA_Ability_Pudge_FleshHeap::GetDataDescMap(CDOTA_Ability_Pudge_FleshHeap *const this)
{
  return &CDOTA_Ability_Pudge_FleshHeap::m_DataMap;
}


// CDOTA_Ability_Pudge_FleshHeap::AddDatadescMetadataKeys  (line 934, @0x00000000029d7d50, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_Ability_Pudge_FleshHeap::GetEntityClass(void)
void __fastcall CDOTA_Ability_Pudge_FleshHeap::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_Ability_Pudge_FleshHeap::GetEntityClass);
}


// CDOTA_Ability_Pudge_FleshHeap::GetBaseMap  (line 934, @0x00000000029d7d70, libserver.so)
datamap_t *__cdecl CDOTA_Ability_Pudge_FleshHeap::GetBaseMap()
{
  return &CDOTABaseAbility::m_DataMap;
}


// DataMapInit<CDOTA_Ability_Pudge_FleshHeap>  (line 934, @0x00000000029d7d80, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Pudge_FleshHeap"
// globals: `guard variable for'DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder, CDOTA_Ability_Pudge_FleshHeap::GetEntityClass(void), CDOTA_Ability_Pudge_FleshHeap::m_DataMap, DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_pszBase = "CDOTA_Ability_Pudge_FleshHeap";
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder.m_nLenBase = 29;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_Ability_Pudge_FleshHeap::m_DataMap.dataNumFields = 1;
  CDOTA_Ability_Pudge_FleshHeap::m_DataMap.baseMap = &CDOTABaseAbility::m_DataMap;
  CDOTA_Ability_Pudge_FleshHeap::m_DataMap.dataDesc = &DataMapInit<CDOTA_Ability_Pudge_FleshHeap>(CDOTA_Ability_Pudge_FleshHeap *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_Ability_Pudge_FleshHeap::m_DataMap, CDOTA_Ability_Pudge_FleshHeap::GetEntityClass);
  return &CDOTA_Ability_Pudge_FleshHeap::m_DataMap;
}


// CDOTA_Ability_Pudge_FleshHeap::YouForgotToImplementOrDeclareServerClass  (line 939, @0x00000000029b60f0, libserver.so)
int __fastcall CDOTA_Ability_Pudge_FleshHeap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pudge_FleshHeap *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_FleshHeap::GetServerClass  (line 939, @0x00000000029c9630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pudge_FleshHeap::GetServerClass(CDOTA_Ability_Pudge_FleshHeap *const this)
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


// CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby  (line 948, @0x00000000029e6e70, libserver.so)  // inlines: GetParent, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector
// calls: KeyValues::GetPtr, CDOTABaseAbility::GetCaster, CBaseEntity::InSameTeam, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::IsEntityInRange, CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, EconEntity_OnOwnerKillEaterEvent
// strings: "flesh_heap_range", "particles/units/heroes/hero_pudge/pudge_fleshheap_count.vpcf"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Pudge_FleshHeap::OnHeroDiedNearby(
        CDOTA_Ability_Pudge_FleshHeap *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CBaseEntity *OwnerEntity; // rcx
  CGameSceneNode *m_pParent; // rdi
  int AbilityParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi

  Ptr = KeyValues::GetPtr(pKV, "unit", 0);
  if ( Ptr != 0 && Ptr->m_bIsDOTANPC )
    v5 = Ptr;
  else
    v5 = 0;
  v6 = KeyValues::GetPtr(pKV, "attacker", 0);
  if ( v6 != 0 && v6->m_bIsDOTANPC )
    v7 = v6;
  else
    v7 = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( !CBaseEntity::InSameTeam(v5, Caster) )
  {
    v9 = CDOTABaseAbility::GetCaster(this);
    if ( (*(v9->_vptr_IHandleEntity + 408))(v9) != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "flesh_heap_range", 0, 0);
      if ( CDOTABaseAbility::GetCaster(this) == v7
        || (v11 = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::IsEntityInRange(v11, v5, LevelSpecialValue, v12)) )
      {
        ++this->m_iKills;
        OwnerEntity = 0;
        m_pParent = this->m_pGameSceneNode->m_pParent;
        if ( m_pParent != 0 )
          OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
        AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                  this,
                                  "particles/units/heroes/hero_pudge/pudge_fleshheap_count.vpcf",
                                  7,
                                  OwnerEntity,
                                  0);
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(
          ParticleManager,
          AbilityParticleEffect,
          1,
          COERCE_DOUBLE(1065353216),
          0.0);
        v17 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v17, AbilityParticleEffect);
        v18 = CDOTABaseAbility::GetCaster(this);
        if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
          v19 = v18;
        else
          v19 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v19,
          0,
          kill_eater_event_t::kKillEaterEventType_Pudge_FleshHeapTotal,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
  }
}


// CDOTA_Modifier_Pudge_FleshHeap::~CDOTA_Modifier_Pudge_FleshHeap  (line 976, @0x0000000002a10e80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::~CDOTA_Modifier_Pudge_FleshHeap(
        CDOTA_Modifier_Pudge_FleshHeap *const this)
{
  this->_vptr_CDOTA_Buff = &off_437E850;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pudge_FleshHeap::~CDOTA_Modifier_Pudge_FleshHeap  (line 976, @0x0000000002a10ea0, libserver.so)  // inlines: ~CDOTA_Modifier_Pudge_FleshHeap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::~CDOTA_Modifier_Pudge_FleshHeap(
        CDOTA_Modifier_Pudge_FleshHeap *const this)
{
  this->_vptr_CDOTA_Buff = &off_437E850;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pudge_FleshHeap::GetMatchPermanentBuff  (line 989, @0x0000000002a0bcd0, libserver.so)
EMatchPermanentBuff __fastcall CDOTA_Modifier_Pudge_FleshHeap::GetMatchPermanentBuff(
        CDOTA_Modifier_Pudge_FleshHeap *const this)
{
  return EMatchPermanentBuff::MATCH_PERMANENT_BUFF_PUDGE_FLESH_HEAP;
}


// CDOTA_Modifier_Pudge_FleshHeap::OnCreated  (line 1001, @0x00000000029f8310, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "flesh_heap_magic_resist", "flesh_heap_strength_buff_amount"
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::OnCreated(CDOTA_Modifier_Pudge_FleshHeap *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->flesh_heap_magic_resist = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->flesh_heap_strength_buff_amount = 0.0;
    goto LABEL_4;
  }
  this->flesh_heap_magic_resist = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "flesh_heap_magic_resist",
                                    -1,
                                    0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->flesh_heap_strength_buff_amount = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                            v4,
                                            "flesh_heap_strength_buff_amount",
                                            -1,
                                            0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Pudge_FleshHeap::OnRefresh  (line 1013, @0x00000000029f88d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent
// strings: "flesh_heap_magic_resist", "flesh_heap_strength_buff_amount"
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::OnRefresh(CDOTA_Modifier_Pudge_FleshHeap *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->flesh_heap_magic_resist = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->flesh_heap_strength_buff_amount = 0.0;
    goto LABEL_4;
  }
  this->flesh_heap_magic_resist = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "flesh_heap_magic_resist",
                                    -1,
                                    0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->flesh_heap_strength_buff_amount = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                            v4,
                                            "flesh_heap_strength_buff_amount",
                                            -1,
                                            0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 490))(Parent);
}


// CDOTA_Modifier_Pudge_FleshHeap::OnIntervalThink  (line 1024, @0x00000000029bb2a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_CombatLog::AddModifierEvent, CDOTA_Buff::ForceRefresh
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::OnIntervalThink(CDOTA_Modifier_Pudge_FleshHeap *const this)
{
  unsigned int vptr_IHandleEntity; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax

  vptr_IHandleEntity = CDOTA_Buff::GetAbility(this)[1]._vptr_IHandleEntity;
  if ( vptr_IHandleEntity != (*(this->_vptr_CDOTA_Buff + 27))(this) )
  {
    (*(this->_vptr_CDOTA_Buff + 28))(this, vptr_IHandleEntity);
    if ( g_pDOTACombatLog != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_CombatLog::AddModifierEvent(g_pDOTACombatLog, 19, Parent, Caster, this, 0, 0, 0);
    }
    CDOTA_Buff::ForceRefresh(this);
  }
}


// CDOTA_Modifier_Pudge_FleshHeap::DeclareFunctions  (line 1043, @0x00000000029b6100, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Pudge_FleshHeap::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Pudge_FleshHeap::GetModifierBonusStats_Strength(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pudge_FleshHeap::DeclareFunctions(CDOTA_Modifier_Pudge_FleshHeap *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Pudge_FleshHeap::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Pudge_FleshHeap::GetModifierBonusStats_Strength;
}


// CDOTA_Modifier_Pudge_FleshHeap::GetModifierMagicalResistanceBonus  (line 1051, @0x00000000029b6140, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pudge_FleshHeap::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Pudge_FleshHeap *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->flesh_heap_magic_resist;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Pudge_FleshHeap::GetModifierBonusStats_Strength  (line 1057, @0x00000000029df060, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_pudge_1"
ModifierVariant_t __fastcall CDOTA_Modifier_Pudge_FleshHeap::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Pudge_FleshHeap *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128 v5; // xmm0
  int v6; // eax
  float flBonus; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  flBonus = this->flesh_heap_strength_buff_amount;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_pudge_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flBonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1) + flBonus;
  v5 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  v5.m128_f32[0] = v6 * flBonus;
  *&result.m_eType = (v5.m128_u64[0] << 32) | 1;
  return result;
}


// CDOTA_Ability_Pudge_Dismember::~CDOTA_Ability_Pudge_Dismember  (line 1074, @0x0000000002a17eb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Pudge_Dismember::~CDOTA_Ability_Pudge_Dismember(
        CDOTA_Ability_Pudge_Dismember *const this)
{
  this->_vptr_IHandleEntity = &off_437EBB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Pudge_Dismember::~CDOTA_Ability_Pudge_Dismember  (line 1074, @0x0000000002a17ed0, libserver.so)  // inlines: ~CDOTA_Ability_Pudge_Dismember
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Pudge_Dismember::~CDOTA_Ability_Pudge_Dismember(
        CDOTA_Ability_Pudge_Dismember *const this)
{
  this->_vptr_IHandleEntity = &off_437EBB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Pudge_Dismember::Schema_DynamicBinding  (line 1076, @0x0000000002a0bce0, libserver.so)
// globals: CDOTA_Ability_Pudge_Dismember::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_Dismember::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_Dismember *const this)
{
  return CDOTA_Ability_Pudge_Dismember::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1076, @0x0000000002a0bcf0, libserver.so)
// globals: CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::DestructInstance  (line 1076, @0x0000000002a0bd00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Pudge_Dismember>
void __fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::FreeInstance  (line 1076, @0x0000000002a0bd20, libserver.so)
void __fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::CanAllocate  (line 1076, @0x0000000002a0bd40, libserver.so)
bool __fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1076, @0x0000000002a0bd50, libserver.so)
// globals: CDOTA_Ability_Pudge_Dismember::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Pudge_Dismember::s_pSchemaBinding;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::AllocateInstance  (line 1076, @0x0000000002a10540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::ConstructInstance  (line 1076, @0x0000000002a1e480, libserver.so)  // inlines: CDOTA_Ability_Pudge_Dismember, CEntityHandle, CNetworkHandleBase, CNetworkVarBase, Construct<CDOTA_Ability_Pudge_Dismember>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_437EBB0;
  }
  return p;
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1076, @0x0000000002a20300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1076, @0x0000000002a20320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal  (line 1076, @0x0000000002a3a6a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Pudge_Dismember"
// globals: `guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass, CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass, __dso_handle, CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo, CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo
CEntityClass *__cdecl CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass);
    CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass._vptr_CEntityClass = off_437EB30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass);
    __cxa_atexit(
      CDOTA_Ability_Pudge_Dismember::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Pudge_DismemberClass != 0 )
    return &CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass;
  if ( `guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo,
      "CDOTA_Ability_Pudge_Dismember",
      "pudge_dismember",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo);
  }
  CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass.m_pClassInfo = &CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo;
  CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass.m_pBaseClassInfo = CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Pudge_DismemberClass = &CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass;
  CDOTA_Ability_Pudge_Dismember::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Pudge_DismemberClassInfo.m_pClass = &CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass;
  CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Pudge_DismemberClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Pudge_Dismember::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Pudge_DismemberClass;
}


// CDOTA_Ability_Pudge_Dismember::GetConceptRecipientType  (line 1084, @0x0000000002a0bd60, libserver.so)
int __fastcall CDOTA_Ability_Pudge_Dismember::GetConceptRecipientType(CDOTA_Ability_Pudge_Dismember *const this)
{
  return 5;
}


// CDOTA_Ability_Pudge_Dismember::SpeakTrigger  (line 1085, @0x0000000002a0bd70, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Pudge_Dismember::SpeakTrigger(
        CDOTA_Ability_Pudge_Dismember *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_CAST;
}


// CDOTA_Ability_Pudge_Dismember::GetStolenActivityModifier  (line 1089, @0x0000000002a0bd80, libserver.so)
const char *__fastcall CDOTA_Ability_Pudge_Dismember::GetStolenActivityModifier(
        CDOTA_Ability_Pudge_Dismember *const this)
{
  return "dismember";
}


// CDOTA_Ability_Pudge_Dismember::YouForgotToImplementOrDeclareServerClass  (line 1098, @0x00000000029b6160, libserver.so)
int __fastcall CDOTA_Ability_Pudge_Dismember::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Pudge_Dismember *const this)
{
  return 0;
}


// CDOTA_Ability_Pudge_Dismember::GetServerClass  (line 1098, @0x00000000029c9cb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Pudge_Dismember::GetServerClass(CDOTA_Ability_Pudge_Dismember *const this)
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


// CDOTA_Ability_Pudge_Dismember::OnAbilityPhaseStart  (line 1112, @0x00000000029c0ee0, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CDOTABaseAbility::GetCursorTarget
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Pudge_Dismember::OnAbilityPhaseStart(CDOTA_Ability_Pudge_Dismember *const this)
{
  CBaseEntity *CursorTarget; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v5; // r12
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  m_Index = this->m_hVictim.m_Value.m_Index;
  m_pInstance = 0;
  v5 = CursorTarget;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVictim.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hVictim.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( v5 == m_pInstance )
    return 1;
  (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  if ( v5 == 0 || (m_pEntity = v5->m_pEntity) == 0 )
  {
    this->m_hVictim.m_Value.m_Index = -1;
    return 1;
  }
  v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v11 = 0x7FFF;
  else
    v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_hVictim.m_Value.m_Index) = v11 | this->m_hVictim.m_Value.m_Index & 0x8000;
  this->m_hVictim.m_Value.m_Index = (v10 << 15) | this->m_hVictim.m_Value.m_Index & 0x7FFF;
  return 1;
}


// CDOTA_Ability_Pudge_Dismember::OnSpellStart  (line 1121, @0x00000000029c1ce0, libserver.so)  // inlines: CEntityHandle, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetParent, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPC, operator CBaseEntity*, operator!=, operator=
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, CDOTALocomotor::InterruptHorizontalMotionController, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData (13 total)
// strings: "modifier_pudge_dismember"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Pudge_Dismember::OnSpellStart(CDOTA_Ability_Pudge_Dismember *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  float v9; // xmm1_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rsi
  CDOTA_Buff *v12; // rax
  CDOTALocomotor *v13; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm3_4
  uint32 m_Index; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v23; // rax
  double v24; // xmm0_8
  float duration; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-28h]

  v27 = __readfsqword(0x28u);
  if ( this->m_hVictim.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hVictim.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hVictim.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          if ( CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            m_Index = this->m_hVictim.m_Value.m_Index;
            if ( m_Index + 2 > 1 )
            {
              v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVictim.m_Value.m_Index) >> 9)
                                                                   & 0x3F];
              if ( v20 != 0 )
              {
                v21 = &v20[this->m_hVictim.m_Value.m_Index & 0x1FF];
                if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index && v21->m_pInstance != 0 )
                {
                  (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  this->m_hVictim.m_Value.m_Index = -1;
                }
              }
            }
            Caster = CDOTABaseAbility::GetCaster(this);
            (*(Caster->_vptr_INextBotEventResponder + 56))(&Caster->INextBot);
          }
          else
          {
            KeyValues::KeyValues(&kv, "modifier_pudge_dismember");
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            if ( (m_pInstance->m_iUnitType & 0x801) != 0 )
            {
              duration = (vptr_IHandleEntity[225])(this);
            }
            else
            {
              v24 = (vptr_IHandleEntity[225])(this);
              duration = *&v24 + *&v24;
            }
            KeyValues::SetFloat(&kv, "duration", v9);
            m_pParent = this->m_pGameSceneNode->m_pParent;
            if ( m_pParent != 0 )
              OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
            else
              OwnerEntity = 0;
            v12 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, OwnerEntity, this, "modifier_pudge_dismember", &kv, 0);
            if ( v12 == 0 || (*(v12 + 138) & 4) != 0 )
            {
              v23 = CDOTABaseAbility::GetCaster(this);
              (*(v23->_vptr_INextBotEventResponder + 56))(&v23->INextBot);
            }
            else
            {
              v13 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
              CDOTALocomotor::InterruptHorizontalMotionController(v13, 1);
              m_pAbilityData = this->m_pAbilityData;
              if ( m_pAbilityData == 0 )
              {
                CDOTABaseAbility::LoadAbilityData(this, 0);
                m_pAbilityData = this->m_pAbilityData;
              }
              m_iAbilityID = m_pAbilityData->m_iAbilityID;
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v17 = CDOTABaseAbility::GetCaster(this);
              CDOTAGamerules::SendProjectionAbilityMessage(
                g_pGameRules,
                v17,
                0,
                m_iAbilityID,
                0,
                0,
                *&AbsOrigin->x,
                AbsOrigin->z,
                duration,
                v18);
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Pudge_Dismember::OnChannelFinish  (line 1157, @0x00000000029c18e0, libserver.so)  // inlines: CEntityHandle, GetAbilityData, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_pudge_dismember"
void __fastcall CDOTA_Ability_Pudge_Dismember::OnChannelFinish(
        CDOTA_Ability_Pudge_Dismember *const this,
        bool bInterrupted)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi

  if ( this->m_hVictim.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hVictim.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_hVictim.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( v5 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_pudge_dismember");
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


// CDOTA_Ability_Pudge_Dismember::GetChannelTime  (line 1172, @0x00000000029c14f0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsConsideredHero, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetChannelTime
float __fastcall CDOTA_Ability_Pudge_Dismember::GetChannelTime(CDOTA_Ability_Pudge_Dismember *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  float ChannelTime; // xmm0_4

  if ( this->m_hVictim.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hVictim.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hVictim.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return CDOTABaseAbility::GetChannelTime(this);
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return CDOTABaseAbility::GetChannelTime(this);
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return CDOTABaseAbility::GetChannelTime(this);
  if ( v3 != v5->m_EHandle.m_Index )
    return CDOTABaseAbility::GetChannelTime(this);
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
  {
    return CDOTABaseAbility::GetChannelTime(this);
  }
  ChannelTime = CDOTABaseAbility::GetChannelTime(this);
  return ChannelTime + ChannelTime;
}


// CDOTA_Ability_Pudge_Dismember::GetAbilityDamageToTargetOverInterval  (line 1185, @0x00000000029e7020, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "dismember_damage"
__int64 __fastcall CDOTA_Ability_Pudge_Dismember::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Pudge_Dismember *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, (*(this->_vptr_IHandleEntity + 225))(this));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dismember_damage", -1, 1) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Pudge_Dismember::GetStunDuration  (line 1198, @0x00000000029b6170, libserver.so)
float __fastcall CDOTA_Ability_Pudge_Dismember::GetStunDuration(CDOTA_Ability_Pudge_Dismember *const this)
{
  return (*(this->_vptr_IHandleEntity + 225))(this);
}


// CDOTA_Modifier_Pudge_Dismember::~CDOTA_Modifier_Pudge_Dismember  (line 1206, @0x0000000002a10e30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Pudge_Dismember::~CDOTA_Modifier_Pudge_Dismember(
        CDOTA_Modifier_Pudge_Dismember *const this)
{
  this->_vptr_CDOTA_Buff = &off_437F670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Pudge_Dismember::~CDOTA_Modifier_Pudge_Dismember  (line 1206, @0x0000000002a10e50, libserver.so)  // inlines: ~CDOTA_Modifier_Pudge_Dismember
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Pudge_Dismember::~CDOTA_Modifier_Pudge_Dismember(
        CDOTA_Modifier_Pudge_Dismember *const this)
{
  this->_vptr_CDOTA_Buff = &off_437F670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Pudge_Dismember::IsStunDebuff  (line 1215, @0x0000000002a0bd90, libserver.so)
bool __fastcall CDOTA_Modifier_Pudge_Dismember::IsStunDebuff(CDOTA_Modifier_Pudge_Dismember *const this)
{
  return 1;
}


// CDOTA_Modifier_Pudge_Dismember::OnCreated  (line 1233, @0x00000000029f97b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::InterruptChannel, CDOTA_Buff::StartIntervalThink
// strings: "dismember_damage"
void __fastcall CDOTA_Modifier_Pudge_Dismember::OnCreated(CDOTA_Modifier_Pudge_Dismember *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->dismember_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->strength_damage = 0.0;
    goto LABEL_4;
  }
  this->dismember_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dismember_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->strength_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "strength_damage", -1, 0);
LABEL_4:
  this->m_nTicks = 0;
  this->m_nMaxTicks = ((*(this->_vptr_CDOTA_Buff + 31))(this) + 0.1);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::InterruptChannel(Parent);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Pudge_Dismember::OnDestroy  (line 1252, @0x00000000029b9eb0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::InterruptChannel
void __fastcall CDOTA_Modifier_Pudge_Dismember::OnDestroy(CDOTA_Modifier_Pudge_Dismember *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::InterruptChannel(Caster);
  }
}


// CDOTA_Modifier_Pudge_Dismember::OnIntervalThink  (line 1264, @0x00000000029c28e0, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, CDOTA_Buff::GetParent, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent
// strings: "Hero_Pudge.Dismember"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Pudge_Dismember::OnIntervalThink(CDOTA_Modifier_Pudge_Dismember *const this)
{
  int m_nTicks; // eax
  float dismember_damage; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC_Hero *v15; // rdi
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

  m_nTicks = this->m_nTicks;
  if ( m_nTicks < this->m_nMaxTicks )
  {
    dismember_damage = this->dismember_damage;
    this->m_nTicks = m_nTicks + 1;
    flDamage = dismember_damage;
    Caster = CDOTA_Buff::GetCaster(this);
    flDamagea = ((*(Caster->_vptr_IHandleEntity + 496))(Caster) * this->strength_damage) + flDamage;
    Ability = CDOTA_Buff::GetAbility(this);
    v6 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Heal(v6, flDamagea, Ability, 0, 1);
    v7 = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    v9 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v9, Parent, v7, flDamagea, 2, 0);
    v10 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Pudge.Dismember", 0.0, 0, 0);
    v11 = CDOTA_Buff::GetParent(this);
    if ( (*(v11->_vptr_IHandleEntity + 408))(v11) == 0 )
    {
      v12 = 0;
      v13 = CDOTA_Buff::GetParent(this);
      if ( v13 != 0 && v13->m_bIsDOTANPC && (v13->m_iUnitType & 1) != 0 && !v13->m_bIsIllusion.m_Value )
        v12 = v13;
      v14 = CDOTA_Buff::GetCaster(this);
      if ( v14 != 0 && (v14->m_iUnitType & 1) != 0 )
        v15 = v14;
      else
        v15 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v15,
        v12,
        kill_eater_event_t::kKillEaterEventType_Pudge_DismemberKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Modifier_Pudge_Dismember::CheckState  (line 1289, @0x00000000029b6190, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Pudge_Dismember::CheckState(
        CDOTA_Modifier_Pudge_Dismember *const this,
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


// CDOTA_Modifier_Pudge_Dismember::DeclareFunctions  (line 1300, @0x00000000029b61c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Pudge_Dismember::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Pudge_Dismember::DeclareFunctions(CDOTA_Modifier_Pudge_Dismember *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Pudge_Dismember::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Pudge_Dismember::GetOverrideAnimation  (line 1307, @0x00000000029b61e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Pudge_Dismember::GetOverrideAnimation(
        CDOTA_Modifier_Pudge_Dismember *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


