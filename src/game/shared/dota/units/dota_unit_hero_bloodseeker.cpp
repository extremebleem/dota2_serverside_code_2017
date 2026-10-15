// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:34
class CDOTA_Unit_Hero_Bloodseeker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Bloodseeker(CDOTA_Unit_Hero_Bloodseeker &);
	CDOTA_Unit_Hero_Bloodseeker(CDOTA_Unit_Hero_Bloodseeker &);
	CDOTA_Unit_Hero_Bloodseeker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Bloodseeker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:41
class C_CDOTA_Unit_Hero_Bloodseeker_MapInstall {
	C_CDOTA_Unit_Hero_Bloodseeker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:55
class CDOTA_Ability_Bloodseeker_Bloodrage : public CDOTABaseAbility {
public:

private:

	int max_charges;  // +0x390
	float charge_restore_time;  // +0x394
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
	CDOTA_Ability_Bloodseeker_Bloodrage(CDOTA_Ability_Bloodseeker_Bloodrage &);
	CDOTA_Ability_Bloodseeker_Bloodrage(CDOTA_Ability_Bloodseeker_Bloodrage &);
	CDOTA_Ability_Bloodseeker_Bloodrage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Bloodseeker_Bloodrage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[240] GetPotentialAbuseType
	// vtable[256] CastFilterResult
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:117
class CDOTA_Modifier_Bloodseeker_Bloodrage : public CDOTA_Buff {
public:

private:

	float tick_interval;  // +0xba8
	int damage_increase_pct;  // +0xbac
	int health_bonus_pct;  // +0xbb0
	float health_bonus_creep_pct;  // +0xbb4
	CDOTA_Modifier_Bloodseeker_Bloodrage();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTotalDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Bloodseeker_Bloodrage();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:237
class CDOTA_Ability_Bloodseeker_Bloodbath : public CDOTABaseAbility {
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
	CDOTA_Ability_Bloodseeker_Bloodbath(CDOTA_Ability_Bloodseeker_Bloodbath &);
	CDOTA_Ability_Bloodseeker_Bloodbath(CDOTA_Ability_Bloodseeker_Bloodbath &);
	CDOTA_Ability_Bloodseeker_Bloodbath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetCooldown(int);
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Bloodseeker_Bloodbath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[242] GetCooldown
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:260
class C_CDOTA_Ability_Bloodseeker_Bloodbath_MapInstall {
	C_CDOTA_Ability_Bloodseeker_Bloodbath_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:321
class CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:447
class CDOTA_Ability_Bloodseeker_Thirst : public CDOTABaseAbility {
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
	CDOTA_Ability_Bloodseeker_Thirst(CDOTA_Ability_Bloodseeker_Thirst &);
	CDOTA_Ability_Bloodseeker_Thirst(CDOTA_Ability_Bloodseeker_Thirst &);
	CDOTA_Ability_Bloodseeker_Thirst();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Bloodseeker_Thirst();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:462
class CDOTA_Modifier_Bloodseeker_Thirst : public CDOTA_Buff {
public:

	int visibility_threshold_pct;  // +0xba8
	int invis_threshold_pct;  // +0xbac
	int min_bonus_pct;  // +0xbb0
	int max_bonus_pct;  // +0xbb4
	int bonus_movement_speed;  // +0xbb8
	int bonus_damage;  // +0xbbc
	CDOTA_Modifier_Bloodseeker_Thirst();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bloodseeker_Thirst();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:666
class CDOTA_Modifier_Bloodseeker_Thirst_Vision : public CDOTA_Buff {
public:

private:

	int invis_threshold_pct;  // +0xba8
	CDOTA_Modifier_Bloodseeker_Thirst_Vision();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bloodseeker_Thirst_Vision();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:734
class CDOTA_Modifier_Bloodseeker_Thirst_Speed : public CDOTA_Buff {
public:

private:

	string_t m_iszModifierString;  // +0xba8
	CDOTA_Modifier_Bloodseeker_Thirst_Speed();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Bloodseeker_Thirst_Speed();

	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:792
class CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges_scepter;  // +0xba8
	float charge_restore_time_scepter;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:871
class CDOTA_Ability_Bloodseeker_Rupture : public CDOTABaseAbility {
public:

private:

	int max_charges_scepter;  // +0x390
	float charge_restore_time_scepter;  // +0x394
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
	CDOTA_Ability_Bloodseeker_Rupture(CDOTA_Ability_Bloodseeker_Rupture &);
	CDOTA_Ability_Bloodseeker_Rupture(CDOTA_Ability_Bloodseeker_Rupture &);
	CDOTA_Ability_Bloodseeker_Rupture();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsRefreshable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Bloodseeker_Rupture();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[217] IsRefreshable
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_bloodseeker.cpp:1012
class CDOTA_Modifier_Bloodseeker_Rupture : public CDOTA_Buff {
public:

	int movement_damage_pct;  // +0xba8
	int damage_cap_amount;  // +0xbac
	float damage_cap_interval;  // +0xbb0
	bool bResetPosition;  // +0xbc0

	float m_fAccumulatedDamage;  // +0xbc4
	CDOTA_Modifier_Bloodseeker_Rupture();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	ModifierVariant_t OnSetLocation(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Bloodseeker_Rupture();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Bloodseeker::~CDOTA_Unit_Hero_Bloodseeker  (line 34, @0x0000000002a18570, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Bloodseeker::~CDOTA_Unit_Hero_Bloodseeker(CDOTA_Unit_Hero_Bloodseeker *const this)
{
  this->_vptr_IHandleEntity = &off_4324A50;
  this->_vptr_INextBotEventResponder = &off_4325A30;
  this->_vptr_CObstructionObject = &off_4325D60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Bloodseeker::~CDOTA_Unit_Hero_Bloodseeker  (line 34, @0x0000000002a185b0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Bloodseeker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Bloodseeker::~CDOTA_Unit_Hero_Bloodseeker(CDOTA_Unit_Hero_Bloodseeker *const this)
{
  this->_vptr_IHandleEntity = &off_4324A50;
  this->_vptr_INextBotEventResponder = &off_4325A30;
  this->_vptr_CObstructionObject = &off_4325D60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Bloodseeker::Schema_DynamicBinding  (line 36, @0x0000000002a07c40, libserver.so)
// globals: CDOTA_Unit_Hero_Bloodseeker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bloodseeker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bloodseeker *const this)
{
  return CDOTA_Unit_Hero_Bloodseeker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002a07c70, libserver.so)
// globals: CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002a07c80, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Bloodseeker>
void __fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002a07ca0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002a07cc0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002a07cd0, libserver.so)
// globals: CDOTA_Unit_Hero_Bloodseeker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Bloodseeker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002a0f0c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002a13340, libserver.so)  // inlines: CDOTA_Unit_Hero_Bloodseeker, Construct<CDOTA_Unit_Hero_Bloodseeker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4324A50;
    *(p + 236) = &off_4325A30;
    *(p + 257) = &off_4325D60;
  }
  return p;
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a20730, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a209a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal  (line 36, @0x0000000002a3bcf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_bloodseeker", "CDOTA_Unit_Hero_Bloodseeker"
// globals: `guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass, CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass, __dso_handle, CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo, CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass);
    CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass._vptr_CEntityClass = off_43249D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Bloodseeker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BloodseekerClass != 0 )
    return &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo,
      "CDOTA_Unit_Hero_Bloodseeker",
      "npc_dota_hero_bloodseeker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo);
  }
  CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass.m_pClassInfo = &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo;
  CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BloodseekerClass = &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass;
  CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClassInfo.m_pClass = &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass;
  CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BloodseekerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Bloodseeker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BloodseekerClass;
}


// CDOTA_Unit_Hero_Bloodseeker::YouForgotToImplementOrDeclareServerClass  (line 41, @0x00000000029b4520, libserver.so)
int __fastcall CDOTA_Unit_Hero_Bloodseeker::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Bloodseeker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Bloodseeker::GetServerClass  (line 41, @0x00000000029c92b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Bloodseeker::GetServerClass(CDOTA_Unit_Hero_Bloodseeker *const this)
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


// CDOTA_Ability_Bloodseeker_Bloodrage::~CDOTA_Ability_Bloodseeker_Bloodrage  (line 55, @0x0000000002a16a20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::~CDOTA_Ability_Bloodseeker_Bloodrage(
        CDOTA_Ability_Bloodseeker_Bloodrage *const this)
{
  this->_vptr_IHandleEntity = &off_4325E30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::~CDOTA_Ability_Bloodseeker_Bloodrage  (line 55, @0x0000000002a16a40, libserver.so)  // inlines: ~CDOTA_Ability_Bloodseeker_Bloodrage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::~CDOTA_Ability_Bloodseeker_Bloodrage(
        CDOTA_Ability_Bloodseeker_Bloodrage *const this)
{
  this->_vptr_IHandleEntity = &off_4325E30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::Schema_DynamicBinding  (line 57, @0x0000000002a07ce0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodrage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Bloodrage::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Bloodrage *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodrage::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 57, @0x0000000002a07cf0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::DestructInstance  (line 57, @0x0000000002a07d00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bloodseeker_Bloodrage>
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::FreeInstance  (line 57, @0x0000000002a07d20, libserver.so)
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::CanAllocate  (line 57, @0x0000000002a07d40, libserver.so)
bool __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 57, @0x0000000002a07d50, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodrage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodrage::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::AllocateInstance  (line 57, @0x0000000002a0f100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::ConstructInstance  (line 57, @0x0000000002a13c60, libserver.so)  // inlines: CDOTA_Ability_Bloodseeker_Bloodrage, Construct<CDOTA_Ability_Bloodseeker_Bloodrage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4325E30;
  }
  return p;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002a1edc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x0000000002a1ede0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal  (line 57, @0x0000000002a3d6a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "bloodseeker_bloodrage", "CDOTA_Ability_Bloodseeker_Bloodrage"
// globals: `guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass, CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo, CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass) != 0 )
  {
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pClassInfo = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_flags = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pInputs = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_nInputCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pOutputs = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_nOutputCount = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pGameClass = 0;
    CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass._vptr_CEntityClass = off_4325DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass);
    __cxa_atexit(
      CDOTA_Ability_Bloodseeker_Bloodrage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bloodseeker_BloodrageClass != 0 )
    return &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass;
  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo,
      "CDOTA_Ability_Bloodseeker_Bloodrage",
      "bloodseeker_bloodrage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo);
  }
  CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pClassInfo = &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo;
  CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pBaseClassInfo = CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bloodseeker_BloodrageClass = &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass;
  CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClassInfo.m_pClass = &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass;
  CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bloodseeker_BloodrageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bloodseeker_Bloodrage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodrageClass;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::GetPotentialAbuseType  (line 65, @0x0000000002a07d60, libserver.so)
EAbilityAbuseType __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::GetPotentialAbuseType(
        CDOTA_Ability_Bloodseeker_Bloodrage *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_Bloodseeker_Bloodrage;
}


// CDOTA_Ability_Bloodseeker_Bloodrage::CastFilterResult  (line 76, @0x00000000029b9be0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::CastFilterResult(
        CDOTA_Ability_Bloodseeker_Bloodrage *const this,
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


// CDOTA_Ability_Bloodseeker_Bloodrage::OnSpellStart  (line 95, @0x00000000029dd4e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_bloodseeker_bloodrage", "Hero_Bloodseeker.bloodRage"
void __fastcall CDOTA_Ability_Bloodseeker_Bloodrage::OnSpellStart(CDOTA_Ability_Bloodseeker_Bloodrage *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_bloodseeker_bloodrage");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_bloodseeker_bloodrage", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Bloodseeker.bloodRage", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::~CDOTA_Modifier_Bloodseeker_Bloodrage  (line 117, @0x0000000002a128d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::~CDOTA_Modifier_Bloodseeker_Bloodrage(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_43268F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::~CDOTA_Modifier_Bloodseeker_Bloodrage  (line 117, @0x0000000002a128f0, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Bloodrage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::~CDOTA_Modifier_Bloodseeker_Bloodrage(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  this->_vptr_CDOTA_Buff = &off_43268F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::GetEffectName  (line 129, @0x0000000002a07d70, libserver.so)
// strings: "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodrage.vpcf"
const char *__fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::GetEffectName(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  return "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodrage.vpcf";
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::GetEffectAttachType  (line 130, @0x0000000002a07d80, libserver.so)
int __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::GetEffectAttachType(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  return 7;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::ShouldUseOverheadOffset  (line 131, @0x0000000002a07d90, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::ShouldUseOverheadOffset(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::GetStatusEffectName  (line 132, @0x0000000002a07da0, libserver.so)
// strings: "particles/status_fx/status_effect_bloodrage.vpcf"
const char *__fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::GetStatusEffectName(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  return "particles/status_fx/status_effect_bloodrage.vpcf";
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::StatusEffectPriority  (line 133, @0x0000000002a07db0, libserver.so)
int __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::StatusEffectPriority(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  return 2;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::OnCreated  (line 147, @0x00000000029f8500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_increase_pct", "health_bonus_pct", "health_bonus_creep_pct"
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::OnCreated(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_increase_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_increase_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->health_bonus_pct = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_increase_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->health_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "health_bonus_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->health_bonus_creep_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "health_bonus_creep_pct", -1, 0);
    return;
  }
LABEL_7:
  this->health_bonus_creep_pct = 0.0;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::DeclareFunctions  (line 156, @0x00000000029b4530, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierTotalDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Bloodseeker_Bloodrage::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::DeclareFunctions(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this)
{
  this->m_Functions[30].__pfn = CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierTotalDamageOutgoing_Percentage;
  this->m_Functions[30].__delta = 0;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierIncomingDamage_Percentage;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Bloodseeker_Bloodrage::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierTotalDamageOutgoing_Percentage  (line 165, @0x00000000029c3440, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetRangeToUnit
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierTotalDamageOutgoing_Percentage(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // rax
  __m128i v13; // xmm2
  ModifierVariant_t result; // 0:rax.16

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
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || !v11->m_bIsDOTANPC )
  {
    v11 = 0;
  }
  if ( (params->nDamageflags & 0x10) != 0 )
    return 1uLL;
  if ( v11 != 0 && m_pInstance != 0 && CDOTA_BaseNPC::GetRangeToUnit(m_pInstance, v11) < 2200.0 )
  {
    *v13.m128i_i32 = this->damage_increase_pct;
    *&result.m_eType = (_mm_cvtsi128_si32(v13) << 32) | 1;
  }
  else
  {
    *v2.m128i_i32 = this->damage_increase_pct * 0.5;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierIncomingDamage_Percentage  (line 183, @0x00000000029c35a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::GetRangeToUnit
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  uint32 v8; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // rsi
  __m128i v14; // xmm2
  ModifierVariant_t result; // 0:rax.16

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
  v8 = params->htarget.m_Index;
  if ( v8 + 2 > 1
    && (m_Index_low = LOWORD(params->htarget.m_Index),
        (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v11 = &v10[m_Index_low & 0x1FF]) != 0
    && v8 == v11->m_EHandle.m_Index
    && (v13 = v11->m_pInstance, v11->m_pInstance != 0)
    && v13->m_bIsDOTANPC
    && m_pInstance != 0
    && CDOTA_BaseNPC::GetRangeToUnit(m_pInstance, v13) < 2200.0 )
  {
    *v14.m128i_i32 = this->damage_increase_pct;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *v2.m128i_i32 = this->damage_increase_pct * 0.5;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Bloodseeker_Bloodrage::OnDeath  (line 198, @0x00000000029c5600, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Hero_Bloodseeker.bloodbath", "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodbath.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Bloodrage::OnDeath(
        CDOTA_Modifier_Bloodseeker_Bloodrage *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  __int64 v4; // rcx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityInstance *v11; // r12
  uint32 m_iUnitType; // eax
  int v13; // eax
  float health_bonus_pct; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTAPlayer *v16; // rax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  float flHeal; // [rsp+Ch] [rbp-24h]

  m_Index = params->hunit.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = params->hattacker.m_Index;
  v9 = (v8 + 2);
  if ( v9 <= 1
    || (params = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(params >> 9) & 0x3F]) == 0)
    || (v10 = params & 0x1FF, params = (8 * v10), v4 = 120 * v10, (v9 = (v9 + v4)) == 0)
    || v8 != v9->m_EHandle.m_Index
    || (v11 = v9->m_pInstance, v9->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( m_pInstance != 0 && (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance, params, v9, v4) == 0 )
  {
    m_iUnitType = m_pInstance->m_iUnitType;
    if ( (m_iUnitType & 0x810) == 0
      && (m_iUnitType & 0x193) != 0
      && v11 != 0
      && (CDOTA_Buff::GetParent(this) == v11 || CDOTA_Buff::GetParent(this) == m_pInstance)
      && (v11[43].m_iszPrivateVScripts.u.m_Id & 4) == 0 )
    {
      v13 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
      if ( (m_pInstance->m_iUnitType & 1) != 0 )
        health_bonus_pct = this->health_bonus_pct;
      else
        health_bonus_pct = this->health_bonus_creep_pct;
      flHeal = (v13 * health_bonus_pct) / 100.0;
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Bloodseeker.bloodbath", 0.0, 0, 0);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_BaseNPC::Heal(v11, flHeal, Ability, 0, 1);
      v16 = (*(v11->_vptr_IHandleEntity + 413))(v11);
      SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v11, flHeal, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodbath.vpcf",
                          1,
                          v11,
                          0,
                          Caster);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
      v20 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v20, Caster, 1, v11, 5, "attach_hitloc", *AbsOrigin, 1);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v21, Caster);
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::~CDOTA_Ability_Bloodseeker_Bloodbath  (line 237, @0x0000000002a16a70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::~CDOTA_Ability_Bloodseeker_Bloodbath(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this)
{
  this->_vptr_IHandleEntity = &off_4326C50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::~CDOTA_Ability_Bloodseeker_Bloodbath  (line 237, @0x0000000002a16a90, libserver.so)  // inlines: ~CDOTA_Ability_Bloodseeker_Bloodbath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::~CDOTA_Ability_Bloodseeker_Bloodbath(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this)
{
  this->_vptr_IHandleEntity = &off_4326C50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::Schema_DynamicBinding  (line 239, @0x0000000002a07dc0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodbath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Bloodbath *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodbath::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 239, @0x0000000002a07dd0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::DestructInstance  (line 239, @0x0000000002a07de0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bloodseeker_Bloodbath>
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::FreeInstance  (line 239, @0x0000000002a07e00, libserver.so)
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::CanAllocate  (line 239, @0x0000000002a07e20, libserver.so)
bool __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 239, @0x0000000002a07e30, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Bloodbath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Bloodbath::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::AllocateInstance  (line 239, @0x0000000002a0f140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::ConstructInstance  (line 239, @0x0000000002a13c90, libserver.so)  // inlines: CDOTA_Ability_Bloodseeker_Bloodbath, Construct<CDOTA_Ability_Bloodseeker_Bloodbath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4326C50;
  }
  return p;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 239, @0x0000000002a1ee10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 239, @0x0000000002a1ee30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal  (line 239, @0x0000000002a353f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "bloodseeker_blood_bath", "CDOTA_Ability_Bloodseeker_Bloodbath"
// globals: `guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass, CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass, __dso_handle, CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo, CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass);
    CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass._vptr_CEntityClass = off_4326BD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass);
    __cxa_atexit(
      CDOTA_Ability_Bloodseeker_Bloodbath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bloodseeker_BloodbathClass != 0 )
    return &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass;
  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo,
      "CDOTA_Ability_Bloodseeker_Bloodbath",
      "bloodseeker_blood_bath",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo);
  }
  CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass.m_pClassInfo = &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo;
  CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass.m_pBaseClassInfo = CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bloodseeker_BloodbathClass = &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass;
  CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClassInfo.m_pClass = &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass;
  CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bloodseeker_BloodbathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bloodseeker_Bloodbath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_BloodbathClass;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::YouForgotToImplementOrDeclareServerClass  (line 260, @0x00000000029b4590, libserver.so)
int __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this)
{
  return 0;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::GetServerClass  (line 260, @0x00000000029c96f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Bloodseeker_Bloodbath::GetServerClass(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this)
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


// CDOTA_Ability_Bloodseeker_Bloodbath::GetCooldown  (line 270, @0x00000000029e5360, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_bloodseeker"
float __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::GetCooldown(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_bloodseeker", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Bloodseeker_Bloodbath::OnSpellStart  (line 285, @0x00000000029dd610, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, DOTA_EmitSoundLocationWithCaster, DOTA_EmitSound, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail (13 total)
// strings: "modifier_bloodseeker_bloodbath_thinker", "hero_bloodseeker.bloodRite", "Hero_Bloodseeker.BloodRite.Cast"
void __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::OnSpellStart(CDOTA_Ability_Bloodseeker_Bloodbath *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm3_4
  Vector vPos; // [rsp+20h] [rbp-60h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_bloodseeker_bloodbath_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_bloodseeker_bloodbath_thinker", &kv, vOrigin, m_Value, 0, 1, 0);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "hero_bloodseeker.bloodRite", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Bloodseeker.BloodRite.Cast", v6);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v9, 0, m_iAbilityID, 0, 0, *&vPos.x, vPos.z, -1.0, v10);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Bloodseeker_Bloodbath::GetAbilityDamageToTargetOverInterval  (line 307, @0x00000000029de790, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
__int64 __fastcall CDOTA_Ability_Bloodseeker_Bloodbath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Bloodseeker_Bloodbath *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 1);
  return result;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker  (line 321, @0x0000000002a12880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4327710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker  (line 321, @0x0000000002a128a0, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::~CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4327710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetNumAvoidLocations  (line 331, @0x0000000002a07e40, libserver.so)
int __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetNumAvoidLocations(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetAvoidLocation  (line 332, @0x0000000002a14a40, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetAvoidLocation(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::AvoidStrength  (line 333, @0x0000000002a18f70, libserver.so)
// calls: CDOTA_Bot::WantsToCast
float __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::AvoidStrength(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this,
        CDOTA_Bot *pBot)
{
  bool v2; // al
  float result; // xmm0_4

  v2 = CDOTA_Bot::WantsToCast(pBot);
  result = 0.60000002;
  if ( v2 )
    return 0.80000001;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetAvoidRadius  (line 334, @0x0000000002a07e50, libserver.so)
float __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::GetAvoidRadius(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::IsAvoidMagical  (line 335, @0x0000000002a07e70, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::IsAvoidMagical(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::IsHidden  (line 338, @0x0000000002a07e80, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::IsHidden(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnCreated  (line 348, @0x00000000029fcb90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, GetTeamNumber, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::GetAbsAngles, AngleVectors (15 total)
// strings: "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodritual_ring.vpcf"
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnCreated(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-74h]
  QAngle angles; // [rsp+10h] [rbp-70h] BYREF
  Vector vecFwd; // [rsp+20h] [rbp-60h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-50h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-40h] BYREF
  double v20; // [rsp+50h] [rbp-30h]
  float v21; // [rsp+58h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TORRENT,
    Caster->m_iTeamNum.m_Value,
    AbsOrigin,
    400.0,
    5.0,
    1);
  LODWORD(AbsOrigin) = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodritual_ring.vpcf",
                         2,
                         0,
                         0);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = CBaseEntity::GetAbsOrigin(v8);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbsOrigin, 0, *&v9->x, v9->z);
  v11 = CDOTA_Buff::GetParent(this);
  angles = *CBaseEntity::GetAbsAngles(v11);
  AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v12,
    AbsOrigin,
    0,
    *&vecFwd.x,
    vecFwd.z,
    *&vecRight.x,
    vecRight.z,
    *&vecUp.x,
    vecUp.z);
  *&v20 = this->radius;
  HIDWORD(v20) = LODWORD(v20);
  v21 = *&v20;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, AbsOrigin, 1, v20, v21);
  flFoWRadius = this->radius;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v14, AbsOrigin, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, AbsOrigin, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnDestroy  (line 374, @0x00000000029e25d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage (24 total)
// strings: "silence_duration", "modifier_bloodseeker_bloodbath", "modifier_silence", "hero_bloodseeker.bloodRite.silence", "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodritual_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnDestroy(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  __m128i v4; // xmm3
  float v5; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __int64 v13; // r14
  int v14; // r13d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *v21; // r15
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // r12
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  float flDamage; // [rsp+2Ch] [rbp-84h]
  int damage; // [rsp+38h] [rbp-78h] BYREF
  float silence_duration; // [rsp+3Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &damage, "damage");
  v3 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v3, &silence_duration, "silence_duration");
  *v4.m128i_i32 = this->radius;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  Parent = CDOTA_Buff::GetParent(this);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v5, &hEntities, 2, 19, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_bloodseeker_bloodbath");
  KeyValues::SetFloat(&kv, "duration", v10);
  v11 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v11, "bloodseeker_rupture", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "duration", -1, 0);
  if ( hEntities.m_Size > 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = &hEntities.m_Memory.m_pMemory[v13];
        m_Index = hEntities.m_Memory.m_pMemory[v13].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v14;
        ++v13;
        if ( hEntities.m_Size <= v14 )
          goto LABEL_14;
      }
      flDamage = damage;
      v21 = CDOTA_Buff::GetAbility(this);
      v22 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v22, m_pInstance, v21, flDamage, 4, 0);
      v23 = CDOTA_Buff::GetAbility(this);
      v24 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, v23, "modifier_silence", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "hero_bloodseeker.bloodRite.silence", 0.0, 0, 0);
      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                             this,
                             "particles/units/heroes/hero_bloodseeker/bloodseeker_bloodritual_impact.vpcf",
                             1,
                             m_pInstance,
                             0);
      v26 = CDOTA_Buff::GetParent(this);
      v27 = CBaseEntity::GetAbsOrigin(v26);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 1, *&v27->x, v27->z);
      v29 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v29, BuffParticleEffect);
      ++v14;
      ++v13;
    }
    while ( hEntities.m_Size > v14 );
  }
LABEL_14:
  v30 = CDOTA_Buff::GetParent(this);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  v32 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_TORRENT,
    v32->m_iTeamNum.m_Value,
    v31,
    400.0,
    3.0,
    1);
  v33 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v33);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnIntervalThink  (line 437, @0x00000000029b45a0, libserver.so)
void __fastcall CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker::OnIntervalThink(
        CDOTA_Modifier_Bloodseeker_Bloodbath_Thinker *const this)
{
  ;
}


// CDOTA_Ability_Bloodseeker_Thirst::~CDOTA_Ability_Bloodseeker_Thirst  (line 447, @0x0000000002a16ac0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::~CDOTA_Ability_Bloodseeker_Thirst(
        CDOTA_Ability_Bloodseeker_Thirst *const this)
{
  this->_vptr_IHandleEntity = &off_4327A70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bloodseeker_Thirst::~CDOTA_Ability_Bloodseeker_Thirst  (line 447, @0x0000000002a16ae0, libserver.so)  // inlines: ~CDOTA_Ability_Bloodseeker_Thirst
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::~CDOTA_Ability_Bloodseeker_Thirst(
        CDOTA_Ability_Bloodseeker_Thirst *const this)
{
  this->_vptr_IHandleEntity = &off_4327A70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Thirst::Schema_DynamicBinding  (line 449, @0x0000000002a07e90, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Thirst::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Thirst::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Thirst *const this)
{
  return CDOTA_Ability_Bloodseeker_Thirst::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 449, @0x0000000002a07ea0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::DestructInstance  (line 449, @0x0000000002a07eb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bloodseeker_Thirst>
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::FreeInstance  (line 449, @0x0000000002a07ed0, libserver.so)
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::CanAllocate  (line 449, @0x0000000002a07ef0, libserver.so)
bool __fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 449, @0x0000000002a07f00, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Thirst::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Thirst::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::AllocateInstance  (line 449, @0x0000000002a0f180, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::ConstructInstance  (line 449, @0x0000000002a13cc0, libserver.so)  // inlines: CDOTA_Ability_Bloodseeker_Thirst, Construct<CDOTA_Ability_Bloodseeker_Thirst>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4327A70;
  }
  return p;
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 449, @0x0000000002a1ee60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 449, @0x0000000002a1ee80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal  (line 449, @0x0000000002a35540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Bloodseeker_Thirst"
// globals: `guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass, CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass, __dso_handle, CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo, CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass);
    CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass._vptr_CEntityClass = off_43279F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass);
    __cxa_atexit(
      CDOTA_Ability_Bloodseeker_Thirst::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bloodseeker_ThirstClass != 0 )
    return &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass;
  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo,
      "CDOTA_Ability_Bloodseeker_Thirst",
      "bloodseeker_thirst",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo);
  }
  CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass.m_pClassInfo = &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo;
  CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass.m_pBaseClassInfo = CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bloodseeker_ThirstClass = &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass;
  CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClassInfo.m_pClass = &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass;
  CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bloodseeker_ThirstClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bloodseeker_Thirst::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_ThirstClass;
}


// CDOTA_Ability_Bloodseeker_Thirst::GetIntrinsicModifierName  (line 452, @0x0000000002a07f10, libserver.so)
// strings: "modifier_bloodseeker_thirst"
const char *__fastcall CDOTA_Ability_Bloodseeker_Thirst::GetIntrinsicModifierName(
        CDOTA_Ability_Bloodseeker_Thirst *const this)
{
  return "modifier_bloodseeker_thirst";
}


// CDOTA_Modifier_Bloodseeker_Thirst::~CDOTA_Modifier_Bloodseeker_Thirst  (line 462, @0x0000000002a12830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::~CDOTA_Modifier_Bloodseeker_Thirst(
        CDOTA_Modifier_Bloodseeker_Thirst *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328530;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst::~CDOTA_Modifier_Bloodseeker_Thirst  (line 462, @0x0000000002a12850, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Thirst
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::~CDOTA_Modifier_Bloodseeker_Thirst(
        CDOTA_Modifier_Bloodseeker_Thirst *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328530;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst::IsHidden  (line 467, @0x0000000002a07f20, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Thirst::IsHidden(CDOTA_Modifier_Bloodseeker_Thirst *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Thirst::OnCreated  (line 492, @0x00000000029fac60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "visibility_threshold_pct", "invis_threshold_pct", "min_bonus_pct", "max_bonus_pct"
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::OnCreated(
        CDOTA_Modifier_Bloodseeker_Thirst *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->visibility_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       Ability,
                                       "visibility_threshold_pct",
                                       -1,
                                       0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->visibility_threshold_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->invis_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "invis_threshold_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->invis_threshold_pct = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->min_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "min_bonus_pct", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->min_bonus_pct = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->max_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "max_bonus_pct", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_13:
    this->bonus_movement_speed = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->bonus_damage = 0;
    goto LABEL_8;
  }
LABEL_12:
  this->max_bonus_pct = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_13;
LABEL_6:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_movement_speed", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_damage", -1, 0);
LABEL_8:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v9);
}


// CDOTA_Modifier_Bloodseeker_Thirst::OnRefresh  (line 508, @0x00000000029fa5b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "visibility_threshold_pct", "invis_threshold_pct", "min_bonus_pct", "max_bonus_pct"
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::OnRefresh(
        CDOTA_Modifier_Bloodseeker_Thirst *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->visibility_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       Ability,
                                       "visibility_threshold_pct",
                                       -1,
                                       0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->visibility_threshold_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->invis_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "invis_threshold_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->invis_threshold_pct = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->min_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "min_bonus_pct", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->min_bonus_pct = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->max_bonus_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "max_bonus_pct", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->bonus_movement_speed = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->max_bonus_pct = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_movement_speed", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_damage", -1, 0);
    return;
  }
LABEL_13:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst::DeclareFunctions  (line 520, @0x00000000029b45b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeed_Max(CModifierParams const&), CDOTA_Modifier_Bloodseeker_Thirst::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::DeclareFunctions(CDOTA_Modifier_Bloodseeker_Thirst *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[21].__delta = 0;
  this->m_Functions[21].__pfn = CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeed_Max;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Bloodseeker_Thirst::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst::GetModifierPreAttack_BonusDamage  (line 529, @0x00000000029bc180, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Thirst::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Bloodseeker_Thirst *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0
    || this->min_bonus_pct == this->max_bonus_pct )
  {
    return 1uLL;
  }
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->bonus_damage * v4 / (this->min_bonus_pct - this->max_bonus_pct));
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeedBonus_Percentage  (line 542, @0x00000000029b7340, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Bloodseeker_Thirst *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  int v5; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) == 0 || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    *&result.m_eType = 1;
LABEL_4:
    result.m_szVal = 0;
    return result;
  }
  *&result.m_eType = 1;
  if ( this->min_bonus_pct == this->max_bonus_pct )
    goto LABEL_4;
  v4 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  *v4.m128i_i32 = (this->bonus_movement_speed * v5 / (this->min_bonus_pct - this->max_bonus_pct));
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeed_Max  (line 555, @0x00000000029bc200, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Thirst::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_Bloodseeker_Thirst *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __int64 v3; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v3 = 0x461C400000000001LL;
  if ( (Parent->m_nUnitState64.m_Value & 0x10000000) != 0 )
    v3 = 1;
  return v3;
}


// CDOTA_Modifier_Bloodseeker_Thirst::OnIntervalThink  (line 565, @0x00000000029c6950, libserver.so)  // inlines: DOTAGameRules, Floor2Int, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHealthPercent, GetHero, GetInstance, GetTeamNumber, IndexToIdentity, IsPlayerTeam, IsValid, LookupEntity, ToDOTABaseNPCHero, ToDOTAPlayer, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsInvisibleTo, CBaseEntity::GetHealth, CDOTA_BaseNPC::RemoveModifierByName, UTIL_PlayerByIndex, floorf, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::FindModifierByName (14 total)
// strings: "modifier_bloodseeker_thirst_vision", "modifier_bloodseeker_thirst", "modifier_bloodseeker_thirst_speed", "modifier_slark_shadow_dance"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst::OnIntervalThink(CDOTA_Modifier_Bloodseeker_Thirst *const this)
{
  CHandle<CDOTA_BaseNPC_Hero> *v2; // rdx
  uint32 m_Index; // eax
  __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rbx
  char m_CScriptComponent_high; // r13
  bool v9; // r15
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *Caster; // rax
  char v12; // dl
  int visibility_threshold_pct; // r14d
  char v14; // r13
  CDOTA_BaseNPC *v15; // rax
  int Health; // r15d
  int max_bonus_pct; // r13d
  int min_bonus_pct; // r14d
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r13d
  int v23; // edx
  int v24; // r13d
  int v25; // r14d
  __int64 v26; // r15
  int v27; // eax
  __int64 v28; // rcx
  int v29; // r13d
  int v30; // ebx
  int v31; // r14d
  CBasePlayer *v32; // rax
  CBasePlayer *v33; // r15
  unsigned __int8 v34; // r15
  CDOTABaseAbility *v35; // r14
  CDOTA_BaseNPC *v36; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v38; // rax
  float v39; // xmm1_4
  char v40; // r15
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v42; // rax
  __int64 v43; // r13
  int v44; // eax
  __int64 v45; // rsi
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // rsi
  int iStackCount; // [rsp+Ch] [rbp-74h]
  char bIsTargetValid; // [rsp+18h] [rbp-68h]
  __int64 v51; // [rsp+20h] [rbp-60h]
  bool bFoundHero; // [rsp+2Bh] [rbp-55h]
  int i; // [rsp+2Ch] [rbp-54h]
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v55; // [rsp+48h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v51 = 0;
    i = 0;
    iStackCount = 0;
    bFoundHero = 0;
    while ( 1 )
    {
      v2 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v51];
      m_Index = v2->m_Index;
      if ( v2->m_Index + 2 > 1 )
      {
        v4 = v2->m_Index;
        v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v2->m_Index) >> 9) & 0x3F];
        if ( v5 != 0 )
        {
          v6 = &v5[v4 & 0x1FF];
          if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
          {
            m_pInstance = v6->m_pInstance;
            if ( v6->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
              v9 = 0;
              m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
              Caster = CDOTA_Buff::GetCaster(this);
              if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
                v9 = !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value;
              v12 = 0;
              if ( m_CScriptComponent_high != m_Value && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                v12 = ((m_pInstance[58]._vptr_IHandleEntity >> 31) ^ 1) & 1;
              bIsTargetValid = v12;
              visibility_threshold_pct = this->visibility_threshold_pct;
              v14 = (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance);
              if ( v14 != 0 )
              {
                v14 = v9 & bIsTargetValid;
              }
              else
              {
                v39 = 0.0;
                if ( g_pGameRules != 0 )
                  v39 = *&g_pGameRules[18].m_szQuestName[20];
                v40 = bIsTargetValid & v9;
                if ( v39 <= (*(&m_pInstance[97].m_hPrivateScope.m_hScope + 1) + 2.0) )
                  v14 = v40;
              }
              v15 = CDOTA_Buff::GetCaster(this);
              if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v15) )
                visibility_threshold_pct = this->invis_threshold_pct;
              Health = CBaseEntity::GetHealth(m_pInstance);
              if ( Health < ((*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance) * visibility_threshold_pct) / 100
                && v14 != 0
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_slark_shadow_dance", 0) == 0
                && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_bloodseeker_thirst_vision");
                Ability = CDOTA_Buff::GetAbility(this);
                v42 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v42, Ability, "modifier_bloodseeker_thirst_vision", &kv, 0);
                KeyValues::~KeyValues(&kv);
                bFoundHero = 1;
LABEL_21:
                max_bonus_pct = this->max_bonus_pct;
                min_bonus_pct = this->min_bonus_pct;
                v19 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                v20 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                v21 = v20;
                if ( v20 <= 0 )
                  v21 = 1;
                if ( max_bonus_pct <= (v19 / v21) )
                {
                  v43 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                  v44 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                  v45 = 1;
                  if ( v44 > 0 )
                    v45 = v44;
                  v22 = v43 / v45;
                }
                else
                {
                  v22 = this->max_bonus_pct;
                }
                v23 = 0;
                if ( min_bonus_pct - v22 >= 0 )
                {
                  v24 = this->max_bonus_pct;
                  v25 = this->min_bonus_pct;
                  v26 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                  v27 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                  v28 = v27;
                  if ( v27 <= 0 )
                    v28 = 1;
                  if ( v24 <= (v26 / v28) )
                  {
                    v46 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                    v47 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                    v48 = 1;
                    if ( v47 > 0 )
                      v48 = v47;
                    v29 = v46 / v48;
                  }
                  else
                  {
                    v29 = this->max_bonus_pct;
                  }
                  v23 = v25 - v29;
                }
                iStackCount += v23;
                goto LABEL_3;
              }
              CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_bloodseeker_thirst_vision");
              if ( v14 != 0 )
                goto LABEL_21;
            }
          }
        }
      }
LABEL_3:
      ++i;
      ++v51;
      if ( i >= g_HeroList.m_hHeroList.m_Size )
        goto LABEL_33;
    }
  }
  iStackCount = 0;
  bFoundHero = 0;
LABEL_33:
  if ( gpGlobals->maxClients > 0 )
  {
    v30 = 1;
    v31 = 0;
    do
    {
      while ( 1 )
      {
        v32 = UTIL_PlayerByIndex(v30);
        v33 = v32;
        if ( v32 != 0 && (*(v32->_vptr_IHandleEntity + 140))(v32) != 0 )
        {
          v34 = v33->m_iTeamNum.m_Value;
          if ( v34 - 6 <= 7 || v34 - 2 <= 1 )
            break;
        }
        if ( gpGlobals->maxClients < ++v30 )
          goto LABEL_41;
      }
      ++v30;
      v31 += v34 != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
    }
    while ( gpGlobals->maxClients >= v30 );
LABEL_41:
    if ( v31 > 5 )
      iStackCount = floorf(iStackCount * (5.0 / v31));
  }
  if ( iStackCount != (*(this->_vptr_CDOTA_Buff + 27))(this) )
    (*(this->_vptr_CDOTA_Buff + 28))(this);
  if ( bFoundHero )
  {
    KeyValues::KeyValues(&kv, "modifier_bloodseeker_thirst");
    v35 = CDOTA_Buff::GetAbility(this);
    v36 = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(Parent, v36, v35, "modifier_bloodseeker_thirst_speed", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v38 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(v38, "modifier_bloodseeker_thirst_speed");
  }
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::~CDOTA_Modifier_Bloodseeker_Thirst_Vision  (line 666, @0x0000000002a127e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::~CDOTA_Modifier_Bloodseeker_Thirst_Vision(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328850;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::~CDOTA_Modifier_Bloodseeker_Thirst_Vision  (line 666, @0x0000000002a12800, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Thirst_Vision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::~CDOTA_Modifier_Bloodseeker_Thirst_Vision(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328850;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsDebuff  (line 670, @0x0000000002a07f30, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsDebuff(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsPurgable  (line 671, @0x0000000002a07f40, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsPurgable(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  return 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsHidden  (line 676, @0x0000000002a07f50, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::IsHidden(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  return 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetPriority  (line 677, @0x0000000002a07f60, libserver.so)
int __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetPriority(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  return 2;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::CheckState  (line 689, @0x00000000029c0b80, libserver.so)  // inlines: Disable, GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::CheckState(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Parent; // rbx
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  v5 = 100LL * CBaseEntity::GetHealth(Parent);
  v6 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v7 = 1;
  if ( v6 > 0 )
    v7 = v6;
  if ( this->invis_threshold_pct > (v5 / v7) )
  {
    buffState->m_nDisabledStateMask |= 0x80uLL;
    buffState->m_nEnabledStateMask &= ~0x80uLL;
  }
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::OnCreated  (line 700, @0x00000000029f6f20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "invis_threshold_pct"
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::OnCreated(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->invis_threshold_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "invis_threshold_pct", -1, 0);
  else
    this->invis_threshold_pct = 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::DeclareFunctions  (line 714, @0x00000000029b4610, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::DeclareFunctions(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetModifierProvidesFOWVision  (line 721, @0x00000000029c2580, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Vision::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Bloodseeker_Thirst_Vision *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  char m_CScriptComponent_high; // bl
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0x3F80000000000001uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0x3F80000000000001uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index || v4->m_pInstance == 0 )
    return 0x3F80000000000001uLL;
  m_CScriptComponent_high = HIBYTE(v4->m_pInstance[7].m_CScriptComponent);
  result.m_szVal = CDOTA_Buff::GetCaster(this);
  *&result.m_eType = 1;
  if ( m_CScriptComponent_high == *(result.m_szVal + 383) )
    *&result.m_eType = 0x3F80000000000001LL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::~CDOTA_Modifier_Bloodseeker_Thirst_Speed  (line 734, @0x0000000002a12790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::~CDOTA_Modifier_Bloodseeker_Thirst_Speed(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328B70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::~CDOTA_Modifier_Bloodseeker_Thirst_Speed  (line 734, @0x0000000002a127b0, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Thirst_Speed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::~CDOTA_Modifier_Bloodseeker_Thirst_Speed(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328B70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetEffectName  (line 740, @0x0000000002a07f70, libserver.so)
// strings: "particles/units/heroes/hero_bloodseeker/bloodseeker_thirst_owner.vpcf"
const char *__fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetEffectName(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this)
{
  return "particles/units/heroes/hero_bloodseeker/bloodseeker_thirst_owner.vpcf";
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::OnCreated  (line 755, @0x00000000029ba010, libserver.so)  // inlines: SpeakConcept, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, AllocPooledString, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// strings: "bloodthirst"
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::OnCreated(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  float v4; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  UtlSymLargeId_t v6[2]; // [rsp+10h] [rbp-60h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-50h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1537, 0.1, 0.1, 9, 0, 1.0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "bloodthirst", 1.0, v4);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
  if ( this->m_iszModifierString.u.m_Id == 0 )
  {
    AllocPooledString(v6, "thirst");
    this->m_iszModifierString.u.m_Id = v6[0];
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::DeclareFunctions  (line 775, @0x00000000029b4630, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::DeclareFunctions(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetActivityTranslationModifiers  (line 781, @0x00000000029b4650, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Thirst_Speed::GetActivityTranslationModifiers(
        CDOTA_Modifier_Bloodseeker_Thirst_Speed *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "thirst";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter  (line 792, @0x0000000002a12740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328E90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter  (line 792, @0x0000000002a12760, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::~CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4328E90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsHidden  (line 797, @0x0000000002a18180, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsHidden(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsPurgable  (line 798, @0x0000000002a07f80, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsPermanent  (line 799, @0x0000000002a07f90, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::DestroyOnExpire  (line 800, @0x0000000002a07fa0, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnCreated  (line 822, @0x00000000029f8450, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges_scepter", "charge_restore_time_scepter"
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnCreated(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_charges_scepter = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->charge_restore_time_scepter = 0.0;
    goto LABEL_4;
  }
  this->max_charges_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges_scepter", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->charge_restore_time_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        v4,
                                        "charge_restore_time_scepter",
                                        -1,
                                        0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges_scepter);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnRefresh  (line 834, @0x00000000029f7160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_charges_scepter"
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnRefresh(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges_scepter", -1, 0);
  else
    this->max_charges_scepter = 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnIntervalThink  (line 840, @0x00000000029b6980, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const this)
{
  float v2; // xmm1_4
  void (__fastcall *v3)(CDOTA_Modifier_Bloodseeker_Rupture_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm0_4
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float charge_restore_time_scepter; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges_scepter
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges_scepter) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time_scepter = this->charge_restore_time_scepter;
    v3 = *(this->_vptr_CDOTA_Buff + 63);
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
    v3(this, 1, v5 * charge_restore_time_scepter);
    v10 = this->charge_restore_time_scepter;
    v6 = CDOTA_Buff::GetAbility(this);
    v7 = (*(v6->_vptr_IHandleEntity + 243))(v6, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v7 * v10, v8);
  }
}


// CDOTA_Ability_Bloodseeker_Rupture::~CDOTA_Ability_Bloodseeker_Rupture  (line 871, @0x0000000002a16b10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::~CDOTA_Ability_Bloodseeker_Rupture(
        CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  this->_vptr_IHandleEntity = &off_43291F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Bloodseeker_Rupture::~CDOTA_Ability_Bloodseeker_Rupture  (line 871, @0x0000000002a16b30, libserver.so)  // inlines: ~CDOTA_Ability_Bloodseeker_Rupture
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::~CDOTA_Ability_Bloodseeker_Rupture(
        CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  this->_vptr_IHandleEntity = &off_43291F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Rupture::Schema_DynamicBinding  (line 873, @0x0000000002a07fb0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Rupture::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Rupture::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  return CDOTA_Ability_Bloodseeker_Rupture::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 873, @0x0000000002a07fc0, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::DestructInstance  (line 873, @0x0000000002a07fd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Bloodseeker_Rupture>
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::FreeInstance  (line 873, @0x0000000002a07ff0, libserver.so)
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::CanAllocate  (line 873, @0x0000000002a08010, libserver.so)
bool __fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 873, @0x0000000002a08020, libserver.so)
// globals: CDOTA_Ability_Bloodseeker_Rupture::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Bloodseeker_Rupture::s_pSchemaBinding;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::AllocateInstance  (line 873, @0x0000000002a0f1c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::ConstructInstance  (line 873, @0x0000000002a13cf0, libserver.so)  // inlines: CDOTA_Ability_Bloodseeker_Rupture, Construct<CDOTA_Ability_Bloodseeker_Rupture>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43291F0;
  }
  return p;
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 873, @0x0000000002a1eeb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 873, @0x0000000002a1eed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal  (line 873, @0x0000000002a35690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Bloodseeker_Rupture"
// globals: `guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass, CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass, __dso_handle, CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo, CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo
CEntityClass *__cdecl CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass);
    CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass._vptr_CEntityClass = off_4329170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass);
    __cxa_atexit(
      CDOTA_Ability_Bloodseeker_Rupture::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Bloodseeker_RuptureClass != 0 )
    return &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass;
  if ( `guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo,
      "CDOTA_Ability_Bloodseeker_Rupture",
      "bloodseeker_rupture",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo);
  }
  CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass.m_pClassInfo = &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo;
  CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass.m_pBaseClassInfo = CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Bloodseeker_RuptureClass = &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass;
  CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClassInfo.m_pClass = &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass;
  CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Bloodseeker_RuptureClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Bloodseeker_Rupture::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Bloodseeker_RuptureClass;
}


// CDOTA_Ability_Bloodseeker_Rupture::GetIntrinsicModifierName  (line 879, @0x0000000002a08030, libserver.so)
// strings: "modifier_bloodseeker_rupture_charge_counter"
const char *__fastcall CDOTA_Ability_Bloodseeker_Rupture::GetIntrinsicModifierName(
        CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bReflection )
    return "modifier_bloodseeker_rupture_charge_counter";
  return result;
}


// CDOTA_Ability_Bloodseeker_Rupture::IsRefreshable  (line 881, @0x0000000002a181a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Ability_Bloodseeker_Rupture::IsRefreshable(CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Ability_Bloodseeker_Rupture::GetCooldown  (line 899, @0x00000000029b8410, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldown
float __fastcall CDOTA_Ability_Bloodseeker_Rupture::GetCooldown(
        CDOTA_Ability_Bloodseeker_Rupture *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && CDOTABaseAbility::GetEffectiveLevel(this) >= 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Bloodseeker_Rupture::CastFilterResult  (line 906, @0x00000000029b6f20, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_bloodseeker_rupture_charge_counter"
int __fastcall CDOTA_Ability_Bloodseeker_Rupture::CastFilterResult(
        CDOTA_Ability_Bloodseeker_Rupture *const this,
        CDOTA_BaseNPC *pTarget)
{
  int v3; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  v3 = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( v3 != 0 )
    return v3;
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_bloodseeker_rupture_charge_counter", 0);
  if ( ModifierByName == 0 )
    return v3;
  else
    return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 ? 0x17 : 0;
}


// CDOTA_Ability_Bloodseeker_Rupture::GetCustomCastError  (line 927, @0x00000000029b4670, libserver.so)
// strings: "dota_hud_error_rupture_no_charges"
const char *__fastcall CDOTA_Ability_Bloodseeker_Rupture::GetCustomCastError(
        CDOTA_Ability_Bloodseeker_Rupture *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "dota_hud_error_rupture_no_charges";
}


// CDOTA_Ability_Bloodseeker_Rupture::OnSpellStart  (line 935, @0x00000000029e8420, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, SetThinking, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (23 total)
// strings: "max_charges_scepter", "charge_restore_time_scepter", "hero_bloodseeker.rupture.cast", "particles/units/heroes/hero_bloodseeker/bloodseeker_rupture_nuke.vpcf", "modifier_bloodseeker_rupture", "modifier_bloodseeker_rupture_charge_counter"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Bloodseeker_Rupture::OnSpellStart(CDOTA_Ability_Bloodseeker_Rupture *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm3_4
  CDOTA_BaseNPC *v15; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v21)(...); // r13
  float v22; // xmm0_4
  void (__fastcall *v23)(CDOTA_Ability_Bloodseeker_Rupture *const); // r13
  CDOTA_BaseNPC_Hero *v24; // r13
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  float duration; // [rsp+Ch] [rbp-54h]
  float durationa; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  this->max_charges_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges_scepter", -1, 0);
  this->charge_restore_time_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        this,
                                        "charge_restore_time_scepter",
                                        -1,
                                        0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "hero_bloodseeker.rupture.cast", 0.0, 0, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    if ( (*(v4->_vptr_IHandleEntity + 408))(v4) == 0 )
    {
      if ( !v4->m_bIsDOTANPC || (v4->m_iUnitType & 1) == 0 || (v24 = v4, v4->m_bIsIllusion.m_Value) )
        v24 = 0;
      v25 = CDOTABaseAbility::GetCaster(this);
      if ( v25 != 0 && (v25->m_iUnitType & 1) != 0 )
        v26 = v25;
      else
        v26 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v26,
        v24,
        kill_eater_event_t::kKillEaterEventType_Bloodseeker_RuptureKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_bloodseeker/bloodseeker_rupture_nuke.vpcf",
                              1,
                              v4,
                              0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, AbilityParticleEffect);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_bloodseeker_rupture");
    KeyValues::SetFloat(&kv, "duration", v7);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v8, this, "modifier_bloodseeker_rupture", &kv, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(v4, (v9->m_iTeamNum.m_Value == 2) + 2) )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v13,
        0,
        m_iAbilityID,
        0,
        v4,
        *&AbsOrigin->x,
        AbsOrigin->z,
        -1.0,
        v14);
    }
    KeyValues::~KeyValues(&kv);
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v15, "modifier_bloodseeker_rupture_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    v17 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v17) )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
      if ( (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 )
      {
        v23 = *(this->_vptr_IHandleEntity + 241);
        (*(ModifierByName->_vptr_CDOTA_Buff + 33))(ModifierByName);
        v23(this);
      }
      if ( LOBYTE(ModifierByName[1].m_References.m_pHead) == 0 )
      {
        duration = this->charge_restore_time_scepter;
        v18 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        CDOTA_Buff::StartIntervalThink(ModifierByName, v18 * duration, v19);
        vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
        LOBYTE(ModifierByName[1].m_References.m_pHead) = 1;
        v21 = vptr_CDOTA_Buff[63];
        durationa = this->charge_restore_time_scepter;
        v22 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        v21(ModifierByName, 1, v22 * durationa);
      }
    }
  }
}


// CDOTA_Ability_Bloodseeker_Rupture::GetAbilityDamageToTargetOverInterval  (line 992, @0x00000000029e53d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "movement_damage_pct"
__int64 __fastcall CDOTA_Ability_Bloodseeker_Rupture::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Bloodseeker_Rupture *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return (5 * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_damage_pct", -1, 1));
  return result;
}


// CDOTA_Modifier_Bloodseeker_Rupture::~CDOTA_Modifier_Bloodseeker_Rupture  (line 1012, @0x0000000002a126f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::~CDOTA_Modifier_Bloodseeker_Rupture(
        CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  this->_vptr_CDOTA_Buff = &off_4329CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Bloodseeker_Rupture::~CDOTA_Modifier_Bloodseeker_Rupture  (line 1012, @0x0000000002a12710, libserver.so)  // inlines: ~CDOTA_Modifier_Bloodseeker_Rupture
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::~CDOTA_Modifier_Bloodseeker_Rupture(
        CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  this->_vptr_CDOTA_Buff = &off_4329CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Bloodseeker_Rupture::IsDebuff  (line 1017, @0x0000000002a08050, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture::IsDebuff(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  return 1;
}


// CDOTA_Modifier_Bloodseeker_Rupture::IsPurgable  (line 1018, @0x0000000002a08060, libserver.so)
bool __fastcall CDOTA_Modifier_Bloodseeker_Rupture::IsPurgable(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  return 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture::GetStatusEffectName  (line 1026, @0x0000000002a08070, libserver.so)
// strings: "particles/status_fx/status_effect_rupture.vpcf"
const char *__fastcall CDOTA_Modifier_Bloodseeker_Rupture::GetStatusEffectName(
        CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  return "particles/status_fx/status_effect_rupture.vpcf";
}


// CDOTA_Modifier_Bloodseeker_Rupture::StatusEffectPriority  (line 1027, @0x0000000002a08080, libserver.so)
int __fastcall CDOTA_Modifier_Bloodseeker_Rupture::StatusEffectPriority(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  return 50;
}


// CDOTA_Modifier_Bloodseeker_Rupture::OnCreated  (line 1044, @0x00000000029fae30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::StartIntervalThink, DOTA_EmitSound
// strings: "movement_damage_pct", "damage_cap_amount", "damage_cap_interval", "Hero_Bloodseeker.rupture", "hero_bloodseeker.rupture_FP"
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::OnCreated(
        CDOTA_Modifier_Bloodseeker_Rupture *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_damage_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->damage_cap_amount = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage_cap_interval = 0.0;
    goto LABEL_5;
  }
  this->movement_damage_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->damage_cap_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_cap_amount", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage_cap_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_cap_interval", -1, 0);
LABEL_5:
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  this->vLastPos.x = AbsOrigin->x;
  this->vLastPos.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->bResetPosition = 0;
  this->vLastPos.z = z;
  CDOTA_Buff::StartIntervalThink(this, 0.25, v9);
  this->m_fAccumulatedDamage = 0.0;
  v10 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Bloodseeker.rupture", v10);
  v11 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(1, "hero_bloodseeker.rupture_FP", v11);
}


// CDOTA_Modifier_Bloodseeker_Rupture::DeclareFunctions  (line 1072, @0x00000000029b4680, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Bloodseeker_Rupture::OnSetLocation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::DeclareFunctions(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  this->m_Functions[143].__pfn = CDOTA_Modifier_Bloodseeker_Rupture::OnSetLocation;
  this->m_Functions[143].__delta = 0;
}


// CDOTA_Modifier_Bloodseeker_Rupture::OnSetLocation  (line 1079, @0x00000000029b72f0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Bloodseeker_Rupture::OnSetLocation(
        CDOTA_Modifier_Bloodseeker_Rupture *const this,
        const CModifierParams *const params)
{
  CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Bloodseeker_Rupture::OnIntervalThink  (line 1091, @0x00000000029c38e0, libserver.so)  // inlines: InState, IsInvulnerable, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTA_Buff::GetAbility, ApplyDamage
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::OnIntervalThink(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  const Vector *v4; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm0_4
  int v9; // r12d
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm2_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rdi
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v21; // r12
  CDOTA_BaseNPC *Caster; // rax
  float flDistance; // [rsp+Ch] [rbp-34h]
  float flDistancea; // [rsp+Ch] [rbp-34h]
  Vector vDirection; // [rsp+10h] [rbp-30h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent->m_bIsWaitingToSpawn.m_Value || (Parent->m_nUnitState64.m_Value & 0x100) != 0 )
  {
    this->bResetPosition = 1;
  }
  else
  {
    if ( this->bResetPosition )
    {
      v17 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
      this->vLastPos.x = AbsOrigin->x;
      this->vLastPos.y = AbsOrigin->y;
      z = AbsOrigin->z;
      this->bResetPosition = 0;
      this->vLastPos.z = z;
    }
    v3 = CDOTA_Buff::GetParent(this);
    v4 = CBaseEntity::GetAbsOrigin(v3);
    v5 = this->vLastPos.y - v4->y;
    v6 = this->vLastPos.x - v4->x;
    vDirection.z = 0.0;
    vDirection.y = v5;
    vDirection.x = v6;
    flDistance = VectorNormalize(&vDirection);
    v7 = CDOTA_Buff::GetParent(this);
    this->vLastPos = *CBaseEntity::GetAbsOrigin(v7);
    v8 = ((this->movement_damage_pct
         * COERCE_FLOAT(_mm_cmpge_ss(0x44A28000u, LODWORD(flDistance)).m128_u32[0] & LODWORD(flDistance)))
        / 100.0)
       + this->m_fAccumulatedDamage;
    v9 = v8;
    this->m_fAccumulatedDamage = v8;
    if ( v8 > 0 )
    {
      v10 = CDOTA_Buff::GetParent(this);
      v11 = v9;
      if ( (v10->m_iUnitType & 0x100) == 0 )
      {
        flDistancea = v9;
        Ability = CDOTA_Buff::GetAbility(this);
        v21 = CDOTA_Buff::GetParent(this);
        Caster = CDOTA_Buff::GetCaster(this);
        ApplyDamage(Caster, v21, Ability, flDistancea, 4, 0);
        v11 = flDistancea;
      }
      this->m_fAccumulatedDamage = this->m_fAccumulatedDamage - v11;
      v12 = CDOTA_Buff::GetParent(this);
      if ( (*(v12->_vptr_IHandleEntity + 408))(v12) == 0 )
      {
        v13 = 0;
        v14 = CDOTA_Buff::GetParent(this);
        if ( v14 != 0 && v14->m_bIsDOTANPC && (v14->m_iUnitType & 1) != 0 && !v14->m_bIsIllusion.m_Value )
          v13 = v14;
        v15 = CDOTA_Buff::GetCaster(this);
        if ( v15 != 0 && (v15->m_iUnitType & 1) != 0 )
          v16 = v15;
        else
          v16 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v16,
          v13,
          kill_eater_event_t::kKillEaterEventType_Bloodseeker_RuptureKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
  }
}


// CDOTA_Modifier_Bloodseeker_Rupture::OnDestroy  (line 1138, @0x00000000029b7aa0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "hero_bloodseeker.rupture_FP"
void __fastcall CDOTA_Modifier_Bloodseeker_Rupture::OnDestroy(CDOTA_Modifier_Bloodseeker_Rupture *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "hero_bloodseeker.rupture_FP");
}


