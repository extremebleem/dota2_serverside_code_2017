// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:37
class CDOTA_Unit_Hero_Tidehunter : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Tidehunter(CDOTA_Unit_Hero_Tidehunter &);
	CDOTA_Unit_Hero_Tidehunter(CDOTA_Unit_Hero_Tidehunter &);
	CDOTA_Unit_Hero_Tidehunter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Unit_Hero_Tidehunter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:47
class C_CDOTA_Unit_Hero_Tidehunter_MapInstall {
	C_CDOTA_Unit_Hero_Tidehunter_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:76
class CDOTA_Ability_Tidehunter_Gush : public CDOTABaseAbility {
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
	CDOTA_Ability_Tidehunter_Gush(CDOTA_Ability_Tidehunter_Gush &);
	CDOTA_Ability_Tidehunter_Gush(CDOTA_Ability_Tidehunter_Gush &);
	CDOTA_Ability_Tidehunter_Gush();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetBehavior();
	virtual float GetCooldown(int);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Tidehunter_Gush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[310] GetStolenActivityModifier
	// vtable[251] GetBehavior
	// vtable[242] GetCooldown
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:101
class C_CDOTA_Ability_Tidehunter_Gush_MapInstall {
	C_CDOTA_Ability_Tidehunter_Gush_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:265
class CDOTA_Modifier_Tidehunter_Gush : public CDOTA_Buff {
public:

private:

	int movement_speed;  // +0xba8
	float negative_armor;  // +0xbac
	CDOTA_Modifier_Tidehunter_Gush();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Tidehunter_Gush();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierPhysicalArmorBonus
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:334
class CDOTA_Ability_Tidehunter_KrakenShell : public CDOTABaseAbility {
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
	CDOTA_Ability_Tidehunter_KrakenShell(CDOTA_Ability_Tidehunter_KrakenShell &);
	CDOTA_Ability_Tidehunter_KrakenShell(CDOTA_Ability_Tidehunter_KrakenShell &);
	CDOTA_Ability_Tidehunter_KrakenShell();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Tidehunter_KrakenShell();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:348
class CDOTA_Modifier_Tidehunter_KrakenShell : public CDOTA_Buff {
public:

private:

	int m_iDamageTaken;  // +0xba8
	int damage_reduction;  // +0xbac
	int damage_cleanse;  // +0xbb0
	float damage_reset_interval;  // +0xbb4
	CDOTA_Modifier_Tidehunter_KrakenShell();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysical_ConstantBlock(const CModifierParams &);
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tidehunter_KrakenShell();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysical_ConstantBlock
	// vtable[90] OnTakeDamage
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:458
class CDOTA_Ability_Tidehunter_AnchorSmash : public CDOTABaseAbility {
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
	CDOTA_Ability_Tidehunter_AnchorSmash(CDOTA_Ability_Tidehunter_AnchorSmash &);
	CDOTA_Ability_Tidehunter_AnchorSmash(CDOTA_Ability_Tidehunter_AnchorSmash &);
	CDOTA_Ability_Tidehunter_AnchorSmash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Tidehunter_AnchorSmash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:477
class C_CDOTA_Ability_Tidehunter_AnchorSmash_MapInstall {
	C_CDOTA_Ability_Tidehunter_AnchorSmash_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:530
class CDOTA_Modifier_Tidehunter_AnchorSmash : public CDOTA_Buff {
public:

private:

	int damage_reduction;  // +0xba8
	CDOTA_Modifier_Tidehunter_AnchorSmash();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsDebuff();
	virtual ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tidehunter_AnchorSmash();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[89] GetModifierBaseDamageOutgoing_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:585
class CDOTA_Ability_Tidehunter_Ravage : public CDOTABaseAbility {
public:

private:

	bool m_bAwardedKillEater;  // +0x3a8

	float duration;  // +0x3ac
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
	CDOTA_Ability_Tidehunter_Ravage(CDOTA_Ability_Tidehunter_Ravage &);
	CDOTA_Ability_Tidehunter_Ravage(CDOTA_Ability_Tidehunter_Ravage &);
	CDOTA_Ability_Tidehunter_Ravage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Tidehunter_Ravage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:615
class C_CDOTA_Ability_Tidehunter_Ravage_MapInstall {
	C_CDOTA_Ability_Tidehunter_Ravage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tidehunter.cpp:746
class CDOTA_Modifier_Tidehunter_Ravage : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	float m_flStartZ;  // +0xbb4
	float m_flCurTime;  // +0xbb8
	bool m_bDamageApplied;  // +0xbbc
	CDOTA_Modifier_Tidehunter_Ravage();
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
	virtual ~CDOTA_Modifier_Tidehunter_Ravage();

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

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Tidehunter::~CDOTA_Unit_Hero_Tidehunter  (line 37, @0x0000000002a68000, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Tidehunter::~CDOTA_Unit_Hero_Tidehunter(CDOTA_Unit_Hero_Tidehunter *const this)
{
  this->_vptr_IHandleEntity = &off_43A7BB0;
  this->_vptr_INextBotEventResponder = &off_43A8B90;
  this->_vptr_CObstructionObject = &off_43A8EC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Tidehunter::~CDOTA_Unit_Hero_Tidehunter  (line 37, @0x0000000002a68040, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Tidehunter
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Tidehunter::~CDOTA_Unit_Hero_Tidehunter(CDOTA_Unit_Hero_Tidehunter *const this)
{
  this->_vptr_IHandleEntity = &off_43A7BB0;
  this->_vptr_INextBotEventResponder = &off_43A8B90;
  this->_vptr_CObstructionObject = &off_43A8EC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Tidehunter::Schema_DynamicBinding  (line 39, @0x0000000002a61450, libserver.so)
// globals: CDOTA_Unit_Hero_Tidehunter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tidehunter::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tidehunter *const this)
{
  return CDOTA_Unit_Hero_Tidehunter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002a61480, libserver.so)
// globals: CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002a61490, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Tidehunter>
void __fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002a614b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002a614d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002a614e0, libserver.so)
// globals: CDOTA_Unit_Hero_Tidehunter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tidehunter::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002a64070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002a65d20, libserver.so)  // inlines: CDOTA_Unit_Hero_Tidehunter, Construct<CDOTA_Unit_Hero_Tidehunter>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43A7BB0;
    *(p + 236) = &off_43A8B90;
    *(p + 257) = &off_43A8EC0;
  }
  return p;
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a6b5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a6b660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal  (line 39, @0x0000000002a72c60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_tidehunter", "CDOTA_Unit_Hero_Tidehunter"
// globals: `guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass, CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass, __dso_handle, CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo, CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass);
    CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass._vptr_CEntityClass = off_43A7B30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Tidehunter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TidehunterClass != 0 )
    return &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo,
      "CDOTA_Unit_Hero_Tidehunter",
      "npc_dota_hero_tidehunter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo);
  }
  CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass.m_pClassInfo = &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo;
  CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TidehunterClass = &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass;
  CDOTA_Unit_Hero_Tidehunter::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TidehunterClassInfo.m_pClass = &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass;
  CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TidehunterClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Tidehunter::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TidehunterClass;
}


// CDOTA_Unit_Hero_Tidehunter::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002a3f6c0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Tidehunter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Tidehunter *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Tidehunter::GetServerClass  (line 47, @0x0000000002a483f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Tidehunter::GetServerClass(CDOTA_Unit_Hero_Tidehunter *const this)
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


// CDOTA_Unit_Hero_Tidehunter::Precache  (line 55, @0x0000000002a41610, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache
void __fastcall CDOTA_Unit_Hero_Tidehunter::Precache(
        CDOTA_Unit_Hero_Tidehunter *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Tidehunter::Spawn  (line 65, @0x0000000002a41620, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Tidehunter::Spawn(
        CDOTA_Unit_Hero_Tidehunter *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_Tidehunter_Gush::~CDOTA_Ability_Tidehunter_Gush  (line 76, @0x0000000002a67640, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tidehunter_Gush::~CDOTA_Ability_Tidehunter_Gush(
        CDOTA_Ability_Tidehunter_Gush *const this)
{
  this->_vptr_IHandleEntity = &off_43A8F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tidehunter_Gush::~CDOTA_Ability_Tidehunter_Gush  (line 76, @0x0000000002a67660, libserver.so)  // inlines: ~CDOTA_Ability_Tidehunter_Gush
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tidehunter_Gush::~CDOTA_Ability_Tidehunter_Gush(
        CDOTA_Ability_Tidehunter_Gush *const this)
{
  this->_vptr_IHandleEntity = &off_43A8F90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tidehunter_Gush::Schema_DynamicBinding  (line 78, @0x0000000002a614f0, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Gush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_Gush::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_Gush *const this)
{
  return CDOTA_Ability_Tidehunter_Gush::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 78, @0x0000000002a61500, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::DestructInstance  (line 78, @0x0000000002a61510, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tidehunter_Gush>
void __fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::FreeInstance  (line 78, @0x0000000002a61530, libserver.so)
void __fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::CanAllocate  (line 78, @0x0000000002a61550, libserver.so)
bool __fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 78, @0x0000000002a61560, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Gush::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_Gush::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::AllocateInstance  (line 78, @0x0000000002a640b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::ConstructInstance  (line 78, @0x0000000002a661d0, libserver.so)  // inlines: CDOTA_Ability_Tidehunter_Gush, Construct<CDOTA_Ability_Tidehunter_Gush>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_43A8F90;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000002a6ad90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000002a6adb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal  (line 78, @0x0000000002a72db0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tidehunter_Gush"
// globals: `guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass, CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass, __dso_handle, CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo, CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass);
    CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass._vptr_CEntityClass = off_43A8F10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass);
    __cxa_atexit(
      CDOTA_Ability_Tidehunter_Gush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tidehunter_GushClass != 0 )
    return &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass;
  if ( `guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo,
      "CDOTA_Ability_Tidehunter_Gush",
      "tidehunter_gush",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo);
  }
  CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass.m_pClassInfo = &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo;
  CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass.m_pBaseClassInfo = CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tidehunter_GushClass = &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass;
  CDOTA_Ability_Tidehunter_Gush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_GushClassInfo.m_pClass = &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass;
  CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tidehunter_GushClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tidehunter_Gush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_GushClass;
}


// CDOTA_Ability_Tidehunter_Gush::GetStolenActivityModifier  (line 87, @0x0000000002a61570, libserver.so)
const char *__fastcall CDOTA_Ability_Tidehunter_Gush::GetStolenActivityModifier(
        CDOTA_Ability_Tidehunter_Gush *const this)
{
  return "gush";
}


// CDOTA_Ability_Tidehunter_Gush::YouForgotToImplementOrDeclareServerClass  (line 101, @0x0000000002a3f6d0, libserver.so)
int __fastcall CDOTA_Ability_Tidehunter_Gush::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tidehunter_Gush *const this)
{
  return 0;
}


// CDOTA_Ability_Tidehunter_Gush::GetServerClass  (line 101, @0x0000000002a486b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tidehunter_Gush::GetServerClass(CDOTA_Ability_Tidehunter_Gush *const this)
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


// CDOTA_Ability_Tidehunter_Gush::GetCooldown  (line 112, @0x0000000002a598b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Tidehunter_Gush::GetCooldown(CDOTA_Ability_Tidehunter_Gush *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Tidehunter_Gush::GetBehavior  (line 124, @0x0000000002a40660, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_Tidehunter_Gush::GetBehavior(CDOTA_Ability_Tidehunter_Gush *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster) ? 8 : 24;
}


// CDOTA_Ability_Tidehunter_Gush::GetCastRange  (line 135, @0x0000000002a537a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Tidehunter_Gush::GetCastRange(
        CDOTA_Ability_Tidehunter_Gush *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Tidehunter_Gush::OnSpellStart  (line 143, @0x0000000002a52420, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, InValidate, NormalizeInPlace, Set, StopSoundEvent, ToDOTABaseNPC, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, sTrackingProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, GetParticleManager, CDOTA_ParticleManager::GetParticleReplacement, CDOTA_ProjectileManager::CreateTrackingProjectile, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CRecipientFilter::CRecipientFilter (21 total)
// strings: "aoe_scepter", "particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf", "particles/units/heroes/hero_tidehunter/tidehunter_gush_upgrade.vpcf", "Hero_Tidehunter.Gush.AghsProjectile", "Ability.GushCast"
void __fastcall CDOTA_Ability_Tidehunter_Gush::OnSpellStart(CDOTA_Ability_Tidehunter_Gush *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  int v4; // r14d
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v6; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  vec_t v9; // xmm0_4
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *v12; // rdx
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  __int16 v15; // cx
  CBaseEntity *v16; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float y; // r15d
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rax
  vec_t v28; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v30; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v32; // eax
  __int16 v33; // cx
  CSoundOpGameSystem *v34; // r13
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const QAngle *AbsAngles; // rax
  Vector vDirection; // [rsp+10h] [rbp-200h] BYREF
  sLinearProjectileCreateInfo info_0; // [rsp+20h] [rbp-1F0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v42; // [rsp+1D8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v42 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_scepter", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "aoe_scepter", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v6 = CursorTarget;
  }
  else
  {
    v6 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(Caster) )
      return;
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v8) )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
    {
      v16 = CDOTABaseAbility::GetCursorTarget(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
    }
    else
    {
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      x = CursorPosition.x;
      y = CursorPosition.y;
    }
    v20 = CDOTABaseAbility::GetCaster(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    v22 = x - v21->x;
    v23 = y - v21->y;
    vDirection.z = 0.0;
    vDirection.x = v22;
    vDirection.y = v23;
    if ( VectorNormalize(&vDirection) < 0.0099999998 )
    {
      v37 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v37);
      AngleVectors(AbsAngles, &vDirection, 0, 0);
    }
    info_0.pszEffectName = "particles/units/heroes/hero_tidehunter/tidehunter_gush_upgrade.vpcf";
    info_0.hSource.m_Index = -1;
    info_0.fDistance = 0.0;
    info_0.bHasFrontalCone = 1;
    v24 = vec3_origin.y;
    info_0.fStartRadius = 0.0;
    z = vec3_origin.z;
    info_0.vSpawnOrigin.x = vec3_origin.x;
    info_0.vSpawnOrigin.y = v24;
    info_0.vSpawnOrigin.z = z;
    info_0.vVelocity.x = vec3_origin.x;
    info_0.vVelocity.y = v24;
    info_0.vVelocity.z = z;
    info_0.vAcceleration.x = vec3_origin.x;
    info_0.vAcceleration.y = v24;
    info_0.vAcceleration.z = z;
    info_0.fEndRadius = 0.0;
    info_0.bCheckStartPosition = 0;
    info_0.iUnitTargetTeam = 0;
    info_0.iUnitTargetType = 0;
    info_0.iUnitTargetFlags = 0;
    info_0.bProvidesVision = 0;
    info_0.iVisionTeamNumber = -1;
    info_0.iVisionRadius = -1;
    info_0.bDrawsOnMinimap = 0;
    info_0.bVisibleToEnemies = 1;
    info_0.bIgnoreSource = 0;
    info_0.bStickyFoWReveal = 0;
    info_0.pKVExtraData = 0;
    info_0.fExpireTime = 0.0;
    info_0.fMaxSpeed = 0.0;
    info_0.pAbility = this;
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    info_0.vSpawnOrigin.x = v27->x;
    info_0.vSpawnOrigin.y = v27->y;
    v28 = v27->z;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info_0.vSpawnOrigin.z = v28;
    info_0.vVelocity.y = vDirection.y * v3;
    info_0.vVelocity.z = vDirection.z * v3;
    info_0.vVelocity.x = v3 * vDirection.x;
    info_0.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
    info_0.fStartRadius = v4;
    info_0.fEndRadius = v4;
    v30 = CDOTABaseAbility::GetCaster(this);
    if ( v30 != 0 && (m_pEntity = v30->m_pEntity) != 0 )
    {
      v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v33 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info_0.hSource.m_Index) = v33 | info_0.hSource.m_Index & 0x8000;
      info_0.hSource.m_Index = (v32 << 15) | info_0.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info_0.hSource.m_Index = -1;
    }
    info_0.iUnitTargetTeam = 2;
    info_0.iUnitTargetType = 19;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info_0);
    v34 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&info);
      info.pszEffectName = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&info);
      info.pszEffectName = &off_3FCB130;
      CRecipientFilter::MakeReliable(&info);
      CSoundOpGameSystem::StopSoundEvent(v34, &info, this->m_SoundEventGuid);
      info.pszEffectName = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&info);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    v35 = CDOTABaseAbility::GetCaster(this);
    this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v35, "Hero_Tidehunter.Gush.AghsProjectile", 0.0, 0, 0);
  }
  else
  {
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    memset(&info, 0, 28);
    info.vSourceLoc.x = vec3_origin.x;
    info.vSourceLoc.y = vec3_origin.y;
    v9 = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.vSourceLoc.z = v9;
    info.bProvidesVision = 0;
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
    GetParticleManager();
    v10 = CDOTABaseAbility::GetCaster(this);
    info.pAbility = this;
    info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(
                           "particles/units/heroes/hero_tidehunter/tidehunter_gush.vpcf",
                           v10);
    info.iMoveSpeed = LevelSpecialValue;
    v11 = CDOTABaseAbility::GetCaster(this);
    if ( v11 != 0 && (v12 = v11->m_pEntity) != 0 )
    {
      v13 = 0x7FFF;
      if ( v12->m_EHandle.m_Index != -1 )
        v13 = v12->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    if ( v6 != 0 && (v14 = v6->m_pEntity) != 0 )
    {
      v15 = 0x7FFF;
      if ( v14->m_EHandle.m_Index != -1 )
        v15 = v14->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.iSourceAttachment = 2;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  }
  v36 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v36, "Ability.GushCast", 0.0, 0, 0);
}


// CDOTA_Ability_Tidehunter_Gush::OnProjectileHit  (line 209, @0x0000000002a46fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, __stack_chk_fail, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues, CDOTA_BaseNPC::TriggerSpellAbsorb (13 total)
// strings: "modifier_tidehunter_gush", "Ability.GushImpact"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Tidehunter_Gush::OnProjectileHit(
        CDOTA_Ability_Tidehunter_Gush *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  int v7; // eax
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *Caster; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rdi
  CDOTA_BaseNPC_Hero *v17; // rsi
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0 && (BYTE1(vptr_IHandleEntity) & 2) == 0 )
          {
            Caster = CDOTABaseAbility::GetCaster(this);
            if ( CDOTA_BaseNPC::HasScepter(Caster) || !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
            {
              KeyValues::KeyValues(&kv, "modifier_tidehunter_gush");
              CDOTABaseAbility::GetDuration(this);
              KeyValues::SetFloat(&kv, "duration", v12);
              v13 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v13, this, "modifier_tidehunter_gush", &kv, 0);
              flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
              v14 = CDOTABaseAbility::GetCaster(this);
              ApplyDamage(v14, m_pInstance, this, flDamage, 2, 0);
              CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Ability.GushImpact", 0.0, 0, 0);
              v15 = CDOTABaseAbility::GetCaster(this);
              if ( v15 == 0 || (v16 = v15, (v15->m_iUnitType & 1) == 0) )
                v16 = 0;
              v17 = 0;
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                v17 = m_pInstance;
              EconEntity_OnOwnerKillEaterEvent(
                v16,
                v17,
                kill_eater_event_t::kKillEaterEventType_Tide_EnemiesGushed,
                1,
                INVALID_ITEM_DEF_INDEX);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  LOBYTE(v7) = CDOTA_BaseNPC::HasScepter(v6);
  return v7 ^ 1u;
}


// CDOTA_Ability_Tidehunter_Gush::OnProjectileThink  (line 235, @0x0000000002a47c00, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Tidehunter_Gush::OnProjectileThink(
        CDOTA_Ability_Tidehunter_Gush *const this,
        const Vector *const vLocation)
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
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vLocation;
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


// CDOTA_Ability_Tidehunter_Gush::GetAbilityDamageToTargetOverInterval  (line 246, @0x0000000002a42050, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Tidehunter_Gush::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tidehunter_Gush *const this,
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


// CDOTA_Ability_Tidehunter_Gush::GetSlowDuration  (line 256, @0x0000000002a40f60, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Tidehunter_Gush::GetSlowDuration(CDOTA_Ability_Tidehunter_Gush *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Tidehunter_Gush::~CDOTA_Modifier_Tidehunter_Gush  (line 265, @0x0000000002a65200, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tidehunter_Gush::~CDOTA_Modifier_Tidehunter_Gush(
        CDOTA_Modifier_Tidehunter_Gush *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A9A50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tidehunter_Gush::~CDOTA_Modifier_Tidehunter_Gush  (line 265, @0x0000000002a65220, libserver.so)  // inlines: ~CDOTA_Modifier_Tidehunter_Gush
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tidehunter_Gush::~CDOTA_Modifier_Tidehunter_Gush(
        CDOTA_Modifier_Tidehunter_Gush *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A9A50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tidehunter_Gush::IsDebuff  (line 270, @0x0000000002a61580, libserver.so)
bool __fastcall CDOTA_Modifier_Tidehunter_Gush::IsDebuff(CDOTA_Modifier_Tidehunter_Gush *const this)
{
  return 1;
}


// CDOTA_Modifier_Tidehunter_Gush::GetEffectName  (line 278, @0x0000000002a61590, libserver.so)
// strings: "particles/units/heroes/hero_tidehunter/tidehunter_gush_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Tidehunter_Gush::GetEffectName(CDOTA_Modifier_Tidehunter_Gush *const this)
{
  return "particles/units/heroes/hero_tidehunter/tidehunter_gush_slow.vpcf";
}


// CDOTA_Modifier_Tidehunter_Gush::GetStatusEffectName  (line 279, @0x0000000002a615a0, libserver.so)
// strings: "particles/status_fx/status_effect_gush.vpcf"
const char *__fastcall CDOTA_Modifier_Tidehunter_Gush::GetStatusEffectName(CDOTA_Modifier_Tidehunter_Gush *const this)
{
  return "particles/status_fx/status_effect_gush.vpcf";
}


// CDOTA_Modifier_Tidehunter_Gush::StatusEffectPriority  (line 280, @0x0000000002a615b0, libserver.so)
int __fastcall CDOTA_Modifier_Tidehunter_Gush::StatusEffectPriority(CDOTA_Modifier_Tidehunter_Gush *const this)
{
  return 10;
}


// CDOTA_Modifier_Tidehunter_Gush::OnCreated  (line 294, @0x0000000002a5d3a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_tidehunter"
void __fastcall CDOTA_Modifier_Tidehunter_Gush::OnCreated(CDOTA_Modifier_Tidehunter_Gush *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->negative_armor = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "negative_armor", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->negative_armor = 0.0;
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_tidehunter", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->negative_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                         + this->negative_armor;
}


// CDOTA_Modifier_Tidehunter_Gush::DeclareFunctions  (line 308, @0x0000000002a3f6e0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tidehunter_Gush::DeclareFunctions(CDOTA_Modifier_Tidehunter_Gush *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[45].__pfn = (&stru_10 + 705);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Tidehunter_Gush::GetModifierMoveSpeedBonus_Percentage  (line 316, @0x0000000002a3f720, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_Gush::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Tidehunter_Gush *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tidehunter_Gush::GetModifierPhysicalArmorBonus  (line 323, @0x0000000002a3f740, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_Gush::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Tidehunter_Gush *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->negative_armor), 0x80000000)) << 32) | 1;
  return result;
}


// CDOTA_Ability_Tidehunter_KrakenShell::~CDOTA_Ability_Tidehunter_KrakenShell  (line 334, @0x0000000002a67690, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::~CDOTA_Ability_Tidehunter_KrakenShell(
        CDOTA_Ability_Tidehunter_KrakenShell *const this)
{
  this->_vptr_IHandleEntity = &off_43A9DD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tidehunter_KrakenShell::~CDOTA_Ability_Tidehunter_KrakenShell  (line 334, @0x0000000002a676b0, libserver.so)  // inlines: ~CDOTA_Ability_Tidehunter_KrakenShell
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::~CDOTA_Ability_Tidehunter_KrakenShell(
        CDOTA_Ability_Tidehunter_KrakenShell *const this)
{
  this->_vptr_IHandleEntity = &off_43A9DD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tidehunter_KrakenShell::Schema_DynamicBinding  (line 336, @0x0000000002a615c0, libserver.so)
// globals: CDOTA_Ability_Tidehunter_KrakenShell::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_KrakenShell *const this)
{
  return CDOTA_Ability_Tidehunter_KrakenShell::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 336, @0x0000000002a615d0, libserver.so)
// globals: CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::DestructInstance  (line 336, @0x0000000002a615e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tidehunter_KrakenShell>
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::FreeInstance  (line 336, @0x0000000002a61600, libserver.so)
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::CanAllocate  (line 336, @0x0000000002a61620, libserver.so)
bool __fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 336, @0x0000000002a61630, libserver.so)
// globals: CDOTA_Ability_Tidehunter_KrakenShell::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_KrakenShell::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::AllocateInstance  (line 336, @0x0000000002a640f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::ConstructInstance  (line 336, @0x0000000002a66220, libserver.so)  // inlines: CDOTA_Ability_Tidehunter_KrakenShell, Construct<CDOTA_Ability_Tidehunter_KrakenShell>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A9DD0;
  }
  return p;
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x0000000002a6ade0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 336, @0x0000000002a6ae00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal  (line 336, @0x0000000002a72f00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "tidehunter_kraken_shell", "CDOTA_Ability_Tidehunter_KrakenShell"
// globals: `guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass, CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass, __dso_handle, CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo, CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass);
    CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass._vptr_CEntityClass = off_43A9D50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass);
    __cxa_atexit(
      CDOTA_Ability_Tidehunter_KrakenShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tidehunter_KrakenShellClass != 0 )
    return &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass;
  if ( `guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo,
      "CDOTA_Ability_Tidehunter_KrakenShell",
      "tidehunter_kraken_shell",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo);
  }
  CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass.m_pClassInfo = &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo;
  CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass.m_pBaseClassInfo = CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tidehunter_KrakenShellClass = &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass;
  CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClassInfo.m_pClass = &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass;
  CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tidehunter_KrakenShellClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tidehunter_KrakenShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_KrakenShellClass;
}


// CDOTA_Ability_Tidehunter_KrakenShell::GetIntrinsicModifierName  (line 339, @0x0000000002a61640, libserver.so)
// strings: "modifier_tidehunter_kraken_shell"
const char *__fastcall CDOTA_Ability_Tidehunter_KrakenShell::GetIntrinsicModifierName(
        CDOTA_Ability_Tidehunter_KrakenShell *const this)
{
  return "modifier_tidehunter_kraken_shell";
}


// CDOTA_Modifier_Tidehunter_KrakenShell::~CDOTA_Modifier_Tidehunter_KrakenShell  (line 348, @0x0000000002a651b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::~CDOTA_Modifier_Tidehunter_KrakenShell(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AA890;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tidehunter_KrakenShell::~CDOTA_Modifier_Tidehunter_KrakenShell  (line 348, @0x0000000002a651d0, libserver.so)  // inlines: ~CDOTA_Modifier_Tidehunter_KrakenShell
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::~CDOTA_Modifier_Tidehunter_KrakenShell(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AA890;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tidehunter_KrakenShell::IsHidden  (line 353, @0x0000000002a61650, libserver.so)
bool __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::IsHidden(CDOTA_Modifier_Tidehunter_KrakenShell *const this)
{
  return 1;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::OnCreated  (line 376, @0x0000000002a5d180, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_cleanse", "damage_reset_interval"
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::OnCreated(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  this->m_iDamageTaken = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_cleanse = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_reduction = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_cleanse = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_cleanse", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_reset_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_reset_interval", -1, 0);
    return;
  }
LABEL_7:
  this->damage_reset_interval = 0.0;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::OnRefresh  (line 387, @0x0000000002a5d0b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_cleanse", "damage_reset_interval"
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::OnRefresh(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_cleanse = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_reduction = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_cleanse = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_cleanse", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_reset_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_reset_interval", -1, 0);
    return;
  }
LABEL_7:
  this->damage_reset_interval = 0.0;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::DeclareFunctions  (line 396, @0x0000000002a3f770, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::DeclareFunctions(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this)
{
  this->m_Functions[86].__pfn = (&stru_10 + 697);
  this->m_Functions[86].__delta = 0;
  this->m_Functions[134].__pfn = (&stru_10 + 705);
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::GetModifierPhysical_ConstantBlock  (line 404, @0x0000000002a429c0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::GetModifierPhysical_ConstantBlock(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->damage_reduction;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::OnTakeDamage  (line 414, @0x0000000002a47330, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsUnitMyParent, IsUnitPlayerControlled, IsValid, LookupEntity, Set, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTA_BaseNPC*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetAbility, Purge, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_tidehunter/tidehunter_krakenshell_purge.vpcf", "Hero_Tidehunter.KrakenShell"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::OnTakeDamage(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  int v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  float v19; // xmm1_4
  int damage_cleanse; // edx
  int v21; // eax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *Parent; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( !m_pInstance->m_bIsDOTANPC )
    goto LABEL_5;
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_5;
  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    goto LABEL_5;
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1 )
    goto LABEL_5;
  v10 = params->hattacker.m_Index & 0x7FFF;
  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)];
  if ( v11 == 0 )
    goto LABEL_5;
  v12 = &v11[v10 & 0x1FF];
  if ( v12 == 0 )
    goto LABEL_5;
  if ( v9 != v12->m_EHandle.m_Index )
    goto LABEL_5;
  v13 = v12->m_pInstance;
  if ( v13 == 0 )
    goto LABEL_5;
  if ( BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  m_pEntity = v13->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_5;
  v15 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v16 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
  if ( (v16 + 2) <= 1 )
    goto LABEL_5;
  v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v16 >> 9) & 0x3F];
  if ( v17 == 0 )
    goto LABEL_5;
  v18 = &v17[v16 & 0x1FF];
  if ( v18 == 0
    || v16 != v18->m_EHandle.m_Index
    || v18->m_pInstance == 0
    || v18->m_pInstance[61].m_hPrivateScope.m_hScope == 0 )
  {
    goto LABEL_5;
  }
  if ( CDOTA_Buff::GetCaster(this) == 0
    || (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) == 0) )
  {
    CDOTA_Buff::StartIntervalThink(this, this->damage_reset_interval, v19);
    damage_cleanse = this->damage_cleanse;
    v21 = (this->m_iDamageTaken + params->fDamage);
    this->m_iDamageTaken = v21;
    if ( v21 > damage_cleanse )
    {
      this->m_iDamageTaken = v21 - damage_cleanse;
      Caster = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_tidehunter/tidehunter_krakenshell_purge.vpcf",
                          1,
                          Caster,
                          0,
                          0);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, Caster);
      Ability = CDOTA_Buff::GetAbility(this);
      v26 = CDOTA_Buff::GetCaster(this);
      Purge(v26, Ability, 28);
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Tidehunter.KrakenShell", 0.0, 0, 0);
    }
LABEL_5:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Tidehunter_KrakenShell::OnIntervalThink  (line 446, @0x0000000002a3f7b0, libserver.so)
void __fastcall CDOTA_Modifier_Tidehunter_KrakenShell::OnIntervalThink(
        CDOTA_Modifier_Tidehunter_KrakenShell *const this)
{
  this->m_iDamageTaken = 0;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::~CDOTA_Ability_Tidehunter_AnchorSmash  (line 458, @0x0000000002a676e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::~CDOTA_Ability_Tidehunter_AnchorSmash(
        CDOTA_Ability_Tidehunter_AnchorSmash *const this)
{
  this->_vptr_IHandleEntity = &off_43AAC10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::~CDOTA_Ability_Tidehunter_AnchorSmash  (line 458, @0x0000000002a67700, libserver.so)  // inlines: ~CDOTA_Ability_Tidehunter_AnchorSmash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::~CDOTA_Ability_Tidehunter_AnchorSmash(
        CDOTA_Ability_Tidehunter_AnchorSmash *const this)
{
  this->_vptr_IHandleEntity = &off_43AAC10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::Schema_DynamicBinding  (line 460, @0x0000000002a61660, libserver.so)
// globals: CDOTA_Ability_Tidehunter_AnchorSmash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_AnchorSmash *const this)
{
  return CDOTA_Ability_Tidehunter_AnchorSmash::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 460, @0x0000000002a61670, libserver.so)
// globals: CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::DestructInstance  (line 460, @0x0000000002a61680, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tidehunter_AnchorSmash>
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::FreeInstance  (line 460, @0x0000000002a616a0, libserver.so)
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::CanAllocate  (line 460, @0x0000000002a616c0, libserver.so)
bool __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 460, @0x0000000002a616d0, libserver.so)
// globals: CDOTA_Ability_Tidehunter_AnchorSmash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_AnchorSmash::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::AllocateInstance  (line 460, @0x0000000002a64130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::ConstructInstance  (line 460, @0x0000000002a66250, libserver.so)  // inlines: CDOTA_Ability_Tidehunter_AnchorSmash, Construct<CDOTA_Ability_Tidehunter_AnchorSmash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43AAC10;
  }
  return p;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 460, @0x0000000002a6ae30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 460, @0x0000000002a6ae50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal  (line 460, @0x0000000002a73050, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "tidehunter_anchor_smash", "CDOTA_Ability_Tidehunter_AnchorSmash"
// globals: `guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass, CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass, __dso_handle, CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo, CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass);
    CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass._vptr_CEntityClass = off_43AAB90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass);
    __cxa_atexit(
      CDOTA_Ability_Tidehunter_AnchorSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tidehunter_AnchorSmashClass != 0 )
    return &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass;
  if ( `guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo,
      "CDOTA_Ability_Tidehunter_AnchorSmash",
      "tidehunter_anchor_smash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo);
  }
  CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass.m_pClassInfo = &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo;
  CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass.m_pBaseClassInfo = CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tidehunter_AnchorSmashClass = &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass;
  CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClassInfo.m_pClass = &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass;
  CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tidehunter_AnchorSmashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tidehunter_AnchorSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_AnchorSmashClass;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::YouForgotToImplementOrDeclareServerClass  (line 477, @0x0000000002a3f7c0, libserver.so)
int __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tidehunter_AnchorSmash *const this)
{
  return 0;
}


// CDOTA_Ability_Tidehunter_AnchorSmash::GetServerClass  (line 477, @0x0000000002a485b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tidehunter_AnchorSmash::GetServerClass(
        CDOTA_Ability_Tidehunter_AnchorSmash *const this)
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


// CDOTA_Ability_Tidehunter_AnchorSmash::OnSpellStart  (line 486, @0x0000000002a5a840, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetCaster, FindUnitsInRadius (19 total)
// strings: "reduction_duration", "modifier_tidehunter_anchor_smash", "particles/units/heroes/hero_tidehunter/tidehunter_anchor_hero.vpcf", "attach_attack1", "Hero_Tidehunter.AnchorSmash", "particles/units/heroes/hero_tidehunter/tidehunter_anchor.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Tidehunter_AnchorSmash::OnSpellStart(CDOTA_Ability_Tidehunter_AnchorSmash *const this)
{
  int LevelSpecialValue; // r14d
  float v3; // xmm1_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CGameSceneNode *v8; // rdi
  const CBaseAnimating *v9; // r12
  CDOTA_ParticleManager *v10; // rax
  CGameSceneNode *v11; // rdi
  CBaseEntity *v12; // rdi
  const Vector *AbsOrigin; // r12
  CGameSceneNode *v14; // rdi
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  __m128i v17; // xmm3
  float v18; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // rbx
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CEntityInstance *m_pInstance; // r12
  __m128i v31; // xmm2
  float v32; // r14d
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  int v36; // r14d
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  const CBaseAnimating *reduction_duration; // [rsp+28h] [rbp-78h]
  const Vector *reduction_durationa; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "reduction_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_tidehunter_anchor_smash");
  KeyValues::SetFloat(&kv, "duration", v3);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_tidehunter/tidehunter_anchor_hero.vpcf",
               2,
               OwnerEntity,
               0,
               0);
  v8 = this->m_pGameSceneNode->m_pParent;
  if ( v8 != 0 )
    v9 = CGameSceneNode::GetOwnerEntity(v8);
  else
    v9 = 0;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 0, v9, 1, 0, vec3_invalid, 1);
  v11 = this->m_pGameSceneNode->m_pParent;
  if ( v11 != 0 )
    v12 = CGameSceneNode::GetOwnerEntity(v11);
  else
    v12 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = this->m_pGameSceneNode->m_pParent;
  if ( v14 != 0 )
    reduction_duration = CGameSceneNode::GetOwnerEntity(v14);
  else
    reduction_duration = 0;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 1, reduction_duration, 5, "attach_attack1", *AbsOrigin, 1);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, Particle);
  *v17.m128i_i32 = LevelSpecialValue;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  Caster = CDOTABaseAbility::GetCaster(this);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v22->m_iTeamNum.m_Value, v21, Caster, v18, &hEntities, 2, 3, 16, 0, 0);
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Tidehunter.AnchorSmash", 0.0, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v24 = 0;
    do
    {
      while ( 1 )
      {
        v25 = &hEntities.m_Memory.m_pMemory[v24];
        m_Index = v25->m_Index;
        if ( v25->m_Index + 2 > 1 )
        {
          v27 = v25->m_Index;
          v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = &v28[v27 & 0x1FF];
            if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
            {
              m_pInstance = v29->m_pInstance;
              if ( v29->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
              {
                break;
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v24 )
          goto LABEL_20;
      }
      *v31.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
      v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
      v33 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v33, m_pInstance, this, v32, 1, 8);
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, this, "modifier_tidehunter_anchor_smash", &kv, 0);
      v35 = GetParticleManager();
      v36 = CDOTA_ParticleManager::CreateParticle(
              v35,
              "particles/units/heroes/hero_tidehunter/tidehunter_anchor.vpcf",
              2,
              m_pInstance,
              0,
              0);
      reduction_durationa = CBaseEntity::GetAbsOrigin(m_pInstance);
      v37 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(
        v37,
        v36,
        0,
        m_pInstance,
        5,
        "attach_hitloc",
        *reduction_durationa,
        1);
      v38 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v38, v36, 1, m_pInstance, 1, 0, vec3_invalid, 1);
      v39 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v39, v36);
      ++v24;
    }
    while ( hEntities.m_Size > v24 );
  }
LABEL_20:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::~CDOTA_Modifier_Tidehunter_AnchorSmash  (line 530, @0x0000000002a65160, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::~CDOTA_Modifier_Tidehunter_AnchorSmash(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AB6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::~CDOTA_Modifier_Tidehunter_AnchorSmash  (line 530, @0x0000000002a65180, libserver.so)  // inlines: ~CDOTA_Modifier_Tidehunter_AnchorSmash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::~CDOTA_Modifier_Tidehunter_AnchorSmash(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AB6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::IsDebuff  (line 540, @0x0000000002a616e0, libserver.so)
bool __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::IsDebuff(CDOTA_Modifier_Tidehunter_AnchorSmash *const this)
{
  return 1;
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::OnCreated  (line 553, @0x0000000002a55110, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::OnCreated(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::OnRefresh  (line 560, @0x0000000002a55050, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::OnRefresh(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::DeclareFunctions  (line 567, @0x0000000002a3f7d0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::DeclareFunctions(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this)
{
  this->m_Functions[34].__pfn = (&stru_10 + 697);
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_Tidehunter_AnchorSmash::GetModifierBaseDamageOutgoing_Percentage  (line 574, @0x0000000002a3f7f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_AnchorSmash::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Tidehunter_AnchorSmash *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Tidehunter_Ravage::~CDOTA_Ability_Tidehunter_Ravage  (line 585, @0x0000000002a76f20, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tidehunter_Ravage::~CDOTA_Ability_Tidehunter_Ravage(
        CDOTA_Ability_Tidehunter_Ravage *const this)
{
  this->_vptr_IHandleEntity = &off_43ABA30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntsHit);
  if ( (this->m_hEntsHit.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntsHit.m_Memory),
        (this->m_hEntsHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntsHit.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Tidehunter_Ravage::~CDOTA_Ability_Tidehunter_Ravage  (line 585, @0x0000000002a77000, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Tidehunter_Ravage, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tidehunter_Ravage::~CDOTA_Ability_Tidehunter_Ravage(
        CDOTA_Ability_Tidehunter_Ravage *const this)
{
  this->_vptr_IHandleEntity = &off_43ABA30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntsHit);
  if ( (this->m_hEntsHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntsHit.m_Memory);
    if ( (this->m_hEntsHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hEntsHit.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tidehunter_Ravage::Schema_DynamicBinding  (line 587, @0x0000000002a616f0, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Ravage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_Ravage::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_Ravage *const this)
{
  return CDOTA_Ability_Tidehunter_Ravage::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 587, @0x0000000002a61700, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::DestructInstance  (line 587, @0x0000000002a61710, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tidehunter_Ravage>
void __fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::FreeInstance  (line 587, @0x0000000002a61730, libserver.so)
void __fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::CanAllocate  (line 587, @0x0000000002a61750, libserver.so)
bool __fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 587, @0x0000000002a61760, libserver.so)
// globals: CDOTA_Ability_Tidehunter_Ravage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tidehunter_Ravage::s_pSchemaBinding;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::AllocateInstance  (line 587, @0x0000000002a64170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::ConstructInstance  (line 587, @0x0000000002a6a220, libserver.so)  // inlines: CDOTA_Ability_Tidehunter_Ravage, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Tidehunter_Ravage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_43ABA30;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 587, @0x0000000002a6ae80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 587, @0x0000000002a6aea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal  (line 587, @0x0000000002a731a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Tidehunter_Ravage"
// globals: `guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass, CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass, __dso_handle, CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo, CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass);
    CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass._vptr_CEntityClass = off_43AB9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass);
    __cxa_atexit(
      CDOTA_Ability_Tidehunter_Ravage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tidehunter_RavageClass != 0 )
    return &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass;
  if ( `guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo,
      "CDOTA_Ability_Tidehunter_Ravage",
      "tidehunter_ravage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo);
  }
  CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass.m_pClassInfo = &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo;
  CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass.m_pBaseClassInfo = CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tidehunter_RavageClass = &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass;
  CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClassInfo.m_pClass = &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass;
  CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tidehunter_RavageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tidehunter_Ravage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tidehunter_RavageClass;
}


// CDOTA_Ability_Tidehunter_Ravage::GetStolenActivityModifier  (line 604, @0x0000000002a61770, libserver.so)
const char *__fastcall CDOTA_Ability_Tidehunter_Ravage::GetStolenActivityModifier(
        CDOTA_Ability_Tidehunter_Ravage *const this)
{
  return "ravage";
}


// CDOTA_Ability_Tidehunter_Ravage::YouForgotToImplementOrDeclareServerClass  (line 615, @0x0000000002a3f810, libserver.so)
int __fastcall CDOTA_Ability_Tidehunter_Ravage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tidehunter_Ravage *const this)
{
  return 0;
}


// CDOTA_Ability_Tidehunter_Ravage::GetServerClass  (line 615, @0x0000000002a487b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tidehunter_Ravage::GetServerClass(CDOTA_Ability_Tidehunter_Ravage *const this)
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


// CDOTA_Ability_Tidehunter_Ravage::OnSpellStart  (line 624, @0x0000000002a57750, libserver.so)  // inlines: CEntityHandle, CHandle, GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, QAngle, Set, Vector, VectorMultiply, entindex, operator*, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, AngleVectors, CDOTA_ProjectileManager::CreateLinearProjectile (17 total)
// strings: "particles/units/heroes/hero_tidehunter/tidehunter_spell_ravage.vpcf", "Ability.Ravage"
void __fastcall CDOTA_Ability_Tidehunter_Ravage::OnSpellStart(CDOTA_Ability_Tidehunter_Ravage *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v8; // rax
  double v9; // xmm3_8^8
  __m128d v10; // xmm0
  unsigned int v11; // xmm4_4
  CDOTA_ParticleManager *v12; // rax
  __m128d v13; // xmm0
  unsigned int v14; // xmm5_4
  CDOTA_ParticleManager *v15; // rax
  __m128d v16; // xmm0
  unsigned int v17; // xmm6_4
  CDOTA_ParticleManager *v18; // rax
  __m128d v19; // xmm0
  unsigned int v20; // xmm7_4
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  vec_t v29; // xmm0_4
  CDOTA_BaseNPC *v30; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v32; // cx
  int v33; // ebx
  int v34; // eax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CEntityIndex v37; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v40; // rax
  const Vector *v41; // rbx
  CDOTA_BaseNPC *v42; // rax
  float v43; // xmm3_4
  float v44; // [rsp+Ch] [rbp-D4h]
  QAngle angles; // [rsp+10h] [rbp-D0h] BYREF
  Vector vForward; // [rsp+20h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-B0h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_tidehunter/tidehunter_spell_ravage.vpcf",
               2,
               0,
               0,
               0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  v10.m128d_f64[1] = v9;
  v10.m128d_f64[0] = LevelSpecialValue * 0.25;
  *&v11 = _mm_movedup_pd(v10).m128d_f64[0];
  info.pszEffectName = (v11 | 0x3F80000000000000LL);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Particle, 1, *&info.pszEffectName, 0.0);
  v13 = COERCE_UNSIGNED_INT64(LevelSpecialValue);
  v13.m128d_f64[0] = LevelSpecialValue / 3.0;
  *&v14 = _mm_movedup_pd(v13).m128d_f64[0];
  info.pszEffectName = (v14 | 0x3F80000000000000LL);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, Particle, 2, *&info.pszEffectName, 0.0);
  v16 = COERCE_UNSIGNED_INT64(LevelSpecialValue);
  v16.m128d_f64[0] = LevelSpecialValue * 0.5;
  *&v17 = _mm_movedup_pd(v16).m128d_f64[0];
  info.pszEffectName = (v17 | 0x3F80000000000000LL);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, Particle, 3, *&info.pszEffectName, 0.0);
  v19 = COERCE_UNSIGNED_INT64(LevelSpecialValue);
  v19.m128d_f64[0] = LevelSpecialValue / 1.5;
  *&v20 = _mm_movedup_pd(v19).m128d_f64[0];
  info.pszEffectName = (v20 | 0x3F80000000000000LL);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, Particle, 4, *&info.pszEffectName, 0.0);
  *(&info.pszEffectName + 4) = 1065353216;
  *&info.pszEffectName = (LevelSpecialValue - 32);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, Particle, 5, *&info.pszEffectName, 0.0);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v23, Particle, 0, -1, LevelSpecialValue);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hEntsHit);
  this->m_bAwardedKillEater = 0;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.fDistance = 0.0;
  y = vec3_origin.y;
  info.fStartRadius = 0.0;
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
  info.fEndRadius = 0.0;
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
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  info.vSpawnOrigin.x = v28->x;
  info.vSpawnOrigin.y = v28->y;
  v29 = v28->z;
  info.fStartRadius = 225.0;
  info.fEndRadius = 225.0;
  info.vSpawnOrigin.z = v29;
  info.fDistance = (LevelSpecialValue - 225);
  v30 = CDOTABaseAbility::GetCaster(this);
  if ( v30 != 0 && (m_pEntity = v30->m_pEntity) != 0 )
  {
    v32 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v32 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  v33 = 0;
  info.iUnitTargetType = 19;
  info.bHasFrontalCone = 0;
  v44 = v3;
  do
  {
    v34 = v33 >> 4;
    v33 += 360;
    angles.x = 0.0;
    angles.z = 0.0;
    angles.y = v34;
    AngleVectors(&angles, &vForward, 0, 0);
    info.vVelocity.y = vForward.y * v44;
    info.vVelocity.z = vForward.z * v44;
    info.vVelocity.x = v44 * vForward.x;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
  while ( v33 != 5760 );
  v35 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v35, "Ability.Ravage", 0.0, 0, 0);
  v36 = CDOTABaseAbility::GetCaster(this);
  v37.m_Data = CEntityInstance::GetEntityIndex(v36).m_Data;
  CreateUnitEvent(v37, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v40 = CDOTABaseAbility::GetCaster(this);
  v41 = CBaseEntity::GetAbsOrigin(v40);
  v42 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v42, 0, m_iAbilityID, 0, 0, *&v41->x, v41->z, -1.0, v43);
}


// CDOTA_Ability_Tidehunter_Ravage::OnProjectileHit  (line 679, @0x0000000002a5e8d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsHero, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "particles/units/heroes/hero_tidehunter/tidehunter_spell_ravage_hit.vpcf", "attach_hitloc", "modifier_tidehunter_ravage", "Hero_Tidehunter.RavageDamage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Tidehunter_Ravage::OnProjectileHit(
        CDOTA_Ability_Tidehunter_Ravage *const this,
        const CHandle<CBaseEntity> *hTarget,
        const Vector *const vLocation)
{
  CHandle<CBaseEntity> v5; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v15; // rax
  const Vector *v16; // r15
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __int64 m_Size; // r15
  int v22; // eax
  CHandle<CBaseEntity> *v23; // rax
  int v24; // ecx
  CHandle<CBaseEntity> *m_pMemory; // rdx
  int v26; // r8d
  CHandle<CBaseEntity> *v27; // rax
  __int64 v28; // rdi
  uint32 m_Index; // ecx
  __int16 v30; // si
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CEntityInstance *v33; // rdx
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC_Hero *v35; // rdi
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v5.m_Index = hTarget->m_Index;
  if ( hTarget->m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(hTarget->m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && v5.m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0
            && !m_pInstance->m_bIsWaitingToSpawn.m_Value
            && (m_Value & 0x100) == 0
            && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                 &this->m_hEntsHit,
                 hTarget) == -1 )
          {
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_tidehunter/tidehunter_spell_ravage_hit.vpcf",
                         2,
                         0,
                         0,
                         0);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v15 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v15, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
            v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v17 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 2, m_pInstance, 5, "attach_hitloc", *v16, 1);
            v18 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
            KeyValues::KeyValues(&kv, "modifier_tidehunter_ravage");
            KeyValues::SetFloat(&kv, "duration", v19);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_tidehunter_ravage", &kv, 0);
            m_Size = this->m_hEntsHit.m_Size;
            v22 = this->m_hEntsHit.m_Size;
            if ( m_Size == this->m_hEntsHit.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hEntsHit.m_Memory, 1);
              v22 = this->m_hEntsHit.m_Size;
            }
            this->m_hEntsHit.m_Size = v22 + 1;
            v23 = &this->m_hEntsHit.m_Memory.m_pMemory[m_Size];
            if ( v23 != 0 )
              v23->m_Index = hTarget->m_Index;
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Tidehunter.RavageDamage", 0.0, 0, 0);
            if ( !this->m_bAwardedKillEater )
            {
              v24 = this->m_hEntsHit.m_Size;
              if ( v24 > 3 )
              {
                m_pMemory = this->m_hEntsHit.m_Memory.m_pMemory;
                v26 = 0;
                v27 = m_pMemory + 1;
                v28 = &m_pMemory[v24 - 1 + 1];
                while ( 1 )
                {
                  m_Index = m_pMemory->m_Index;
                  if ( m_pMemory->m_Index + 2 > 1 )
                  {
                    v30 = m_pMemory->m_Index;
                    v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
                    if ( v31 != 0 )
                    {
                      v32 = &v31[v30 & 0x1FF];
                      if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
                      {
                        v33 = v32->m_pInstance;
                        if ( v33 != 0 && BYTE3(v33[7]._vptr_IHandleEntity) != 0 )
                          v26 -= ((v33[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) - 1;
                      }
                    }
                  }
                  m_pMemory = v27;
                  if ( v27 == v28 )
                    break;
                  ++v27;
                }
                if ( v26 > 3 )
                {
                  v34 = CDOTABaseAbility::GetCaster(this);
                  if ( v34 != 0 && (v34->m_iUnitType & 1) != 0 )
                    v35 = v34;
                  else
                    v35 = 0;
                  EconEntity_OnOwnerKillEaterEvent(
                    v35,
                    0,
                    kill_eater_event_t::kKillEaterEventType_Tide_GoodRavages,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                  this->m_bAwardedKillEater = 1;
                }
              }
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Tidehunter_Ravage::GetAbilityDamageToTargetOverInterval  (line 728, @0x0000000002a420b0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Tidehunter_Ravage::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tidehunter_Ravage *const this,
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


// CDOTA_Ability_Tidehunter_Ravage::GetStunDuration  (line 738, @0x0000000002a40f70, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Tidehunter_Ravage::GetStunDuration(CDOTA_Ability_Tidehunter_Ravage *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Tidehunter_Ravage::~CDOTA_Modifier_Tidehunter_Ravage  (line 746, @0x0000000002a650f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::~CDOTA_Modifier_Tidehunter_Ravage(
        CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AC4F0;
  this->_vptr_CVerticalMotionController = &off_43AC7E0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tidehunter_Ravage::~CDOTA_Modifier_Tidehunter_Ravage  (line 746, @0x0000000002a65120, libserver.so)  // inlines: ~CDOTA_Modifier_Tidehunter_Ravage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::~CDOTA_Modifier_Tidehunter_Ravage(
        CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  this->_vptr_CDOTA_Buff = &off_43AC4F0;
  this->_vptr_CVerticalMotionController = &off_43AC7E0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tidehunter_Ravage::IsStunDebuff  (line 760, @0x0000000002a61780, libserver.so)
bool __fastcall CDOTA_Modifier_Tidehunter_Ravage::IsStunDebuff(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  return 1;
}


// CDOTA_Modifier_Tidehunter_Ravage::GetAttributes  (line 762, @0x0000000002a65bb0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Tidehunter_Ravage::GetAttributes(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Tidehunter_Ravage::IsVerticalMotionValidToApply  (line 765, @0x0000000002a61790, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tidehunter_Ravage::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tidehunter_Ravage::GetEffectName  (line 770, @0x0000000002a617c0, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Tidehunter_Ravage::GetEffectName(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Tidehunter_Ravage::GetEffectAttachType  (line 771, @0x0000000002a617d0, libserver.so)
int __fastcall CDOTA_Modifier_Tidehunter_Ravage::GetEffectAttachType(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  return 7;
}


// CDOTA_Modifier_Tidehunter_Ravage::DeclareFunctions  (line 787, @0x0000000002a3f820, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tidehunter_Ravage::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::DeclareFunctions(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Tidehunter_Ravage::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Tidehunter_Ravage::GetOverrideAnimation  (line 794, @0x0000000002a3f840, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tidehunter_Ravage::GetOverrideAnimation(
        CDOTA_Modifier_Tidehunter_Ravage *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Tidehunter_Ravage::CheckState  (line 801, @0x0000000002a3f860, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::CheckState(
        CDOTA_Modifier_Tidehunter_Ravage *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Tidehunter_Ravage::OnCreated  (line 810, @0x0000000002a42610, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::OnCreated(
        CDOTA_Modifier_Tidehunter_Ravage *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // rax

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
  }
  else if ( !this->m_bDamageApplied )
  {
    CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(this);
  }
}


// CDOTA_Modifier_Tidehunter_Ravage::UpdateVerticalMotion  (line 829, @0x0000000002a42790, libserver.so)  // inlines: TryToApplyDamage
// calls: CVerticalMotionController::UpdateSimpleAirTime, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::UpdateVerticalMotion(
        CDOTA_Modifier_Tidehunter_Ravage *const this,
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

  v8 = &this->CVerticalMotionController;
  v9 = *&v8[1]._vptr_CVerticalMotionController + a3;
  v10 = *(&v8->m_nPriority + 1);
  *&v8[1]._vptr_CVerticalMotionController = v9;
  if ( CVerticalMotionController::UpdateSimpleAirTime(v8, me, v10, v9, 0.51999998, 350.0, a7) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
    if ( !this->m_bDamageApplied )
      CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(this);
  }
}


// CDOTA_Modifier_Tidehunter_Ravage::OnVerticalMotionInterrupted  (line 844, @0x0000000002a426d0, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1508);
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(this);
}


// CDOTA_Modifier_Tidehunter_Ravage::OnDestroy  (line 854, @0x0000000002a42720, libserver.so)  // inlines: TryToApplyDamage
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture, CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::OnDestroy(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveVerticalMotionController(v3, &this->CVerticalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v4, 1508);
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(this);
}


// CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage  (line 866, @0x0000000002a425a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
// callers: CDOTA_Modifier_Tidehunter_Ravage::OnCreated, CDOTA_Modifier_Tidehunter_Ravage::OnVerticalMotionInterrupted, CDOTA_Modifier_Tidehunter_Ravage::OnDestroy, CDOTA_Modifier_Tidehunter_Ravage::UpdateVerticalMotion, CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(CDOTA_Modifier_Tidehunter_Ravage *const this)
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


// CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage  (line 866, @0x0000000002a4c3b0, libserver.so)
// calls: CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage
void __fastcall CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(CDOTA_Modifier_Tidehunter_Ravage *const this)
{
  if ( !this->m_bDamageApplied )
    CDOTA_Modifier_Tidehunter_Ravage::TryToApplyDamage(this);
}


