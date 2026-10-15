// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:31
class CDOTA_Unit_Hero_Silencer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Silencer(CDOTA_Unit_Hero_Silencer &);
	CDOTA_Unit_Hero_Silencer(CDOTA_Unit_Hero_Silencer &);
	CDOTA_Unit_Hero_Silencer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Silencer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:50
class C_CDOTA_Unit_Hero_Silencer_MapInstall {
	C_CDOTA_Unit_Hero_Silencer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:60
class CDOTA_Modifier_Silencer_Int_Steal : public CDOTA_Buff {
public:

	CDOTA_Modifier_Silencer_Int_Steal();
	virtual bool IsPermanent();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Silencer_Int_Steal();

	// vtable[23] IsPermanent
	// vtable[53] GetMatchPermanentBuff
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:154
class CDOTA_Ability_Silencer_CurseOfTheSilent : public CDOTABaseAbility {
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
	CDOTA_Ability_Silencer_CurseOfTheSilent(CDOTA_Ability_Silencer_CurseOfTheSilent &);
	CDOTA_Ability_Silencer_CurseOfTheSilent(CDOTA_Ability_Silencer_CurseOfTheSilent &);
	CDOTA_Ability_Silencer_CurseOfTheSilent();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Silencer_CurseOfTheSilent();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:169
class C_CDOTA_Ability_Silencer_CurseOfTheSilent_MapInstall {
	C_CDOTA_Ability_Silencer_CurseOfTheSilent_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:255
class CDOTA_Modifier_Silencer_CurseOfTheSilent : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int nFxIndex;  // +0xbac
	int penalty_duration;  // +0xbb0
	int movespeed;  // +0xbb4
	CDOTA_Modifier_Silencer_CurseOfTheSilent();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Silencer_CurseOfTheSilent();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[56] OnIntervalThink
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:373
class CDOTA_Ability_Silencer_GlaivesOfWisdom : public CDOTABaseAbility {
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
	CDOTA_Ability_Silencer_GlaivesOfWisdom(CDOTA_Ability_Silencer_GlaivesOfWisdom &);
	CDOTA_Ability_Silencer_GlaivesOfWisdom(CDOTA_Ability_Silencer_GlaivesOfWisdom &);
	CDOTA_Ability_Silencer_GlaivesOfWisdom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Silencer_GlaivesOfWisdom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:387
class C_CDOTA_Ability_Silencer_GlaivesOfWisdom_MapInstall {
	C_CDOTA_Ability_Silencer_GlaivesOfWisdom_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:414
class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public CDOTA_Buff {
public:

private:

	float intellect_damage_pct;  // +0xba8

	CDOTA_Modifier_Silencer_GlaivesOfWisdom();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Silencer_GlaivesOfWisdom();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:546
class CDOTA_Ability_Silencer_LastWord : public CDOTABaseAbility {
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
	CDOTA_Ability_Silencer_LastWord(CDOTA_Ability_Silencer_LastWord &);
	CDOTA_Ability_Silencer_LastWord(CDOTA_Ability_Silencer_LastWord &);
	CDOTA_Ability_Silencer_LastWord();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_Silencer_LastWord();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:600
class CDOTA_Modifier_Silencer_LastWord : public CDOTA_Buff {
public:

private:

	int duration;  // +0xba8
	bool spellcast;  // +0xbac

	int damage;  // +0xbb0
	float debuff_duration;  // +0xbb4
	CDOTA_Modifier_Silencer_LastWord();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t OnAbilityEndChannel(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	void CheckTriggerSilence(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Silencer_LastWord();

	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:759
class CDOTA_Modifier_Silencer_LastWord_Disarm : public CDOTA_Buff {
public:

	CDOTA_Modifier_Silencer_LastWord_Disarm(CDOTA_Modifier_Silencer_LastWord_Disarm &);
	CDOTA_Modifier_Silencer_LastWord_Disarm(const CDOTA_Modifier_Silencer_LastWord_Disarm &);
	CDOTA_Modifier_Silencer_LastWord_Disarm();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Silencer_LastWord_Disarm();

	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:782
class CDOTA_Ability_Silencer_GlobalSilence : public CDOTABaseAbility {
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
	CDOTA_Ability_Silencer_GlobalSilence(CDOTA_Ability_Silencer_GlobalSilence &);
	CDOTA_Ability_Silencer_GlobalSilence(CDOTA_Ability_Silencer_GlobalSilence &);
	CDOTA_Ability_Silencer_GlobalSilence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_Silencer_GlobalSilence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:798
class C_CDOTA_Ability_Silencer_GlobalSilence_MapInstall {
	C_CDOTA_Ability_Silencer_GlobalSilence_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_silencer.cpp:908
class CDOTA_Modifier_Silencer_GlobalSilence : public CDOTA_Buff {
public:

	CDOTA_Modifier_Silencer_GlobalSilence();
	virtual void OnDestroy();
	virtual bool IsDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Silencer_GlobalSilence();

	// vtable[60] OnDestroy
	// vtable[12] IsDebuff
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[7] GetAttributes
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Silencer::~CDOTA_Unit_Hero_Silencer  (line 31, @0x0000000002c07230, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Silencer::~CDOTA_Unit_Hero_Silencer(CDOTA_Unit_Hero_Silencer *const this)
{
  this->_vptr_IHandleEntity = &off_455A350;
  this->_vptr_INextBotEventResponder = &off_455B330;
  this->_vptr_CObstructionObject = &off_455B660;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Silencer::~CDOTA_Unit_Hero_Silencer  (line 31, @0x0000000002c07270, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Silencer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Silencer::~CDOTA_Unit_Hero_Silencer(CDOTA_Unit_Hero_Silencer *const this)
{
  this->_vptr_IHandleEntity = &off_455A350;
  this->_vptr_INextBotEventResponder = &off_455B330;
  this->_vptr_CObstructionObject = &off_455B660;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Silencer::Schema_DynamicBinding  (line 33, @0x0000000002bff990, libserver.so)
// globals: CDOTA_Unit_Hero_Silencer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Silencer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Silencer *const this)
{
  return CDOTA_Unit_Hero_Silencer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002bff9c0, libserver.so)
// globals: CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002bff9d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Silencer>
void __fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002bff9f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002bffa10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002bffa20, libserver.so)
// globals: CDOTA_Unit_Hero_Silencer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Silencer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002c027b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002c04640, libserver.so)  // inlines: CDOTA_Unit_Hero_Silencer, Construct<CDOTA_Unit_Hero_Silencer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_455A350;
    *(p + 236) = &off_455B330;
    *(p + 257) = &off_455B660;
  }
  return p;
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002c0b4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002c0b730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Silencer::GetEntityClassInternal  (line 33, @0x0000000002c15ff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_silencer", "CDOTA_Unit_Hero_Silencer"
// globals: `guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass, CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass, __dso_handle, CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo, CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Silencer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass);
    CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass._vptr_CEntityClass = off_455A2D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Silencer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SilencerClass != 0 )
    return &CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo,
      "CDOTA_Unit_Hero_Silencer",
      "npc_dota_hero_silencer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo);
  }
  CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass.m_pClassInfo = &CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo;
  CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SilencerClass = &CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass;
  CDOTA_Unit_Hero_Silencer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SilencerClassInfo.m_pClass = &CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass;
  CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SilencerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Silencer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SilencerClass;
}


// CDOTA_Unit_Hero_Silencer::Spawn  (line 38, @0x0000000002c06d10, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "silencer_glaives_of_wisdom", "modifier_silencer_int_steal"
void __fastcall CDOTA_Unit_Hero_Silencer::Spawn(
        CDOTA_Unit_Hero_Silencer *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *AbilityByName; // r13
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "silencer_glaives_of_wisdom", 0);
  KeyValues::KeyValues(&kv, "modifier_silencer_int_steal");
  CDOTA_BaseNPC::AddNewModifier(this, this, AbilityByName, "modifier_silencer_int_steal", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Hero_Silencer::YouForgotToImplementOrDeclareServerClass  (line 50, @0x0000000002bd3930, libserver.so)
int __fastcall CDOTA_Unit_Hero_Silencer::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Silencer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Silencer::GetServerClass  (line 50, @0x0000000002bdc3f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Silencer::GetServerClass(CDOTA_Unit_Hero_Silencer *const this)
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


// CDOTA_Modifier_Silencer_Int_Steal::~CDOTA_Modifier_Silencer_Int_Steal  (line 60, @0x0000000002c034f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silencer_Int_Steal::~CDOTA_Modifier_Silencer_Int_Steal(
        CDOTA_Modifier_Silencer_Int_Steal *const this)
{
  this->_vptr_CDOTA_Buff = &off_455B6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silencer_Int_Steal::~CDOTA_Modifier_Silencer_Int_Steal  (line 60, @0x0000000002c03510, libserver.so)  // inlines: ~CDOTA_Modifier_Silencer_Int_Steal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silencer_Int_Steal::~CDOTA_Modifier_Silencer_Int_Steal(
        CDOTA_Modifier_Silencer_Int_Steal *const this)
{
  this->_vptr_CDOTA_Buff = &off_455B6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_Int_Steal::IsPermanent  (line 65, @0x0000000002bffa30, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_Int_Steal::IsPermanent(CDOTA_Modifier_Silencer_Int_Steal *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_Int_Steal::GetMatchPermanentBuff  (line 69, @0x0000000002bffa40, libserver.so)
EMatchPermanentBuff __fastcall CDOTA_Modifier_Silencer_Int_Steal::GetMatchPermanentBuff(
        CDOTA_Modifier_Silencer_Int_Steal *const this)
{
  return EMatchPermanentBuff::MATCH_PERMANENT_BUFF_SILENCER_INT_STEAL;
}


// CDOTA_Modifier_Silencer_Int_Steal::DeclareFunctions  (line 78, @0x0000000002bd3940, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Silencer_Int_Steal::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silencer_Int_Steal::DeclareFunctions(CDOTA_Modifier_Silencer_Int_Steal *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Silencer_Int_Steal::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Silencer_Int_Steal::OnDeath  (line 85, @0x0000000002bdabe0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC_Hero::ModifyIntellect, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControl
// strings: "modifier_silencer_int_steal", "particles/units/heroes/hero_silencer/silencer_last_word_steal.vpcf", "attach_hitloc", "particles/units/heroes/hero_silencer/silencer_last_word_steal_count.vpcf", "particles/units/heroes/hero_silencer/silencer_last_word_victim_count.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_Int_Steal::OnDeath(
        CDOTA_Modifier_Silencer_Int_Steal *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC_Hero *v11; // rbx
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // rax
  CDOTA_BaseNPC_Hero *v17; // r13
  int v18; // r14d
  float v19; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v21; // rbx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v24; // xmm1_4
  float v25; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v29; // rax
  const Vector *v30; // r15
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  int v34; // ebx
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  int v38; // ebx
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax

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
  v7 = params->hunit.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hunit.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || !v11->m_bIsDOTANPC
    || (v11->m_iUnitType & 1) == 0 )
  {
    v11 = 0;
  }
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0
    && m_pInstance != 0
    && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value
    && v11 != 0
    && (*(v11->_vptr_IHandleEntity + 438))(v11) == 0
    && (*(v11->_vptr_IHandleEntity + 436))(v11) == 0
    && (v11->m_iUnitType & 1) != 0 )
  {
    m_Value = v11->m_iTeamNum.m_Value;
    if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      v15 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::GetRangeToUnit(v15, v11) < 925.0 || CDOTA_Buff::GetParent(this) == m_pInstance )
      {
        v16 = (*(v11->_vptr_IHandleEntity + 390))(v11);
        v17 = v16;
        if ( v16 != 0 )
        {
          if ( (*(v16 + 2088) & 1) == 0 )
            v17 = v11;
        }
        else
        {
          v17 = v11;
        }
        v18 = 2;
        v19 = v17->m_flIntellect.m_Value - 1.0;
        if ( v19 <= 2.0 )
          v18 = v19;
        Caster = CDOTA_Buff::GetCaster(this);
        v21 = Caster;
        if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
        {
          v22 = CDOTA_Buff::GetCaster(this);
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v22, "modifier_silencer_int_steal", 0);
          if ( ModifierByName != 0 )
          {
            (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
            (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
          }
          CDOTA_BaseNPC_Hero::ModifyIntellect(v21, v18, v24);
          CDOTA_BaseNPC_Hero::ModifyIntellect(v17, -v18, v25);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_silencer/silencer_last_word_steal.vpcf",
                       2,
                       v21,
                       0,
                       0);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
          v29 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 0, v21, 5, "attach_hitloc", *AbsOrigin, 1);
          v30 = CBaseEntity::GetAbsOrigin(v17);
          v31 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v31, Particle, 1, v17, 5, "attach_hitloc", *v30, 1);
          v32 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v32, Particle);
          v33 = GetParticleManager();
          v34 = CDOTA_ParticleManager::CreateParticle(
                  v33,
                  "particles/units/heroes/hero_silencer/silencer_last_word_steal_count.vpcf",
                  7,
                  v21,
                  0,
                  0);
          v35 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v35, v34, 1, COERCE_DOUBLE(COERCE_UNSIGNED_INT((v18 + 10))), 0.0);
          v36 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v36, v34);
          v37 = GetParticleManager();
          v38 = CDOTA_ParticleManager::CreateParticle(
                  v37,
                  "particles/units/heroes/hero_silencer/silencer_last_word_victim_count.vpcf",
                  7,
                  v17,
                  0,
                  0);
          v39 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v39, v38, 1, COERCE_DOUBLE(COERCE_UNSIGNED_INT((v18 + 10))), 0.0);
          v40 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v40, v38);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::~CDOTA_Ability_Silencer_CurseOfTheSilent  (line 154, @0x0000000002c05850, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::~CDOTA_Ability_Silencer_CurseOfTheSilent(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  this->_vptr_IHandleEntity = &off_455BA50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::~CDOTA_Ability_Silencer_CurseOfTheSilent  (line 154, @0x0000000002c05870, libserver.so)  // inlines: ~CDOTA_Ability_Silencer_CurseOfTheSilent
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::~CDOTA_Ability_Silencer_CurseOfTheSilent(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  this->_vptr_IHandleEntity = &off_455BA50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::Schema_DynamicBinding  (line 156, @0x0000000002bffa50, libserver.so)
// globals: CDOTA_Ability_Silencer_CurseOfTheSilent::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  return CDOTA_Ability_Silencer_CurseOfTheSilent::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 156, @0x0000000002bffa60, libserver.so)
// globals: CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::DestructInstance  (line 156, @0x0000000002bffa70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Silencer_CurseOfTheSilent>
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::FreeInstance  (line 156, @0x0000000002bffa90, libserver.so)
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::CanAllocate  (line 156, @0x0000000002bffab0, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 156, @0x0000000002bffac0, libserver.so)
// globals: CDOTA_Ability_Silencer_CurseOfTheSilent::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_CurseOfTheSilent::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::AllocateInstance  (line 156, @0x0000000002c027f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::ConstructInstance  (line 156, @0x0000000002c04cd0, libserver.so)  // inlines: CDOTA_Ability_Silencer_CurseOfTheSilent, Construct<CDOTA_Ability_Silencer_CurseOfTheSilent>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_455BA50;
  }
  return p;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x0000000002c0aeb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x0000000002c0aed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal  (line 156, @0x0000000002c16140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "silencer_curse_of_the_silent", "CDOTA_Ability_Silencer_CurseOfTheSilent"
// globals: `guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass, CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass, __dso_handle, CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo, CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo
CEntityClass *__cdecl CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass);
    CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass._vptr_CEntityClass = off_455B9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass);
    __cxa_atexit(
      CDOTA_Ability_Silencer_CurseOfTheSilent::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Silencer_CurseOfTheSilentClass != 0 )
    return &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass;
  if ( `guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo,
      "CDOTA_Ability_Silencer_CurseOfTheSilent",
      "silencer_curse_of_the_silent",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo);
  }
  CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass.m_pClassInfo = &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo;
  CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass.m_pBaseClassInfo = CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Silencer_CurseOfTheSilentClass = &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass;
  CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClassInfo.m_pClass = &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass;
  CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Silencer_CurseOfTheSilentClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Silencer_CurseOfTheSilent::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_CurseOfTheSilentClass;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::GetAOERadius  (line 160, @0x0000000002c1a440, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::GetAOERadius(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::IsHiddenWhenStolen  (line 163, @0x0000000002bffad0, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::IsHiddenWhenStolen(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::YouForgotToImplementOrDeclareServerClass  (line 169, @0x0000000002bd3960, libserver.so)
int __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  return 0;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::GetServerClass  (line 169, @0x0000000002bdc830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::GetServerClass(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
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


// CDOTA_Ability_Silencer_CurseOfTheSilent::OnSpellStart  (line 178, @0x0000000002bea710, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, Vector, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCursorPosition, CBaseEntity::GetAbsOrigin, VectorNormalize, DOTA_EmitSoundLocationWithCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (20 total)
// strings: "Hero_Silencer.Curse.Cast", "Hero_Silencer.Curse", "particles/units/heroes/hero_silencer/silencer_curse_cast.vpcf", "attach_attack2", "particles/units/heroes/hero_silencer/silencer_curse_aoe.vpcf", "modifier_silencer_curse_of_the_silent" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::OnSpellStart(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  unsigned int v6; // xmm2_4
  unsigned int v7; // xmm0_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  __m128i v17; // xmm3
  float v18; // r13d
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rbx
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  __int64 v24; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v26; // rdx
  uint32 m_Index; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v32; // rax
  Vector vPos; // [rsp+20h] [rbp-A0h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Silencer.Curse.Cast", 0.0, 0, 0);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  *&v6 = vPos.x - AbsOrigin->x;
  *&v7 = vPos.y - AbsOrigin->y;
  vDirection.z = vPos.z - AbsOrigin->z;
  *&vDirection.x = __PAIR64__(v7, v6);
  VectorNormalize(&vDirection);
  v8 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Silencer.Curse", v8);
  v9 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_silencer/silencer_curse_cast.vpcf",
                  2,
                  v9,
                  0,
                  0);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, v9, 0, v11, 5, "attach_attack2", vec3_invalid, 1);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v9, 1, *&vDirection.x, vDirection.z);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, v9);
  v15 = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  v15,
                  "particles/units/heroes/hero_silencer/silencer_curse_aoe.vpcf",
                  2,
                  0,
                  0,
                  0);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v9, 0, *&vPos.x, vPos.z);
  *v17.m128i_i32 = LevelSpecialValue;
  LODWORD(entities.m_Memory.m_pMemory) = 0;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  *&entities.m_Size = v17.m128i_u32[0];
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, v9, 1, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, v9);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v21 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v22 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v22->m_iTeamNum.m_Value, &vPosition, v21, v18, &entities, 2, 19, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_silencer_curse_of_the_silent");
  KeyValues::SetFloat(&kv, "duration", v23);
  v24 = 0;
  for ( i = 0; entities.m_Size > i; ++v24 )
  {
    while ( 1 )
    {
      v26 = &entities.m_Memory.m_pMemory[v24];
      m_Index = entities.m_Memory.m_pMemory[v24].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v28 = v26->m_Index;
        v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26->m_Index) >> 9) & 0x3F];
        if ( v29 != 0 )
        {
          v30 = &v29[v28 & 0x1FF];
          if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
          {
            m_pInstance = v30->m_pInstance;
            if ( v30->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v24;
      if ( entities.m_Size <= i )
        goto LABEL_11;
    }
    v32 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v32, this, "modifier_silencer_curse_of_the_silent", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Silencer.Curse.Impact", 0.0, 0, 0);
    ++i;
  }
LABEL_11:
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::GetAbilityDamageToTargetOverInterval  (line 233, @0x0000000002befca0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this,
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
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Silencer_CurseOfTheSilent::GetSlowDuration  (line 246, @0x0000000002befd40, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Silencer_CurseOfTheSilent::GetSlowDuration(
        CDOTA_Ability_Silencer_CurseOfTheSilent *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::~CDOTA_Modifier_Silencer_CurseOfTheSilent  (line 255, @0x0000000002c034a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::~CDOTA_Modifier_Silencer_CurseOfTheSilent(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  this->_vptr_CDOTA_Buff = &off_455C510;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::~CDOTA_Modifier_Silencer_CurseOfTheSilent  (line 255, @0x0000000002c034c0, libserver.so)  // inlines: ~CDOTA_Modifier_Silencer_CurseOfTheSilent
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::~CDOTA_Modifier_Silencer_CurseOfTheSilent(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  this->_vptr_CDOTA_Buff = &off_455C510;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::IsDebuff  (line 260, @0x0000000002bffae0, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::IsDebuff(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::GetAttributes  (line 264, @0x0000000002bffaf0, libserver.so)
int __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::GetAttributes(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  return 6;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::StatusEffectPriority  (line 269, @0x0000000002bffb00, libserver.so)
int __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::StatusEffectPriority(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  return 10;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::OnCreated  (line 282, @0x0000000002bec1d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "penalty_duration"
void __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::OnCreated(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->penalty_duration = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->movespeed = 0;
    goto LABEL_5;
  }
  this->damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->penalty_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "penalty_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "movespeed", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::DeclareFunctions  (line 301, @0x0000000002bd3970, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Silencer_CurseOfTheSilent::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::DeclareFunctions(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[128].__pfn = CDOTA_Modifier_Silencer_CurseOfTheSilent::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::GetModifierMoveSpeedBonus_Percentage  (line 312, @0x0000000002be96a0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_silencer"
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this,
        const CModifierParams *const params)
{
  int movespeed; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  movespeed = this->movespeed;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_silencer", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    movespeed += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  *v5.m128i_i32 = movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::OnAbilityExecuted  (line 327, @0x0000000002bda550, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, __dynamic_cast, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_silencer/silencer_curse_aoe.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::OnAbilityExecuted(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  void *v11; // rax
  void *v12; // rbx
  void (__fastcall *v13)(CDOTA_Modifier_Silencer_CurseOfTheSilent *const, __int64, float); // rbx
  float v14; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax

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
          && params->ability.m_Index + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[params->ability.m_Index & 0x1FF];
            if ( v10 != 0 && params->ability.m_Index == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
            {
              v11 = __dynamic_cast(v10->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              v12 = v11;
              if ( v11 != 0 && (*(*v11 + 1912LL))(v11) != 0 && (*(*v12 + 1784LL))(v12) == 0 )
              {
                v13 = *(this->_vptr_CDOTA_Buff + 63);
                v14 = (*(this->_vptr_CDOTA_Buff + 33))(this);
                v13(this, 1, v14 + this->penalty_duration);
                ParticleManager = GetParticleManager();
                LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_silencer/silencer_curse_aoe.vpcf",
                                 2,
                                 0,
                                 0,
                                 0);
                Parent = CDOTA_Buff::GetParent(this);
                v17 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v17, v13, 0, Parent, 1, 0, vec3_invalid, 1);
                v18 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v18, v13, 1, COERCE_DOUBLE(1125515264), 0.0);
                v19 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v19, v13);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Silencer_CurseOfTheSilent::OnIntervalThink  (line 351, @0x0000000002bd5160, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage
// strings: "Hero_Silencer.Curse_Tick"
void __fastcall CDOTA_Modifier_Silencer_CurseOfTheSilent::OnIntervalThink(
        CDOTA_Modifier_Silencer_CurseOfTheSilent *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  void (__fastcall *v6)(CDOTA_Modifier_Silencer_CurseOfTheSilent *const, __int64, float); // r12
  float v7; // xmm0_4
  float damage; // [rsp+Ch] [rbp-24h]

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 8) != 0 )
  {
    v6 = *(this->_vptr_CDOTA_Buff + 63);
    v7 = (*(this->_vptr_CDOTA_Buff + 33))(this);
    v6(this, 1, v7 + 1.0);
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(1, "Hero_Silencer.Curse_Tick", Parent);
    damage = this->damage;
    Ability = CDOTA_Buff::GetAbility(this);
    v4 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v4, Ability, damage, 2, 0);
  }
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::~CDOTA_Ability_Silencer_GlaivesOfWisdom  (line 373, @0x0000000002c058a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::~CDOTA_Ability_Silencer_GlaivesOfWisdom(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  this->_vptr_IHandleEntity = &off_455C870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::~CDOTA_Ability_Silencer_GlaivesOfWisdom  (line 373, @0x0000000002c058c0, libserver.so)  // inlines: ~CDOTA_Ability_Silencer_GlaivesOfWisdom
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::~CDOTA_Ability_Silencer_GlaivesOfWisdom(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  this->_vptr_IHandleEntity = &off_455C870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::Schema_DynamicBinding  (line 375, @0x0000000002bffb10, libserver.so)
// globals: CDOTA_Ability_Silencer_GlaivesOfWisdom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  return CDOTA_Ability_Silencer_GlaivesOfWisdom::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 375, @0x0000000002bffb20, libserver.so)
// globals: CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::DestructInstance  (line 375, @0x0000000002bffb30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Silencer_GlaivesOfWisdom>
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::FreeInstance  (line 375, @0x0000000002bffb50, libserver.so)
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::CanAllocate  (line 375, @0x0000000002bffb70, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 375, @0x0000000002bffb80, libserver.so)
// globals: CDOTA_Ability_Silencer_GlaivesOfWisdom::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_GlaivesOfWisdom::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::AllocateInstance  (line 375, @0x0000000002c02830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::ConstructInstance  (line 375, @0x0000000002c04d00, libserver.so)  // inlines: CDOTA_Ability_Silencer_GlaivesOfWisdom, Construct<CDOTA_Ability_Silencer_GlaivesOfWisdom>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_455C870;
  }
  return p;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 375, @0x0000000002c0af00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 375, @0x0000000002c0af20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal  (line 375, @0x0000000002c16290, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "silencer_glaives_of_wisdom", "CDOTA_Ability_Silencer_GlaivesOfWisdom"
// globals: `guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass, CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass, __dso_handle, CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo, CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo
CEntityClass *__cdecl CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass);
    CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass._vptr_CEntityClass = off_455C7F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass);
    __cxa_atexit(
      CDOTA_Ability_Silencer_GlaivesOfWisdom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass != 0 )
    return &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass;
  if ( `guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo,
      "CDOTA_Ability_Silencer_GlaivesOfWisdom",
      "silencer_glaives_of_wisdom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo);
  }
  CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass.m_pClassInfo = &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo;
  CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass.m_pBaseClassInfo = CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass = &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass;
  CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClassInfo.m_pClass = &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass;
  CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Silencer_GlaivesOfWisdom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlaivesOfWisdomClass;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::GetIntrinsicModifierName  (line 379, @0x0000000002bffb90, libserver.so)
// strings: "modifier_silencer_glaives_of_wisdom"
const char *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::GetIntrinsicModifierName(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  return "modifier_silencer_glaives_of_wisdom";
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::ProcsMagicStick  (line 381, @0x0000000002bffba0, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::ProcsMagicStick(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  return 0;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::IsStealable  (line 382, @0x0000000002bffbb0, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::IsStealable(CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  return 0;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::YouForgotToImplementOrDeclareServerClass  (line 387, @0x0000000002bd39b0, libserver.so)
int __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
{
  return 0;
}


// CDOTA_Ability_Silencer_GlaivesOfWisdom::GetServerClass  (line 387, @0x0000000002bdc670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::GetServerClass(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this)
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


// CDOTA_Ability_Silencer_GlaivesOfWisdom::GetAbilityDamageToTargetOverInterval  (line 396, @0x0000000002befd60, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "intellect_damage_pct"
__int64 __fastcall CDOTA_Ability_Silencer_GlaivesOfWisdom::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Silencer_GlaivesOfWisdom *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  unsigned int v4; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  float fNumAttacksa; // [rsp+Ch] [rbp-24h]
  float fNumAttacksb; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v8 = Caster;
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      v9 = CDOTABaseAbility::GetCaster(this);
      fNumAttacksa = CDOTA_BaseNPC::GetAttacksPerSecond(v9) * fInterval;
      fNumAttacksb = fNumAttacksa
                   * (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "intellect_damage_pct", -1, 0) / 100.0);
      return ((*(v8->_vptr_IHandleEntity + 498))(v8) * fNumAttacksb);
    }
  }
  return v4;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::~CDOTA_Modifier_Silencer_GlaivesOfWisdom  (line 414, @0x0000000002c0a310, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::~CDOTA_Modifier_Silencer_GlaivesOfWisdom(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_455D330;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::~CDOTA_Modifier_Silencer_GlaivesOfWisdom  (line 414, @0x0000000002c0a380, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Silencer_GlaivesOfWisdom, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::~CDOTA_Modifier_Silencer_GlaivesOfWisdom(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_455D330;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::IsHidden  (line 419, @0x0000000002bffbc0, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::IsHidden(CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::DeclareFunctions  (line 441, @0x0000000002bd39c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttack(CModifierParams const&), CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::DeclareFunctions(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttack  (line 450, @0x0000000002bfc5b0, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::SpendMana, CDOTA_Buff::GetCaster, DOTA_EmitSound, CUtlMemory<short int, int>::Grow
// strings: "particles/units/heroes/hero_silencer/silencer_glaives_of_wisdom.vpcf", "Hero_Clinkz.SearingArrows"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttack(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v7; // r13
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r15
  int (**vptr_IHandleEntity)(...); // rax
  float v18; // xmm0_4
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r14
  int v22; // eax
  __int64 m_Size; // rbx
  int v24; // eax
  __int16 *v25; // rax
  CDOTA_BaseNPC *Caster; // rax
  UtlSymLargeId_t v27; // [rsp+0h] [rbp-40h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  v7 = Parent;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( v7 != m_pInstance )
    goto LABEL_7;
  v11 = params->htarget.m_Index;
  if ( v11 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[params->htarget.m_Index & 0x1FF]) == 0
    || v11 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
  {
    v14 = 0;
  }
  if ( v7 == 0 || !v7->m_bIsDOTANPC )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v16 = Ability;
  if ( v14 == 0 )
    goto LABEL_7;
  if ( Ability == 0 )
    goto LABEL_7;
  if ( (v7->m_nUnitState64.m_Value & 8) != 0 )
    goto LABEL_7;
  if ( LOBYTE(v14[71]._vptr_IHandleEntity) != 0 )
    goto LABEL_7;
  vptr_IHandleEntity = v14[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 1) != 0
    || (BYTE1(vptr_IHandleEntity) & 2) != 0
    || v16 != CDOTA_BaseNPC::GetCurrentActiveAbility(v7) && !v16->m_bAutoCastState.m_Value )
  {
    goto LABEL_7;
  }
  LODWORD(result.m_szVal) = (*(v16->_vptr_IHandleEntity + 256))(v16, v14);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    v18 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
    *&result.m_eType = 1;
    if ( v18 <= v7->m_flMana.m_Value )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      MakeEntitySystemString("particles/units/heroes/hero_silencer/silencer_glaives_of_wisdom.vpcf");
      RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v27;
      v22 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
      CDOTA_BaseNPC::SpendMana(v7, v22, v16, 0);
      m_Size = this->m_InFlightAttackRecords.m_Size;
      v24 = this->m_InFlightAttackRecords.m_Size;
      if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
        v24 = this->m_InFlightAttackRecords.m_Size;
      }
      this->m_InFlightAttackRecords.m_Size = v24 + 1;
      v25 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
      if ( v25 != 0 )
        *v25 = RecordByIndex->m_iRecord;
      Caster = CDOTA_Buff::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Clinkz.SearingArrows", Caster);
      goto LABEL_7;
    }
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackLanded  (line 482, @0x0000000002be5e50, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, ApplyDamage, SendOverheadEventMessage, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Silencer.GlaivesOfWisdom.Damage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackLanded(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rbx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v15; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      v11 = v10;
    else
      v11 = 0;
    v12 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    v13 = v12;
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( v11 != 0
        && Ability != 0
        && LOBYTE(v11[71]._vptr_IHandleEntity) == 0
        && (BYTE1(v11[58]._vptr_IHandleEntity) & 1) == 0
        && (*(Ability->_vptr_IHandleEntity + 256))(Ability, v11) == 0 )
      {
        flDamage = (0.0099999998 * (*(v13->_vptr_IHandleEntity + 498))(v13)) * this->intellect_damage_pct;
        v15 = CDOTA_Buff::GetAbility(this);
        ApplyDamage(v13, v11, v15, flDamage, 4, 0);
        SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v11, flDamage, 0);
        CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Silencer.GlaivesOfWisdom.Damage", 0.0, 0, 0);
      }
    }
    else
    {
      CDOTA_Buff::GetAbility(this);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackFail  (line 514, @0x0000000002be6040, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnAttackFail(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnCreated  (line 528, @0x0000000002bf28e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "intellect_damage_pct"
void __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnCreated(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->intellect_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "intellect_damage_pct",
                                   -1,
                                   0);
  else
    this->intellect_damage_pct = 0.0;
}


// CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnRefresh  (line 535, @0x0000000002bf2880, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "intellect_damage_pct"
void __fastcall CDOTA_Modifier_Silencer_GlaivesOfWisdom::OnRefresh(
        CDOTA_Modifier_Silencer_GlaivesOfWisdom *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->intellect_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                   Ability,
                                   "intellect_damage_pct",
                                   -1,
                                   0);
  else
    this->intellect_damage_pct = 0.0;
}


// CDOTA_Ability_Silencer_LastWord::~CDOTA_Ability_Silencer_LastWord  (line 546, @0x0000000002c058f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Silencer_LastWord::~CDOTA_Ability_Silencer_LastWord(
        CDOTA_Ability_Silencer_LastWord *const this)
{
  this->_vptr_IHandleEntity = &off_455D690;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Silencer_LastWord::~CDOTA_Ability_Silencer_LastWord  (line 546, @0x0000000002c05910, libserver.so)  // inlines: ~CDOTA_Ability_Silencer_LastWord
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Silencer_LastWord::~CDOTA_Ability_Silencer_LastWord(
        CDOTA_Ability_Silencer_LastWord *const this)
{
  this->_vptr_IHandleEntity = &off_455D690;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Silencer_LastWord::Schema_DynamicBinding  (line 548, @0x0000000002bffbd0, libserver.so)
// globals: CDOTA_Ability_Silencer_LastWord::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_LastWord::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_LastWord *const this)
{
  return CDOTA_Ability_Silencer_LastWord::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 548, @0x0000000002bffbe0, libserver.so)
// globals: CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::DestructInstance  (line 548, @0x0000000002bffbf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Silencer_LastWord>
void __fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::FreeInstance  (line 548, @0x0000000002bffc10, libserver.so)
void __fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::CanAllocate  (line 548, @0x0000000002bffc30, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 548, @0x0000000002bffc40, libserver.so)
// globals: CDOTA_Ability_Silencer_LastWord::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_LastWord::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::AllocateInstance  (line 548, @0x0000000002c02870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::ConstructInstance  (line 548, @0x0000000002c04d30, libserver.so)  // inlines: CDOTA_Ability_Silencer_LastWord, Construct<CDOTA_Ability_Silencer_LastWord>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_455D690;
  }
  return p;
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 548, @0x0000000002c0af50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 548, @0x0000000002c0af70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal  (line 548, @0x0000000002c163e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Silencer_LastWord"
// globals: `guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass, CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass, __dso_handle, CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo, CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo
CEntityClass *__cdecl CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass);
    CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass._vptr_CEntityClass = off_455D610;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass);
    __cxa_atexit(
      CDOTA_Ability_Silencer_LastWord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Silencer_LastWordClass != 0 )
    return &CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass;
  if ( `guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo,
      "CDOTA_Ability_Silencer_LastWord",
      "silencer_last_word",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo);
  }
  CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass.m_pClassInfo = &CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo;
  CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass.m_pBaseClassInfo = CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Silencer_LastWordClass = &CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass;
  CDOTA_Ability_Silencer_LastWord::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_LastWordClassInfo.m_pClass = &CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass;
  CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Silencer_LastWordClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Silencer_LastWord::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_LastWordClass;
}


// CDOTA_Ability_Silencer_LastWord::HasSilence  (line 554, @0x0000000002bffc50, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_LastWord::HasSilence(CDOTA_Ability_Silencer_LastWord *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_LastWord::OnSpellStart  (line 561, @0x0000000002beeb90, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "modifier_silencer_last_word", "particles/units/heroes/hero_silencer/silencer_last_word_status_cast.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2", "Hero_Silencer.LastWord.Cast"
void __fastcall CDOTA_Ability_Silencer_LastWord::OnSpellStart(CDOTA_Ability_Silencer_LastWord *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r13
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r13
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "debuff_duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_silencer_last_word");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_silencer_last_word", &kv, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_silencer/silencer_last_word_status_cast.vpcf",
                      2,
                      v7,
                      0,
                      0);
      v9 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      v11 = CDOTABaseAbility::GetCaster(this);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v12, v7, 0, v11, 5, "attach_hitloc", *AbsOrigin, 1);
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v14, v7, 1, v13, 1, 0, vec3_invalid, 1);
      v15 = CDOTABaseAbility::GetCaster(this);
      v16 = CBaseEntity::GetAbsOrigin(v15);
      v17 = CDOTABaseAbility::GetCaster(this);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v18, v7, 2, v17, 5, "attach_attack1", *v16, 1);
      v19 = CDOTABaseAbility::GetCaster(this);
      v20 = CBaseEntity::GetAbsOrigin(v19);
      v21 = CDOTABaseAbility::GetCaster(this);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v22, v7, 3, v21, 5, "attach_attack2", *v20, 1);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v23, v7);
      v24 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Silencer.LastWord.Cast", v24);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Silencer_LastWord::GetAbilityDamageToTargetOverInterval  (line 588, @0x0000000002befe20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Silencer_LastWord::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Silencer_LastWord *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * LevelSpecialValue);
  }
  return result;
}


// CDOTA_Modifier_Silencer_LastWord::~CDOTA_Modifier_Silencer_LastWord  (line 600, @0x0000000002c03450, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silencer_LastWord::~CDOTA_Modifier_Silencer_LastWord(
        CDOTA_Modifier_Silencer_LastWord *const this)
{
  this->_vptr_CDOTA_Buff = &off_455E150;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silencer_LastWord::~CDOTA_Modifier_Silencer_LastWord  (line 600, @0x0000000002c03470, libserver.so)  // inlines: ~CDOTA_Modifier_Silencer_LastWord
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silencer_LastWord::~CDOTA_Modifier_Silencer_LastWord(
        CDOTA_Modifier_Silencer_LastWord *const this)
{
  this->_vptr_CDOTA_Buff = &off_455E150;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_LastWord::OnCreated  (line 628, @0x0000000002bf3be0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "particles/units/heroes/hero_silencer/silencer_last_word_status.vpcf", "attach_hitloc", "Hero_Silencer.LastWord.Target"
void __fastcall CDOTA_Modifier_Silencer_LastWord::OnCreated(
        CDOTA_Modifier_Silencer_LastWord *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->duration, "duration");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage, "damage");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "debuff_duration", -1, 0);
    this->debuff_duration = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->debuff_duration = 0.0;
  }
  this->spellcast = 0;
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_silencer/silencer_last_word_status.vpcf",
                      1,
                      Parent,
                      0,
                      Caster);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v15 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Silencer.LastWord.Target", v15);
}


// CDOTA_Modifier_Silencer_LastWord::OnIntervalThink  (line 648, @0x0000000002bd92e0, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "modifier_silencer_last_word_disarm", "modifier_silence", "particles/units/heroes/hero_silencer/silencer_last_word_dmg.vpcf", "attach_hitloc", "Hero_Silencer.LastWord.Damage"
void __fastcall CDOTA_Modifier_Silencer_LastWord::OnIntervalThink(CDOTA_Modifier_Silencer_LastWord *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float v3; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // r14
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm2
  float v11; // r15d
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_BaseNPC *v16; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( !Parent->m_bIsWaitingToSpawn.m_Value && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_silencer_last_word_disarm");
      KeyValues::SetFloat(&kv, "duration", v3);
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v6 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v6, Caster, Ability, "modifier_silencer_last_word_disarm", &kv, 0);
      v7 = CDOTA_Buff::GetAbility(this);
      v8 = CDOTA_Buff::GetCaster(this);
      v9 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v9, v8, v7, "modifier_silence", &kv, 0);
      *v10.m128i_i32 = this->damage;
      v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
      v12 = CDOTA_Buff::GetAbility(this);
      v13 = CDOTA_Buff::GetParent(this);
      v14 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v14, v13, v12, v11, 2, 0);
      v15 = CDOTA_Buff::GetCaster(this);
      v16 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_silencer/silencer_last_word_dmg.vpcf",
                       1,
                       v16,
                       0,
                       v15);
      v18 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
      v20 = CDOTA_Buff::GetParent(this);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, v16, 1, v20, 5, "attach_hitloc", *AbsOrigin, 1);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v22, v16);
      v23 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_Silencer.LastWord.Damage", v23);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Silencer_LastWord::DeclareFunctions  (line 670, @0x0000000002bd3a20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Silencer_LastWord::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_Silencer_LastWord::OnAbilityEndChannel(CModifierParams const&)
void __fastcall CDOTA_Modifier_Silencer_LastWord::DeclareFunctions(CDOTA_Modifier_Silencer_LastWord *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Silencer_LastWord::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[131].__delta = 0;
  this->m_Functions[131].__pfn = CDOTA_Modifier_Silencer_LastWord::OnAbilityEndChannel;
}


// CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence  (line 676, @0x0000000002be19f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsAbilityAnItem, IsInvulnerable, IsMagicImmune, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues, CDOTA_Buff::Destroy, _Unwind_Resume
// callers: CDOTA_Modifier_Silencer_LastWord::OnAbilityEndChannel, CDOTA_Modifier_Silencer_LastWord::OnAbilityExecuted
// strings: "modifier_silence", "modifier_silencer_last_word_disarm"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence(
        CDOTA_Modifier_Silencer_LastWord *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  unsigned __int8 m_Value; // r13
  float v14; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  float damage; // xmm1_4
  CDOTABaseAbility *v20; // r14
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v22; // rax
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-28h]

  v25 = __readfsqword(0x28u);
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
          && (params->ability.m_Index + 2 <= 1
           || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) == 0
           || (v9 = &v8[params->ability.m_Index & 0x1FF]) == 0
           || params->ability.m_Index != v9->m_EHandle.m_Index
           || v9->m_pInstance == 0
           || (*(v9->m_pInstance->_vptr_IHandleEntity + 223))(v9->m_pInstance) == 0) )
        {
          v10 = CEntityHandle::operator CEntityInstance *(&params->hunit);
          v11 = v10;
          if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
          {
            vptr_IHandleEntity = v10[58]._vptr_IHandleEntity;
            if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
              && !v11->m_bIsWaitingToSpawn.m_Value
              && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
            {
              m_Value = v11->m_iTeamNum.m_Value;
              if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
              {
                KeyValues::KeyValues(&kv, "modifier_silence");
                KeyValues::SetFloat(&kv, "duration", v14);
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v11, Caster, Ability, "modifier_silencer_last_word_disarm", &kv, 0);
                v17 = CDOTA_Buff::GetAbility(this);
                v18 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v11, v18, v17, "modifier_silence", &kv, 0);
                damage = this->damage;
                this->spellcast = 1;
                flDamage = damage;
                v20 = CDOTA_Buff::GetAbility(this);
                Parent = CDOTA_Buff::GetParent(this);
                v22 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v22, Parent, v20, flDamage, 2, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
}


// CDOTA_Modifier_Silencer_LastWord::OnAbilityExecuted  (line 703, @0x0000000002be1ca0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAbilityAnItem, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_LastWord::OnAbilityExecuted(
        CDOTA_Modifier_Silencer_LastWord *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4

  if ( params->ability.m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[params->ability.m_Index & 0x1FF]) != 0
    && params->ability.m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && ((*(m_pInstance->_vptr_IHandleEntity + 251))(v5->m_pInstance) < 0
     || (*(m_pInstance->_vptr_IHandleEntity + 239))(m_pInstance) == 0) )
  {
    if ( (*(m_pInstance->_vptr_IHandleEntity + 251))(m_pInstance) < 0 )
    {
      v8 = CEntityHandle::operator CEntityInstance *(&params->ability);
      if ( v8 == 0 || (*(v8->_vptr_IHandleEntity + 223))(v8) == 0 )
      {
        v9 = CEntityHandle::operator CEntityInstance *(&params->hunit);
        if ( v9 != 0 && v9->m_bIsDOTANPC && v9 == CDOTA_Buff::GetParent(this) )
        {
          (*(this->_vptr_CDOTA_Buff + 63))(this, 1, -1.0);
          CDOTA_Buff::StartIntervalThink(this, -1.0, v10);
        }
      }
    }
  }
  else
  {
    CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence(this, params);
  }
  return 1uLL;
}


// CDOTA_Modifier_Silencer_LastWord::OnAbilityEndChannel  (line 727, @0x0000000002be1c80, libserver.so)
// calls: CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence
ModifierVariant_t __fastcall CDOTA_Modifier_Silencer_LastWord::OnAbilityEndChannel(
        CDOTA_Modifier_Silencer_LastWord *const this,
        const CModifierParams *const params)
{
  CDOTA_Modifier_Silencer_LastWord::CheckTriggerSilence(this, params);
  return 1uLL;
}


// CDOTA_Modifier_Silencer_LastWord::OnDestroy  (line 738, @0x0000000002bd6650, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Silencer.LastWord.Target"
void __fastcall CDOTA_Modifier_Silencer_LastWord::OnDestroy(CDOTA_Modifier_Silencer_LastWord *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( this->spellcast )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CBaseEntity::StopSound(Parent, "Hero_Silencer.LastWord.Target");
  }
}


// CDOTA_Modifier_Silencer_LastWord::CheckState  (line 750, @0x0000000002bd3a60, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Silencer_LastWord::CheckState(
        CDOTA_Modifier_Silencer_LastWord *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::~CDOTA_Modifier_Silencer_LastWord_Disarm  (line 759, @0x0000000002c041e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::~CDOTA_Modifier_Silencer_LastWord_Disarm(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_455E430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::~CDOTA_Modifier_Silencer_LastWord_Disarm  (line 759, @0x0000000002c04200, libserver.so)  // inlines: ~CDOTA_Modifier_Silencer_LastWord_Disarm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::~CDOTA_Modifier_Silencer_LastWord_Disarm(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_455E430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::GetEffectAttachType  (line 765, @0x0000000002bffc60, libserver.so)
int __fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::GetEffectAttachType(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  return 7;
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::ShouldUseOverheadOffset  (line 766, @0x0000000002bffc70, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::ShouldUseOverheadOffset(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::GetStatusEffectName  (line 767, @0x0000000002bffc80, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast_half.vpcf"
const char *__fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::GetStatusEffectName(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  return "particles/status_fx/status_effect_iceblast_half.vpcf";
}


// CDOTA_Modifier_Silencer_LastWord_Disarm::StatusEffectPriority  (line 768, @0x0000000002bffc90, libserver.so)
int __fastcall CDOTA_Modifier_Silencer_LastWord_Disarm::StatusEffectPriority(
        CDOTA_Modifier_Silencer_LastWord_Disarm *const this)
{
  return 40;
}


// CDOTA_Ability_Silencer_GlobalSilence::~CDOTA_Ability_Silencer_GlobalSilence  (line 782, @0x0000000002c05940, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::~CDOTA_Ability_Silencer_GlobalSilence(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  this->_vptr_IHandleEntity = &off_455E7D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Silencer_GlobalSilence::~CDOTA_Ability_Silencer_GlobalSilence  (line 782, @0x0000000002c05960, libserver.so)  // inlines: ~CDOTA_Ability_Silencer_GlobalSilence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::~CDOTA_Ability_Silencer_GlobalSilence(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  this->_vptr_IHandleEntity = &off_455E7D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Silencer_GlobalSilence::Schema_DynamicBinding  (line 784, @0x0000000002bffca0, libserver.so)
// globals: CDOTA_Ability_Silencer_GlobalSilence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_GlobalSilence::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  return CDOTA_Ability_Silencer_GlobalSilence::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 784, @0x0000000002bffcb0, libserver.so)
// globals: CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::DestructInstance  (line 784, @0x0000000002bffcc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Silencer_GlobalSilence>
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::FreeInstance  (line 784, @0x0000000002bffce0, libserver.so)
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::CanAllocate  (line 784, @0x0000000002bffd00, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 784, @0x0000000002bffd10, libserver.so)
// globals: CDOTA_Ability_Silencer_GlobalSilence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Silencer_GlobalSilence::s_pSchemaBinding;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::AllocateInstance  (line 784, @0x0000000002c028b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::ConstructInstance  (line 784, @0x0000000002c04d60, libserver.so)  // inlines: CDOTA_Ability_Silencer_GlobalSilence, Construct<CDOTA_Ability_Silencer_GlobalSilence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_455E7D0;
  }
  return p;
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 784, @0x0000000002c0afa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 784, @0x0000000002c0afc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal  (line 784, @0x0000000002c16530, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "silencer_global_silence", "CDOTA_Ability_Silencer_GlobalSilence"
// globals: `guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass, CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass, __dso_handle, CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo, CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass);
    CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass._vptr_CEntityClass = off_455E750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass);
    __cxa_atexit(
      CDOTA_Ability_Silencer_GlobalSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Silencer_GlobalSilenceClass != 0 )
    return &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass;
  if ( `guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo,
      "CDOTA_Ability_Silencer_GlobalSilence",
      "silencer_global_silence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo);
  }
  CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass.m_pClassInfo = &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo;
  CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass.m_pBaseClassInfo = CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Silencer_GlobalSilenceClass = &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass;
  CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClassInfo.m_pClass = &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass;
  CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Silencer_GlobalSilenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Silencer_GlobalSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Silencer_GlobalSilenceClass;
}


// CDOTA_Ability_Silencer_GlobalSilence::GetAssociatedSecondaryAbilities  (line 790, @0x0000000002bffd20, libserver.so)
// strings: "silencer_curse_of_the_silent"
const char *__fastcall CDOTA_Ability_Silencer_GlobalSilence::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  return "silencer_curse_of_the_silent";
}


// CDOTA_Ability_Silencer_GlobalSilence::HasSilence  (line 795, @0x0000000002bffd30, libserver.so)
bool __fastcall CDOTA_Ability_Silencer_GlobalSilence::HasSilence(CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  return 1;
}


// CDOTA_Ability_Silencer_GlobalSilence::YouForgotToImplementOrDeclareServerClass  (line 798, @0x0000000002bd3a80, libserver.so)
int __fastcall CDOTA_Ability_Silencer_GlobalSilence::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  return 0;
}


// CDOTA_Ability_Silencer_GlobalSilence::GetServerClass  (line 798, @0x0000000002bdc9f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Silencer_GlobalSilence::GetServerClass(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
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


// CDOTA_Ability_Silencer_GlobalSilence::OnSpellStart  (line 810, @0x0000000002bf22b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsConsideredHero, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, FindUnitsInRadius, CDOTABaseAbility::GetDuration, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CBaseEntity::GetAbsOrigin (23 total)
// strings: "particles/units/heroes/hero_silencer/silencer_global_silence.vpcf", "attach_attack2", "modifier_silencer_global_silence", "particles/units/heroes/hero_silencer/silencer_global_silence_hero.vpcf", "attach_hitloc", "silencer_curse_of_the_silent" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Silencer_GlobalSilence::OnSpellStart(CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v33; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm3_4
  const Vector *durationInner; // [rsp+28h] [rbp-A8h]
  float Duration; // [rsp+34h] [rbp-9Ch]
  int pCurseAbilitya; // [rsp+38h] [rbp-98h]
  CDOTABaseAbility *pCurseAbility; // [rsp+38h] [rbp-98h]
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > TargetList; // [rsp+40h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+98h] [rbp-38h]

  TargetList.m_Memory.m_nAllocationCount = 0;
  v44 = __readfsqword(0x28u);
  TargetList.m_Memory.m_pMemory = 0;
  TargetList.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_silencer/silencer_global_silence.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, v4, 1, 0, vec3_invalid, 1);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Caster, 1, v6, 5, "attach_attack2", vec3_invalid, 1);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, Caster);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vec3_origin, 0, -1.0, &hEntities, 2, 3, 80, 0, 0);
  Duration = CDOTABaseAbility::GetDuration(this);
  if ( hEntities.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = &hEntities.m_Memory.m_pMemory[v10];
      m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
      if ( m_Index + 2 <= 1
        || (v14 = v12->m_Index,
            (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F]) == 0)
        || (v16 = &v15[v14 & 0x1FF]) == 0
        || m_Index != v16->m_EHandle.m_Index
        || (m_pInstance = v16->m_pInstance, v16->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      KeyValues::KeyValues(&kv, "modifier_silencer_global_silence");
      KeyValues::SetFloat(&kv, "duration", v18);
      v19 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_silencer_global_silence", &kv, 0);
      KeyValues::~KeyValues(&kv);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
      {
        v20 = GetParticleManager();
        pCurseAbilitya = CDOTA_ParticleManager::CreateParticle(
                           v20,
                           "particles/units/heroes/hero_silencer/silencer_global_silence_hero.vpcf",
                           2,
                           m_pInstance,
                           0,
                           0);
        v21 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v21, pCurseAbilitya, 0, m_pInstance, 1, 0, vec3_invalid, 1);
        durationInner = CBaseEntity::GetAbsOrigin(m_pInstance);
        v22 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          v22,
          pCurseAbilitya,
          1,
          m_pInstance,
          5,
          "attach_hitloc",
          *durationInner,
          1);
        v23 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v23, pCurseAbilitya);
        v24 = CDOTABaseAbility::GetCaster(this);
        if ( CDOTA_BaseNPC::HasScepter(v24) && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v25 = CDOTABaseAbility::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v25, "silencer_curse_of_the_silent", 0);
          pCurseAbility = AbilityByName;
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_silencer_curse_of_the_silent");
            KeyValues::SetFloat(&kv, "duration", v27);
            v28 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              v28,
              pCurseAbility,
              "modifier_silencer_curse_of_the_silent",
              &kv,
              0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Silencer.Curse.Impact", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
      ++v11;
      ++v10;
    }
    while ( hEntities.m_Size > v11 );
  }
  v29 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_Silencer.GlobalSilence.Cast", v29);
  v30 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(32, "Hero_Silencer.GlobalSilence.Effect", v30);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v33 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v33);
  v35 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v35,
    0,
    m_iAbilityID,
    1,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    Duration,
    v36);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&TargetList.m_Memory);
  if ( (TargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&TargetList.m_Memory);
}


// CDOTA_Ability_Silencer_GlobalSilence::GetAbilityDamageToTargetOverInterval  (line 872, @0x0000000002bd6500, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "silencer_curse_of_the_silent"
__int64 __fastcall CDOTA_Ability_Silencer_GlobalSilence::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Silencer_GlobalSilence *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v10; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster)
      && (v8 = CDOTABaseAbility::GetCaster(this),
          (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v8, "silencer_curse_of_the_silent", 0)) != 0) )
    {
      v10 = (*(AbilityByName->_vptr_IHandleEntity + 320))(AbilityByName, pTarget, 2, fInterval);
      return (v10 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CDOTA_Ability_Silencer_GlobalSilence::GetSlowDuration  (line 890, @0x0000000002bd4380, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName
// strings: "silencer_curse_of_the_silent"
float __fastcall CDOTA_Ability_Silencer_GlobalSilence::GetSlowDuration(
        CDOTA_Ability_Silencer_GlobalSilence *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster)
    && (v4 = CDOTABaseAbility::GetCaster(this),
        (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "silencer_curse_of_the_silent", 0)) != 0) )
  {
    return (*(AbilityByName->_vptr_IHandleEntity + 321))(AbilityByName);
  }
  else
  {
    return 0.0;
  }
}


// CDOTA_Modifier_Silencer_GlobalSilence::~CDOTA_Modifier_Silencer_GlobalSilence  (line 908, @0x0000000002c03400, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Silencer_GlobalSilence::~CDOTA_Modifier_Silencer_GlobalSilence(
        CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  this->_vptr_CDOTA_Buff = &off_455F290;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Silencer_GlobalSilence::~CDOTA_Modifier_Silencer_GlobalSilence  (line 908, @0x0000000002c03420, libserver.so)  // inlines: ~CDOTA_Modifier_Silencer_GlobalSilence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Silencer_GlobalSilence::~CDOTA_Modifier_Silencer_GlobalSilence(
        CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  this->_vptr_CDOTA_Buff = &off_455F290;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Silencer_GlobalSilence::IsDebuff  (line 915, @0x0000000002bffd40, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_GlobalSilence::IsDebuff(CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_GlobalSilence::GetEffectName  (line 919, @0x0000000002c05df0, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf", "particles/generic_gameplay/generic_silenced.vpcf"
const char *__fastcall CDOTA_Modifier_Silencer_GlobalSilence::GetEffectName(
        CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf";
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/generic_gameplay/generic_silenced.vpcf";
  return v2;
}


// CDOTA_Modifier_Silencer_GlobalSilence::GetEffectAttachType  (line 920, @0x0000000002bffd50, libserver.so)
int __fastcall CDOTA_Modifier_Silencer_GlobalSilence::GetEffectAttachType(
        CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  return 7;
}


// CDOTA_Modifier_Silencer_GlobalSilence::ShouldUseOverheadOffset  (line 921, @0x0000000002bffd60, libserver.so)
bool __fastcall CDOTA_Modifier_Silencer_GlobalSilence::ShouldUseOverheadOffset(
        CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  return 1;
}


// CDOTA_Modifier_Silencer_GlobalSilence::GetAttributes  (line 922, @0x0000000002c04400, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Silencer_GlobalSilence::GetAttributes(CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Silencer_GlobalSilence::CheckState  (line 931, @0x0000000002bd3a90, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Silencer_GlobalSilence::CheckState(
        CDOTA_Modifier_Silencer_GlobalSilence *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Modifier_Silencer_GlobalSilence::OnDestroy  (line 940, @0x0000000002bd5690, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Silencer.GlobalSilence.Effect"
void __fastcall CDOTA_Modifier_Silencer_GlobalSilence::OnDestroy(CDOTA_Modifier_Silencer_GlobalSilence *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Silencer.GlobalSilence.Effect");
}


