// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:35
class CDOTA_BaseNPC_ShadowShaman_SerpentWard : public CDOTA_BaseNPC_Additive {
public:

private:

	int m_iPoseParameterAim;  // +0x11a4
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
	CDOTA_BaseNPC_ShadowShaman_SerpentWard(CDOTA_BaseNPC_ShadowShaman_SerpentWard &);
	CDOTA_BaseNPC_ShadowShaman_SerpentWard(CDOTA_BaseNPC_ShadowShaman_SerpentWard &);
	CDOTA_BaseNPC_ShadowShaman_SerpentWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual bool AlwaysAutoAttack();
	virtual void OnDying();
	virtual ~CDOTA_BaseNPC_ShadowShaman_SerpentWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[448] AlwaysAutoAttack
	// vtable[469] OnDying
	// sizeof = 4520
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:62
class C_CDOTA_BaseNPC_ShadowShaman_SerpentWard_MapInstall {
	C_CDOTA_BaseNPC_ShadowShaman_SerpentWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:129
class CDOTA_Unit_Hero_ShadowShaman : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_ShadowShaman(CDOTA_Unit_Hero_ShadowShaman &);
	CDOTA_Unit_Hero_ShadowShaman(CDOTA_Unit_Hero_ShadowShaman &);
	CDOTA_Unit_Hero_ShadowShaman();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_ShadowShaman();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:137
class C_CDOTA_Unit_Hero_ShadowShaman_MapInstall {
	C_CDOTA_Unit_Hero_ShadowShaman_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:154
class CDOTA_Ability_ShadowShaman_EtherShock : public CDOTABaseAbility {
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
	CDOTA_Ability_ShadowShaman_EtherShock(CDOTA_Ability_ShadowShaman_EtherShock &);
	CDOTA_Ability_ShadowShaman_EtherShock(CDOTA_Ability_ShadowShaman_EtherShock &);
	CDOTA_Ability_ShadowShaman_EtherShock();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_ShadowShaman_EtherShock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:278
class CDOTA_Ability_ShadowShamanVoodoo : public CDOTABaseAbility {
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
	CDOTA_Ability_ShadowShamanVoodoo(CDOTA_Ability_ShadowShamanVoodoo &);
	CDOTA_Ability_ShadowShamanVoodoo(CDOTA_Ability_ShadowShamanVoodoo &);
	CDOTA_Ability_ShadowShamanVoodoo();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_ShadowShamanVoodoo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:324
class CDOTA_Modifier_ShadowShaman_Voodoo : public CDOTA_Modifier_Hexed {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_ShadowShaman_Voodoo();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual const char * GetHexType();
	virtual const char * GetDefaultHexModel();
	virtual float GetMoveSpeedModifier();
	virtual ~CDOTA_Modifier_ShadowShaman_Voodoo();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[89] GetHexType
	// vtable[90] GetDefaultHexModel
	// vtable[92] GetMoveSpeedModifier
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:384
class CDOTA_Ability_ShadowShaman_Shackles : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hShackleTarget;  // +0x390
	int nShackleFXIndex;  // +0x394
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
	CDOTA_Ability_ShadowShaman_Shackles(CDOTA_Ability_ShadowShaman_Shackles &);
	CDOTA_Ability_ShadowShaman_Shackles(CDOTA_Ability_ShadowShaman_Shackles &);
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
	virtual float GetChannelTime();
	virtual int GetConceptRecipientType();
	CDOTA_Ability_ShadowShaman_Shackles();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_ShadowShaman_Shackles();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[225] GetChannelTime
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:409
class C_CDOTA_Ability_ShadowShaman_Shackles_MapInstall {
	C_CDOTA_Ability_ShadowShaman_Shackles_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:515
class CDOTA_Modifier_ShadowShaman_Shackles : public CDOTA_Buff {
public:

private:

	float tick_interval;  // +0xba8
	float total_damage;  // +0xbac
	float channel_time;  // +0xbb0
	CDOTA_Modifier_ShadowShaman_Shackles();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsStunDebuff();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t OnAbilityEndChannel(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_ShadowShaman_Shackles();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[16] IsStunDebuff
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// vtable[12] IsDebuff
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:647
class CDOTA_Ability_ShadowShaman_MassSerpentWard : public CDOTABaseAbility {
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
	CDOTA_Ability_ShadowShaman_MassSerpentWard(CDOTA_Ability_ShadowShaman_MassSerpentWard &);
	CDOTA_Ability_ShadowShaman_MassSerpentWard(CDOTA_Ability_ShadowShaman_MassSerpentWard &);
	CDOTA_Ability_ShadowShaman_MassSerpentWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_ShadowShaman_MassSerpentWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_shadow_shaman.cpp:770
class CDOTA_Modifier_ShadowShaman_SerpentWard : public CDOTA_Buff {
public:

private:

	int scepter_range;  // +0xba8
	CDOTA_Modifier_ShadowShaman_SerpentWard();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_ShadowShaman_SerpentWard();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_ShadowShaman_SerpentWard::~CDOTA_BaseNPC_ShadowShaman_SerpentWard  (line 35, @0x0000000002a64970, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::~CDOTA_BaseNPC_ShadowShaman_SerpentWard(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::~CDOTA_BaseNPC_ShadowShaman_SerpentWard  (line 35, @0x0000000002a649c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_ShadowShaman_SerpentWard
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::~CDOTA_BaseNPC_ShadowShaman_SerpentWard(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::Schema_DynamicBinding  (line 37, @0x0000000002a60320, libserver.so)
// globals: CDOTA_BaseNPC_ShadowShaman_SerpentWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::Schema_DynamicBinding(
        const CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  return CDOTA_BaseNPC_ShadowShaman_SerpentWard::s_pSchemaBinding;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002a60350, libserver.so)
// globals: CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002a60360, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_ShadowShaman_SerpentWard>
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002a60380, libserver.so)
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002a603a0, libserver.so)
bool __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002a603b0, libserver.so)
// globals: CDOTA_BaseNPC_ShadowShaman_SerpentWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_ShadowShaman_SerpentWard::s_pSchemaBinding;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002a63af0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002a648d0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_ShadowShaman_SerpentWard, Construct<CDOTA_BaseNPC_ShadowShaman_SerpentWard>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_438ECF0;
    *(p + 236) = &off_438FC50;
    *(p + 257) = &off_438FF80;
  }
  return p;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a6b4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a6b630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal  (line 37, @0x0000000002a6f830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_shadowshaman_serpentward", "CDOTA_BaseNPC_ShadowShaman_SerpentWard"
// globals: `guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass, CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass, __dso_handle, CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo, CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass);
    CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass._vptr_CEntityClass = off_438EC70;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass);
    __cxa_atexit(
      CDOTA_BaseNPC_ShadowShaman_SerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass != 0 )
    return &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass;
  if ( `guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo,
      "CDOTA_BaseNPC_ShadowShaman_SerpentWard",
      "npc_dota_shadowshaman_serpentward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo);
  }
  CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass.m_pClassInfo = &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo;
  CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass.m_pBaseClassInfo = CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass = &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass;
  CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClassInfo.m_pClass = &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass;
  CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_ShadowShaman_SerpentWardClass;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::AlwaysAutoAttack  (line 47, @0x0000000002a603c0, libserver.so)
bool __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::AlwaysAutoAttack(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  return 1;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::YouForgotToImplementOrDeclareServerClass  (line 62, @0x0000000002a3ec30, libserver.so)
int __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  return 0;
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetServerClass  (line 62, @0x0000000002a48330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::GetServerClass(
        CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
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


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::OnAlive  (line 100, @0x0000000002a3fec0, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetAbsAngles, CBaseAnimating::LookupPoseParameter, CBaseAnimating::SetPoseParameter
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::OnAlive(CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  int v2; // eax
  float v3; // xmm1_4

  this->m_angle = *CBaseEntity::GetAbsAngles(this);
  v2 = CBaseAnimating::LookupPoseParameter(this, "aim");
  this->m_iPoseParameterAim = v2;
  CBaseAnimating::SetPoseParameter(this, v2, 0.0, v3);
}


// CDOTA_BaseNPC_ShadowShaman_SerpentWard::OnDying  (line 114, @0x0000000002a3ff20, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_BaseNPC_ShadowShaman_SerpentWard::OnDying(CDOTA_BaseNPC_ShadowShaman_SerpentWard *const this)
{
  CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Unit_Hero_ShadowShaman::~CDOTA_Unit_Hero_ShadowShaman  (line 129, @0x0000000002a67d80, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_ShadowShaman::~CDOTA_Unit_Hero_ShadowShaman(CDOTA_Unit_Hero_ShadowShaman *const this)
{
  this->_vptr_IHandleEntity = &off_4390050;
  this->_vptr_INextBotEventResponder = &off_4391030;
  this->_vptr_CObstructionObject = &off_4391360;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_ShadowShaman::~CDOTA_Unit_Hero_ShadowShaman  (line 129, @0x0000000002a67dc0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_ShadowShaman
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_ShadowShaman::~CDOTA_Unit_Hero_ShadowShaman(CDOTA_Unit_Hero_ShadowShaman *const this)
{
  this->_vptr_IHandleEntity = &off_4390050;
  this->_vptr_INextBotEventResponder = &off_4391030;
  this->_vptr_CObstructionObject = &off_4391360;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_ShadowShaman::Schema_DynamicBinding  (line 131, @0x0000000002a603d0, libserver.so)
// globals: CDOTA_Unit_Hero_ShadowShaman::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ShadowShaman::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ShadowShaman *const this)
{
  return CDOTA_Unit_Hero_ShadowShaman::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 131, @0x0000000002a60400, libserver.so)
// globals: CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::DestructInstance  (line 131, @0x0000000002a60410, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_ShadowShaman>
void __fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::FreeInstance  (line 131, @0x0000000002a60430, libserver.so)
void __fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::CanAllocate  (line 131, @0x0000000002a60450, libserver.so)
bool __fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 131, @0x0000000002a60460, libserver.so)
// globals: CDOTA_Unit_Hero_ShadowShaman::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ShadowShaman::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::AllocateInstance  (line 131, @0x0000000002a63b30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::ConstructInstance  (line 131, @0x0000000002a65be0, libserver.so)  // inlines: CDOTA_Unit_Hero_ShadowShaman, Construct<CDOTA_Unit_Hero_ShadowShaman>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4390050;
    *(p + 236) = &off_4391030;
    *(p + 257) = &off_4391360;
  }
  return p;
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 131, @0x0000000002a6b540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 131, @0x0000000002a6b6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal  (line 131, @0x0000000002a6f980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_shadow_shaman", "CDOTA_Unit_Hero_ShadowShaman"
// globals: `guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass, CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass, __dso_handle, CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo, CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass);
    CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass._vptr_CEntityClass = off_438FFD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_ShadowShaman::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ShadowShamanClass != 0 )
    return &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass;
  if ( `guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo,
      "CDOTA_Unit_Hero_ShadowShaman",
      "npc_dota_hero_shadow_shaman",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo);
  }
  CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass.m_pClassInfo = &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo;
  CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass.m_pBaseClassInfo = CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ShadowShamanClass = &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass;
  CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClassInfo.m_pClass = &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass;
  CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ShadowShamanClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_ShadowShaman::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ShadowShamanClass;
}


// CDOTA_Unit_Hero_ShadowShaman::YouForgotToImplementOrDeclareServerClass  (line 137, @0x0000000002a3ec40, libserver.so)
int __fastcall CDOTA_Unit_Hero_ShadowShaman::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_ShadowShaman *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_ShadowShaman::GetServerClass  (line 137, @0x0000000002a483b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_ShadowShaman::GetServerClass(CDOTA_Unit_Hero_ShadowShaman *const this)
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


// CDOTA_Ability_ShadowShaman_EtherShock::~CDOTA_Ability_ShadowShaman_EtherShock  (line 154, @0x0000000002a670d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::~CDOTA_Ability_ShadowShaman_EtherShock(
        CDOTA_Ability_ShadowShaman_EtherShock *const this)
{
  this->_vptr_IHandleEntity = &off_4391430;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ShadowShaman_EtherShock::~CDOTA_Ability_ShadowShaman_EtherShock  (line 154, @0x0000000002a670f0, libserver.so)  // inlines: ~CDOTA_Ability_ShadowShaman_EtherShock
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::~CDOTA_Ability_ShadowShaman_EtherShock(
        CDOTA_Ability_ShadowShaman_EtherShock *const this)
{
  this->_vptr_IHandleEntity = &off_4391430;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ShadowShaman_EtherShock::Schema_DynamicBinding  (line 156, @0x0000000002a60470, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_EtherShock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_EtherShock::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_EtherShock *const this)
{
  return CDOTA_Ability_ShadowShaman_EtherShock::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 156, @0x0000000002a60480, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::DestructInstance  (line 156, @0x0000000002a60490, libserver.so)  // inlines: Destruct<CDOTA_Ability_ShadowShaman_EtherShock>
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::FreeInstance  (line 156, @0x0000000002a604b0, libserver.so)
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::CanAllocate  (line 156, @0x0000000002a604d0, libserver.so)
bool __fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 156, @0x0000000002a604e0, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_EtherShock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_EtherShock::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::AllocateInstance  (line 156, @0x0000000002a63b70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::ConstructInstance  (line 156, @0x0000000002a65e60, libserver.so)  // inlines: CDOTA_Ability_ShadowShaman_EtherShock, Construct<CDOTA_Ability_ShadowShaman_EtherShock>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4391430;
  }
  return p;
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x0000000002a6a840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x0000000002a6a860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal  (line 156, @0x0000000002a6fad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "shadow_shaman_ether_shock", "CDOTA_Ability_ShadowShaman_EtherShock"
// globals: `guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass, CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass, __dso_handle, CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo, CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo
CEntityClass *__cdecl CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass);
    CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass._vptr_CEntityClass = off_43913B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass);
    __cxa_atexit(
      CDOTA_Ability_ShadowShaman_EtherShock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ShadowShaman_EtherShockClass != 0 )
    return &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass;
  if ( `guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo,
      "CDOTA_Ability_ShadowShaman_EtherShock",
      "shadow_shaman_ether_shock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo);
  }
  CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass.m_pClassInfo = &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo;
  CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass.m_pBaseClassInfo = CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ShadowShaman_EtherShockClass = &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass;
  CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClassInfo.m_pClass = &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass;
  CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ShadowShaman_EtherShockClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ShadowShaman_EtherShock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_EtherShockClass;
}


// CDOTA_Ability_ShadowShaman_EtherShock::OnSpellStart  (line 168, @0x0000000002a5f0c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator->, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, VectorNormalize, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CGameSceneNode::GetOwnerEntity, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (20 total)
// strings: "start_radius", "end_radius", "end_distance", "Hero_ShadowShaman.EtherShock", "particles/units/heroes/hero_shadowshaman/shadowshaman_ether_shock.vpcf", "attach_attack1" (8 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_ShadowShaman_EtherShock::OnSpellStart(CDOTA_Ability_ShadowShaman_EtherShock *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  const Vector *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v10; // edx
  __int16 v11; // cx
  int v12; // eax
  int v13; // ebx
  CDOTA_BaseNPC *v14; // r12
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  __m128i v17; // xmm0
  CGameSceneNode *m_pParent; // rdi
  float v19; // r14d
  float v20; // r13d
  float v21; // ebx
  CBaseEntity *OwnerEntity; // rdi
  const Vector *v23; // rax
  vec_t v24; // xmm1_4
  vec_t v25; // xmm0_4
  CGameSceneNode *v26; // rdi
  CBaseEntity *v27; // rax
  __int64 v28; // r12
  int j; // ebx
  CHandle<CBaseEntity> *v30; // r13
  __int64 m_Size; // r14
  int v32; // eax
  CHandle<CBaseEntity> *v33; // rax
  __int64 v34; // r12
  int v35; // ebx
  int v36; // r14d
  const Vector *v37; // r13
  const CBaseEntity *v38; // rdi
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  const Vector *v41; // rax
  const CBaseEntity *m_pInstance; // rdi
  CHandle<CBaseEntity> *v43; // rdx
  uint32 m_Index; // eax
  __int16 v45; // cx
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  CDOTA_ParticleManager *v48; // rax
  int v49; // ebx
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // r12
  CDOTA_BaseNPC *v52; // r13
  CDOTA_ParticleManager *v53; // rax
  const CBaseEntity *v54; // rax
  const Vector *v55; // r12
  const CBaseAnimating *v56; // r13
  CDOTA_ParticleManager *v57; // rax
  CDOTA_ParticleManager *v58; // rax
  __m128i v59; // xmm7
  float v60; // ebx
  CEntityInstance *v61; // rax
  CDOTA_BaseNPC *v62; // r12
  CDOTA_BaseNPC *v63; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v66; // rax
  const Vector *v67; // rbx
  CDOTA_BaseNPC *v68; // r13
  CDOTA_ParticleManager *v69; // rax
  __int64 v70; // rbx
  const CBaseEntity *v71; // rax
  const Vector *v72; // r13
  CDOTA_ParticleManager *v73; // rax
  CDOTA_ParticleManager *v74; // rax
  __m128i v75; // xmm7
  float v76; // r12d
  CEntityInstance *v77; // rax
  CDOTA_BaseNPC *v78; // rbx
  CDOTA_BaseNPC *v79; // rax
  int targets; // [rsp+2Ch] [rbp-D4h]
  int damage; // [rsp+38h] [rbp-C8h]
  int v82; // [rsp+3Ch] [rbp-C4h]
  int i; // [rsp+40h] [rbp-C0h]
  int end_distance; // [rsp+44h] [rbp-BCh]
  CDOTA_BaseNPC *v85; // [rsp+48h] [rbp-B8h]
  int start_radius; // [rsp+50h] [rbp-B0h]
  float flRadius; // [rsp+54h] [rbp-ACh]
  int v88; // [rsp+58h] [rbp-A8h]
  int iToHitTargets; // [rsp+5Ch] [rbp-A4h]
  int iToHitTargetsa; // [rsp+5Ch] [rbp-A4h]
  float fBestDistance; // [rsp+68h] [rbp-98h]
  const CBaseAnimating *fBestDistancea; // [rsp+68h] [rbp-98h]
  Vector vDirection; // [rsp+70h] [rbp-90h] BYREF
  Vector v95; // [rsp+80h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntityList; // [rsp+90h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+B0h] [rbp-50h] BYREF

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v85 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    start_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "start_radius", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "end_radius", -1, 0);
    end_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "end_distance", -1, 0);
    targets = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "targets", -1, 0);
    damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_ShadowShaman.EtherShock", 0.0, 0, 0);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CBaseEntity::GetAbsOrigin(v85);
    v7 = v6->x - AbsOrigin->x;
    v8 = v6->y - AbsOrigin->y;
    vDirection.z = 0.0;
    vDirection.x = v7;
    vDirection.y = v8;
    VectorNormalize(&vDirection);
    hEntityList.m_Memory.m_pMemory = 0;
    hEntityList.m_Memory.m_nAllocationCount = 0;
    hEntityList.m_Memory.m_nGrowSize = 0;
    entities.m_Size = -1;
    m_pEntity = v85->m_pEntity;
    hEntityList.m_Size = 0;
    if ( m_pEntity != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(entities.m_Size) = v11 | entities.m_Size & 0x8000;
      entities.m_Size = (v10 << 15) | entities.m_Size & 0x7FFF;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hEntityList.m_Memory, 1);
    ++hEntityList.m_Size;
    if ( hEntityList.m_Memory.m_pMemory != 0 )
      hEntityList.m_Memory.m_pMemory->m_Index = entities.m_Size;
    iToHitTargets = 0;
    v88 = 0;
    v82 = LevelSpecialValue - start_radius;
    for ( i = 5; i != 0; --i )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v12 = v88 + 3;
      v13 = start_radius + iToHitTargets / 4;
      if ( v88 >= 0 )
        v12 = v88;
      flRadius = (start_radius + (v12 >> 2));
      v14 = CDOTABaseAbility::GetCaster(this);
      x_low = LODWORD(vDirection.x);
      y_low = LODWORD(vDirection.y);
      *x_low.m128i_i32 = vDirection.x * v13;
      *y_low.m128i_i32 = vDirection.y * v13;
      *v17.m128i_i32 = v13 * vDirection.z;
      m_pParent = this->m_pGameSceneNode->m_pParent;
      v19 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      v20 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      else
        OwnerEntity = 0;
      v23 = CBaseEntity::GetAbsOrigin(OwnerEntity);
      v24 = v20 + v23->y;
      v25 = v21 + v23->z;
      v95.x = v19 + v23->x;
      v95.y = v24;
      v95.z = v25;
      v26 = this->m_pGameSceneNode->m_pParent;
      if ( v26 != 0 )
        v27 = CGameSceneNode::GetOwnerEntity(v26);
      else
        v27 = 0;
      FindUnitsInRadius(v27->m_iTeamNum.m_Value, &v95, v14, flRadius, &entities, 2, 19, 384, 0, 0);
      v28 = 0;
      for ( j = 0; entities.m_Size > j; v33->m_Index = v30->m_Index )
      {
        while ( 1 )
        {
          v30 = &entities.m_Memory.m_pMemory[v28];
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                 &hEntityList,
                 &entities.m_Memory.m_pMemory[v28]) == -1 )
          {
            m_Size = hEntityList.m_Size;
            v32 = hEntityList.m_Size;
            if ( hEntityList.m_Size == hEntityList.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hEntityList.m_Memory, 1);
              v32 = hEntityList.m_Size;
            }
            hEntityList.m_Size = v32 + 1;
            v33 = &hEntityList.m_Memory.m_pMemory[m_Size];
            if ( v33 != 0 )
              break;
          }
          ++j;
          ++v28;
          if ( entities.m_Size <= j )
            goto LABEL_25;
        }
        ++j;
        ++v28;
      }
LABEL_25:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      v88 += v82;
      iToHitTargets += end_distance;
    }
    for ( iToHitTargetsa = targets - 1; iToHitTargetsa > 0 && hEntityList.m_Size > 1; --iToHitTargetsa )
    {
      v34 = 1;
      v35 = 1;
      fBestDistance = 0.0;
      v36 = -1;
      do
      {
        m_pInstance = 0;
        v43 = &hEntityList.m_Memory.m_pMemory[v34];
        m_Index = hEntityList.m_Memory.m_pMemory[v34].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v45 = v43->m_Index;
          v46 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v43->m_Index) >> 9) & 0x3F];
          if ( v46 != 0 )
          {
            v47 = &v46[v45 & 0x1FF];
            if ( v47 != 0 && m_Index == v47->m_EHandle.m_Index )
              m_pInstance = v47->m_pInstance;
          }
        }
        v37 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v38 = 0;
        if ( hEntityList.m_Memory.m_pMemory->m_Index + 2 > 1 )
        {
          v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntityList.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
          if ( v39 != 0 )
          {
            v40 = &v39[hEntityList.m_Memory.m_pMemory->m_Index & 0x1FF];
            if ( v40 != 0 && hEntityList.m_Memory.m_pMemory->m_Index == v40->m_EHandle.m_Index )
              v38 = v40->m_pInstance;
          }
        }
        v41 = CBaseEntity::GetAbsOrigin(v38);
        if ( v36 == -1
          || fBestDistance > (((v41->x - v37->x) * (v41->x - v37->x)) + ((v41->y - v37->y) * (v41->y - v37->y))) )
        {
          fBestDistance = ((v41->x - v37->x) * (v41->x - v37->x)) + ((v41->y - v37->y) * (v41->y - v37->y));
          v36 = v35;
        }
        ++v35;
        ++v34;
      }
      while ( hEntityList.m_Size > v35 );
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_shadowshaman/shadowshaman_ether_shock.vpcf",
                   2,
                   0,
                   0,
                   0);
      v66 = CDOTABaseAbility::GetCaster(this);
      v67 = CBaseEntity::GetAbsOrigin(v66);
      v68 = CDOTABaseAbility::GetCaster(this);
      v69 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v69, Particle, 0, v68, 5, "attach_attack1", *v67, 1);
      v70 = v36;
      v71 = CEntityHandle::operator CEntityInstance *(&hEntityList.m_Memory.m_pMemory[v70]);
      v72 = CBaseEntity::GetAbsOrigin(v71);
      fBestDistancea = CEntityHandle::operator CEntityInstance *(&hEntityList.m_Memory.m_pMemory[v70]);
      v73 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v73, Particle, 1, fBestDistancea, 5, "attach_hitloc", *v72, 1);
      v74 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v74, Particle);
      *v75.m128i_i32 = damage;
      v76 = COERCE_FLOAT(_mm_cvtsi128_si32(v75));
      v77 = CEntityHandle::operator CEntityInstance *(&hEntityList.m_Memory.m_pMemory[v70]);
      if ( v77 != 0 && BYTE3(v77[7]._vptr_IHandleEntity) != 0 )
        v78 = v77;
      else
        v78 = 0;
      v79 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v79, v78, this, v76, 2, 0);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntityList, v36);
    }
    v48 = GetParticleManager();
    v49 = CDOTA_ParticleManager::CreateParticle(
            v48,
            "particles/units/heroes/hero_shadowshaman/shadowshaman_ether_shock.vpcf",
            2,
            0,
            0,
            0);
    v50 = CDOTABaseAbility::GetCaster(this);
    v51 = CBaseEntity::GetAbsOrigin(v50);
    v52 = CDOTABaseAbility::GetCaster(this);
    v53 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v53, v49, 0, v52, 5, "attach_attack1", *v51, 1);
    v54 = CEntityHandle::operator CEntityInstance *(hEntityList.m_Memory.m_pMemory);
    v55 = CBaseEntity::GetAbsOrigin(v54);
    v56 = CEntityHandle::operator CEntityInstance *(hEntityList.m_Memory.m_pMemory);
    v57 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v57, v49, 1, v56, 5, "attach_hitloc", *v55, 1);
    v58 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v58, v49);
    *v59.m128i_i32 = damage;
    v60 = COERCE_FLOAT(_mm_cvtsi128_si32(v59));
    v61 = CEntityHandle::operator CEntityInstance *(hEntityList.m_Memory.m_pMemory);
    if ( v61 != 0 && BYTE3(v61[7]._vptr_IHandleEntity) != 0 )
      v62 = v61;
    else
      v62 = 0;
    v63 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v63, v62, this, v60, 2, 0);
    CDOTA_BaseNPC::UnitEmitSound(v85, "Hero_ShadowShaman.EtherShock.Target", 0.0, 0, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntityList);
  }
}


// CDOTA_Ability_ShadowShaman_EtherShock::GetAbilityDamageToTargetOverInterval  (line 263, @0x0000000002a52c50, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_ShadowShaman_EtherShock::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ShadowShaman_EtherShock *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_ShadowShamanVoodoo::~CDOTA_Ability_ShadowShamanVoodoo  (line 278, @0x0000000002a67120, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::~CDOTA_Ability_ShadowShamanVoodoo(
        CDOTA_Ability_ShadowShamanVoodoo *const this)
{
  this->_vptr_IHandleEntity = &off_4391F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ShadowShamanVoodoo::~CDOTA_Ability_ShadowShamanVoodoo  (line 278, @0x0000000002a67140, libserver.so)  // inlines: ~CDOTA_Ability_ShadowShamanVoodoo
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::~CDOTA_Ability_ShadowShamanVoodoo(
        CDOTA_Ability_ShadowShamanVoodoo *const this)
{
  this->_vptr_IHandleEntity = &off_4391F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ShadowShamanVoodoo::Schema_DynamicBinding  (line 280, @0x0000000002a604f0, libserver.so)
// globals: CDOTA_Ability_ShadowShamanVoodoo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShamanVoodoo::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShamanVoodoo *const this)
{
  return CDOTA_Ability_ShadowShamanVoodoo::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 280, @0x0000000002a60500, libserver.so)
// globals: CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::DestructInstance  (line 280, @0x0000000002a60510, libserver.so)  // inlines: Destruct<CDOTA_Ability_ShadowShamanVoodoo>
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::FreeInstance  (line 280, @0x0000000002a60530, libserver.so)
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::CanAllocate  (line 280, @0x0000000002a60550, libserver.so)
bool __fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 280, @0x0000000002a60560, libserver.so)
// globals: CDOTA_Ability_ShadowShamanVoodoo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShamanVoodoo::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::AllocateInstance  (line 280, @0x0000000002a63bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::ConstructInstance  (line 280, @0x0000000002a65e90, libserver.so)  // inlines: CDOTA_Ability_ShadowShamanVoodoo, Construct<CDOTA_Ability_ShadowShamanVoodoo>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4391F30;
  }
  return p;
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 280, @0x0000000002a6a890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 280, @0x0000000002a6a8b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal  (line 280, @0x0000000002a6fc20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_ShadowShamanVoodoo"
// globals: `guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass, CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass, __dso_handle, CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo, CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo
CEntityClass *__cdecl CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass);
    CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass._vptr_CEntityClass = off_4391EB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass);
    __cxa_atexit(
      CDOTA_Ability_ShadowShamanVoodoo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ShadowShamanVoodooClass != 0 )
    return &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass;
  if ( `guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo,
      "CDOTA_Ability_ShadowShamanVoodoo",
      "shadow_shaman_voodoo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo);
  }
  CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass.m_pClassInfo = &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo;
  CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass.m_pBaseClassInfo = CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ShadowShamanVoodooClass = &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass;
  CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClassInfo.m_pClass = &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass;
  CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ShadowShamanVoodooClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ShadowShamanVoodoo::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShamanVoodooClass;
}


// CDOTA_Ability_ShadowShamanVoodoo::OnSpellStart  (line 291, @0x0000000002a56330, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, IsMagicImmune, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::Kill, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_shadow_shaman_voodoo"
void __fastcall CDOTA_Ability_ShadowShamanVoodoo::OnSpellStart(CDOTA_Ability_ShadowShamanVoodoo *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
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
        KeyValues::KeyValues(&kv, "modifier_shadow_shaman_voodoo");
        KeyValues::SetFloat(&kv, "duration", v5);
        v6 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_shadow_shaman_voodoo", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Ability_ShadowShamanVoodoo::GetStunDuration  (line 316, @0x0000000002a59040, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_ShadowShamanVoodoo::GetStunDuration(CDOTA_Ability_ShadowShamanVoodoo *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_ShadowShaman_Voodoo::~CDOTA_Modifier_ShadowShaman_Voodoo  (line 324, @0x0000000002a659f0, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::~CDOTA_Modifier_ShadowShaman_Voodoo(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ShadowShaman_Voodoo::~CDOTA_Modifier_ShadowShaman_Voodoo  (line 324, @0x0000000002a65a10, libserver.so)  // inlines: ~CDOTA_Modifier_Hexed, ~CDOTA_Modifier_ShadowShaman_Voodoo
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::~CDOTA_Modifier_ShadowShaman_Voodoo(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  this->_vptr_CDOTA_Buff = &off_41228D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ShadowShaman_Voodoo::IsDebuff  (line 329, @0x0000000002a60570, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::IsDebuff(CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  return 1;
}


// CDOTA_Modifier_ShadowShaman_Voodoo::GetEffectName  (line 334, @0x0000000002a60580, libserver.so)
// strings: "particles/units/heroes/hero_shadowshaman/shadowshaman_voodoo.vpcf"
const char *__fastcall CDOTA_Modifier_ShadowShaman_Voodoo::GetEffectName(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  return "particles/units/heroes/hero_shadowshaman/shadowshaman_voodoo.vpcf";
}


// CDOTA_Modifier_ShadowShaman_Voodoo::GetHexType  (line 336, @0x0000000002a60590, libserver.so)
// strings: "chicken"
const char *__fastcall CDOTA_Modifier_ShadowShaman_Voodoo::GetHexType(CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  return "chicken";
}


// CDOTA_Modifier_ShadowShaman_Voodoo::GetDefaultHexModel  (line 337, @0x0000000002a605a0, libserver.so)
// strings: "models/props_gameplay/chicken.vmdl"
const char *__fastcall CDOTA_Modifier_ShadowShaman_Voodoo::GetDefaultHexModel(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  return "models/props_gameplay/chicken.vmdl";
}


// CDOTA_Modifier_ShadowShaman_Voodoo::GetMoveSpeedModifier  (line 338, @0x0000000002a605b0, libserver.so)
float __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::GetMoveSpeedModifier(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  return this->movespeed;
}


// CDOTA_Modifier_ShadowShaman_Voodoo::OnCreated  (line 349, @0x0000000002a55cf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Hexed::OnCreated
// strings: "Hero_ShadowShaman.Hex.Target"
void __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::OnCreated(
        CDOTA_Modifier_ShadowShaman_Voodoo *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // r13
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed", -1, 0);
  else
    this->movespeed = 0;
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_ShadowShaman.Hex.Target");
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, ReplacementSound, 0.0, 0, 0);
  }
  CDOTA_Modifier_Hexed::OnCreated(this, pKV);
}


// CDOTA_Modifier_ShadowShaman_Voodoo::OnDestroy  (line 365, @0x0000000002a45150, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTA_Modifier_Hexed::OnDestroy
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_ShadowShaman_Voodoo::OnDestroy(CDOTA_Modifier_ShadowShaman_Voodoo *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC_Hero *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v6; // rdi

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
    {
      v3 = CDOTA_Buff::GetParent(this);
      if ( v3 != 0 )
      {
        v4 = 0;
        if ( v3->m_bIsDOTANPC && (v3->m_iUnitType & 1) != 0 && !v3->m_bIsIllusion.m_Value )
          v4 = v3;
      }
      else
      {
        v4 = 0;
      }
      Caster = CDOTA_Buff::GetCaster(this);
      if ( Caster == 0
        || !Caster->m_bIsDOTANPC
        || (Caster->m_iUnitType & 1) == 0
        || (v6 = Caster, Caster->m_bIsIllusion.m_Value) )
      {
        v6 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v6,
        v4,
        kill_eater_event_t::kKillEaterEvent_ShadowShaman_HexKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  CDOTA_Modifier_Hexed::OnDestroy(this);
}


// CDOTA_Ability_ShadowShaman_Shackles::~CDOTA_Ability_ShadowShaman_Shackles  (line 384, @0x0000000002a67170, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::~CDOTA_Ability_ShadowShaman_Shackles(
        CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  this->_vptr_IHandleEntity = &off_4392D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ShadowShaman_Shackles::~CDOTA_Ability_ShadowShaman_Shackles  (line 384, @0x0000000002a67190, libserver.so)  // inlines: ~CDOTA_Ability_ShadowShaman_Shackles
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::~CDOTA_Ability_ShadowShaman_Shackles(
        CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  this->_vptr_IHandleEntity = &off_4392D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ShadowShaman_Shackles::Schema_DynamicBinding  (line 386, @0x0000000002a605c0, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_Shackles::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_Shackles::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  return CDOTA_Ability_ShadowShaman_Shackles::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 386, @0x0000000002a605d0, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::DestructInstance  (line 386, @0x0000000002a605e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ShadowShaman_Shackles>
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::FreeInstance  (line 386, @0x0000000002a60600, libserver.so)
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::CanAllocate  (line 386, @0x0000000002a60620, libserver.so)
bool __fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 386, @0x0000000002a60630, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_Shackles::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_Shackles::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::AllocateInstance  (line 386, @0x0000000002a63bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::ConstructInstance  (line 386, @0x0000000002a65ec0, libserver.so)  // inlines: CDOTA_Ability_ShadowShaman_Shackles, CEntityHandle, CHandle, Construct<CDOTA_Ability_ShadowShaman_Shackles>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_4392D70;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002a6a8e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002a6a900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal  (line 386, @0x0000000002a6fd70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "shadow_shaman_shackles", "CDOTA_Ability_ShadowShaman_Shackles"
// globals: `guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass, CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass, __dso_handle, CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo, CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo
CEntityClass *__cdecl CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass);
    CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass._vptr_CEntityClass = off_4392CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass);
    __cxa_atexit(
      CDOTA_Ability_ShadowShaman_Shackles::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ShadowShaman_ShacklesClass != 0 )
    return &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass;
  if ( `guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo,
      "CDOTA_Ability_ShadowShaman_Shackles",
      "shadow_shaman_shackles",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo);
  }
  CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass.m_pClassInfo = &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo;
  CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass.m_pBaseClassInfo = CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ShadowShaman_ShacklesClass = &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass;
  CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClassInfo.m_pClass = &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass;
  CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ShadowShaman_ShacklesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ShadowShaman_Shackles::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_ShacklesClass;
}


// CDOTA_Ability_ShadowShaman_Shackles::GetConceptRecipientType  (line 394, @0x0000000002a60640, libserver.so)
int __fastcall CDOTA_Ability_ShadowShaman_Shackles::GetConceptRecipientType(
        CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  return 4;
}


// CDOTA_Ability_ShadowShaman_Shackles::YouForgotToImplementOrDeclareServerClass  (line 409, @0x0000000002a3ec50, libserver.so)
int __fastcall CDOTA_Ability_ShadowShaman_Shackles::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  return 0;
}


// CDOTA_Ability_ShadowShaman_Shackles::GetServerClass  (line 409, @0x0000000002a484b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ShadowShaman_Shackles::GetServerClass(
        CDOTA_Ability_ShadowShaman_Shackles *const this)
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


// CDOTA_Ability_ShadowShaman_Shackles::GetChannelTime  (line 419, @0x0000000002a52cb0, libserver.so)
// calls: CDOTABaseAbility::GetChannelTime, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_shadow_shaman_2"
float __fastcall CDOTA_Ability_ShadowShaman_Shackles::GetChannelTime(CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flChannelTime; // [rsp+Ch] [rbp-14h]

  flChannelTime = CDOTABaseAbility::GetChannelTime(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_shadow_shaman_2", 0);
  result = flChannelTime;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flChannelTime + CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_ShadowShaman_Shackles::OnSpellStart  (line 434, @0x0000000002a44a70, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, InState, IsInvulnerable, IsMagicImmune, Set, ToDOTABaseNPC, operator=
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::MakeVisibleToTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (15 total)
// strings: "Hero_ShadowShaman.Shackles.Cast", "modifier_shadow_shaman_shackles", "particles/units/heroes/hero_shadowshaman/shadowshaman_shackle.vpcf", "attach_attack1", "attach_hitloc", "attach_attack2"
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::OnSpellStart(CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  CDOTA_BaseNPC *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *v8; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  __m128i v12; // xmm0
  float v13; // r15d
  int m_Value; // r14d
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  const Vector *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // r14
  CDOTA_BaseNPC *v26; // r15
  CDOTA_ParticleManager *v27; // rax
  const Vector *v28; // r14
  int nShackleFXIndex; // ebx
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *Caster; // rax
  int iIndex; // [rsp+Ch] [rbp-54h]
  int iIndexa; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x200) == 0 && !v3->m_bIsWaitingToSpawn.m_Value && (v4 & 0x100) == 0 )
    {
      if ( CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
      {
        this->m_hShackleTarget.m_Index = -1;
        Caster = CDOTABaseAbility::GetCaster(this);
        (*(Caster->_vptr_INextBotEventResponder + 56))(&Caster->INextBot);
      }
      else
      {
        v5 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_ShadowShaman.Shackles.Cast", 0.0, 0, 0);
        KeyValues::KeyValues(&kv, "modifier_shadow_shaman_shackles");
        (*(this->_vptr_IHandleEntity + 225))(this);
        KeyValues::SetFloat(&kv, "duration", v6);
        v7 = CDOTABaseAbility::GetCaster(this);
        v8 = CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_shadow_shaman_shackles", &kv, 0);
        if ( v8 == 0 || (*(v8 + 138) & 4) != 0 )
        {
          v31 = CDOTABaseAbility::GetCaster(this);
          (*(v31->_vptr_INextBotEventResponder + 56))(&v31->INextBot);
        }
        else
        {
          m_pEntity = v3->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v11 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hShackleTarget.m_Index) = v11 | this->m_hShackleTarget.m_Index & 0x8000;
            this->m_hShackleTarget.m_Index = (v10 << 15) | this->m_hShackleTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hShackleTarget.m_Index = -1;
          }
          *v12.m128i_i64 = (*(this->_vptr_IHandleEntity + 225))(this);
          v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
          m_Value = v3->m_iTeamNum.m_Value;
          v15 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::MakeVisibleToTeam(v15, m_Value, v13, v16);
          ParticleManager = GetParticleManager();
          this->nShackleFXIndex = CDOTA_ParticleManager::CreateParticle(
                                    ParticleManager,
                                    "particles/units/heroes/hero_shadowshaman/shadowshaman_shackle.vpcf",
                                    2,
                                    0,
                                    0,
                                    0);
          v18 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
          v20 = CDOTABaseAbility::GetCaster(this);
          iIndex = this->nShackleFXIndex;
          v21 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v21, iIndex, 0, v20, 5, "attach_attack1", *AbsOrigin, 1);
          v22 = CBaseEntity::GetAbsOrigin(v3);
          LODWORD(v20) = this->nShackleFXIndex;
          v23 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v23, v20, 1, v3, 5, "attach_hitloc", *v22, 1);
          v24 = CDOTABaseAbility::GetCaster(this);
          v25 = CBaseEntity::GetAbsOrigin(v24);
          v26 = CDOTABaseAbility::GetCaster(this);
          iIndexa = this->nShackleFXIndex;
          v27 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v27, iIndexa, 5, v26, 5, "attach_attack2", *v25, 1);
          v28 = CBaseEntity::GetAbsOrigin(v3);
          nShackleFXIndex = this->nShackleFXIndex;
          v30 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v30, nShackleFXIndex, 6, v3, 5, "attach_hitloc", *v28, 1);
        }
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Ability_ShadowShaman_Shackles::OnChannelFinish  (line 475, @0x0000000002a45900, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_shadow_shaman_shackles"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_ShadowShaman_Shackles::OnChannelFinish(
        CDOTA_Ability_ShadowShaman_Shackles *const this,
        bool bInterrupted)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int nShackleFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi

  m_Index = this->m_hShackleTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hShackleTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hShackleTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_shadow_shaman_shackles");
      }
    }
  }
  nShackleFXIndex = this->nShackleFXIndex;
  if ( nShackleFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, nShackleFXIndex, 0);
    this->nShackleFXIndex = -1;
  }
}


// CDOTA_Ability_ShadowShaman_Shackles::GetAbilityDamageToTargetOverInterval  (line 493, @0x0000000002a52d20, libserver.so)  // inlines: Max<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "total_damage"
__int64 __fastcall CDOTA_Ability_ShadowShaman_Shackles::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ShadowShaman_Shackles *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float v7; // xmm0_4
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v7 = (*(this->_vptr_IHandleEntity + 225))(this);
    v8 = LODWORD(fInterval);
    v8.m128_f32[0] = fInterval / v7;
    v9 = _mm_cmplt_ss(v8, 0x3F800000u);
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "total_damage", -1, 0)
               * COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, v8).m128_f32[0]) | v9.m128_i32[0] & 0x3F800000);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_ShadowShaman_Shackles::GetStunDuration  (line 506, @0x0000000002a3ec60, libserver.so)
float __fastcall CDOTA_Ability_ShadowShaman_Shackles::GetStunDuration(CDOTA_Ability_ShadowShaman_Shackles *const this)
{
  return (*(this->_vptr_IHandleEntity + 225))(this);
}


// CDOTA_Modifier_ShadowShaman_Shackles::~CDOTA_Modifier_ShadowShaman_Shackles  (line 515, @0x0000000002a659a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::~CDOTA_Modifier_ShadowShaman_Shackles(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  this->_vptr_CDOTA_Buff = &off_4393830;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ShadowShaman_Shackles::~CDOTA_Modifier_ShadowShaman_Shackles  (line 515, @0x0000000002a659c0, libserver.so)  // inlines: ~CDOTA_Modifier_ShadowShaman_Shackles
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::~CDOTA_Modifier_ShadowShaman_Shackles(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  this->_vptr_CDOTA_Buff = &off_4393830;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ShadowShaman_Shackles::IsStunDebuff  (line 528, @0x0000000002a60650, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowShaman_Shackles::IsStunDebuff(CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return 1;
}


// CDOTA_Modifier_ShadowShaman_Shackles::GetEffectName  (line 535, @0x0000000002a60660, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_ShadowShaman_Shackles::GetEffectName(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_ShadowShaman_Shackles::GetEffectAttachType  (line 536, @0x0000000002a60670, libserver.so)
int __fastcall CDOTA_Modifier_ShadowShaman_Shackles::GetEffectAttachType(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return 7;
}


// CDOTA_Modifier_ShadowShaman_Shackles::GetStatusEffectName  (line 537, @0x0000000002a60680, libserver.so)
// strings: "particles/status_fx/status_effect_shaman_shackle.vpcf"
const char *__fastcall CDOTA_Modifier_ShadowShaman_Shackles::GetStatusEffectName(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return "particles/status_fx/status_effect_shaman_shackle.vpcf";
}


// CDOTA_Modifier_ShadowShaman_Shackles::StatusEffectPriority  (line 538, @0x0000000002a60690, libserver.so)
int __fastcall CDOTA_Modifier_ShadowShaman_Shackles::StatusEffectPriority(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return 30;
}


// CDOTA_Modifier_ShadowShaman_Shackles::IsDebuff  (line 543, @0x0000000002a606a0, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowShaman_Shackles::IsDebuff(CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  return 1;
}


// CDOTA_Modifier_ShadowShaman_Shackles::OnCreated  (line 558, @0x0000000002a5da10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::InterruptChannel, CDOTA_Buff::StartIntervalThink
// strings: "total_damage"
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::OnCreated(
        CDOTA_Modifier_ShadowShaman_Shackles *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_interval", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->total_damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->channel_time = 0.0;
    goto LABEL_5;
  }
  this->tick_interval = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->total_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "total_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->channel_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "channel_time", -1, 0);
LABEL_5:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::InterruptChannel(Parent);
  CDOTA_Buff::StartIntervalThink(this, this->tick_interval, v7);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_ShadowShaman_Shackles::OnDestroy  (line 577, @0x0000000002a45660, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::InterruptChannel, CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::OnDestroy(CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC_Hero *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rdi

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::InterruptChannel(Caster);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
    {
      v4 = CDOTA_Buff::GetParent(this);
      if ( v4 != 0 )
      {
        v5 = 0;
        if ( v4->m_bIsDOTANPC && (v4->m_iUnitType & 1) != 0 && !v4->m_bIsIllusion.m_Value )
          v5 = v4;
      }
      else
      {
        v5 = 0;
      }
      v6 = CDOTA_Buff::GetCaster(this);
      if ( v6 == 0 || !v6->m_bIsDOTANPC || (v6->m_iUnitType & 1) == 0 || (v7 = v6, v6->m_bIsIllusion.m_Value) )
        v7 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v7,
        v5,
        kill_eater_event_t::kKillEaterEvent_ShadowShaman_ShackleKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Modifier_ShadowShaman_Shackles::OnIntervalThink  (line 593, @0x0000000002a449c0, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::OnIntervalThink(CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v6; // [rsp+Ch] [rbp-24h]

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( !Parent->m_bIsWaitingToSpawn.m_Value && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      v6 = (this->total_damage * this->tick_interval) / this->channel_time;
      Ability = CDOTA_Buff::GetAbility(this);
      v4 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v4, Ability, v6, 2, 0);
    }
  }
}


// CDOTA_Modifier_ShadowShaman_Shackles::DeclareFunctions  (line 605, @0x0000000002a3ec80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ShadowShaman_Shackles::OnAbilityEndChannel(CModifierParams const&), CDOTA_Modifier_ShadowShaman_Shackles::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::DeclareFunctions(
        CDOTA_Modifier_ShadowShaman_Shackles *const this)
{
  this->m_Functions[131].__pfn = CDOTA_Modifier_ShadowShaman_Shackles::OnAbilityEndChannel;
  this->m_Functions[131].__delta = 0;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[90].__pfn = CDOTA_Modifier_ShadowShaman_Shackles::GetOverrideAnimation;
}


// CDOTA_Modifier_ShadowShaman_Shackles::OnAbilityEndChannel  (line 613, @0x0000000002a45860, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_Shackles::OnAbilityEndChannel(
        CDOTA_Modifier_ShadowShaman_Shackles *const this,
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


// CDOTA_Modifier_ShadowShaman_Shackles::GetOverrideAnimation  (line 625, @0x0000000002a3ecc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_Shackles::GetOverrideAnimation(
        CDOTA_Modifier_ShadowShaman_Shackles *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_ShadowShaman_Shackles::CheckState  (line 632, @0x0000000002a3ece0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_ShadowShaman_Shackles::CheckState(
        CDOTA_Modifier_ShadowShaman_Shackles *const this,
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


// CDOTA_Ability_ShadowShaman_MassSerpentWard::~CDOTA_Ability_ShadowShaman_MassSerpentWard  (line 647, @0x0000000002a671c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::~CDOTA_Ability_ShadowShaman_MassSerpentWard(
        CDOTA_Ability_ShadowShaman_MassSerpentWard *const this)
{
  this->_vptr_IHandleEntity = &off_4393B90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::~CDOTA_Ability_ShadowShaman_MassSerpentWard  (line 647, @0x0000000002a671e0, libserver.so)  // inlines: ~CDOTA_Ability_ShadowShaman_MassSerpentWard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::~CDOTA_Ability_ShadowShaman_MassSerpentWard(
        CDOTA_Ability_ShadowShaman_MassSerpentWard *const this)
{
  this->_vptr_IHandleEntity = &off_4393B90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::Schema_DynamicBinding  (line 649, @0x0000000002a606b0, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_MassSerpentWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_MassSerpentWard *const this)
{
  return CDOTA_Ability_ShadowShaman_MassSerpentWard::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 649, @0x0000000002a606c0, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::DestructInstance  (line 649, @0x0000000002a606d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ShadowShaman_MassSerpentWard>
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::FreeInstance  (line 649, @0x0000000002a606f0, libserver.so)
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::CanAllocate  (line 649, @0x0000000002a60710, libserver.so)
bool __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 649, @0x0000000002a60720, libserver.so)
// globals: CDOTA_Ability_ShadowShaman_MassSerpentWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ShadowShaman_MassSerpentWard::s_pSchemaBinding;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::AllocateInstance  (line 649, @0x0000000002a63c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::ConstructInstance  (line 649, @0x0000000002a65f10, libserver.so)  // inlines: CDOTA_Ability_ShadowShaman_MassSerpentWard, Construct<CDOTA_Ability_ShadowShaman_MassSerpentWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4393B90;
  }
  return p;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 649, @0x0000000002a6a930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 649, @0x0000000002a6a950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal  (line 649, @0x0000000002a6fec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "shadow_shaman_mass_serpent_ward", "CDOTA_Ability_ShadowShaman_MassSerpentWard"
// globals: `guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass, CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass, __dso_handle, CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo, CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass);
    CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass._vptr_CEntityClass = off_4393B10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass);
    __cxa_atexit(
      CDOTA_Ability_ShadowShaman_MassSerpentWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass != 0 )
    return &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass;
  if ( `guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo,
      "CDOTA_Ability_ShadowShaman_MassSerpentWard",
      "shadow_shaman_mass_serpent_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo);
  }
  CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass.m_pClassInfo = &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo;
  CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass.m_pBaseClassInfo = CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass = &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass;
  CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClassInfo.m_pClass = &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass;
  CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ShadowShaman_MassSerpentWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ShadowShaman_MassSerpentWardClass;
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::OnSpellStart  (line 682, @0x0000000002a56b10, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorAdd, VectorNormalize2D, VectorSubtract, entindex, operator+, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, VectorAngles, DOTA_EmitSoundLocationWithCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, DOTA_CreateUnitByName, CBaseEntity::SetAbsAngles (25 total)
// strings: "ward_count", "Hero_ShadowShaman.SerpentWard", "special_bonus_unique_shadow_shaman_1", "modifier_shadow_shaman_serpent_ward"
// globals: vWardOffset, pszWardArray, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::OnSpellStart(
        CDOTA_Ability_ShadowShaman_MassSerpentWard *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *AbilityByName; // rax
  Vector *v9; // r12
  CDOTA_BaseNPC *v10; // r15
  CDOTA_BaseNPC *v11; // r14
  int EffectiveLevel; // eax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r14
  CDOTA_BaseNPC *v15; // rax
  int v16; // eax
  float v17; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int v19; // eax
  vec_t v20; // xmm2_4
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC_Hero *v24; // rdi
  CDOTA_BaseNPC *v25; // rax
  CEntityIndex v26; // eax
  int ward_count; // [rsp+8h] [rbp-C8h]
  int iBonusHP; // [rsp+Ch] [rbp-C4h]
  int iTeamNumber; // [rsp+2Ch] [rbp-A4h]
  Vector vDirection; // [rsp+30h] [rbp-A0h] BYREF
  QAngle vAngles; // [rsp+40h] [rbp-90h] BYREF
  Vector vPos; // [rsp+50h] [rbp-80h] BYREF
  Vector v33; // [rsp+60h] [rbp-70h] BYREF
  Vector CursorPosition; // [rsp+70h] [rbp-60h]
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp-38h]
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4

  v36 = __readfsqword(0x28u);
  ward_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ward_count", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v4 = CursorPosition.y - AbsOrigin->y;
  v5 = CursorPosition.x - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v4;
  vDirection.x = v5;
  VectorNormalize(&vDirection);
  VectorAngles(&vDirection, &vAngles);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_ShadowShaman.SerpentWard", v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v7, "special_bonus_unique_shadow_shaman_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    iBonusHP = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    iBonusHP = 0;
  if ( ward_count > 0 )
  {
    v9 = vWardOffset;
    do
    {
      iTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = CDOTABaseAbility::GetCaster(this);
      v33 = CDOTABaseAbility::GetCursorPosition(this);
      EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
      v13 = DOTA_CreateUnitByName(pszWardArray[EffectiveLevel], &v33, 1, v11, v10, iTeamNumber);
      v14 = v13;
      if ( v13 != 0 )
      {
        CBaseEntity::SetAbsAngles(v13, &vAngles);
        v15 = CDOTABaseAbility::GetCaster(this);
        v16 = (*(v15->_vptr_IHandleEntity + 414))(v15);
        CDOTA_BaseNPC::SetControllableByPlayer(v14, v16, 0);
        v17 = (iBonusHP + (*(v14->_vptr_IHandleEntity + 156))(v14));
        vptr_IHandleEntity = v14->_vptr_IHandleEntity;
        v14->m_flBaseMaxHealth = v17;
        v19 = vptr_IHandleEntity[156](v14);
        CDOTA_BaseNPC::ModifyHealth(v14, v19, 0, 0, 0);
        v33 = CDOTABaseAbility::GetCursorPosition(this);
        v20 = v33.x + v9->x;
        v37.z = v33.z + v9->z;
        CursorPosition.y = v33.y + v9->y;
        CursorPosition.x = v20;
        *&v37.x = *&CursorPosition.x;
        CursorPosition.z = v37.z;
        FindClearSpaceForUnit(v14, v37, 1);
        KeyValues::KeyValues(&kv, "modifier_shadow_shaman_serpent_ward");
        KeyValues::SetFloat(&kv, "duration", v21);
        v22 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v14, v22, this, "modifier_shadow_shaman_serpent_ward", &kv, 0);
        CBaseEntity::PhysicsTouchTriggers(v14, 0);
        KeyValues::~KeyValues(&kv);
      }
      ++v9;
    }
    while ( v9 != &vWardOffset[(ward_count - 1) + 1] );
  }
  v23 = CDOTABaseAbility::GetCaster(this);
  if ( v23 != 0 )
  {
    v24 = 0;
    if ( v23->m_bIsDOTANPC && (v23->m_iUnitType & 1) != 0 && !v23->m_bIsIllusion.m_Value )
      v24 = v23;
  }
  else
  {
    v24 = 0;
  }
  EconEntity_OnOwnerKillEaterEvent(
    v24,
    0,
    kill_eater_event_t::kKillEaterEvent_ShadowShaman_WardsSummoned,
    ward_count,
    INVALID_ITEM_DEF_INDEX);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26.m_Data = CEntityInstance::GetEntityIndex(v25).m_Data;
  CreateUnitEvent(v26, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
}


// CDOTA_Ability_ShadowShaman_MassSerpentWard::GetAbilityDamageToTargetOverInterval  (line 748, @0x0000000002a52de0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "ward_count"
__int64 __fastcall CDOTA_Ability_ShadowShaman_MassSerpentWard::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ShadowShaman_MassSerpentWard *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fIntervala = fminf(fInterval, (*(pTarget->_vptr_IHandleEntity + 386))(pTarget) / 600.0);
    fIntervalb = (fIntervala / 1.5) * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ward_count", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::~CDOTA_Modifier_ShadowShaman_SerpentWard  (line 770, @0x0000000002a65950, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::~CDOTA_Modifier_ShadowShaman_SerpentWard(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4394650;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::~CDOTA_Modifier_ShadowShaman_SerpentWard  (line 770, @0x0000000002a65970, libserver.so)  // inlines: ~CDOTA_Modifier_ShadowShaman_SerpentWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::~CDOTA_Modifier_ShadowShaman_SerpentWard(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4394650;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::IsHidden  (line 775, @0x0000000002a60730, libserver.so)
bool __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::IsHidden(CDOTA_Modifier_ShadowShaman_SerpentWard *const this)
{
  return 1;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::OnCreated  (line 799, @0x0000000002a55170, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "scepter_range"
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::OnCreated(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->scepter_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "scepter_range", -1, 0);
  else
    this->scepter_range = 0;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::OnDestroy  (line 806, @0x0000000002a40610, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::OnDestroy(CDOTA_Modifier_ShadowShaman_SerpentWard *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(Parent, 0);
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::DeclareFunctions  (line 816, @0x0000000002a3ed10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ShadowShaman_SerpentWard::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttacked(CModifierParams const&), CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::DeclareFunctions(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this)
{
  this->m_Functions[69].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::GetModifierAttackRangeBonus;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[157].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::GetUnitLifetimeFraction;
  this->m_Functions[103].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePhysical;
  this->m_Functions[104].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePure;
  this->m_Functions[137].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttacked;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack;
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePhysical  (line 828, @0x0000000002a3edd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamageMagical  (line 835, @0x0000000002a3edf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePure  (line 842, @0x0000000002a3ee10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::GetModifierAttackRangeBonus  (line 848, @0x0000000002a42440, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::GetModifierAttackRangeBonus(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx

  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v6 = 1;
  if ( HasScepter )
  {
    *v5.m128i_i32 = this->scepter_range;
    return ((_mm_cvtsi128_si32(v5) << 32) | 1);
  }
  return v6;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttacked  (line 858, @0x0000000002a471b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttacked(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v14; // rax
  int Health; // ebx
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax

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
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( CBaseEntity::GetHealth(Parent) <= 1 )
                  {
                    v17 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v17, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  }
                  else
                  {
                    v14 = CDOTA_Buff::GetParent(this);
                    Health = CBaseEntity::GetHealth(v14);
                    v16 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::ModifyHealth(v16, Health - 1, 0, 1, 0);
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


// CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack  (line 886, @0x0000000002a50a50, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Get, GetAttackRange, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetModifier_Constant_Highest, GetRangedProjectileName, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsUnitMyParent, IsValid, LookupEntity, Purge, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (14 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::OnAttack(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v7; // rax
  CEntityInstance *v8; // r15
  CDOTA_BaseNPC *Parent; // rax
  __m128i v10; // xmm5
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r13
  CDOTA_BaseNPC *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm0_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm0_4
  int v27; // ebx
  __m128i v28; // xmm4
  float v29; // ebx
  CDOTA_BaseNPC *v30; // r12
  CDOTA_BaseNPC *v31; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v33; // rax
  __int64 v34; // rbx
  __int16 v35; // cx
  CEntityIdentity *v36; // rdx
  CBaseEntity *v37; // r12
  CEntityIdentity *v38; // rdx
  CDOTA_BaseNPC *v39; // rax
  CDOTA_AttackRecord *AttackRecord; // r13
  CHandle<CBaseEntity> *v41; // rdx
  uint32 m_Index; // eax
  CDOTA_BaseNPC *v43; // rax
  __int64 v44; // rax
  CBaseEntity *m_pInstance; // rax
  float v46; // [rsp+24h] [rbp-5Ch]
  float v47; // [rsp+24h] [rbp-5Ch]
  float v48; // [rsp+28h] [rbp-58h]
  float v49; // [rsp+28h] [rbp-58h]
  float v50; // [rsp+28h] [rbp-58h]
  float v51; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  v4 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v4 != 0 && v4->m_bIsDOTANPC && v4 == CDOTA_Buff::GetParent(this) && !params->bNoCooldown )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      v7 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      if ( v7 == 0 || (v8 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
        v8 = 0;
      Parent = CDOTA_Buff::GetParent(this);
      Modifier_Constant_Highest_Internal = 0.0;
      p_m_ModifierManager = &Parent->m_ModifierManager;
      v13 = Parent;
      v14 = Parent->m_ModifierManager.m_buffsForModifiers[71];
      if ( v14 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
        Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                               p_m_ModifierManager,
                                               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                               &CModifierParams::s_Default);
      v15 = v13->m_ModifierManager.m_buffsForModifiers[69];
      Modifier_Constant_Additive_Internal = 0.0;
      m_iAttackRange = v13->m_iAttackRange;
      if ( v15 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v15].m_Size > 0 )
      {
        v46 = Modifier_Constant_Highest_Internal;
        v48 = v13->m_iAttackRange;
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                p_m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v46;
        m_iAttackRange = v48;
      }
      v18 = v13->m_ModifierManager.m_buffsForModifiers[70];
      v19 = m_iAttackRange + Modifier_Constant_Additive_Internal;
      v20 = 0.0;
      if ( v18 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v18].m_Size > 0 )
      {
        v47 = Modifier_Constant_Highest_Internal;
        v49 = v19;
        v20 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                p_m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                &CModifierParams::s_Default);
        Modifier_Constant_Highest_Internal = v47;
        v19 = v49;
      }
      if ( Modifier_Constant_Highest_Internal > (v19 + v20) )
      {
        v44 = v13->m_ModifierManager.m_buffsForModifiers[71];
        v27 = 0;
        if ( v44 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v44].m_Size > 0 )
          v27 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                  p_m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                  &CModifierParams::s_Default);
      }
      else
      {
        v21 = v13->m_ModifierManager.m_buffsForModifiers[69];
        v22 = 0.0;
        v23 = v13->m_iAttackRange;
        if ( v21 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
        {
          v50 = v13->m_iAttackRange;
          v22 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  p_m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                  &CModifierParams::s_Default);
          v23 = v50;
        }
        v24 = v13->m_ModifierManager.m_buffsForModifiers[70];
        v25 = v23 + v22;
        v26 = 0.0;
        if ( v24 != 0xFF && v13->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v24].m_Size > 0 )
        {
          v51 = v25;
          v26 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                  p_m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
                  &CModifierParams::s_Default);
          v25 = v51;
        }
        v27 = (v26 + v25);
      }
      if ( v8 != 0 )
      {
        *v10.m128i_i32 = v27;
        entities.m_Size = 0;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        v28 = v10;
        entities.m_Memory.m_nGrowSize = 0;
        *v28.m128i_i32 = v27 + 24.0;
        v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
        v30 = CDOTA_Buff::GetParent(this);
        v31 = CDOTA_Buff::GetParent(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v31);
        v33 = CDOTA_Buff::GetParent(this);
        FindUnitsInRadius(v33->m_iTeamNum.m_Value, AbsOrigin, v30, v29, &entities, 2, 23, 541072, 0, 0);
        v34 = 0;
        if ( entities.m_Size <= 0 )
        {
LABEL_38:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
            if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          }
          return 1uLL;
        }
        while ( 1 )
        {
          v41 = &entities.m_Memory.m_pMemory[v34];
          m_Index = v41->m_Index;
          if ( v41->m_Index + 2 > 1
            && (v35 = v41->m_Index,
                (v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v41->m_Index) >> 9) & 0x3F]) != 0) )
          {
            v37 = 0;
            v38 = &v36[v35 & 0x1FF];
            if ( v38 != 0 && m_Index == v38->m_EHandle.m_Index )
            {
              m_pInstance = v38->m_pInstance;
              if ( v38->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                v37 = v38->m_pInstance;
                if ( v8 == m_pInstance )
                  goto LABEL_34;
              }
            }
          }
          else
          {
            v37 = 0;
          }
          v39 = CDOTA_Buff::GetParent(this);
          AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v39, v37, 0, 0, 0, 0, 0);
          if ( AttackRecord != 0 )
          {
            AttackRecord->m_iszAutoAttackRangedParticle.u.m_Id = CDOTA_Buff::GetParent(this)->m_iszAutoAttackRangedParticle.u.m_Id;
            v43 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::PerformAttack(v43, AttackRecord, v37, 1, 0, 1, 0);
            goto LABEL_38;
          }
LABEL_34:
          if ( entities.m_Size <= ++v34 )
            goto LABEL_38;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::GetUnitLifetimeFraction  (line 929, @0x0000000002a3ee30, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::GetUnitLifetimeFraction(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Modifier_ShadowShaman_SerpentWard::CheckState  (line 936, @0x0000000002a3eea0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_ShadowShaman_SerpentWard::CheckState(
        CDOTA_Modifier_ShadowShaman_SerpentWard *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x200uLL;
  buffState->m_nDisabledStateMask &= ~0x200uLL;
}


