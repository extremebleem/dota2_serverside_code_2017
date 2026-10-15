// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:37
class CDOTA_Unit_Hero_Disruptor : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Disruptor(CDOTA_Unit_Hero_Disruptor &);
	CDOTA_Unit_Hero_Disruptor(CDOTA_Unit_Hero_Disruptor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Disruptor();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Disruptor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:52
class C_CDOTA_Unit_Hero_Disruptor_MapInstall {
	C_CDOTA_Unit_Hero_Disruptor_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:66
class CDOTA_Ability_Disruptor_Thunder_Strike : public CDOTABaseAbility {
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
	CDOTA_Ability_Disruptor_Thunder_Strike(CDOTA_Ability_Disruptor_Thunder_Strike &);
	CDOTA_Ability_Disruptor_Thunder_Strike(CDOTA_Ability_Disruptor_Thunder_Strike &);
	CDOTA_Ability_Disruptor_Thunder_Strike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Disruptor_Thunder_Strike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:127
class CDOTA_Modifier_Disruptor_Thunder_Strike : public CDOTA_Buff {
public:

private:

	float strike_interval;  // +0xba8
	int radius;  // +0xbac
	CDOTA_Modifier_Disruptor_Thunder_Strike();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool RemoveOnDeath();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_Disruptor_Thunder_Strike();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[54] RemoveOnDeath
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:257
class CDOTA_Ability_Disruptor_Glimpse : public CDOTABaseAbility, public CGameEventListener {
public:

private:

	int m_nNPCSpawnedID;  // +0x39c
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
	CDOTA_Ability_Disruptor_Glimpse(CDOTA_Ability_Disruptor_Glimpse &);
	CDOTA_Ability_Disruptor_Glimpse(CDOTA_Ability_Disruptor_Glimpse &);
	CDOTA_Ability_Disruptor_Glimpse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void FireGameEvent(IGameEvent *);
	virtual ~CDOTA_Ability_Disruptor_Glimpse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[333] FireGameEvent
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:280
class CDOTA_Modifier_Disruptor_Glimpse : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Disruptor_Glimpse();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	Vector GetOldestPosition();
	virtual ~CDOTA_Modifier_Disruptor_Glimpse();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// sizeof = 3096
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:402
class CDOTA_Modifier_Disruptor_Glimpse_Thinker : public CDOTA_Buff {
public:

private:

	EHANDLE m_hEntity;  // +0xbb4
	CDOTA_Modifier_Disruptor_Glimpse_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Disruptor_Glimpse_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:512
class CDOTA_Ability_Disruptor_KineticField : public CDOTABaseAbility {
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
	CDOTA_Ability_Disruptor_KineticField(CDOTA_Ability_Disruptor_KineticField &);
	CDOTA_Ability_Disruptor_KineticField(CDOTA_Ability_Disruptor_KineticField &);
	CDOTA_Ability_Disruptor_KineticField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	Vector GetFieldLocation();
	virtual Activity GetGestureBasedActivity();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Disruptor_KineticField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// vtable[321] GetSlowDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:538
class C_CDOTA_Ability_Disruptor_KineticField_MapInstall {
	C_CDOTA_Ability_Disruptor_KineticField_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:581
class CDOTA_Modifier_Disruptor_KineticFieldThinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float formation_time;  // +0xbac
	bool m_bActive;  // +0xbb0

	CDOTA_Modifier_Disruptor_KineticFieldThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual ~CDOTA_Modifier_Disruptor_KineticFieldThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:681
class CDOTA_Modifier_Disruptor_KineticField : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Disruptor_KineticField();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	virtual ~CDOTA_Modifier_Disruptor_KineticField();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Limit
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:758
class CDOTA_Ability_Disruptor_StaticStorm : public CDOTABaseAbility {
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
	CDOTA_Ability_Disruptor_StaticStorm(CDOTA_Ability_Disruptor_StaticStorm &);
	CDOTA_Ability_Disruptor_StaticStorm(CDOTA_Ability_Disruptor_StaticStorm &);
	CDOTA_Ability_Disruptor_StaticStorm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_Disruptor_StaticStorm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:785
class C_CDOTA_Ability_Disruptor_StaticStorm_MapInstall {
	C_CDOTA_Ability_Disruptor_StaticStorm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:847
class CDOTA_Modifier_Disruptor_StaticStormThinker : public CDOTA_Buff {
public:

private:

	int m_nCurrentPulse;  // +0xba8
	int radius;  // +0xbac
	int damage_max;  // +0xbb0
	int pulses;  // +0xbb4
	int pulses_scepter;  // +0xbb8
	float duration;  // +0xbbc
	float duration_scepter;  // +0xbc0
	CDOTA_Modifier_Disruptor_StaticStormThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void OnIntervalThink();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Disruptor_StaticStormThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[56] OnIntervalThink
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_disruptor.cpp:989
class CDOTA_Modifier_Disruptor_StaticStorm : public CDOTA_Buff {
public:

private:

	int miss_rate;  // +0xba8
	int movement_speed_reduction;  // +0xbac
	int attack_speed_reduction;  // +0xbb0
	bool m_bHasScepter;  // +0xbb4
	CDOTA_Modifier_Disruptor_StaticStorm();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Disruptor_StaticStorm();

	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[5] CheckState
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Disruptor::~CDOTA_Unit_Hero_Disruptor  (line 37, @0x0000000002c99d70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Disruptor::~CDOTA_Unit_Hero_Disruptor(CDOTA_Unit_Hero_Disruptor *const this)
{
  this->_vptr_IHandleEntity = &off_459ADF0;
  this->_vptr_INextBotEventResponder = &off_459BDD0;
  this->_vptr_CObstructionObject = &off_459C100;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Disruptor::~CDOTA_Unit_Hero_Disruptor  (line 37, @0x0000000002c99db0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Disruptor
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Disruptor::~CDOTA_Unit_Hero_Disruptor(CDOTA_Unit_Hero_Disruptor *const this)
{
  this->_vptr_IHandleEntity = &off_459ADF0;
  this->_vptr_INextBotEventResponder = &off_459BDD0;
  this->_vptr_CObstructionObject = &off_459C100;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Disruptor::Schema_DynamicBinding  (line 39, @0x0000000002c879b0, libserver.so)
// globals: CDOTA_Unit_Hero_Disruptor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Disruptor::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Disruptor *const this)
{
  return CDOTA_Unit_Hero_Disruptor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002c879e0, libserver.so)
// globals: CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002c879f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Disruptor>
void __fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002c87a10, libserver.so)
void __fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002c87a30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002c87a40, libserver.so)
// globals: CDOTA_Unit_Hero_Disruptor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Disruptor::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002c8f620, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002c93f00, libserver.so)  // inlines: CDOTA_Unit_Hero_Disruptor, Construct<CDOTA_Unit_Hero_Disruptor>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_459ADF0;
    *(p + 236) = &off_459BDD0;
    *(p + 257) = &off_459C100;
  }
  return p;
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca3530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca38a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal  (line 39, @0x0000000002cbd6e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_disruptor", "CDOTA_Unit_Hero_Disruptor"
// globals: `guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass, CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass, __dso_handle, CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo, CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass);
    CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass._vptr_CEntityClass = off_459AD70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Disruptor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DisruptorClass != 0 )
    return &CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo,
      "CDOTA_Unit_Hero_Disruptor",
      "npc_dota_hero_disruptor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo);
  }
  CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass.m_pClassInfo = &CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo;
  CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DisruptorClass = &CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass;
  CDOTA_Unit_Hero_Disruptor::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DisruptorClassInfo.m_pClass = &CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass;
  CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DisruptorClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Disruptor::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DisruptorClass;
}


// CDOTA_Unit_Hero_Disruptor::YouForgotToImplementOrDeclareServerClass  (line 52, @0x0000000002c1be90, libserver.so)
int __fastcall CDOTA_Unit_Hero_Disruptor::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Disruptor *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Disruptor::GetServerClass  (line 52, @0x0000000002c34e30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Disruptor::GetServerClass(CDOTA_Unit_Hero_Disruptor *const this)
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


// CDOTA_Ability_Disruptor_Thunder_Strike::~CDOTA_Ability_Disruptor_Thunder_Strike  (line 66, @0x0000000002c980b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::~CDOTA_Ability_Disruptor_Thunder_Strike(
        CDOTA_Ability_Disruptor_Thunder_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_459C1D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::~CDOTA_Ability_Disruptor_Thunder_Strike  (line 66, @0x0000000002c980d0, libserver.so)  // inlines: ~CDOTA_Ability_Disruptor_Thunder_Strike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::~CDOTA_Ability_Disruptor_Thunder_Strike(
        CDOTA_Ability_Disruptor_Thunder_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_459C1D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::Schema_DynamicBinding  (line 68, @0x0000000002c87a50, libserver.so)
// globals: CDOTA_Ability_Disruptor_Thunder_Strike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_Thunder_Strike::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_Thunder_Strike *const this)
{
  return CDOTA_Ability_Disruptor_Thunder_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002c87a60, libserver.so)
// globals: CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002c87a70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Disruptor_Thunder_Strike>
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002c87a90, libserver.so)
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002c87ab0, libserver.so)
bool __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x0000000002c87ac0, libserver.so)
// globals: CDOTA_Ability_Disruptor_Thunder_Strike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_Thunder_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002c8f660, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002c947c0, libserver.so)  // inlines: CDOTA_Ability_Disruptor_Thunder_Strike, Construct<CDOTA_Ability_Disruptor_Thunder_Strike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_459C1D0;
  }
  return p;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002ca1c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002ca1c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal  (line 68, @0x0000000002cb9690, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "disruptor_thunder_strike", "CDOTA_Ability_Disruptor_Thunder_Strike"
// globals: `guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass, CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass, __dso_handle, CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo, CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass);
    CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass._vptr_CEntityClass = off_459C150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Disruptor_Thunder_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Disruptor_Thunder_StrikeClass != 0 )
    return &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass;
  if ( `guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo,
      "CDOTA_Ability_Disruptor_Thunder_Strike",
      "disruptor_thunder_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo);
  }
  CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass.m_pClassInfo = &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo;
  CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass.m_pBaseClassInfo = CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Disruptor_Thunder_StrikeClass = &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass;
  CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClassInfo.m_pClass = &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass;
  CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Disruptor_Thunder_StrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Disruptor_Thunder_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_Thunder_StrikeClass;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::GetGestureBasedActivity  (line 74, @0x0000000002c87ad0, libserver.so)
Activity __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::GetGestureBasedActivity(
        CDOTA_Ability_Disruptor_Thunder_Strike *const this)
{
  return 1678;
}


// CDOTA_Ability_Disruptor_Thunder_Strike::OnSpellStart  (line 84, @0x0000000002c66500, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "strike_interval", "special_bonus_unique_disruptor", "modifier_disruptor_thunder_strike", "Hero_Disruptor.ThunderStrike.Cast"
void __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::OnSpellStart(
        CDOTA_Ability_Disruptor_Thunder_Strike *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strikes", -1, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "strike_interval", -1, 0);
      Caster = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_disruptor", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      KeyValues::KeyValues(&kv, "modifier_disruptor_thunder_strike");
      KeyValues::SetFloat(&kv, "duration", v7);
      v8 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_disruptor_thunder_strike", &kv, 0);
      v9 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Disruptor.ThunderStrike.Cast", v9);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Disruptor_Thunder_Strike::GetAbilityDamageToTargetOverInterval  (line 116, @0x0000000002c620c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Disruptor_Thunder_Strike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Disruptor_Thunder_Strike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Disruptor_Thunder_Strike *v6; // rbx
  int LevelSpecialValue; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strikes", -1, 0);
    LODWORD(v6) = (*(v6->_vptr_IHandleEntity + 247))(v6);
    return ((v6 * LevelSpecialValue) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::~CDOTA_Modifier_Disruptor_Thunder_Strike  (line 127, @0x0000000002c93000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::~CDOTA_Modifier_Disruptor_Thunder_Strike(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  this->_vptr_CDOTA_Buff = &off_459CC90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::~CDOTA_Modifier_Disruptor_Thunder_Strike  (line 127, @0x0000000002c93020, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_Thunder_Strike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::~CDOTA_Modifier_Disruptor_Thunder_Strike(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  this->_vptr_CDOTA_Buff = &off_459CC90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::IsDebuff  (line 132, @0x0000000002c87ae0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::IsDebuff(CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::RemoveOnDeath  (line 136, @0x0000000002c87af0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::RemoveOnDeath(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  return 0;
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::DeclareFunctions  (line 157, @0x0000000002c1bea0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Disruptor_Thunder_Strike::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::DeclareFunctions(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_Disruptor_Thunder_Strike::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::GetModifierProvidesFOWVision  (line 164, @0x0000000002c2d7c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster
// strings: "modifier_slark_shadow_dance"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  __int64 v8; // rdx
  char m_CScriptComponent_high; // r12

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
      {
        m_CScriptComponent_high = HIBYTE(v5->m_pInstance[7].m_CScriptComponent);
        if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
          return 1uLL;
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_shadow_dance", 0);
  v8 = 0x3F80000000000001LL;
  if ( ModifierByName != 0 )
    v8 = 1;
  return v8;
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::OnCreated  (line 178, @0x0000000002c74a80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound, CDOTA_Buff::StartIntervalThink
// strings: "strike_interval", "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_buff.vpcf", "Hero_Disruptor.ThunderStrike.Thunderator"
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::OnCreated(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->strike_interval = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->radius = 0;
    goto LABEL_4;
  }
  this->strike_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "strike_interval", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::GetAbsOrigin(Parent);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_buff.vpcf",
               2,
               0,
               0,
               0);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 0, v8, 7, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 1);
  v10 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(8, "Hero_Disruptor.ThunderStrike.Thunderator", v10);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->strike_interval, v11);
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::OnDestroy  (line 197, @0x0000000002c22140, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::OnDestroy(CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_THUNDERSTRIKE,
    Caster->m_iTeamNum.m_Value,
    AbsOrigin,
    450.0,
    3.0,
    0);
}


// CDOTA_Modifier_Disruptor_Thunder_Strike::OnIntervalThink  (line 206, @0x0000000002c4eed0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTA_ParticleManager::SetParticleControl (15 total)
// strings: "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_bolt.vpcf", "attach_hitloc", "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_aoe.vpcf", "Hero_Disruptor.ThunderStrike.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Disruptor_Thunder_Strike::OnIntervalThink(
        CDOTA_Modifier_Disruptor_Thunder_Strike *const this)
{
  int radius; // ebx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  __int64 v15; // r12
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v23; // r15
  CDOTA_BaseNPC *v24; // rax
  double v25; // xmm0_8
  CDOTA_BaseNPC_Hero *v26; // r15
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rdi
  CDOTA_ParticleManager *v29; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  int fxAbilityLvl; // [rsp+28h] [rbp-68h]
  float flDamage; // [rsp+2Ch] [rbp-64h]
  double v37; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    radius = this->radius;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v6 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, radius, &entities, 2, 19, 0, 0, 0);
    fxAbilityLvl = CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value;
    v7 = CDOTA_Buff::GetParent(this);
    CBaseEntity::GetAbsOrigin(v7);
    v8 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_bolt.vpcf",
                    7,
                    v8,
                    0,
                    0);
    v10 = CDOTA_Buff::GetParent(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 1, v10, 5, "attach_hitloc", vec3_invalid, 1);
    v12 = CDOTA_Buff::GetParent(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, v8, 2, v12, 1, 0, vec3_invalid, 1);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v14, v8);
    if ( entities.m_Size > 0 )
    {
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = &entities.m_Memory.m_pMemory[v15];
          m_Index = v16->m_Index;
          if ( v16->m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  break;
              }
            }
          }
          if ( entities.m_Size <= ++v15 )
            goto LABEL_24;
        }
        Ability = CDOTA_Buff::GetAbility(this);
        flDamage = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
        v23 = CDOTA_Buff::GetAbility(this);
        v24 = CDOTA_Buff::GetCaster(this);
        v25 = ApplyDamage(v24, m_pInstance, v23, flDamage, 2, 0);
        if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v25) == 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          v26 = 0;
          if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            v26 = m_pInstance;
          v27 = CDOTA_Buff::GetCaster(this);
          v28 = 0;
          if ( v27 != 0 && v27->m_bIsDOTANPC && (v27->m_iUnitType & 1) != 0 && !v27->m_bIsIllusion.m_Value )
            v28 = v27;
          EconEntity_OnOwnerKillEaterEvent(
            v28,
            v26,
            kill_eater_event_t::kKillEaterEventType_Disruptor_ThunderStrikeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        v29 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v29,
                     "particles/units/heroes/hero_disruptor/disruptor_thunder_strike_aoe.vpcf",
                     2,
                     m_pInstance,
                     0,
                     0);
        v31 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v31, Particle, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
        *&v37 = fxAbilityLvl;
        *(&v37 + 1) = fxAbilityLvl;
        v32 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v32, Particle, 1, v37, fxAbilityLvl);
        v33 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v33, Particle);
        ++v15;
      }
      while ( entities.m_Size > v15 );
    }
LABEL_24:
    v34 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Disruptor.ThunderStrike.Target", v34);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Disruptor_Glimpse::~CDOTA_Ability_Disruptor_Glimpse  (line 257, @0x0000000002ca1160, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Disruptor_Glimpse::~CDOTA_Ability_Disruptor_Glimpse(
        CDOTA_Ability_Disruptor_Glimpse *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_459D310;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Disruptor_Glimpse::~CDOTA_Ability_Disruptor_Glimpse  (line 257, @0x0000000002ca11e0, libserver.so)  // inlines: StopListeningForAllEvents, ~CDOTA_Ability_Disruptor_Glimpse, ~CGameEventListener, ~IGameEventListener2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Disruptor_Glimpse::~CDOTA_Ability_Disruptor_Glimpse(
        CDOTA_Ability_Disruptor_Glimpse *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_459D310;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Disruptor_Glimpse::Schema_DynamicBinding  (line 262, @0x0000000002c87b00, libserver.so)
// globals: CDOTA_Ability_Disruptor_Glimpse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_Glimpse::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_Glimpse *const this)
{
  return CDOTA_Ability_Disruptor_Glimpse::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 262, @0x0000000002c87b10, libserver.so)
// globals: CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::DestructInstance  (line 262, @0x0000000002c87b20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Disruptor_Glimpse>
void __fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::FreeInstance  (line 262, @0x0000000002c87b40, libserver.so)
void __fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::CanAllocate  (line 262, @0x0000000002c87b60, libserver.so)
bool __fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 262, @0x0000000002c87b70, libserver.so)
// globals: CDOTA_Ability_Disruptor_Glimpse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_Glimpse::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::AllocateInstance  (line 262, @0x0000000002c8f6a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::ConstructInstance  (line 262, @0x0000000002c947f0, libserver.so)  // inlines: CDOTA_Ability_Disruptor_Glimpse, CGameEventListener, Construct<CDOTA_Ability_Disruptor_Glimpse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 920) = 0;
    *p = &off_459D310;
    *(p + 114) = off_459DD90;
  }
  return p;
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 262, @0x0000000002ca1c60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 262, @0x0000000002ca1c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal  (line 262, @0x0000000002cc0dc0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Disruptor_Glimpse"
// globals: `guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass, CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo, CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass) != 0 )
  {
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pClassInfo = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_flags = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pInputs = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_nInputCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pOutputs = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_nOutputCount = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pGameClass = 0;
    CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass._vptr_CEntityClass = off_459CF70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass);
    __cxa_atexit(
      CDOTA_Ability_Disruptor_Glimpse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Disruptor_GlimpseClass != 0 )
    return &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass;
  if ( `guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo,
      "CDOTA_Ability_Disruptor_Glimpse",
      "disruptor_glimpse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo);
  }
  CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pClassInfo = &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo;
  CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pBaseClassInfo = CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Disruptor_GlimpseClass = &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass;
  CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClassInfo.m_pClass = &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass;
  CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Disruptor_GlimpseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Disruptor_Glimpse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_GlimpseClass;
}


// CDOTA_Modifier_Disruptor_Glimpse::~CDOTA_Modifier_Disruptor_Glimpse  (line 280, @0x0000000002c92fb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_Glimpse::~CDOTA_Modifier_Disruptor_Glimpse(
        CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  this->_vptr_CDOTA_Buff = &off_459D030;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_Glimpse::~CDOTA_Modifier_Disruptor_Glimpse  (line 280, @0x0000000002c92fd0, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_Glimpse
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_Glimpse::~CDOTA_Modifier_Disruptor_Glimpse(
        CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  this->_vptr_CDOTA_Buff = &off_459D030;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_Glimpse::IsHidden  (line 285, @0x0000000002c87b80, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_Glimpse::IsHidden(CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_Glimpse::IsPurgable  (line 289, @0x0000000002c87b90, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_Glimpse::IsPurgable(CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  return 0;
}


// CDOTA_Modifier_Disruptor_Glimpse::RemoveOnDeath  (line 290, @0x0000000002c87ba0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_Glimpse::RemoveOnDeath(CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  return 0;
}


// CDOTA_Modifier_Disruptor_Glimpse::OnCreated  (line 302, @0x0000000002c1f040, libserver.so)  // inlines: operator=
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
void __fastcall CDOTA_Modifier_Disruptor_Glimpse::OnCreated(
        CDOTA_Modifier_Disruptor_Glimpse *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  int v3; // r12d
  CDOTA_Modifier_Disruptor_Glimpse *v4; // rbx
  CDOTA_BaseNPC *Parent; // r13
  const Vector *AbsOrigin; // rax

  v3 = 9;
  v4 = this;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v2);
  Parent = CDOTA_Buff::GetParent(v4);
  do
  {
    if ( Parent != 0 )
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    else
      AbsOrigin = &vec3_origin;
    v4 = (v4 + 12);
    HIDWORD(v4->m_Functions[172].__delta) = LODWORD(AbsOrigin->x);
    *&v4->m_hScriptScope = AbsOrigin->y;
    HIDWORD(v4->m_hScriptScope) = LODWORD(AbsOrigin->z);
    --v3;
  }
  while ( v3 != 0 );
}


// CDOTA_Modifier_Disruptor_Glimpse::OnIntervalThink  (line 317, @0x0000000002c1f0d0, libserver.so)  // inlines: operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
void __fastcall CDOTA_Modifier_Disruptor_Glimpse::OnIntervalThink(CDOTA_Modifier_Disruptor_Glimpse *const this)
{
  Vector *m_PositionIndex; // rdx
  int v2; // ecx
  Vector *v3; // rax
  vec_t x; // xmm0_4
  Vector *v6; // rsi
  CDOTA_BaseNPC *Parent; // rax

  m_PositionIndex = this->m_PositionIndex;
  v2 = 8;
  v3 = &this->m_PositionIndex[1];
  while ( 1 )
  {
    x = v3->x;
    v6 = v3++;
    m_PositionIndex->x = x;
    m_PositionIndex->y = v3[-1].y;
    --v2;
    m_PositionIndex->z = v3[-1].z;
    if ( v2 == 0 )
      break;
    m_PositionIndex = v6;
  }
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    this->m_PositionIndex[8] = *CBaseEntity::GetAbsOrigin(Parent);
  }
}


// CDOTA_Ability_Disruptor_Glimpse::Spawn  (line 334, @0x0000000002c51770, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, ListenForGameEvent, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::Spawn, FindUnitsInRadius, KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "npc_spawned", "modifier_disruptor_glimpse"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Disruptor_Glimpse::Spawn(
        CDOTA_Ability_Disruptor_Glimpse *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 i; // rbx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CBaseEntity *OwnerEntity; // rsi
  CGameSceneNode *m_pParent; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vHeroUnits; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::Spawn(this, pKeyValues);
  this->m_bRegisteredForEvents = 1;
  this->m_nNPCSpawnedID = (*(gameeventmanager->_vptr_IBaseInterface + 4))(
                            gameeventmanager,
                            &this->CGameEventListener,
                            "npc_spawned",
                            1);
  vHeroUnits.m_Size = 0;
  vHeroUnits.m_Memory.m_pMemory = 0;
  vHeroUnits.m_Memory.m_nAllocationCount = 0;
  vHeroUnits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(2, &vec3_origin, 0, -1.0, &vHeroUnits, 3, 1, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_disruptor_glimpse");
  for ( i = 0; vHeroUnits.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &vHeroUnits.m_Memory.m_pMemory[i];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      if ( vHeroUnits.m_Size <= ++i )
        goto LABEL_13;
    }
    OwnerEntity = 0;
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, OwnerEntity, this, "modifier_disruptor_glimpse", &kv, 0);
  }
LABEL_13:
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vHeroUnits);
  if ( (vHeroUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vHeroUnits.m_Memory);
    if ( (vHeroUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vHeroUnits.m_Memory);
  }
}


// CDOTA_Ability_Disruptor_Glimpse::FireGameEvent  (line 352, @0x0000000002c21c40, libserver.so)  // inlines: GetEntityIndex, GetInstance, GetParent, IndexToIdentity, Instance, IsConsideredHero, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, ToDOTABaseNPC
// calls: KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_disruptor_glimpse"
void __fastcall CDOTA_Ability_Disruptor_Glimpse::FireGameEvent(
        CDOTA_Ability_Disruptor_Glimpse *const this,
        IGameEvent *event)
{
  int v4; // eax
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rbx
  CBaseEntity *OwnerEntity; // rsi
  CGameSceneNode *m_pParent; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( (*(event->_vptr_IGameEvent + 3))(event) == this->m_nNPCSpawnedID )
  {
    v4 = (*(event->_vptr_IGameEvent + 8))(event, "entindex", 0);
    if ( v4 <= 0x7FFE )
    {
      v5 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v5 != 0 )
      {
        v6 = &v5[v4 & 0x1FF];
        if ( v6 != 0 && (v6->m_EHandle.m_Index & 0x7FFF) == v4 )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_disruptor_glimpse");
            OwnerEntity = 0;
            m_pParent = this->m_pGameSceneNode->m_pParent;
            if ( m_pParent != 0 )
              OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, OwnerEntity, this, "modifier_disruptor_glimpse", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Disruptor_Glimpse::OnSpellStart  (line 365, @0x0000000002c226e0, libserver.so)  // inlines: GetOldestPosition, GetTeamNumber, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Kill, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetPtr, Thinker_Create, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_disruptor_glimpse", "modifier_disruptor_glimpse_thinker", "Hero_Disruptor.Glimpse.Target"
void __fastcall CDOTA_Ability_Disruptor_Glimpse::OnSpellStart(CDOTA_Ability_Disruptor_Glimpse *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r13
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v7; // rax
  int v8; // r15d
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-38h]
  Vector vOrigin; // 0:^10.12

  v11 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0 )
  {
    if ( LOBYTE(CursorTarget[4].m_pfnMoveDone.__delta) != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::Kill(v3, this, Caster, 0.0, 0);
    }
    else if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_disruptor_glimpse", 0);
      if ( ModifierByName != 0 )
      {
        m_Value = v3->m_iTeamNum.m_Value;
        if ( m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
        {
          KeyValues::KeyValues(&kv, "modifier_disruptor_glimpse_thinker");
          KeyValues::SetPtr(&kv, "target", v3);
          v7 = CDOTABaseAbility::GetCaster(this);
          vOrigin = *&ModifierByName[1]._vptr_CDOTA_Buff;
          v8 = v7->m_iTeamNum.m_Value;
          v9 = CDOTABaseAbility::GetCaster(this);
          Thinker_Create(v9, this, "modifier_disruptor_glimpse_thinker", &kv, vOrigin, v8, 0, 0, 0);
          DOTA_EmitSound(10, "Hero_Disruptor.Glimpse.Target", v3);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Modifier_Disruptor_Glimpse_Thinker::~CDOTA_Modifier_Disruptor_Glimpse_Thinker  (line 402, @0x0000000002c92f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_Glimpse_Thinker::~CDOTA_Modifier_Disruptor_Glimpse_Thinker(
        CDOTA_Modifier_Disruptor_Glimpse_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459DE10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_Glimpse_Thinker::~CDOTA_Modifier_Disruptor_Glimpse_Thinker  (line 402, @0x0000000002c92f80, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_Glimpse_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_Glimpse_Thinker::~CDOTA_Modifier_Disruptor_Glimpse_Thinker(
        CDOTA_Modifier_Disruptor_Glimpse_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459DE10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_Glimpse_Thinker::OnCreated  (line 422, @0x0000000002c37370, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, NormalizeInPlace, Set, ToDOTABaseNPC, Vector, VectorMultiply, VectorSubtract, operator*, operator-, operator->, operator=, sLinearProjectileCreateInfo
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, KeyValues::GetPtr, CEntityHandle::operator CEntityInstance*, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, DOTA_EmitSoundLocation, CDOTA_Buff::StartIntervalThink (15 total)
// strings: "particles/units/heroes/hero_disruptor/disruptor_glimpse_travel.vpcf", "particles/units/heroes/hero_disruptor/disruptor_glimpse_targetend.vpcf", "particles/units/heroes/hero_disruptor/disruptor_glimpse_targetstart.vpcf", "Hero_Disruptor.Glimpse.Destination"
void __fastcall CDOTA_Modifier_Disruptor_Glimpse_Thinker::OnCreated(
        CDOTA_Modifier_Disruptor_Glimpse_Thinker *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  const CBaseEntity *v9; // rax
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  const CBaseAnimating *v15; // rax
  const CBaseAnimating *v16; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  int v24; // r13d
  const Vector *v25; // r14
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  int v30; // r13d
  const Vector *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  float v34; // xmm1_4
  vec_t y; // xmm3_4
  vec_t z; // xmm1_4
  const CBaseEntity *v37; // rax
  const Vector *v38; // rax
  vec_t v39; // xmm1_4
  int m_Value; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v43; // eax
  __int16 v44; // cx
  float flDist; // [rsp+8h] [rbp-B8h]
  float flDuration; // [rsp+Ch] [rbp-B4h]
  float flDurationa; // [rsp+Ch] [rbp-B4h]
  Vector vecVelocity; // [rsp+10h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  this->m_vStartLoc = *CBaseEntity::GetAbsOrigin(Parent);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    v8 = 0x7FFF;
    if ( *(v6 + 16) != -1 )
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hEntity.m_Index) = v8 | this->m_hEntity.m_Index & 0x8000;
    this->m_hEntity.m_Index = (v7 << 15) | this->m_hEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hEntity.m_Index = -1;
  }
  v9 = CEntityHandle::operator CEntityInstance *(&this->m_hEntity);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = this->m_vStartLoc.y - AbsOrigin->y;
  v12 = this->m_vStartLoc.x - AbsOrigin->x;
  vecVelocity.z = 0.0;
  vecVelocity.y = v11;
  vecVelocity.x = v12;
  v13 = VectorNormalize(&vecVelocity);
  v14 = v13 / 600.0;
  if ( (v13 / 600.0) > 1.8 )
    goto LABEL_13;
  if ( v14 < 0.050000001 )
  {
    v14 = 0.050000001;
    goto LABEL_9;
  }
  if ( v14 > 1.8 )
  {
LABEL_13:
    v14 = 1.8;
  }
  else if ( v14 <= 0.25 )
  {
    goto LABEL_9;
  }
  info.bHasFrontalCone = 1;
  flDist = v13;
  flDurationa = v14;
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  y = vec3_origin.y;
  info.bCheckStartPosition = 0;
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
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
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
  info.pAbility = CDOTA_Buff::GetAbility(this);
  v37 = CEntityHandle::operator CEntityInstance *(&this->m_hEntity);
  v38 = CBaseEntity::GetAbsOrigin(v37);
  info.vSpawnOrigin.x = v38->x;
  info.vSpawnOrigin.y = v38->y;
  v39 = v38->z;
  info.fDistance = flDist;
  info.bProvidesVision = 1;
  info.vSpawnOrigin.z = v39;
  info.vVelocity.y = vecVelocity.y * (flDist / flDurationa);
  info.vVelocity.z = vecVelocity.z * (flDist / flDurationa);
  info.vVelocity.x = (flDist / flDurationa) * vecVelocity.x;
  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 400;
  info.iVisionTeamNumber = m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v43 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v44 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v44 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v44 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v43 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v14 = flDurationa;
LABEL_9:
  flDuration = v14;
  v15 = KeyValues::GetPtr(pKV, "target", 0);
  if ( v15 != 0 && v15->m_bIsDOTANPC )
    v16 = v15;
  else
    v16 = 0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_disruptor/disruptor_glimpse_travel.vpcf",
               2,
               0,
               0,
               0);
  v19 = CBaseEntity::GetAbsOrigin(v16);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 0, v16, 1, 0, *v19, 1);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, Particle, 1, *&this->m_vStartLoc.x, this->m_vStartLoc.z);
  *&info.pszEffectName = flDuration;
  *(&info.pszEffectName + 1) = flDuration;
  *&info.pAbility = flDuration;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, Particle, 2, *&info.pszEffectName, *&info.pAbility);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  v23 = GetParticleManager();
  v24 = CDOTA_ParticleManager::CreateParticle(
          v23,
          "particles/units/heroes/hero_disruptor/disruptor_glimpse_targetend.vpcf",
          2,
          0,
          0,
          0);
  v25 = CBaseEntity::GetAbsOrigin(v16);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, v24, 0, v16, 1, 0, *v25, 1);
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, v24, 1, *&this->m_vStartLoc.x, this->m_vStartLoc.z);
  *&info.pszEffectName = flDuration;
  *(&info.pszEffectName + 1) = flDuration;
  *&info.pAbility = flDuration;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, v24, 2, *&info.pszEffectName, *&info.pAbility);
  CDOTA_Buff::AddParticle(this, v24, 0, 0, -1, 0, 0);
  v29 = GetParticleManager();
  v30 = CDOTA_ParticleManager::CreateParticle(
          v29,
          "particles/units/heroes/hero_disruptor/disruptor_glimpse_targetstart.vpcf",
          2,
          0,
          0,
          0);
  v31 = CBaseEntity::GetAbsOrigin(v16);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v32, v30, 0, v16, 1, 0, *v31, 1);
  *&info.pszEffectName = flDuration;
  *(&info.pszEffectName + 1) = flDuration;
  *&info.pAbility = flDuration;
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v33, v30, 2, *&info.pszEffectName, *&info.pAbility);
  CDOTA_Buff::AddParticle(this, v30, 0, 0, -1, 0, 0);
  this->m_nDestinationSound = DOTA_EmitSoundLocation(&this->m_vStartLoc, "Hero_Disruptor.Glimpse.Destination", 0);
  CDOTA_Buff::StartIntervalThink(this, flDuration, v34);
}


// CDOTA_Modifier_Disruptor_Glimpse_Thinker::OnIntervalThink  (line 476, @0x0000000002c396e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, UTIL_Remove, FindClearSpaceForUnit, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::IsInRangeOfFountain, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound, CSoundOpGameSystem::StopSoundEvent, CBaseEntity::StopSound, CDOTAFogOfWarSystem::AddTempViewer
// strings: "Hero_Disruptor.Glimpse.End", "Hero_Disruptor.Glimpse.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Disruptor_Glimpse_Thinker::OnIntervalThink(
        CDOTA_Modifier_Disruptor_Glimpse_Thinker *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC_Hero *v7; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC_Hero *v9; // rdi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v13; // rdi

  m_Index = this->m_hEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_nUnitState64.m_Value & 0x200) == 0 )
        {
          FindClearSpaceForUnit(v4->m_pInstance, this->m_vStartLoc, 1);
          CDOTA_BaseNPC::Interrupt(m_pInstance);
          if ( CDOTA_BaseNPC::IsInRangeOfFountain(m_pInstance) )
          {
            v11 = 0;
            if ( m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 && !m_pInstance->m_bIsIllusion.m_Value )
              v11 = m_pInstance;
            Caster = CDOTA_Buff::GetCaster(this);
            if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
              v13 = Caster;
            else
              v13 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v13,
              v11,
              kill_eater_event_t::kKillEaterEventType_Disruptor_FountainGlimpses,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          v7 = 0;
          if ( m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 && !m_pInstance->m_bIsIllusion.m_Value )
            v7 = m_pInstance;
          v8 = CDOTA_Buff::GetCaster(this);
          if ( v8 != 0 && (v8->m_iUnitType & 1) != 0 )
            v9 = v8;
          else
            v9 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v9,
            v7,
            kill_eater_event_t::kKillEaterEventType_Disruptor_HeroesGlimpsed,
            1,
            INVALID_ITEM_DEF_INDEX);
          DOTA_EmitSound(10, "Hero_Disruptor.Glimpse.End", m_pInstance);
          CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nDestinationSound);
          CBaseEntity::StopSound(m_pInstance, "Hero_Disruptor.Glimpse.Target");
          v10 = CDOTA_Buff::GetCaster(this);
          CDOTAFogOfWarSystem::AddTempViewer(
            &g_DOTAFogOfWarSystem,
            FoWViewerType_t::FOWVIEWERTYPE_GLIMPSE,
            v10->m_iTeamNum.m_Value,
            &this->m_vStartLoc,
            400.0,
            3.3399999,
            0);
          this->m_hEntity.m_Index = -1;
        }
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Ability_Disruptor_KineticField::~CDOTA_Ability_Disruptor_KineticField  (line 512, @0x0000000002c98100, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Disruptor_KineticField::~CDOTA_Ability_Disruptor_KineticField(
        CDOTA_Ability_Disruptor_KineticField *const this)
{
  this->_vptr_IHandleEntity = &off_459E170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Disruptor_KineticField::~CDOTA_Ability_Disruptor_KineticField  (line 512, @0x0000000002c98120, libserver.so)  // inlines: ~CDOTA_Ability_Disruptor_KineticField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Disruptor_KineticField::~CDOTA_Ability_Disruptor_KineticField(
        CDOTA_Ability_Disruptor_KineticField *const this)
{
  this->_vptr_IHandleEntity = &off_459E170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Disruptor_KineticField::Schema_DynamicBinding  (line 514, @0x0000000002c87bb0, libserver.so)
// globals: CDOTA_Ability_Disruptor_KineticField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_KineticField::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_KineticField *const this)
{
  return CDOTA_Ability_Disruptor_KineticField::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 514, @0x0000000002c87bc0, libserver.so)
// globals: CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::DestructInstance  (line 514, @0x0000000002c87bd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Disruptor_KineticField>
void __fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::FreeInstance  (line 514, @0x0000000002c87bf0, libserver.so)
void __fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::CanAllocate  (line 514, @0x0000000002c87c10, libserver.so)
bool __fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 514, @0x0000000002c87c20, libserver.so)
// globals: CDOTA_Ability_Disruptor_KineticField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_KineticField::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::AllocateInstance  (line 514, @0x0000000002c8f6e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::ConstructInstance  (line 514, @0x0000000002c94840, libserver.so)  // inlines: CDOTA_Ability_Disruptor_KineticField, Construct<CDOTA_Ability_Disruptor_KineticField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_459E170;
  }
  return p;
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 514, @0x0000000002ca1cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 514, @0x0000000002ca1cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal  (line 514, @0x0000000002cb97e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "disruptor_kinetic_field", "CDOTA_Ability_Disruptor_KineticField"
// globals: `guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass, CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass, __dso_handle, CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo, CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass);
    CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass._vptr_CEntityClass = off_459E0F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass);
    __cxa_atexit(
      CDOTA_Ability_Disruptor_KineticField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Disruptor_KineticFieldClass != 0 )
    return &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass;
  if ( `guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo,
      "CDOTA_Ability_Disruptor_KineticField",
      "disruptor_kinetic_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo);
  }
  CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass.m_pClassInfo = &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo;
  CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass.m_pBaseClassInfo = CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Disruptor_KineticFieldClass = &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass;
  CDOTA_Ability_Disruptor_KineticField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClassInfo.m_pClass = &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass;
  CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Disruptor_KineticFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Disruptor_KineticField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_KineticFieldClass;
}


// CDOTA_Ability_Disruptor_KineticField::GetGestureBasedActivity  (line 531, @0x0000000002c87c30, libserver.so)
Activity __fastcall CDOTA_Ability_Disruptor_KineticField::GetGestureBasedActivity(
        CDOTA_Ability_Disruptor_KineticField *const this)
{
  return 1679;
}


// CDOTA_Ability_Disruptor_KineticField::YouForgotToImplementOrDeclareServerClass  (line 538, @0x0000000002c1bec0, libserver.so)
int __fastcall CDOTA_Ability_Disruptor_KineticField::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Disruptor_KineticField *const this)
{
  return 0;
}


// CDOTA_Ability_Disruptor_KineticField::GetServerClass  (line 538, @0x0000000002c35670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Disruptor_KineticField::GetServerClass(
        CDOTA_Ability_Disruptor_KineticField *const this)
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


// CDOTA_Ability_Disruptor_KineticField::OnSpellStart  (line 547, @0x0000000002c666a0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, Thinker_Create, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_disruptor_kinetic_field_thinker"
void __fastcall CDOTA_Ability_Disruptor_KineticField::OnSpellStart(CDOTA_Ability_Disruptor_KineticField *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float duration; // [rsp+1Ch] [rbp-54h]
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "formation_time", -1, 0);
  this->m_vFieldLocation = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::KeyValues(&kv, "modifier_disruptor_kinetic_field_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_disruptor_kinetic_field_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_KINETICFIELD,
    v5->m_iTeamNum.m_Value,
    &this->m_vFieldLocation,
    duration,
    5.5,
    1);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Disruptor_KineticField::GetSlowDuration  (line 572, @0x0000000002c55fd0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Disruptor_KineticField::GetSlowDuration(
        CDOTA_Ability_Disruptor_KineticField *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::~CDOTA_Modifier_Disruptor_KineticFieldThinker  (line 581, @0x0000000002c92f10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::~CDOTA_Modifier_Disruptor_KineticFieldThinker(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459EC30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::~CDOTA_Modifier_Disruptor_KineticFieldThinker  (line 581, @0x0000000002c92f30, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_KineticFieldThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::~CDOTA_Modifier_Disruptor_KineticFieldThinker(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459EC30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::IsHidden  (line 590, @0x0000000002c87c40, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::IsHidden(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::IsAura  (line 591, @0x0000000002c87c50, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::IsAura(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetModifierAura  (line 592, @0x0000000002c87c60, libserver.so)
// strings: "modifier_disruptor_kinetic_field"
const char *__fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetModifierAura(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return "modifier_disruptor_kinetic_field";
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraSearchTeam  (line 593, @0x0000000002c87c70, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraSearchTeam(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraSearchType  (line 594, @0x0000000002c87c80, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraSearchType(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return this->m_bActive ? 0x13 : 0;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraRadius  (line 595, @0x0000000002c87ca0, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAuraRadius(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return (this->radius * 1.2);
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetNumAvoidLocations  (line 598, @0x0000000002c87cc0, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetNumAvoidLocations(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAvoidLocation  (line 599, @0x0000000002c95690, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAvoidLocation(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this,
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


// CDOTA_Modifier_Disruptor_KineticFieldThinker::AvoidStrength  (line 600, @0x0000000002c9a8e0, libserver.so)
// calls: CDOTA_Bot::HasBlink
float __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::AvoidStrength(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this,
        CDOTA_Bot *pBot)
{
  float result; // xmm0_4
  bool HasBlink; // al

  result = 0.0;
  if ( !this->m_bActive )
  {
    HasBlink = CDOTA_Bot::HasBlink(pBot, 1);
    result = 0.0;
    if ( !HasBlink )
      return 0.89999998;
  }
  return result;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAvoidRadius  (line 601, @0x0000000002c87cd0, libserver.so)
float __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::GetAvoidRadius(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::OnCreated  (line 620, @0x0000000002c5c400, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, DOTA_EmitSound (13 total)
// strings: "particles/units/heroes/hero_disruptor/disruptor_kineticfield_formation.vpcf", "Hero_Disruptor.KineticField"
void __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::OnCreated(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  __m128i v6; // xmm0
  float v7; // r14d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r12
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // rax
  float formation_time; // xmm0_4
  float v19; // xmm1_4
  double vecFXData; // [rsp+10h] [rbp-50h]
  double vecPos; // [rsp+20h] [rbp-40h]
  float vecPos_8; // [rsp+28h] [rbp-38h]
  double v23; // [rsp+30h] [rbp-30h]
  SndOpEventGuid_t v24; // 0:rax.8

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
  {
    this->formation_time = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    goto LABEL_4;
  }
  this->formation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "formation_time", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  *v6.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
LABEL_4:
  *&vecFXData = (this->radius + 10);
  *(&vecFXData + 1) = *&vecFXData;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *(&vecPos + 1) = AbsOrigin->y + 0.0;
  vecPos_8 = AbsOrigin->z + 32.0;
  *&vecPos = AbsOrigin->x + 0.0;
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_disruptor/disruptor_kineticfield_formation.vpcf",
                         8,
                         0,
                         0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, vecPos, vecPos_8);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, BuffParticleEffect, 1, vecFXData, 0.0);
  *&v23 = this->formation_time;
  *(&v23 + 1) = v7 + *&v23;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, BuffParticleEffect, 2, v23, *&v23);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, BuffParticleEffect);
  v15 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_Disruptor.KineticField");
  v24 = DOTA_EmitSound(2, ReplacementSound, v15);
  formation_time = this->formation_time;
  this->m_nKineticFieldSound = v24;
  CDOTA_Buff::StartIntervalThink(this, formation_time, v19);
  this->m_bActive = 0;
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::OnIntervalThink  (line 645, @0x0000000002c5a130, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_disruptor/disruptor_kineticfield.vpcf"
void __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::OnIntervalThink(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  float duration; // [rsp+Ch] [rbp-44h]
  double vecFXData; // [rsp+10h] [rbp-40h]
  double vecPos; // [rsp+20h] [rbp-30h]
  float vecPos_8; // [rsp+28h] [rbp-28h]
  double v14; // [rsp+30h] [rbp-20h]

  if ( this->m_bActive )
  {
    this->m_bActive = 1;
  }
  else
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    else
      LevelSpecialValue = 0.0;
    duration = LevelSpecialValue;
    HIDWORD(vecFXData) = 1092616192;
    *&vecFXData = (this->radius + 10);
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    *(&vecPos + 1) = AbsOrigin->y + 0.0;
    vecPos_8 = AbsOrigin->z + 32.0;
    *&vecPos = AbsOrigin->x + 0.0;
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_disruptor/disruptor_kineticfield.vpcf",
                           8,
                           0,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, vecPos, vecPos_8);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v8, BuffParticleEffect, 1, vecFXData, 0.0);
    *&v14 = duration;
    *(&v14 + 1) = duration;
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v9, BuffParticleEffect, 2, v14, duration);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
    this->m_bActive = 1;
  }
}


// CDOTA_Modifier_Disruptor_KineticFieldThinker::OnDestroy  (line 666, @0x0000000002c39590, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CSoundOpGameSystem::StopSoundEvent, UTIL_Remove
// strings: "Hero_Disruptor.KineticField.End"
void __fastcall CDOTA_Modifier_Disruptor_KineticFieldThinker::OnDestroy(
        CDOTA_Modifier_Disruptor_KineticFieldThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Disruptor.KineticField.End", Parent);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nKineticFieldSound);
  v3 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v3);
}


// CDOTA_Modifier_Disruptor_KineticField::~CDOTA_Modifier_Disruptor_KineticField  (line 681, @0x0000000002c92ec0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_KineticField::~CDOTA_Modifier_Disruptor_KineticField(
        CDOTA_Modifier_Disruptor_KineticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_459EF50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_KineticField::~CDOTA_Modifier_Disruptor_KineticField  (line 681, @0x0000000002c92ee0, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_KineticField
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_KineticField::~CDOTA_Modifier_Disruptor_KineticField(
        CDOTA_Modifier_Disruptor_KineticField *const this)
{
  this->_vptr_CDOTA_Buff = &off_459EF50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_KineticField::IsDebuff  (line 686, @0x0000000002c87cf0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_KineticField::IsDebuff(CDOTA_Modifier_Disruptor_KineticField *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_KineticField::IsHidden  (line 687, @0x0000000002c87d00, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_KineticField::IsHidden(CDOTA_Modifier_Disruptor_KineticField *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_KineticField::GetStatusEffectName  (line 690, @0x0000000002c87d10, libserver.so)
// strings: "particles/status_fx/status_effect_disruptor_kinetic_fieldslow.vpcf"
const char *__fastcall CDOTA_Modifier_Disruptor_KineticField::GetStatusEffectName(
        CDOTA_Modifier_Disruptor_KineticField *const this)
{
  return "particles/status_fx/status_effect_disruptor_kinetic_fieldslow.vpcf";
}


// CDOTA_Modifier_Disruptor_KineticField::StatusEffectPriority  (line 691, @0x0000000002c87d20, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_KineticField::StatusEffectPriority(
        CDOTA_Modifier_Disruptor_KineticField *const this)
{
  return 14;
}


// CDOTA_Modifier_Disruptor_KineticField::OnCreated  (line 704, @0x0000000002c70770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Disruptor_KineticField::OnCreated(
        CDOTA_Modifier_Disruptor_KineticField *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Disruptor_KineticField::DeclareFunctions  (line 711, @0x0000000002c1bed0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Disruptor_KineticField::DeclareFunctions(
        CDOTA_Modifier_Disruptor_KineticField *const this)
{
  this->m_Functions[20].__pfn = (&stru_10 + 697);
  this->m_Functions[20].__delta = 0;
}


// CDOTA_Modifier_Disruptor_KineticField::GetModifierMoveSpeed_Limit  (line 718, @0x0000000002c22890, libserver.so)  // inlines: Dot, DotProduct, GetFieldLocation, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTALocomotor::GetCurrentTargetVelocity
ModifierVariant_t __fastcall CDOTA_Modifier_Disruptor_KineticField::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_Disruptor_KineticField *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm1_4
  vec_t v6; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  float radius; // xmm0_4
  float v10; // xmm1_4
  __int64 v12; // xmm0_8
  float v13; // [rsp+Ch] [rbp-34h]
  Vector vec; // [rsp+10h] [rbp-30h] BYREF
  Vector vDirection; // [rsp+20h] [rbp-20h] BYREF
  IHandleEntity flDist; // 0:^8.8
  ModifierVariant_t result; // 0:rax.16

  flDist._vptr_IHandleEntity = CDOTA_Buff::GetAbility(this)[1]._vptr_IHandleEntity;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v5 = *(&flDist._vptr_IHandleEntity + 1) - AbsOrigin->y;
  v6 = *&flDist._vptr_IHandleEntity - AbsOrigin->x;
  vec.z = 0.0;
  vec.y = v5;
  vec.x = v6;
  v13 = VectorNormalize(&vec);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  v12 = *&CDOTALocomotor::GetCurrentTargetVelocity(v8).x;
  vDirection.z = 0.0;
  *&vDirection.x = v12;
  VectorNormalize(&vDirection);
  radius = this->radius;
  v10 = ((vec.x * vDirection.x) + (vec.y * vDirection.y)) + (vec.z * vDirection.z);
  if ( v13 > (0.89999998 * radius) && radius > v13 )
  {
    if ( v10 <= 0.0 )
    {
      *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.1, ((radius - v13) - 5.0) * 4.0)) << 32) | 1;
      goto LABEL_5;
    }
LABEL_4:
    *&result.m_eType = 1;
LABEL_5:
    result.m_szVal = 0;
    return result;
  }
  if ( v13 <= radius || (1.1 * radius) <= v13 || v10 < 0.0 )
    goto LABEL_4;
  result.m_szVal = 0;
  *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.1, ((v13 - radius) - 5.0) * 4.0)) << 32) | 1;
  return result;
}


// CDOTA_Ability_Disruptor_StaticStorm::~CDOTA_Ability_Disruptor_StaticStorm  (line 758, @0x0000000002c98150, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::~CDOTA_Ability_Disruptor_StaticStorm(
        CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  this->_vptr_IHandleEntity = &off_459F2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Disruptor_StaticStorm::~CDOTA_Ability_Disruptor_StaticStorm  (line 758, @0x0000000002c98170, libserver.so)  // inlines: ~CDOTA_Ability_Disruptor_StaticStorm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::~CDOTA_Ability_Disruptor_StaticStorm(
        CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  this->_vptr_IHandleEntity = &off_459F2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Disruptor_StaticStorm::Schema_DynamicBinding  (line 760, @0x0000000002c87d30, libserver.so)
// globals: CDOTA_Ability_Disruptor_StaticStorm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_StaticStorm::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  return CDOTA_Ability_Disruptor_StaticStorm::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 760, @0x0000000002c87d40, libserver.so)
// globals: CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::DestructInstance  (line 760, @0x0000000002c87d50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Disruptor_StaticStorm>
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::FreeInstance  (line 760, @0x0000000002c87d70, libserver.so)
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::CanAllocate  (line 760, @0x0000000002c87d90, libserver.so)
bool __fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 760, @0x0000000002c87da0, libserver.so)
// globals: CDOTA_Ability_Disruptor_StaticStorm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Disruptor_StaticStorm::s_pSchemaBinding;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::AllocateInstance  (line 760, @0x0000000002c8f720, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::ConstructInstance  (line 760, @0x0000000002c94870, libserver.so)  // inlines: CDOTA_Ability_Disruptor_StaticStorm, Construct<CDOTA_Ability_Disruptor_StaticStorm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_459F2B0;
  }
  return p;
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 760, @0x0000000002ca1d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 760, @0x0000000002ca1d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal  (line 760, @0x0000000002cb9930, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "disruptor_static_storm", "CDOTA_Ability_Disruptor_StaticStorm"
// globals: `guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass, CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass, __dso_handle, CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo, CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo
CEntityClass *__cdecl CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass);
    CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass._vptr_CEntityClass = off_459F230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass);
    __cxa_atexit(
      CDOTA_Ability_Disruptor_StaticStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Disruptor_StaticStormClass != 0 )
    return &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass;
  if ( `guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo,
      "CDOTA_Ability_Disruptor_StaticStorm",
      "disruptor_static_storm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo);
  }
  CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass.m_pClassInfo = &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo;
  CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass.m_pBaseClassInfo = CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Disruptor_StaticStormClass = &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass;
  CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClassInfo.m_pClass = &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass;
  CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Disruptor_StaticStormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Disruptor_StaticStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Disruptor_StaticStormClass;
}


// CDOTA_Ability_Disruptor_StaticStorm::GetGestureBasedActivity  (line 777, @0x0000000002c87db0, libserver.so)
Activity __fastcall CDOTA_Ability_Disruptor_StaticStorm::GetGestureBasedActivity(
        CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  return 1680;
}


// CDOTA_Ability_Disruptor_StaticStorm::HasSilence  (line 781, @0x0000000002c87dc0, libserver.so)
bool __fastcall CDOTA_Ability_Disruptor_StaticStorm::HasSilence(CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  return 1;
}


// CDOTA_Ability_Disruptor_StaticStorm::YouForgotToImplementOrDeclareServerClass  (line 785, @0x0000000002c1bef0, libserver.so)
int __fastcall CDOTA_Ability_Disruptor_StaticStorm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  return 0;
}


// CDOTA_Ability_Disruptor_StaticStorm::GetServerClass  (line 785, @0x0000000002c35270, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Disruptor_StaticStorm::GetServerClass(
        CDOTA_Ability_Disruptor_StaticStorm *const this)
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


// CDOTA_Ability_Disruptor_StaticStorm::OnSpellStart  (line 794, @0x0000000002c66850, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, Vector, VectorAdd, operator+
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CDOTABaseAbility::GetCursorPosition, Thinker_Create, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (19 total)
// strings: "modifier_disruptor_static_storm_thinker", "particles/units/heroes/hero_disruptor/disruptor_static_storm.vpcf", "Hero_Disruptor.StaticStorm.Cast"
void __fastcall CDOTA_Ability_Disruptor_StaticStorm::OnSpellStart(CDOTA_Ability_Disruptor_StaticStorm *const this)
{
  __m128i v2; // xmm0
  int v3; // r14d
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  int m_Value; // r14d
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm3_4
  float duration_scepter; // [rsp+1Ch] [rbp-94h]
  double vecFXData; // [rsp+20h] [rbp-90h]
  double vecPos; // [rsp+30h] [rbp-80h]
  Vector vLocation; // [rsp+60h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v28; // 0:kr14_12.12

  v26 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = _mm_cvtsi128_si32(v2);
  duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_scepter", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_disruptor_static_storm_thinker");
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    duration_scepter = *&v3;
  KeyValues::SetFloat(&kv, "duration", v6);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v8, this, "modifier_disruptor_static_storm_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  HIDWORD(vecFXData) = 1092616192;
  *&vecFXData = LevelSpecialValue + 10.0;
  v28 = CDOTABaseAbility::GetCursorPosition(this);
  *(&vecPos + 1) = v28.y + 0.0;
  *&vecPos = v28.x + 0.0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_disruptor/disruptor_static_storm.vpcf",
               8,
               0,
               0,
               0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Particle, 0, vecPos, v28.z + 32.0);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Particle, 1, vecFXData, duration_scepter);
  vLocation.x = duration_scepter;
  vLocation.y = duration_scepter;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Particle, 2, *&vLocation.x, duration_scepter);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_STATICSTORM,
    v15->m_iTeamNum.m_Value,
    &vLocation,
    450.0,
    duration_scepter,
    0);
  v16 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Disruptor.StaticStorm.Cast", v16);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v19,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocation.x,
    vLocation.z,
    duration_scepter,
    v20);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Disruptor_StaticStorm::GetAbilityDamageToTargetOverInterval  (line 832, @0x0000000002c6b1f0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_max"
__int64 __fastcall CDOTA_Ability_Disruptor_StaticStorm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Disruptor_StaticStorm *const this,
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
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_max", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::~CDOTA_Modifier_Disruptor_StaticStormThinker  (line 847, @0x0000000002c92e70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::~CDOTA_Modifier_Disruptor_StaticStormThinker(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459FD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::~CDOTA_Modifier_Disruptor_StaticStormThinker  (line 847, @0x0000000002c92e90, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_StaticStormThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::~CDOTA_Modifier_Disruptor_StaticStormThinker(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_459FD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::IsAura  (line 855, @0x0000000002c87dd0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::IsAura(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetModifierAura  (line 856, @0x0000000002c87de0, libserver.so)
// strings: "modifier_disruptor_static_storm"
const char *__fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetModifierAura(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return "modifier_disruptor_static_storm";
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchTeam  (line 857, @0x0000000002c87df0, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchTeam(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchType  (line 858, @0x0000000002c87e00, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchType(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchFlags  (line 859, @0x0000000002c87e10, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraSearchFlags(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 64;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraRadius  (line 860, @0x0000000002c87e20, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraRadius(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraDuration  (line 861, @0x0000000002c87e30, libserver.so)
float __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAuraDuration(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  float result; // xmm0_4

  result = 0.0099999998;
  if ( this->m_nCurrentPulse < this->pulses - 1 )
    return 0.5;
  return result;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetNumAvoidLocations  (line 866, @0x0000000002c87e60, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetNumAvoidLocations(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAvoidLocation  (line 867, @0x0000000002c956c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAvoidLocation(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this,
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


// CDOTA_Modifier_Disruptor_StaticStormThinker::AvoidStrength  (line 868, @0x0000000002ca3ae0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::AvoidStrength(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 100.0) / 1400.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.69999999;
  if ( v6 <= 1.0 )
    return (v6 * -0.30000001) + 1.0;
  return result;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::GetAvoidRadius  (line 869, @0x0000000002c87e70, libserver.so)
float __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::GetAvoidRadius(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::IsAvoidMagical  (line 870, @0x0000000002c87e90, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::IsAvoidMagical(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::IsPersistentAvoidance  (line 871, @0x0000000002c87ea0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::IsPersistentAvoidance(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::OnCreated  (line 894, @0x0000000002c74bf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::StartIntervalThink
// strings: "Hero_Disruptor.StaticStorm", "pulses_scepter", "damage_max"
void __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::OnCreated(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(2, "Hero_Disruptor.StaticStorm", Parent);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->pulses = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "pulses", -1, 0);
  else
    this->pulses = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->pulses_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "pulses_scepter", -1, 0);
  else
    this->pulses_scepter = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->damage_max = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage_max", -1, 0);
  else
    this->damage_max = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "duration", -1, 0);
  else
    this->duration = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "duration_scepter", -1, 0);
  else
    this->duration_scepter = 0.0;
  if ( this->pulses > 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      CDOTA_Buff::StartIntervalThink(this, this->duration_scepter / this->pulses_scepter, this->pulses_scepter);
    else
      CDOTA_Buff::StartIntervalThink(this, this->duration / this->pulses, this->pulses);
  }
  this->m_nCurrentPulse = 0;
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::OnDestroy  (line 931, @0x0000000002c20490, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, DOTA_EmitSound, UTIL_Remove
// strings: "Hero_Disruptor.StaticStorm", "Hero_Disruptor.StaticStorm.End"
void __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::OnDestroy(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Disruptor.StaticStorm");
  v3 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Disruptor.StaticStorm.End", v3);
  v4 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v4);
}


// CDOTA_Modifier_Disruptor_StaticStormThinker::OnIntervalThink  (line 945, @0x0000000002c4f2e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetAbility, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "particles/units/heroes/hero_disruptor/disruptor_static_storm_bolt_hero.vpcf", "attach_hitloc", "particles/units/heroes/hero_disruptor/disruptor_static_storm_bolt.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Disruptor_StaticStormThinker::OnIntervalThink(
        CDOTA_Modifier_Disruptor_StaticStormThinker *const this)
{
  __m128i v1; // xmm3
  int m_nCurrentPulse; // eax
  float pulses; // xmm0_4
  float v5; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  float flDamage; // [rsp+28h] [rbp-58h]
  int nFXIndex; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  entities.m_Size = 0;
  m_nCurrentPulse = this->m_nCurrentPulse;
  entities.m_Memory.m_pMemory = 0;
  pulses = this->pulses;
  entities.m_Memory.m_nAllocationCount = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_nGrowSize = 0;
  this->m_nCurrentPulse = ++m_nCurrentPulse;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  flDamage = ((this->damage_max * m_nCurrentPulse) * 0.25) / pulses;
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v9 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, Caster, v5, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = &entities.m_Memory.m_pMemory[v10];
        m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v11;
        ++v10;
        if ( entities.m_Size <= v11 )
          goto LABEL_13;
      }
      v18 = CDOTA_Buff::GetParent(this);
      CBaseEntity::GetAbsOrigin(v18);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_disruptor/disruptor_static_storm_bolt_hero.vpcf",
                     2,
                     m_pInstance,
                     0,
                     0);
      }
      else
      {
        v26 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v26,
                     "particles/units/heroes/hero_disruptor/disruptor_static_storm_bolt.vpcf",
                     2,
                     m_pInstance,
                     0,
                     0);
      }
      nFXIndex = Particle;
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, nFXIndex, 0, m_pInstance, 7, 0, vec3_invalid, 1);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v22, nFXIndex, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v23, nFXIndex);
      Ability = CDOTA_Buff::GetAbility(this);
      v25 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v25, m_pInstance, Ability, flDamage, 2, 0);
      ++v11;
      ++v10;
    }
    while ( entities.m_Size > v11 );
  }
LABEL_13:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Disruptor_StaticStorm::~CDOTA_Modifier_Disruptor_StaticStorm  (line 989, @0x0000000002c92e20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Disruptor_StaticStorm::~CDOTA_Modifier_Disruptor_StaticStorm(
        CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A0090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Disruptor_StaticStorm::~CDOTA_Modifier_Disruptor_StaticStorm  (line 989, @0x0000000002c92e40, libserver.so)  // inlines: ~CDOTA_Modifier_Disruptor_StaticStorm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Disruptor_StaticStorm::~CDOTA_Modifier_Disruptor_StaticStorm(
        CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A0090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Disruptor_StaticStorm::IsDebuff  (line 995, @0x0000000002c87eb0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStorm::IsDebuff(CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStorm::IsPurgable  (line 997, @0x0000000002c87ec0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStorm::IsPurgable(CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  return 0;
}


// CDOTA_Modifier_Disruptor_StaticStorm::GetEffectName  (line 999, @0x0000000002c956f0, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf", "particles/generic_gameplay/generic_silenced.vpcf"
const char *__fastcall CDOTA_Modifier_Disruptor_StaticStorm::GetEffectName(
        CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf";
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/generic_gameplay/generic_silenced.vpcf";
  return v2;
}


// CDOTA_Modifier_Disruptor_StaticStorm::GetEffectAttachType  (line 1000, @0x0000000002c87ed0, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStorm::GetEffectAttachType(
        CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  return 7;
}


// CDOTA_Modifier_Disruptor_StaticStorm::ShouldUseOverheadOffset  (line 1001, @0x0000000002c87ee0, libserver.so)
bool __fastcall CDOTA_Modifier_Disruptor_StaticStorm::ShouldUseOverheadOffset(
        CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  return 1;
}


// CDOTA_Modifier_Disruptor_StaticStorm::GetAttributes  (line 1005, @0x0000000002c87ef0, libserver.so)
int __fastcall CDOTA_Modifier_Disruptor_StaticStorm::GetAttributes(CDOTA_Modifier_Disruptor_StaticStorm *const this)
{
  return 4;
}


// CDOTA_Modifier_Disruptor_StaticStorm::OnCreated  (line 1020, @0x0000000002c1f9b0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_Disruptor_StaticStorm::OnCreated(
        CDOTA_Modifier_Disruptor_StaticStorm *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  this->m_bHasScepter = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      this->m_bHasScepter = 1;
  }
}


// CDOTA_Modifier_Disruptor_StaticStorm::CheckState  (line 1031, @0x0000000002c1bf00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Disruptor_StaticStorm::CheckState(
        CDOTA_Modifier_Disruptor_StaticStorm *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rdx
  uint64 m_nDisabledStateMask; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  buffState->m_nEnabledStateMask |= 8uLL;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF7LL;
  if ( this->m_bHasScepter )
  {
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x18;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFE7LL;
  }
}


// CDOTA_Unit_Hero_Disruptor::Spawn  (line 1044, @0x0000000002c22340, libserver.so)  // inlines: SetAttributes
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::GetAbilityByIndex, __dynamic_cast, CDOTA_BaseNPC::GetAbilityCount, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// strings: "RefreshIntrinsicModifier", "modifier_disruptor_glimpse"
// globals: `typeinfo for'CDOTA_Ability_Disruptor_Glimpse
void __fastcall CDOTA_Unit_Hero_Disruptor::Spawn(
        CDOTA_Unit_Hero_Disruptor *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *v2; // r14
  int v4; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v6; // r12
  CDOTA_Buff *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v2 = 0;
  v4 = 0;
  v9 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  while ( v4 < CDOTA_BaseNPC::GetAbilityCount(this) )
  {
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, v4);
    v6 = AbilityByIndex;
    if ( AbilityByIndex != 0
      && __dynamic_cast(
           AbilityByIndex,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_Disruptor_Glimpse,
           0) != 0 )
    {
      v2 = v6;
    }
    ++v4;
  }
  if ( v2 != 0 )
  {
    KeyValues::KeyValues(&kv, "RefreshIntrinsicModifier");
    v7 = CDOTA_BaseNPC::AddNewModifier(this, this, v2, "modifier_disruptor_glimpse", &kv, 0);
    if ( v7 != 0 )
      v7->m_iAttributes |= (*(v7->_vptr_CDOTA_Buff + 7))(v7) | 1;
    KeyValues::~KeyValues(&kv);
  }
}


