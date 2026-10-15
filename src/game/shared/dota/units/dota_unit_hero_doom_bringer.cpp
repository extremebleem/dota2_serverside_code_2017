// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:31
class CDOTA_Unit_Hero_DoomBringer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_DoomBringer(CDOTA_Unit_Hero_DoomBringer &);
	CDOTA_Unit_Hero_DoomBringer(CDOTA_Unit_Hero_DoomBringer &);
	CDOTA_Unit_Hero_DoomBringer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsDemon();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnDying();
	virtual ~CDOTA_Unit_Hero_DoomBringer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[402] IsDemon
	// vtable[6] Precache
	// vtable[469] OnDying
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:44
class C_CDOTA_Unit_Hero_DoomBringer_MapInstall {
	C_CDOTA_Unit_Hero_DoomBringer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:88
class CDOTA_Ability_DoomBringer_Devour : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_Devour(CDOTA_Ability_DoomBringer_Devour &);
	CDOTA_Ability_DoomBringer_Devour(CDOTA_Ability_DoomBringer_Devour &);
	CDOTA_Ability_DoomBringer_Devour();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnOwnerDied();
	virtual ~CDOTA_Ability_DoomBringer_Devour();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[271] OnOwnerDied
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:101
class C_CDOTA_Ability_DoomBringer_Devour_MapInstall {
	C_CDOTA_Ability_DoomBringer_Devour_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:223
class CDOTA_Modifier_DoomBringer_Devour : public CDOTA_Buff {
public:

	CDOTA_Modifier_DoomBringer_Devour();
	virtual void OnDestroy();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_DoomBringer_Devour();

	// vtable[60] OnDestroy
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:268
class CDOTA_Ability_DoomBringer_ScorchedEarth : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_ScorchedEarth(CDOTA_Ability_DoomBringer_ScorchedEarth &);
	CDOTA_Ability_DoomBringer_ScorchedEarth(CDOTA_Ability_DoomBringer_ScorchedEarth &);
	CDOTA_Ability_DoomBringer_ScorchedEarth();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_DoomBringer_ScorchedEarth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:312
class CDOTA_Modifier_DoomBringer_ScorchedEarthEffect : public CDOTA_Buff {
public:

	CDOTA_Modifier_DoomBringer_ScorchedEarthEffect(CDOTA_Modifier_DoomBringer_ScorchedEarthEffect &);
	CDOTA_Modifier_DoomBringer_ScorchedEarthEffect(const CDOTA_Modifier_DoomBringer_ScorchedEarthEffect &);
	CDOTA_Modifier_DoomBringer_ScorchedEarthEffect();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:341
class CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura : public CDOTA_Buff {
public:

private:

	int damage_per_second;  // +0xba8
	int bonus_movement_speed_pct;  // +0xbac
	int radius;  // +0xbb0
	CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:465
class CDOTA_Ability_DoomBringer_InfernalBlade : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_InfernalBlade(CDOTA_Ability_DoomBringer_InfernalBlade &);
	CDOTA_Ability_DoomBringer_InfernalBlade(CDOTA_Ability_DoomBringer_InfernalBlade &);
	CDOTA_Ability_DoomBringer_InfernalBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_DoomBringer_InfernalBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:480
class C_CDOTA_Ability_DoomBringer_InfernalBlade_MapInstall {
	C_CDOTA_Ability_DoomBringer_InfernalBlade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:512
class CDOTA_Modifier_DoomBringer_InfernalBlade : public CDOTA_Buff {
public:

private:

	bool m_bInfernalBladeAttack;  // +0xba8

	int m_nFXIndex;  // +0xbac
	float burn_duration;  // +0xbb0
	float ministun_duration;  // +0xbb4
	CDOTA_Modifier_DoomBringer_InfernalBlade();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_DoomBringer_InfernalBlade();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:746
class CDOTA_Modifier_DoomBringer_InfernalBlade_Burn : public CDOTA_Buff {
public:

private:

	int burn_damage;  // +0xba8
	float burn_damage_pct;  // +0xbac
	CDOTA_Modifier_DoomBringer_InfernalBlade_Burn();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:816
class CDOTA_Ability_DoomBringer_Doom : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_Doom(CDOTA_Ability_DoomBringer_Doom &);
	CDOTA_Ability_DoomBringer_Doom(CDOTA_Ability_DoomBringer_Doom &);
	CDOTA_Ability_DoomBringer_Doom();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_DoomBringer_Doom();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:876
class CDOTA_Modifier_DoomBringer_Doom : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	float duration;  // +0xbac
	int deniable_pct;  // +0xbb0
	float flElapsedTime;  // +0xbb4
	CDOTA_Modifier_DoomBringer_Doom();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_DoomBringer_Doom();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:1005
class CDOTA_Ability_DoomBringer_Empty1 : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_Empty1(CDOTA_Ability_DoomBringer_Empty1 &);
	CDOTA_Ability_DoomBringer_Empty1(CDOTA_Ability_DoomBringer_Empty1 &);
	CDOTA_Ability_DoomBringer_Empty1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_DoomBringer_Empty1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_doom_bringer.cpp:1019
class CDOTA_Ability_DoomBringer_Empty2 : public CDOTABaseAbility {
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
	CDOTA_Ability_DoomBringer_Empty2(CDOTA_Ability_DoomBringer_Empty2 &);
	CDOTA_Ability_DoomBringer_Empty2(CDOTA_Ability_DoomBringer_Empty2 &);
	CDOTA_Ability_DoomBringer_Empty2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_DoomBringer_Empty2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_DoomBringer::~CDOTA_Unit_Hero_DoomBringer  (line 31, @0x0000000002ba2920, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_DoomBringer::~CDOTA_Unit_Hero_DoomBringer(CDOTA_Unit_Hero_DoomBringer *const this)
{
  this->_vptr_IHandleEntity = &off_44CE590;
  this->_vptr_INextBotEventResponder = &off_44CF570;
  this->_vptr_CObstructionObject = &off_44CF8A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_DoomBringer::~CDOTA_Unit_Hero_DoomBringer  (line 31, @0x0000000002ba2960, libserver.so)  // inlines: ~CDOTA_Unit_Hero_DoomBringer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_DoomBringer::~CDOTA_Unit_Hero_DoomBringer(CDOTA_Unit_Hero_DoomBringer *const this)
{
  this->_vptr_IHandleEntity = &off_44CE590;
  this->_vptr_INextBotEventResponder = &off_44CF570;
  this->_vptr_CObstructionObject = &off_44CF8A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_DoomBringer::Schema_DynamicBinding  (line 33, @0x0000000002b8f6e0, libserver.so)
// globals: CDOTA_Unit_Hero_DoomBringer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DoomBringer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DoomBringer *const this)
{
  return CDOTA_Unit_Hero_DoomBringer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002b8f710, libserver.so)
// globals: CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002b8f720, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_DoomBringer>
void __fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002b8f740, libserver.so)
void __fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002b8f760, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002b8f770, libserver.so)
// globals: CDOTA_Unit_Hero_DoomBringer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DoomBringer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002b977e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002b9c570, libserver.so)  // inlines: CDOTA_Unit_Hero_DoomBringer, Construct<CDOTA_Unit_Hero_DoomBringer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44CE590;
    *(p + 236) = &off_44CF570;
    *(p + 257) = &off_44CF8A0;
  }
  return p;
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002babfd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002bac2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal  (line 33, @0x0000000002bcec00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_doom_bringer", "CDOTA_Unit_Hero_DoomBringer"
// globals: `guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass, CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass, __dso_handle, CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo, CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass);
    CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass._vptr_CEntityClass = off_44CE510;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_DoomBringer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DoomBringerClass != 0 )
    return &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo,
      "CDOTA_Unit_Hero_DoomBringer",
      "npc_dota_hero_doom_bringer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo);
  }
  CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass.m_pClassInfo = &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo;
  CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DoomBringerClass = &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass;
  CDOTA_Unit_Hero_DoomBringer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClassInfo.m_pClass = &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass;
  CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DoomBringerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_DoomBringer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DoomBringerClass;
}


// CDOTA_Unit_Hero_DoomBringer::IsDemon  (line 37, @0x0000000002b8f780, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DoomBringer::IsDemon(const CDOTA_Unit_Hero_DoomBringer *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DoomBringer::YouForgotToImplementOrDeclareServerClass  (line 44, @0x0000000002b34da0, libserver.so)
int __fastcall CDOTA_Unit_Hero_DoomBringer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_DoomBringer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_DoomBringer::GetServerClass  (line 44, @0x0000000002b4c520, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_DoomBringer::GetServerClass(CDOTA_Unit_Hero_DoomBringer *const this)
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


// CDOTA_Unit_Hero_DoomBringer::Precache  (line 52, @0x0000000002b3ac60, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf"
void __fastcall CDOTA_Unit_Hero_DoomBringer::Precache(
        CDOTA_Unit_Hero_DoomBringer *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_DoomBringer::OnDying  (line 65, @0x0000000002b34db0, libserver.so)
void __fastcall CDOTA_Unit_Hero_DoomBringer::OnDying(CDOTA_Unit_Hero_DoomBringer *const this)
{
  ;
}


// CDOTA_Ability_DoomBringer_Devour::~CDOTA_Ability_DoomBringer_Devour  (line 88, @0x0000000002ba0e50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_Devour::~CDOTA_Ability_DoomBringer_Devour(
        CDOTA_Ability_DoomBringer_Devour *const this)
{
  this->_vptr_IHandleEntity = &off_44CF970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_Devour::~CDOTA_Ability_DoomBringer_Devour  (line 88, @0x0000000002ba0e70, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_Devour
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_Devour::~CDOTA_Ability_DoomBringer_Devour(
        CDOTA_Ability_DoomBringer_Devour *const this)
{
  this->_vptr_IHandleEntity = &off_44CF970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_Devour::Schema_DynamicBinding  (line 90, @0x0000000002b8f790, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Devour::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Devour::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Devour *const this)
{
  return CDOTA_Ability_DoomBringer_Devour::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 90, @0x0000000002b8f7a0, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::DestructInstance  (line 90, @0x0000000002b8f7b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_Devour>
void __fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::FreeInstance  (line 90, @0x0000000002b8f7d0, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::CanAllocate  (line 90, @0x0000000002b8f7f0, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 90, @0x0000000002b8f800, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Devour::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Devour::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::AllocateInstance  (line 90, @0x0000000002b97820, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::ConstructInstance  (line 90, @0x0000000002b9d0e0, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_Devour, Construct<CDOTA_Ability_DoomBringer_Devour>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44CF970;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000002baa660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 90, @0x0000000002baa680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal  (line 90, @0x0000000002bc7c70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_DoomBringer_Devour"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass, CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass, __dso_handle, CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo, CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass);
    CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass._vptr_CEntityClass = off_44CF8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_Devour::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_DevourClass != 0 )
    return &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo,
      "CDOTA_Ability_DoomBringer_Devour",
      "doom_bringer_devour",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo);
  }
  CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass.m_pClassInfo = &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo;
  CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_DevourClass = &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass;
  CDOTA_Ability_DoomBringer_Devour::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass;
  CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_DevourClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_Devour::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DevourClass;
}


// CDOTA_Ability_DoomBringer_Devour::YouForgotToImplementOrDeclareServerClass  (line 101, @0x0000000002b34dc0, libserver.so)
int __fastcall CDOTA_Ability_DoomBringer_Devour::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DoomBringer_Devour *const this)
{
  return 0;
}


// CDOTA_Ability_DoomBringer_Devour::GetServerClass  (line 101, @0x0000000002b4bce0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DoomBringer_Devour::GetServerClass(CDOTA_Ability_DoomBringer_Devour *const this)
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


// CDOTA_Ability_DoomBringer_Devour::OnOwnerDied  (line 109, @0x0000000002b34dd0, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_Devour::OnOwnerDied(CDOTA_Ability_DoomBringer_Devour *const this)
{
  ;
}


// CDOTA_Ability_DoomBringer_Devour::OnSpellStart  (line 124, @0x0000000002b66b80, libserver.so)  // inlines: GetAbilityName, GetLevelSpecialValueFor<int>, GetParent, NetworkStateChanged, Set, SetStolen, ToDOTABaseNPC, operator=<bool>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (23 total)
// strings: "health_per_second", "modifier_doom_bringer_devour", "particles/units/heroes/hero_doom_bringer/doom_bringer_devour.vpcf", "attach_hitloc", "attach_mouth", "Hero_DoomBringer.DevourCast" (9 total)
void __fastcall CDOTA_Ability_DoomBringer_Devour::OnSpellStart(CDOTA_Ability_DoomBringer_Devour *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v6; // rax
  CBaseEntity *OwnerEntity; // r14
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v11; // rax
  CGameSceneNode *v12; // rdi
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int i; // r14d
  CDOTABaseAbility *AbilityByIndex; // r15
  CDOTA_BaseNPC *v19; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v21; // rdx
  const char *m_pszAbilityName; // rax
  DOTAAbilityData_t *v23; // rcx
  const char *v24; // rax
  const char *v25; // rcx
  CDOTA_BaseNPC *v26; // rax
  DOTAAbilityData_t *v27; // rdx
  const char *v28; // rdi
  const char *v29; // rdx
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // r15
  CDOTABaseAbility *v33; // rax
  const CBaseAnimating *fDuration; // [rsp+18h] [rbp-178h]
  int fDurationa; // [rsp+18h] [rbp-178h]
  KeyValues kv; // [rsp+20h] [rbp-170h] BYREF
  CFmtStrN<256,false> v37; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v38; // [rsp+158h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && SLOBYTE(CursorTarget[2].m_hEffectEntity.m_Value.m_Index) < 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "health_per_second", -1, 0);
    CBaseEntity::GetHealth(v3);
    KeyValues::KeyValues(&kv, "modifier_doom_bringer_devour");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_doom_bringer_devour", &kv, 0);
    if ( !this->m_bStolen.m_Value && CDOTA_BaseNPC::GetAbilityByIndex(v3, 0) != 0 && v3->m_bIsNeutralUnitType.m_Value )
    {
      for ( i = 1; i != 3; ++i )
      {
        AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v3, i - 1);
        if ( AbilityByIndex != 0 )
        {
          fDurationa = i + 2;
          v19 = CDOTABaseAbility::GetCaster(this);
          m_pAbilityData = CDOTA_BaseNPC::GetAbilityByIndex(v19, i + 2)->m_pAbilityData;
          v21 = "<NoAbilityName>";
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pszAbilityName != 0 )
              v21 = m_pszAbilityName;
          }
          v23 = AbilityByIndex->m_pAbilityData;
          v24 = "<NoAbilityName>";
          if ( v23 != 0 )
          {
            v25 = v23->m_pszAbilityName;
            if ( v25 != 0 )
              v24 = v25;
          }
          if ( v21 == v24 )
            continue;
          v26 = CDOTABaseAbility::GetCaster(this);
          v27 = AbilityByIndex->m_pAbilityData;
          v28 = "<NoAbilityName>";
          if ( v27 != 0 )
          {
            v29 = v27->m_pszAbilityName;
            if ( v29 != 0 )
              v28 = v29;
          }
          Ability = DOTA_CreateAbility(v28, v26);
          CDOTABaseAbility::UpgradeAbility(Ability, 0);
          if ( !Ability->m_bStolen.m_Value )
          {
            (*(Ability->_vptr_IHandleEntity + 22))(Ability, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            Ability->m_bStolen.m_Value = 1;
          }
        }
        else
        {
          v32 = CDOTABaseAbility::GetCaster(this);
          CFmtStrN<256,false>::CFmtStrN(&v37, "doom_bringer_empty%d", i);
          v33 = DOTA_CreateAbility(v37.m_szBuf, v32);
          Ability = v33;
          if ( !v33->m_bStolen.m_Value )
          {
            (*(v33->_vptr_IHandleEntity + 22))(v33, 852, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            Ability->m_bStolen.m_Value = 1;
          }
          fDurationa = i + 2;
        }
        v31 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::SetAbilityByIndex(v31, Ability, fDurationa);
      }
    }
    OwnerEntity = 0;
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_doom_bringer/doom_bringer_devour.vpcf",
                 1,
                 OwnerEntity,
                 0,
                 0);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 0, v3, 5, "attach_hitloc", vec3_invalid, 1);
    v12 = this->m_pGameSceneNode->m_pParent;
    if ( v12 != 0 )
      fDuration = CGameSceneNode::GetOwnerEntity(v12);
    else
      fDuration = 0;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, Particle, 1, fDuration, 5, "attach_mouth", vec3_invalid, 1);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
    CBaseEntity::AddEffects(v3, 32);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Kill(v3, this, v15, 0.0, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_DoomBringer.DevourCast", 0.0, 0, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_DoomBringer.Devour", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_DoomBringer_Devour::CastFilterResult  (line 182, @0x0000000002b3a340, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, UnitFilter, CDOTA_BaseNPC::FindModifierByName
// strings: "special_bonus_unique_doom_2", "modifier_doom_bringer_devour"
int __fastcall CDOTA_Ability_DoomBringer_Devour::CastFilterResult(
        CDOTA_Ability_DoomBringer_Devour *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // r12d
  CDOTA_BaseNPC *v7; // rax
  int v8; // r12d
  CDOTA_BaseNPC *v10; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_doom_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v6 = 16;
  else
    v6 = 512;
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = UnitFilter(pTarget, 2, 2, v6, v7->m_iTeamNum.m_Value);
  if ( v8 == 0
    && ((v10 = CDOTABaseAbility::GetCaster(this),
         CDOTA_BaseNPC::FindModifierByName(v10, "modifier_doom_bringer_devour", 0) != 0)
     || (pTarget->m_iUnitType & 0x800) != 0) )
  {
    return 23;
  }
  else
  {
    return v8;
  }
}


// CDOTA_Ability_DoomBringer_Devour::GetCustomCastError  (line 208, @0x0000000002b3c4e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_doom_bringer_devour", "#dota_hud_error_doom_already_devouring", "#dota_hud_error_cant_cast_on_roshan"
const char *__fastcall CDOTA_Ability_DoomBringer_Devour::GetCustomCastError(
        CDOTA_Ability_DoomBringer_Devour *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v5; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_doom_bringer_devour", 0) != 0 )
    return "#dota_hud_error_doom_already_devouring";
  v5 = "#dota_hud_error_cant_cast_on_roshan";
  if ( (pTarget->m_iUnitType & 0x800) == 0 )
    return "";
  return v5;
}


// CDOTA_Modifier_DoomBringer_Devour::~CDOTA_Modifier_DoomBringer_Devour  (line 223, @0x0000000002b9aff0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_Devour::~CDOTA_Modifier_DoomBringer_Devour(
        CDOTA_Modifier_DoomBringer_Devour *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D0430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_Devour::~CDOTA_Modifier_DoomBringer_Devour  (line 223, @0x0000000002b9b010, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_Devour
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_Devour::~CDOTA_Modifier_DoomBringer_Devour(
        CDOTA_Modifier_DoomBringer_Devour *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D0430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_Devour::IsDebuff  (line 230, @0x0000000002b8f810, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_Devour::IsDebuff(CDOTA_Modifier_DoomBringer_Devour *const this)
{
  return 1;
}


// CDOTA_Modifier_DoomBringer_Devour::IsPurgable  (line 231, @0x0000000002b8f820, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_Devour::IsPurgable(CDOTA_Modifier_DoomBringer_Devour *const this)
{
  return 0;
}


// CDOTA_Modifier_DoomBringer_Devour::OnDestroy  (line 238, @0x0000000002b6eed0, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, ModifyGold, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_PlayerResource::ModifyGold, CDOTA_BaseNPC_Hero::IsBuybackLimited, SendOverheadEventMessage, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC_Hero::GetBuybackGoldFactor
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_DoomBringer_Devour::OnDestroy(CDOTA_Modifier_DoomBringer_Devour *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC_Hero *v3; // rbx
  CDOTABaseAbility *Ability; // rax
  int LevelSpecialValue; // r12d
  CDOTAPlayer *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = Parent;
  if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 && (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_gold", -1, 0);
    else
      LevelSpecialValue = 0;
    CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v3->m_iPlayerID.m_Value, LevelSpecialValue, 0, 0);
    if ( CDOTA_BaseNPC_Hero::IsBuybackLimited(v3) )
      LevelSpecialValue = (CDOTA_BaseNPC_Hero::GetBuybackGoldFactor(v3) * LevelSpecialValue);
    v6 = (*(v3->_vptr_IHandleEntity + 413))(v3);
    SendOverheadEventMessage(v6, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_GOLD, v3, LevelSpecialValue, 0);
    EconEntity_OnOwnerKillEaterEvent(
      v3,
      0,
      kill_eater_event_t::kKillEaterEventType_Doom_CreepsDevoured,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::~CDOTA_Ability_DoomBringer_ScorchedEarth  (line 268, @0x0000000002ba0ea0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::~CDOTA_Ability_DoomBringer_ScorchedEarth(
        CDOTA_Ability_DoomBringer_ScorchedEarth *const this)
{
  this->_vptr_IHandleEntity = &off_44D0790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::~CDOTA_Ability_DoomBringer_ScorchedEarth  (line 268, @0x0000000002ba0ec0, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_ScorchedEarth
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::~CDOTA_Ability_DoomBringer_ScorchedEarth(
        CDOTA_Ability_DoomBringer_ScorchedEarth *const this)
{
  this->_vptr_IHandleEntity = &off_44D0790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::Schema_DynamicBinding  (line 270, @0x0000000002b8f830, libserver.so)
// globals: CDOTA_Ability_DoomBringer_ScorchedEarth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_ScorchedEarth *const this)
{
  return CDOTA_Ability_DoomBringer_ScorchedEarth::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 270, @0x0000000002b8f840, libserver.so)
// globals: CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::DestructInstance  (line 270, @0x0000000002b8f850, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_ScorchedEarth>
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::FreeInstance  (line 270, @0x0000000002b8f870, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::CanAllocate  (line 270, @0x0000000002b8f890, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 270, @0x0000000002b8f8a0, libserver.so)
// globals: CDOTA_Ability_DoomBringer_ScorchedEarth::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_ScorchedEarth::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::AllocateInstance  (line 270, @0x0000000002b97860, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::ConstructInstance  (line 270, @0x0000000002b9d110, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_ScorchedEarth, Construct<CDOTA_Ability_DoomBringer_ScorchedEarth>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D0790;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baa6b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baa6d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal  (line 270, @0x0000000002bc7dc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "doom_bringer_scorched_earth", "CDOTA_Ability_DoomBringer_ScorchedEarth"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass, CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass, __dso_handle, CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo, CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass);
    CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass._vptr_CEntityClass = off_44D0710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_ScorchedEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_ScorchedEarthClass != 0 )
    return &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo,
      "CDOTA_Ability_DoomBringer_ScorchedEarth",
      "doom_bringer_scorched_earth",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo);
  }
  CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass.m_pClassInfo = &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo;
  CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_ScorchedEarthClass = &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass;
  CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass;
  CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_ScorchedEarthClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_ScorchedEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_ScorchedEarthClass;
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::OnSpellStart  (line 282, @0x0000000002b73820, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_doom_bringer_scorched_earth_effect"
void __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::OnSpellStart(
        CDOTA_Ability_DoomBringer_ScorchedEarth *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_doom_bringer_scorched_earth_effect");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_doom_bringer_scorched_earth_effect", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_DoomBringer_ScorchedEarth::GetAbilityDamageToTargetOverInterval  (line 297, @0x0000000002b793f0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_DoomBringer_ScorchedEarth::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DoomBringer_ScorchedEarth *const this,
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
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect  (line 312, @0x0000000002b9c220, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D1210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect  (line 312, @0x0000000002b9c240, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffect(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D1210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::IsHidden  (line 317, @0x0000000002b9df50, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::IsHidden(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  CDOTA_BaseNPC *Parent; // r12

  Parent = CDOTA_Buff::GetParent(this);
  return Parent != CDOTA_Buff::GetCaster(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::IsAura  (line 319, @0x0000000002b8f8b0, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::IsAura(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return 1;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetModifierAura  (line 320, @0x0000000002b8f8c0, libserver.so)
// strings: "modifier_doom_bringer_scorched_earth_effect_aura"
const char *__fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetModifierAura(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return "modifier_doom_bringer_scorched_earth_effect_aura";
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchTeam  (line 322, @0x0000000002b8f8d0, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchTeam(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return 1;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchType  (line 323, @0x0000000002b8f8e0, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchType(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return 3;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchFlags  (line 324, @0x0000000002b8f8f0, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraSearchFlags(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return 1024;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraRadius  (line 325, @0x0000000002b8f900, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraRadius(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this)
{
  return 600;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraEntityReject  (line 326, @0x0000000002b9df80, libserver.so)
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffect::GetAuraEntityReject(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffect *const this,
        CDOTA_BaseNPC *pNPC)
{
  __int64 v3; // rbx
  CDOTA_BaseNPC *Caster; // rax

  v3 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  return v3 != (*(Caster->_vptr_IHandleEntity + 413))(Caster);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura  (line 341, @0x0000000002b9afa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D1570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura  (line 341, @0x0000000002b9afc0, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::~CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D1570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::IsHidden  (line 351, @0x0000000002b9dfc0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::IsHidden(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  CDOTA_BaseNPC *Parent; // r12

  Parent = CDOTA_Buff::GetParent(this);
  return Parent == CDOTA_Buff::GetCaster(this);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::IsPurgable  (line 353, @0x0000000002b8f910, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::IsPurgable(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  return 0;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnCreated  (line 370, @0x0000000002b6e880, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::UnitEmitSound
// strings: "bonus_movement_speed_pct", "particles/units/heroes/hero_doom_bringer/doom_bringer_scorched_earth_buff.vpcf", "Hero_DoomBringer.ScorchedEarthAura"
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnCreated(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_BaseNPC *v10; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_second", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bonus_movement_speed_pct = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->radius = 0;
    goto LABEL_5;
  }
  this->damage_per_second = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bonus_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_doom_bringer/doom_bringer_scorched_earth_buff.vpcf",
               1,
               Parent,
               0,
               0);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_DoomBringer.ScorchedEarthAura", 0.0, 0, 0);
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnDestroy  (line 397, @0x0000000002b37410, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_DoomBringer.ScorchedEarthAura"
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnDestroy(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_DoomBringer.ScorchedEarthAura");
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnRefresh  (line 406, @0x0000000002b6df40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movement_speed_pct"
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnRefresh(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_second", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_movement_speed_pct = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_per_second = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
    return;
  }
LABEL_7:
  this->radius = 0;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnIntervalThink  (line 415, @0x0000000002b5f7b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "particles/units/heroes/hero_doom_bringer/doom_bringer_scorched_earth_debuff.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::OnIntervalThink(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  __m128i v3; // xmm2
  float v4; // r14d
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // rbx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v17; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v20; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == CDOTA_Buff::GetCaster(this) )
  {
    hEntities.m_Size = 0;
    *v3.m128i_i32 = this->radius;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, v4, &hEntities, 2, 3, 16, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = &hEntities.m_Memory.m_pMemory[v9];
          m_Index = v10->m_Index;
          if ( v10->m_Index + 2 > 1 )
          {
            v12 = v10->m_Index;
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[v12 & 0x1FF];
              if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
              {
                m_pInstance = v14->m_pInstance;
                if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          if ( hEntities.m_Size <= ++v9 )
            goto LABEL_12;
        }
        flDamage = this->damage_per_second;
        Ability = CDOTA_Buff::GetAbility(this);
        v17 = CDOTA_Buff::GetParent(this);
        ApplyDamage(v17, m_pInstance, Ability, flDamage, 2, 0);
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_doom_bringer/doom_bringer_scorched_earth_debuff.vpcf",
                     1,
                     m_pInstance,
                     0,
                     0);
        v20 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
        ++v9;
      }
      while ( hEntities.m_Size > v9 );
    }
LABEL_12:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::DeclareFunctions  (line 439, @0x0000000002b34de0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::DeclareFunctions(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierConstantHealthRegen  (line 447, @0x0000000002b34e20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierConstantHealthRegen(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierMoveSpeedBonus_Percentage  (line 454, @0x0000000002b34e40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DoomBringer_ScorchedEarthEffectAura *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::~CDOTA_Ability_DoomBringer_InfernalBlade  (line 465, @0x0000000002ba0ef0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::~CDOTA_Ability_DoomBringer_InfernalBlade(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_44D18D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::~CDOTA_Ability_DoomBringer_InfernalBlade  (line 465, @0x0000000002ba0f10, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_InfernalBlade
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::~CDOTA_Ability_DoomBringer_InfernalBlade(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  this->_vptr_IHandleEntity = &off_44D18D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::Schema_DynamicBinding  (line 467, @0x0000000002b8f920, libserver.so)
// globals: CDOTA_Ability_DoomBringer_InfernalBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return CDOTA_Ability_DoomBringer_InfernalBlade::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 467, @0x0000000002b8f930, libserver.so)
// globals: CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::DestructInstance  (line 467, @0x0000000002b8f940, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_InfernalBlade>
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::FreeInstance  (line 467, @0x0000000002b8f960, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::CanAllocate  (line 467, @0x0000000002b8f980, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 467, @0x0000000002b8f990, libserver.so)
// globals: CDOTA_Ability_DoomBringer_InfernalBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_InfernalBlade::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::AllocateInstance  (line 467, @0x0000000002b978a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::ConstructInstance  (line 467, @0x0000000002b9d140, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_InfernalBlade, Construct<CDOTA_Ability_DoomBringer_InfernalBlade>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D18D0;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 467, @0x0000000002baa700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 467, @0x0000000002baa720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal  (line 467, @0x0000000002bc7f10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "doom_bringer_infernal_blade", "CDOTA_Ability_DoomBringer_InfernalBlade"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass, CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass, __dso_handle, CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo, CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass);
    CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass._vptr_CEntityClass = off_44D1850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_InfernalBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_InfernalBladeClass != 0 )
    return &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo,
      "CDOTA_Ability_DoomBringer_InfernalBlade",
      "doom_bringer_infernal_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo);
  }
  CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass.m_pClassInfo = &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo;
  CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_InfernalBladeClass = &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass;
  CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass;
  CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_InfernalBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_InfernalBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_InfernalBladeClass;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::ProcsMagicStick  (line 471, @0x0000000002b8f9a0, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::ProcsMagicStick(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return 0;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::IsStealable  (line 472, @0x0000000002b8f9b0, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::IsStealable(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return 0;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::GetIntrinsicModifierName  (line 473, @0x0000000002b8f9c0, libserver.so)
// strings: "modifier_doombringer_infernal_blade"
const char *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::GetIntrinsicModifierName(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return "modifier_doombringer_infernal_blade";
}


// CDOTA_Ability_DoomBringer_InfernalBlade::YouForgotToImplementOrDeclareServerClass  (line 480, @0x0000000002b34e60, libserver.so)
int __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return 0;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::GetServerClass  (line 480, @0x0000000002b4c2a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DoomBringer_InfernalBlade::GetServerClass(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
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


// CDOTA_Ability_DoomBringer_InfernalBlade::GetAbilityDamageToTargetOverInterval  (line 490, @0x0000000002b79490, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "burn_duration", "burn_damage", "burn_damage_pct"
__int64 __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float v8; // [rsp-4h] [rbp-30h]
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_duration", -1, 0));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burn_damage", -1, 0);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_damage_pct", -1, 0);
    fIntervalb = (LevelSpecialValue + ((v8 / 100.0) * (*(pTarget->_vptr_IHandleEntity + 156))(pTarget))) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_DoomBringer_InfernalBlade::GetStunDuration  (line 503, @0x0000000002b755e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "ministun_duration"
float __fastcall CDOTA_Ability_DoomBringer_InfernalBlade::GetStunDuration(
        CDOTA_Ability_DoomBringer_InfernalBlade *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "ministun_duration", -1, 0);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::~CDOTA_Modifier_DoomBringer_InfernalBlade  (line 512, @0x0000000002b9af50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::~CDOTA_Modifier_DoomBringer_InfernalBlade(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D2390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::~CDOTA_Modifier_DoomBringer_InfernalBlade  (line 512, @0x0000000002b9af70, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_InfernalBlade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::~CDOTA_Modifier_DoomBringer_InfernalBlade(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D2390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnCreated  (line 552, @0x0000000002b7de40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "burn_duration", "ministun_duration"
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnCreated(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->burn_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->ministun_duration = 0.0;
    goto LABEL_4;
  }
  this->burn_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "burn_duration", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->ministun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "ministun_duration", -1, 0);
LABEL_4:
  this->m_nFXIndex = -1;
  this->m_bInfernalBladeAttack = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnDestroy  (line 563, @0x0000000002b34e70, libserver.so)
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnDestroy(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this)
{
  ;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnRefresh  (line 579, @0x0000000002b7dda0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "burn_duration", "ministun_duration"
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnRefresh(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->burn_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->ministun_duration = 0.0;
    goto LABEL_4;
  }
  this->burn_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "burn_duration", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->ministun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "ministun_duration", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnIntervalThink  (line 589, @0x0000000002b34e80, libserver.so)
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnIntervalThink(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this)
{
  ;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::DeclareFunctions  (line 627, @0x0000000002b34e90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackStart(CModifierParams const&), CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_DoomBringer_InfernalBlade::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::DeclareFunctions(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackStart;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackLanded;
  this->m_Functions[155].__pfn = CDOTA_Modifier_DoomBringer_InfernalBlade::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackStart  (line 637, @0x0000000002b46310, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_DoomBringer.InfernalBlade.PreAttack"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackStart(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this,
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
  CEntityInstance *v11; // r15
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTABaseAbility *CurrentActiveAbility; // r12
  char m_CScriptComponent_high; // r12
  int m_Id; // eax
  float v18; // xmm0_4
  ModifierVariant_t result; // 0:rax.16

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
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == m_pInstance && v11 != 0 && Ability != 0 )
  {
    this->m_bInfernalBladeAttack = 0;
    CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(m_pInstance);
    if ( CurrentActiveAbility == CDOTA_Buff::GetAbility(this) || CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
    {
      m_CScriptComponent_high = HIBYTE(v11[7].m_CScriptComponent);
      if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
        && (Parent->m_nUnitState64.m_Value & 8) == 0 )
      {
        m_Id = v11[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 0x10) == 0
          && !Parent->m_bIsIllusion.m_Value
          && (m_Id & 0x193) != 0
          && (*(v11->_vptr_IHandleEntity + 403))(v11) == 0
          && (BYTE1(v11[58]._vptr_IHandleEntity) & 2) == 0 )
        {
          v18 = (*(Ability->_vptr_IHandleEntity + 274))(Ability, 0xFFFFFFFFLL);
          *&result.m_eType = 1;
          if ( v18 > Parent->m_flMana.m_Value )
            goto LABEL_13;
          if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
          {
            this->m_bInfernalBladeAttack = 1;
            CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_DoomBringer.InfernalBlade.PreAttack", 0.0, 0, 0);
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_13:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackLanded  (line 677, @0x0000000002b4a370, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::UseResources, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "modifier_bashed", "modifier_doom_bringer_infernal_blade_burn", "particles/units/heroes/hero_doom_bringer/doom_infernal_blade_impact.vpcf", "Hero_DoomBringer.InfernalBlade.Target"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::OnAttackLanded(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rbx
  float v13; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Parent; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // r15
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTABaseAbility *v21; // rax
  KeyValues kv; // [rsp+0h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance && this->m_bInfernalBladeAttack )
  {
    v9 = params->htarget.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->htarget.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v12 = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_bashed");
            KeyValues::SetFloat(&kv, "duration", v13);
            Ability = CDOTA_Buff::GetAbility(this);
            Parent = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(v12, Parent, Ability, "modifier_bashed", &kv, 0);
            KeyValues::KeyValues(&kv2, "modifier_doom_bringer_infernal_blade_burn");
            KeyValues::SetFloat(&kv2, "duration", v16);
            v17 = CDOTA_Buff::GetAbility(this);
            v18 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(v12, v18, v17, "modifier_doom_bringer_infernal_blade_burn", &kv2, 0);
            ParticleManager = GetParticleManager();
            LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_doom_bringer/doom_infernal_blade_impact.vpcf",
                             1,
                             v12,
                             0,
                             0);
            v20 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v20, v17);
            CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_DoomBringer.InfernalBlade.Target", 0.0, 0, 0);
            v21 = CDOTA_Buff::GetAbility(this);
            CDOTABaseAbility::UseResources(v21, 1, 1, 1, 0);
            KeyValues::~KeyValues(&kv2);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade::GetActivityTranslationModifiers  (line 725, @0x0000000002b3c1a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade::GetActivityTranslationModifiers(
        CDOTA_Modifier_DoomBringer_InfernalBlade *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 2;
  if ( params->nActivity == 1503 )
  {
    result.m_szVal = "infernal_blade";
    if ( !this->m_bInfernalBladeAttack )
      result.m_szVal = 0;
  }
  else
  {
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn  (line 746, @0x0000000002b9af00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D26B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn  (line 746, @0x0000000002b9af20, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::~CDOTA_Modifier_DoomBringer_InfernalBlade_Burn(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D26B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::IsDebuff  (line 751, @0x0000000002b8f9d0, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::IsDebuff(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  return 1;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetEffectName  (line 754, @0x0000000002b8f9e0, libserver.so)
// strings: "particles/units/heroes/hero_doom_bringer/doom_infernal_blade_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetEffectName(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  return "particles/units/heroes/hero_doom_bringer/doom_infernal_blade_debuff.vpcf";
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetStatusEffectName  (line 755, @0x0000000002b8f9f0, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetStatusEffectName(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::StatusEffectPriority  (line 756, @0x0000000002b8fa00, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::StatusEffectPriority(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  return 14;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetAttributes  (line 761, @0x0000000002b8fa10, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::GetAttributes(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  return 2;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::Tooltip  (line 773, @0x0000000002b371a0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::Tooltip(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128 v4; // xmm0
  int v5; // eax
  float burn_damage; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  burn_damage = this->burn_damage;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  result.m_szVal = 0;
  v4.m128_f32[0] = ((v5 * this->burn_damage_pct) / 100.0) + burn_damage;
  *&result.m_eType = (v4.m128_u64[0] << 32) | 1;
  return result;
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::OnCreated  (line 781, @0x0000000002b7ed10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "burn_damage", "burn_damage_pct", "special_bonus_unique_doom_1"
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::OnCreated(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->burn_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_9:
    this->burn_damage_pct = 0.0;
    goto LABEL_4;
  }
  this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "burn_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_9;
LABEL_3:
  this->burn_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "burn_damage_pct", -1, 0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_doom_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->burn_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                          + this->burn_damage_pct;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v7);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::OnIntervalThink  (line 795, @0x0000000002b38df0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::OnIntervalThink(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

  flDamage = this->burn_damage;
  Parent = CDOTA_Buff::GetParent(this);
  flDamagea = (((*(Parent->_vptr_IHandleEntity + 156))(Parent) * this->burn_damage_pct) / 100.0) + flDamage;
  Ability = CDOTA_Buff::GetAbility(this);
  v4 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v4, Ability, flDamagea, 2, 0);
  v6 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v6, flDamagea, 0);
}


// CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::DeclareFunctions  (line 805, @0x0000000002b34ef0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::DeclareFunctions(
        CDOTA_Modifier_DoomBringer_InfernalBlade_Burn *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_DoomBringer_InfernalBlade_Burn::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Ability_DoomBringer_Doom::~CDOTA_Ability_DoomBringer_Doom  (line 816, @0x0000000002ba0f40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_Doom::~CDOTA_Ability_DoomBringer_Doom(
        CDOTA_Ability_DoomBringer_Doom *const this)
{
  this->_vptr_IHandleEntity = &off_44D2A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_Doom::~CDOTA_Ability_DoomBringer_Doom  (line 816, @0x0000000002ba0f60, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_Doom
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_Doom::~CDOTA_Ability_DoomBringer_Doom(
        CDOTA_Ability_DoomBringer_Doom *const this)
{
  this->_vptr_IHandleEntity = &off_44D2A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_Doom::Schema_DynamicBinding  (line 818, @0x0000000002b8fa20, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Doom::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Doom::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Doom *const this)
{
  return CDOTA_Ability_DoomBringer_Doom::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 818, @0x0000000002b8fa30, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::DestructInstance  (line 818, @0x0000000002b8fa40, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_Doom>
void __fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::FreeInstance  (line 818, @0x0000000002b8fa60, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::CanAllocate  (line 818, @0x0000000002b8fa80, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 818, @0x0000000002b8fa90, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Doom::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Doom::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::AllocateInstance  (line 818, @0x0000000002b978e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::ConstructInstance  (line 818, @0x0000000002b9d170, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_Doom, Construct<CDOTA_Ability_DoomBringer_Doom>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D2A10;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 818, @0x0000000002baa750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 818, @0x0000000002baa770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal  (line 818, @0x0000000002bc8060, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_DoomBringer_Doom"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass, CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass, __dso_handle, CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo, CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass);
    CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass._vptr_CEntityClass = off_44D2990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_Doom::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_DoomClass != 0 )
    return &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo,
      "CDOTA_Ability_DoomBringer_Doom",
      "doom_bringer_doom",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo);
  }
  CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass.m_pClassInfo = &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo;
  CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_DoomClass = &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass;
  CDOTA_Ability_DoomBringer_Doom::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass;
  CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_DoomClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_Doom::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_DoomClass;
}


// CDOTA_Ability_DoomBringer_Doom::GetConceptRecipientType  (line 822, @0x0000000002b8faa0, libserver.so)
int __fastcall CDOTA_Ability_DoomBringer_Doom::GetConceptRecipientType(CDOTA_Ability_DoomBringer_Doom *const this)
{
  return 4;
}


// CDOTA_Ability_DoomBringer_Doom::HasSilence  (line 825, @0x0000000002b8fab0, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_Doom::HasSilence(CDOTA_Ability_DoomBringer_Doom *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_Doom::OnSpellStart  (line 833, @0x0000000002b75600, libserver.so)  // inlines: GetAbilityData, InState, IsInvulnerable, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, entindex
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, Purge, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage (18 total)
// strings: "modifier_doom_bringer_doom"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_DoomBringer_Doom::OnSpellStart(CDOTA_Ability_DoomBringer_Doom *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v6; // r14
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC_Hero *v8; // rdi
  CDOTA_BaseNPC *v9; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm3_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // eax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    Purge(v3, this, 2);
    KeyValues::KeyValues(&kv, "modifier_doom_bringer_doom");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_doom_bringer_doom", &kv, 0);
    v6 = 0;
    if ( v3->m_bIsDOTANPC
      && (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
      && LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0 )
    {
      v6 = v3;
    }
    v7 = CDOTABaseAbility::GetCaster(this);
    if ( v7 != 0 && (v7->m_iUnitType & 1) != 0 )
      v8 = v7;
    else
      v8 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v8,
      v6,
      kill_eater_event_t::kKillEaterEventType_Doom_EnemiesDoomed,
      1,
      INVALID_ITEM_DEF_INDEX);
    v9 = CDOTABaseAbility::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(v3, (v9->m_iTeamNum.m_Value == 2) + 2) )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v13,
        0,
        m_iAbilityID,
        0,
        v3,
        *&AbsOrigin->x,
        AbsOrigin->z,
        -1.0,
        v14);
    }
    KeyValues::~KeyValues(&kv);
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
  CreateUnitEvent(v16, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
}


// CDOTA_Ability_DoomBringer_Doom::GetAbilityDamageToTargetOverInterval  (line 861, @0x0000000002b79580, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_DoomBringer_Doom::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DoomBringer_Doom *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "scepter_duration";
    if ( !HasScepter )
      v9 = "duration";
    fIntervalb = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v9, -1, 0));
    fIntervalc = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0) * fIntervalb;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_DoomBringer_Doom::~CDOTA_Modifier_DoomBringer_Doom  (line 876, @0x0000000002b9aeb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DoomBringer_Doom::~CDOTA_Modifier_DoomBringer_Doom(
        CDOTA_Modifier_DoomBringer_Doom *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D34D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DoomBringer_Doom::~CDOTA_Modifier_DoomBringer_Doom  (line 876, @0x0000000002b9aed0, libserver.so)  // inlines: ~CDOTA_Modifier_DoomBringer_Doom
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DoomBringer_Doom::~CDOTA_Modifier_DoomBringer_Doom(
        CDOTA_Modifier_DoomBringer_Doom *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D34D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DoomBringer_Doom::IsPurgable  (line 885, @0x0000000002b8fac0, libserver.so)
bool __fastcall CDOTA_Modifier_DoomBringer_Doom::IsPurgable(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  return 0;
}


// CDOTA_Modifier_DoomBringer_Doom::GetEffectName  (line 892, @0x0000000002b8fad0, libserver.so)
// strings: "particles/units/heroes/hero_doom_bringer/doom_bringer_doom.vpcf"
const char *__fastcall CDOTA_Modifier_DoomBringer_Doom::GetEffectName(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  return "particles/units/heroes/hero_doom_bringer/doom_bringer_doom.vpcf";
}


// CDOTA_Modifier_DoomBringer_Doom::GetStatusEffectName  (line 893, @0x0000000002b8fae0, libserver.so)
// strings: "particles/status_fx/status_effect_doom.vpcf"
const char *__fastcall CDOTA_Modifier_DoomBringer_Doom::GetStatusEffectName(
        CDOTA_Modifier_DoomBringer_Doom *const this)
{
  return "particles/status_fx/status_effect_doom.vpcf";
}


// CDOTA_Modifier_DoomBringer_Doom::StatusEffectPriority  (line 894, @0x0000000002b8faf0, libserver.so)
int __fastcall CDOTA_Modifier_DoomBringer_Doom::StatusEffectPriority(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  return 666;
}


// CDOTA_Modifier_DoomBringer_Doom::OnCreated  (line 909, @0x0000000002b7f2a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "deniable_pct", "Hero_DoomBringer.Doom"
void __fastcall CDOTA_Modifier_DoomBringer_Doom::OnCreated(CDOTA_Modifier_DoomBringer_Doom *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->deniable_pct = 0;
    goto LABEL_5;
  }
  this->damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->deniable_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "deniable_pct", -1, 0);
LABEL_5:
  this->flElapsedTime = -1.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v6);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_DoomBringer.Doom", 0.0, 0, 0);
}


// CDOTA_Modifier_DoomBringer_Doom::OnRefresh  (line 924, @0x0000000002b7e1f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "deniable_pct"
void __fastcall CDOTA_Modifier_DoomBringer_Doom::OnRefresh(CDOTA_Modifier_DoomBringer_Doom *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  this->flElapsedTime = 0.0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->deniable_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "deniable_pct", -1, 0);
    return;
  }
LABEL_7:
  this->deniable_pct = 0;
}


// CDOTA_Modifier_DoomBringer_Doom::OnIntervalThink  (line 935, @0x0000000002b39230, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin
void __fastcall CDOTA_Modifier_DoomBringer_Doom::OnIntervalThink(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  float v12; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 4, 0);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
  v6 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v6) )
  {
    v7 = CDOTA_Buff::GetCaster(this);
    if ( (*(v7->_vptr_IHandleEntity + 408))(v7) != 0 )
    {
      v8 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      v10 = CDOTA_Buff::GetCaster(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      v12 = v11->y - AbsOrigin->y;
      if ( fsqrt(((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x)) + (v12 * v12)) <= 900.0 )
        (*(this->_vptr_CDOTA_Buff + 63))(this, 1, this->duration - this->flElapsedTime);
      else
        this->flElapsedTime = this->flElapsedTime + 1.0;
    }
  }
}


// CDOTA_Modifier_DoomBringer_Doom::OnDestroy  (line 958, @0x0000000002b37430, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_DoomBringer.Doom"
void __fastcall CDOTA_Modifier_DoomBringer_Doom::OnDestroy(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_DoomBringer.Doom");
}


// CDOTA_Modifier_DoomBringer_Doom::CheckState  (line 967, @0x0000000002b425d0, libserver.so)  // inlines: Enable, GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_DoomBringer_Doom::CheckState(
        CDOTA_Modifier_DoomBringer_Doom *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax
  CDOTA_BaseNPC *Parent; // r13
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  CDOTA_BaseNPC *Caster; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x18uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFE7LL;
  Parent = CDOTA_Buff::GetParent(this);
  v6 = 100LL * CBaseEntity::GetHealth(Parent);
  v7 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v8 = 1;
  if ( v7 > 0 )
    v8 = v7;
  if ( this->deniable_pct > (v6 / v8) )
  {
    buffState->m_nEnabledStateMask |= 0x20000uLL;
    buffState->m_nDisabledStateMask &= ~0x20000uLL;
  }
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      buffState->m_nEnabledStateMask |= 0x10000000uLL;
      buffState->m_nDisabledStateMask &= ~0x10000000uLL;
    }
  }
}


// CDOTA_Modifier_DoomBringer_Doom::DeclareFunctions  (line 987, @0x0000000002b34f10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DoomBringer_Doom::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_DoomBringer_Doom::DeclareFunctions(CDOTA_Modifier_DoomBringer_Doom *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_DoomBringer_Doom::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_DoomBringer_Doom::OnTooltip  (line 994, @0x0000000002b34f30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DoomBringer_Doom::OnTooltip(
        CDOTA_Modifier_DoomBringer_Doom *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_DoomBringer_Empty1::~CDOTA_Ability_DoomBringer_Empty1  (line 1005, @0x0000000002ba0f90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_Empty1::~CDOTA_Ability_DoomBringer_Empty1(
        CDOTA_Ability_DoomBringer_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_44D3830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_Empty1::~CDOTA_Ability_DoomBringer_Empty1  (line 1005, @0x0000000002ba0fb0, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_Empty1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_Empty1::~CDOTA_Ability_DoomBringer_Empty1(
        CDOTA_Ability_DoomBringer_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_44D3830;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_Empty1::Schema_DynamicBinding  (line 1007, @0x0000000002b8fb00, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Empty1::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Empty1 *const this)
{
  return CDOTA_Ability_DoomBringer_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1007, @0x0000000002b8fb10, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::DestructInstance  (line 1007, @0x0000000002b8fb20, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_Empty1>
void __fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::FreeInstance  (line 1007, @0x0000000002b8fb40, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::CanAllocate  (line 1007, @0x0000000002b8fb60, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1007, @0x0000000002b8fb70, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::AllocateInstance  (line 1007, @0x0000000002b97920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::ConstructInstance  (line 1007, @0x0000000002b9d1a0, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_Empty1, Construct<CDOTA_Ability_DoomBringer_Empty1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D3830;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1007, @0x0000000002baa7a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1007, @0x0000000002baa7c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal  (line 1007, @0x0000000002bc81b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "doom_bringer_empty1", "CDOTA_Ability_DoomBringer_Empty1"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class, CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class, __dso_handle, CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo, CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class);
    CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class._vptr_CEntityClass = off_44D37B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_Empty1Class != 0 )
    return &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo,
      "CDOTA_Ability_DoomBringer_Empty1",
      "doom_bringer_empty1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo);
  }
  CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class.m_pClassInfo = &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo;
  CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_Empty1Class = &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class;
  CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1ClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class;
  CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_Empty1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty1Class;
}


// CDOTA_Ability_DoomBringer_Empty2::~CDOTA_Ability_DoomBringer_Empty2  (line 1019, @0x0000000002ba0fe0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DoomBringer_Empty2::~CDOTA_Ability_DoomBringer_Empty2(
        CDOTA_Ability_DoomBringer_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_44D4330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DoomBringer_Empty2::~CDOTA_Ability_DoomBringer_Empty2  (line 1019, @0x0000000002ba1000, libserver.so)  // inlines: ~CDOTA_Ability_DoomBringer_Empty2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DoomBringer_Empty2::~CDOTA_Ability_DoomBringer_Empty2(
        CDOTA_Ability_DoomBringer_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_44D4330;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DoomBringer_Empty2::Schema_DynamicBinding  (line 1021, @0x0000000002b8fb80, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Empty2::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Empty2 *const this)
{
  return CDOTA_Ability_DoomBringer_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1021, @0x0000000002b8fb90, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::DestructInstance  (line 1021, @0x0000000002b8fba0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DoomBringer_Empty2>
void __fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::FreeInstance  (line 1021, @0x0000000002b8fbc0, libserver.so)
void __fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::CanAllocate  (line 1021, @0x0000000002b8fbe0, libserver.so)
bool __fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1021, @0x0000000002b8fbf0, libserver.so)
// globals: CDOTA_Ability_DoomBringer_Empty2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DoomBringer_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::AllocateInstance  (line 1021, @0x0000000002b97960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::ConstructInstance  (line 1021, @0x0000000002b9d1d0, libserver.so)  // inlines: CDOTA_Ability_DoomBringer_Empty2, Construct<CDOTA_Ability_DoomBringer_Empty2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D4330;
  }
  return p;
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1021, @0x0000000002baa7f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1021, @0x0000000002baa810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal  (line 1021, @0x0000000002bc8300, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "doom_bringer_empty2", "CDOTA_Ability_DoomBringer_Empty2"
// globals: `guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class, CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class, __dso_handle, CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo, CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class);
    CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class._vptr_CEntityClass = off_44D42B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class);
    __cxa_atexit(
      CDOTA_Ability_DoomBringer_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DoomBringer_Empty2Class != 0 )
    return &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class;
  if ( `guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo,
      "CDOTA_Ability_DoomBringer_Empty2",
      "doom_bringer_empty2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo);
  }
  CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class.m_pClassInfo = &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo;
  CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class.m_pBaseClassInfo = CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DoomBringer_Empty2Class = &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class;
  CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2ClassInfo.m_pClass = &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class;
  CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DoomBringer_Empty2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DoomBringer_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DoomBringer_Empty2Class;
}


