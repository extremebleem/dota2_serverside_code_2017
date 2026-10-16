// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:42
class CDOTA_Unit_Hero_Rattletrap : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Rattletrap(CDOTA_Unit_Hero_Rattletrap &);
	CDOTA_Unit_Hero_Rattletrap(CDOTA_Unit_Hero_Rattletrap &);
	CDOTA_Unit_Hero_Rattletrap();
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
	virtual Activity TranslateActivity(Activity);
	virtual ~CDOTA_Unit_Hero_Rattletrap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[441] TranslateActivity
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:54
class C_CDOTA_Unit_Hero_Rattletrap_MapInstall {
	C_CDOTA_Unit_Hero_Rattletrap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:109
class CDOTA_NPC_Rattletrap_Cog : public CDOTA_BaseNPC_Additive {
public:

private:

	static datamap_t m_DataMap;
	typedef CDOTA_BaseNPC_Additive BaseClass;

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
	CDOTA_NPC_Rattletrap_Cog(CDOTA_NPC_Rattletrap_Cog &);
	CDOTA_NPC_Rattletrap_Cog(CDOTA_NPC_Rattletrap_Cog &);
	CDOTA_NPC_Rattletrap_Cog();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnDying();
	void IdleAnim();
	virtual ~CDOTA_NPC_Rattletrap_Cog();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[469] OnDying
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:155
class CDOTA_Ability_Rattletrap_BatteryAssault : public CDOTABaseAbility {
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
	CDOTA_Ability_Rattletrap_BatteryAssault(CDOTA_Ability_Rattletrap_BatteryAssault &);
	CDOTA_Ability_Rattletrap_BatteryAssault(CDOTA_Ability_Rattletrap_BatteryAssault &);
	CDOTA_Ability_Rattletrap_BatteryAssault();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Rattletrap_BatteryAssault();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:169
class C_CDOTA_Ability_Rattletrap_BatteryAssault_MapInstall {
	C_CDOTA_Ability_Rattletrap_BatteryAssault_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:229
class CDOTA_Modifier_Rattletrap_BatteryAssault : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rattletrap_BatteryAssault();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Rattletrap_BatteryAssault();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:343
class CDOTA_Ability_Rattletrap_PowerCogs : public CDOTABaseAbility {
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
	CDOTA_Ability_Rattletrap_PowerCogs(CDOTA_Ability_Rattletrap_PowerCogs &);
	CDOTA_Ability_Rattletrap_PowerCogs(CDOTA_Ability_Rattletrap_PowerCogs &);
	CDOTA_Ability_Rattletrap_PowerCogs();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Rattletrap_PowerCogs();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:362
class C_CDOTA_Ability_Rattletrap_PowerCogs_MapInstall {
	C_CDOTA_Ability_Rattletrap_PowerCogs_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:486
class CDOTA_Modifier_Rattletrap_Cog_Thinker : public CDOTA_Buff {
public:

private:

	int cogs_radius;  // +0xba8
	int extra_pull_buffer;  // +0xbac
	CDOTA_Modifier_Rattletrap_Cog_Thinker();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void OnCreated(KeyValues *);
	virtual void OnRemoved();
	virtual ~CDOTA_Modifier_Rattletrap_Cog_Thinker();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[57] OnCreated
	// vtable[59] OnRemoved
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:530
class CDOTA_Modifier_Rattletrap_Cog_Marker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rattletrap_Cog_Marker(CDOTA_Modifier_Rattletrap_Cog_Marker &);
	CDOTA_Modifier_Rattletrap_Cog_Marker(const CDOTA_Modifier_Rattletrap_Cog_Marker &);
	CDOTA_Modifier_Rattletrap_Cog_Marker();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Rattletrap_Cog_Marker();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:546
class CDOTA_Modifier_Rattletrap_Cog : public CDOTA_Buff {
public:

private:

	bool m_bEnabled;  // +0xba8

	int trigger_distance;  // +0xbac
	int push_length;  // +0xbb0
	float push_duration;  // +0xbb4
	int cogs_radius;  // +0xbb8
	int attacks_to_destroy;  // +0xbbc
	int m_iAttackCount;  // +0xbc0
	int m_iCogIndex;  // +0xbc4
	int m_nFXIndex;  // +0xbc8
	CDOTA_Modifier_Rattletrap_Cog();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Rattletrap_Cog();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// vtable[90] GetModifierIncomingDamage_Percentage
	// vtable[5] CheckState
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:787
class CDOTA_Modifier_Rattletrap_CogPush : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flStartTime;  // +0xbb4
	float m_flEndTime;  // +0xbc4
	float m_flCurTime;  // +0xbc8
	int push_length;  // +0xbcc
	float push_duration;  // +0xbd0
	CDOTA_Modifier_Rattletrap_CogPush();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationWeight(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Rattletrap_CogPush();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:949
class CDOTA_Ability_Rattletrap_RocketFlare : public CDOTABaseAbility {
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
	CDOTA_Ability_Rattletrap_RocketFlare(CDOTA_Ability_Rattletrap_RocketFlare &);
	CDOTA_Ability_Rattletrap_RocketFlare(CDOTA_Ability_Rattletrap_RocketFlare &);
	CDOTA_Ability_Rattletrap_RocketFlare();
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
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Rattletrap_RocketFlare();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:967
class C_CDOTA_Ability_Rattletrap_RocketFlare_MapInstall {
	C_CDOTA_Ability_Rattletrap_RocketFlare_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:1178
class CDOTA_Modifier_Rattletrap_RocketFlare : public CDOTA_Buff {
public:

	CDOTA_Modifier_Rattletrap_RocketFlare();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Rattletrap_RocketFlare();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:1242
class CDOTA_Ability_Rattletrap_Hookshot : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
	bool m_bRetract;  // +0x3a0

	EHANDLE m_hSourceCaster;  // +0x3ac
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
	CDOTA_Ability_Rattletrap_Hookshot(CDOTA_Ability_Rattletrap_Hookshot &);
	CDOTA_Ability_Rattletrap_Hookshot(CDOTA_Ability_Rattletrap_Hookshot &);
	CDOTA_Ability_Rattletrap_Hookshot();
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
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual float GetCooldown(int);
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual ~CDOTA_Ability_Rattletrap_Hookshot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[242] GetCooldown
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[307] OnStolen
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:1274
class C_CDOTA_Ability_Rattletrap_Hookshot_MapInstall {
	C_CDOTA_Ability_Rattletrap_Hookshot_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_rattletrap.cpp:1496
class CDOTA_Modifier_Rattletrap_Hookshot : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0xbd0
	int speed;  // +0xbe8
	int stun_radius;  // +0xbec
	int damage;  // +0xbf0
	float duration;  // +0xbf4
	CDOTA_Modifier_Rattletrap_Hookshot();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Rattletrap_Hookshot();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3064
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Rattletrap::~CDOTA_Unit_Hero_Rattletrap  (line 42, @0x0000000002c070f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Rattletrap::~CDOTA_Unit_Hero_Rattletrap(CDOTA_Unit_Hero_Rattletrap *const this)
{
  this->_vptr_IHandleEntity = &off_454CFD0;
  this->_vptr_INextBotEventResponder = &off_454DFB0;
  this->_vptr_CObstructionObject = &off_454E2E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Rattletrap::~CDOTA_Unit_Hero_Rattletrap  (line 42, @0x0000000002c07130, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Rattletrap
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Rattletrap::~CDOTA_Unit_Hero_Rattletrap(CDOTA_Unit_Hero_Rattletrap *const this)
{
  this->_vptr_IHandleEntity = &off_454CFD0;
  this->_vptr_INextBotEventResponder = &off_454DFB0;
  this->_vptr_CObstructionObject = &off_454E2E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Rattletrap::Schema_DynamicBinding  (line 44, @0x0000000002bfefd0, libserver.so)
// globals: CDOTA_Unit_Hero_Rattletrap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Rattletrap::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Rattletrap *const this)
{
  return CDOTA_Unit_Hero_Rattletrap::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002bff000, libserver.so)
// globals: CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002bff010, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Rattletrap>
void __fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002bff030, libserver.so)
void __fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002bff050, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002bff060, libserver.so)
// globals: CDOTA_Unit_Hero_Rattletrap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Rattletrap::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002c024b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002c045a0, libserver.so)  // inlines: CDOTA_Unit_Hero_Rattletrap, Construct<CDOTA_Unit_Hero_Rattletrap>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_454CFD0;
    *(p + 236) = &off_454DFB0;
    *(p + 257) = &off_454E2E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002c0b500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002c0b760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal  (line 44, @0x0000000002c14410, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_rattletrap", "CDOTA_Unit_Hero_Rattletrap"
// globals: `guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass, CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass, __dso_handle, CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo, CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass);
    CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass._vptr_CEntityClass = off_454CF50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Rattletrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_RattletrapClass != 0 )
    return &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo,
      "CDOTA_Unit_Hero_Rattletrap",
      "npc_dota_hero_rattletrap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo);
  }
  CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass.m_pClassInfo = &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo;
  CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_RattletrapClass = &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass;
  CDOTA_Unit_Hero_Rattletrap::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RattletrapClassInfo.m_pClass = &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass;
  CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_RattletrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Rattletrap::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RattletrapClass;
}


// CDOTA_Unit_Hero_Rattletrap::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002bd3520, libserver.so)
int __fastcall CDOTA_Unit_Hero_Rattletrap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Rattletrap *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Rattletrap::GetServerClass  (line 54, @0x0000000002bdcab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Rattletrap::GetServerClass(CDOTA_Unit_Hero_Rattletrap *const this)
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


// CDOTA_Unit_Hero_Rattletrap::Spawn  (line 63, @0x0000000002bd5880, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Rattletrap::Spawn(
        CDOTA_Unit_Hero_Rattletrap *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 14);
}


// CDOTA_Unit_Hero_Rattletrap::OnAlive  (line 73, @0x0000000002bd58b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Rattletrap::OnAlive(CDOTA_Unit_Hero_Rattletrap *const this)
{
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 14);
}


// CDOTA_Unit_Hero_Rattletrap::TranslateActivity  (line 91, @0x0000000002bd58e0, libserver.so)  // inlines: GetMapDataForSpawnGroup, GetSpawnGroupHandle
// calls: CBaseEntity::GetAbsOrigin, CWorldGameSystem::GetWorldInfoForSpawnGroup
Activity __fastcall CDOTA_Unit_Hero_Rattletrap::TranslateActivity(CDOTA_Unit_Hero_Rattletrap *const this, Activity act)
{
  Activity result; // eax
  unsigned __int8 (__fastcall *v4)(IDotaMapUtils *, __int64, const Vector *); // r13
  const Vector *AbsOrigin; // r14
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  const WorldInfo_t *WorldInfoForSpawnGroup; // rax
  __int64 m_mapDataHandle; // rsi

  result = act;
  if ( act == 1506 )
  {
    v4 = *(*g_pDotaMapUtils + 128LL);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    WorldInfoForSpawnGroup = CWorldGameSystem::GetWorldInfoForSpawnGroup(g_pWorldGameSystem, m_hSpawnGroup);
    m_mapDataHandle = -1;
    if ( WorldInfoForSpawnGroup != 0 )
      m_mapDataHandle = WorldInfoForSpawnGroup->m_mapDataHandle;
    return v4(g_pDotaMapUtils, m_mapDataHandle, AbsOrigin) == 0 ? 1506 : 1548;
  }
  return result;
}


// CDOTA_NPC_Rattletrap_Cog::~CDOTA_NPC_Rattletrap_Cog  (line 109, @0x0000000002c02d40, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Rattletrap_Cog::~CDOTA_NPC_Rattletrap_Cog(CDOTA_NPC_Rattletrap_Cog *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_Rattletrap_Cog::~CDOTA_NPC_Rattletrap_Cog  (line 109, @0x0000000002c02d90, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Rattletrap_Cog
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_Rattletrap_Cog::~CDOTA_NPC_Rattletrap_Cog(CDOTA_NPC_Rattletrap_Cog *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_Rattletrap_Cog::GetEntityClass  (line 111, @0x0000000002bff070, libserver.so)
CEntityClass *__cdecl CDOTA_NPC_Rattletrap_Cog::GetEntityClass()
{
  return g_pEntityCDOTA_NPC_Rattletrap_CogClass;
}


// CDOTA_NPC_Rattletrap_Cog::Schema_DynamicBinding  (line 111, @0x0000000002bff080, libserver.so)
// globals: CDOTA_NPC_Rattletrap_Cog::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Rattletrap_Cog::Schema_DynamicBinding(
        const CDOTA_NPC_Rattletrap_Cog *const this)
{
  return CDOTA_NPC_Rattletrap_Cog::s_pSchemaBinding;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 111, @0x0000000002bff0b0, libserver.so)
// globals: CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::DestructInstance  (line 111, @0x0000000002bff0c0, libserver.so)  // inlines: Destruct<CDOTA_NPC_Rattletrap_Cog>
void __fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::FreeInstance  (line 111, @0x0000000002bff0e0, libserver.so)
void __fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::CanAllocate  (line 111, @0x0000000002bff100, libserver.so)
bool __fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 111, @0x0000000002bff110, libserver.so)
// globals: CDOTA_NPC_Rattletrap_Cog::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Rattletrap_Cog::s_pSchemaBinding;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::AllocateInstance  (line 111, @0x0000000002c024f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::ConstructInstance  (line 111, @0x0000000002c02cf0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_Rattletrap_Cog, Construct<CDOTA_NPC_Rattletrap_Cog>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_454E3B0;
    *(p + 236) = &off_454F310;
    *(p + 257) = &off_454F640;
  }
  return p;
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002c0b400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002c0b580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal  (line 111, @0x0000000002c14560, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_rattletrap_cog", "CDOTA_NPC_Rattletrap_Cog"
// globals: `guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass, CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass, __dso_handle, CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo, CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo
CEntityClass *__cdecl CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass);
    CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass._vptr_CEntityClass = off_454E330;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass);
    __cxa_atexit(
      CDOTA_NPC_Rattletrap_Cog::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_Rattletrap_CogClass != 0 )
    return &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass;
  if ( `guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo,
      "CDOTA_NPC_Rattletrap_Cog",
      "npc_dota_rattletrap_cog",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo);
  }
  CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass.m_pClassInfo = &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo;
  CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass.m_pBaseClassInfo = CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_Rattletrap_CogClass = &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass;
  CDOTA_NPC_Rattletrap_Cog::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Rattletrap_CogClassInfo.m_pClass = &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass;
  CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_Rattletrap_CogClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_Rattletrap_Cog::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Rattletrap_CogClass;
}


// CDOTA_NPC_Rattletrap_Cog::GetDataDescMap  (line 122, @0x0000000002bd3530, libserver.so)
// globals: CDOTA_NPC_Rattletrap_Cog::m_DataMap
datamap_t *__fastcall CDOTA_NPC_Rattletrap_Cog::GetDataDescMap(CDOTA_NPC_Rattletrap_Cog *const this)
{
  return &CDOTA_NPC_Rattletrap_Cog::m_DataMap;
}


// CDOTA_NPC_Rattletrap_Cog::AddDatadescMetadataKeys  (line 122, @0x0000000002bdfea0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_NPC_Rattletrap_Cog::GetEntityClass(void)
void __fastcall CDOTA_NPC_Rattletrap_Cog::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_NPC_Rattletrap_Cog::GetEntityClass);
}


// CDOTA_NPC_Rattletrap_Cog::GetBaseMap  (line 122, @0x0000000002bdfec0, libserver.so)
datamap_t *__cdecl CDOTA_NPC_Rattletrap_Cog::GetBaseMap()
{
  return &CDOTA_BaseNPC::m_DataMap;
}


// DataMapInit<CDOTA_NPC_Rattletrap_Cog>  (line 122, @0x0000000002bdfed0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_NPC_Rattletrap_Cog"
// globals: `guard variable for'DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder, CDOTA_NPC_Rattletrap_Cog::GetEntityClass(void), CDOTA_NPC_Rattletrap_Cog::m_DataMap, DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::dataDesc, DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_pszBase = "CDOTA_NPC_Rattletrap_Cog";
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder.m_nLenBase = 24;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_NPC_Rattletrap_Cog::m_DataMap.dataNumFields = 1;
  CDOTA_NPC_Rattletrap_Cog::m_DataMap.baseMap = &CDOTA_BaseNPC::m_DataMap;
  CDOTA_NPC_Rattletrap_Cog::m_DataMap.dataDesc = DataMapInit<CDOTA_NPC_Rattletrap_Cog>(CDOTA_NPC_Rattletrap_Cog *)::dataDesc;
  AddDatadescMetadataKeys(&CDOTA_NPC_Rattletrap_Cog::m_DataMap, CDOTA_NPC_Rattletrap_Cog::GetEntityClass);
  return &CDOTA_NPC_Rattletrap_Cog::m_DataMap;
}


// CDOTA_NPC_Rattletrap_Cog::Spawn  (line 127, @0x0000000002bd9820, libserver.so)  // inlines: curtime
// calls: CDOTA_BaseNPC::Spawn, CDOTABody::StartAnimation, CBaseAnimating::SequenceDuration, CBaseEntity::ThinkSet
// globals: CDOTA_NPC_Rattletrap_Cog::IdleAnim(void)
void __fastcall CDOTA_NPC_Rattletrap_Cog::Spawn(
        CDOTA_NPC_Rattletrap_Cog *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABody *v3; // rax
  HSequence v4; // eax
  float v5; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float flSequenceDuration; // [rsp+Ch] [rbp-14h]

  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  v3 = (*(this->_vptr_IHandleEntity + 377))(this);
  v4.m_Data = CDOTABody::StartAnimation(v3, 0x5FEu, 0, 1.0).m_Data;
  v5 = CBaseAnimating::SequenceDuration(this, v4);
  m_flCurrentTime = 0.0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        flSequenceDuration = v5;
        (m_pfnWarningFunc)(1, v5, 0.0);
        v5 = flSequenceDuration;
      }
    }
    m_flCurrentTime = v7->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, CDOTA_NPC_Rattletrap_Cog::IdleAnim, v5 + m_flCurrentTime, 1027616247, 0);
}


// CDOTA_NPC_Rattletrap_Cog::IdleAnim  (line 136, @0x0000000002bd5970, libserver.so)
// calls: CDOTABody::StartAnimation
void __fastcall CDOTA_NPC_Rattletrap_Cog::IdleAnim(CDOTA_NPC_Rattletrap_Cog *const this)
{
  CDOTABody *v1; // rax

  v1 = (*(this->_vptr_IHandleEntity + 377))(this);
  CDOTABody::StartAnimation(v1, 0x5DCu, 0, 1.0);
}


// CDOTA_NPC_Rattletrap_Cog::OnDying  (line 141, @0x0000000002bd5850, libserver.so)
// calls: CBaseEntity::AddEffects, UTIL_Remove
void __fastcall CDOTA_NPC_Rattletrap_Cog::OnDying(CDOTA_NPC_Rattletrap_Cog *const this)
{
  CBaseEntity::AddEffects(this, 32);
  UTIL_Remove(this);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::~CDOTA_Ability_Rattletrap_BatteryAssault  (line 155, @0x0000000002c05620, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::~CDOTA_Ability_Rattletrap_BatteryAssault(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  this->_vptr_IHandleEntity = &off_454F710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::~CDOTA_Ability_Rattletrap_BatteryAssault  (line 155, @0x0000000002c05640, libserver.so)  // inlines: ~CDOTA_Ability_Rattletrap_BatteryAssault
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::~CDOTA_Ability_Rattletrap_BatteryAssault(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  this->_vptr_IHandleEntity = &off_454F710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::Schema_DynamicBinding  (line 157, @0x0000000002bff120, libserver.so)
// globals: CDOTA_Ability_Rattletrap_BatteryAssault::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  return CDOTA_Ability_Rattletrap_BatteryAssault::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 157, @0x0000000002bff130, libserver.so)
// globals: CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::DestructInstance  (line 157, @0x0000000002bff140, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rattletrap_BatteryAssault>
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::FreeInstance  (line 157, @0x0000000002bff160, libserver.so)
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::CanAllocate  (line 157, @0x0000000002bff180, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 157, @0x0000000002bff190, libserver.so)
// globals: CDOTA_Ability_Rattletrap_BatteryAssault::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_BatteryAssault::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::AllocateInstance  (line 157, @0x0000000002c02530, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::ConstructInstance  (line 157, @0x0000000002c04b50, libserver.so)  // inlines: CDOTA_Ability_Rattletrap_BatteryAssault, Construct<CDOTA_Ability_Rattletrap_BatteryAssault>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_454F710;
  }
  return p;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 157, @0x0000000002c0abe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 157, @0x0000000002c0ac00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal  (line 157, @0x0000000002c146b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "rattletrap_battery_assault", "CDOTA_Ability_Rattletrap_BatteryAssault"
// globals: `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass, CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass, __dso_handle, CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo, CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass);
    CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass._vptr_CEntityClass = off_454F690;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass);
    __cxa_atexit(
      CDOTA_Ability_Rattletrap_BatteryAssault::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rattletrap_BatteryAssaultClass != 0 )
    return &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass;
  if ( `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo,
      "CDOTA_Ability_Rattletrap_BatteryAssault",
      "rattletrap_battery_assault",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo);
  }
  CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass.m_pClassInfo = &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo;
  CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass.m_pBaseClassInfo = CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rattletrap_BatteryAssaultClass = &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass;
  CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClassInfo.m_pClass = &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass;
  CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rattletrap_BatteryAssaultClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rattletrap_BatteryAssault::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_BatteryAssaultClass;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::GetAOERadius  (line 163, @0x0000000002c1a3d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::GetAOERadius(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::YouForgotToImplementOrDeclareServerClass  (line 169, @0x0000000002bd3540, libserver.so)
int __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  return 0;
}


// CDOTA_Ability_Rattletrap_BatteryAssault::GetServerClass  (line 169, @0x0000000002bdc470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rattletrap_BatteryAssault::GetServerClass(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
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


// CDOTA_Ability_Rattletrap_BatteryAssault::OnSpellStart  (line 178, @0x0000000002bed6f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "special_bonus_unique_clockwerk", "modifier_rattletrap_battery_assault"
void __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::OnSpellStart(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_clockwerk", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  KeyValues::KeyValues(&kv, "modifier_rattletrap_battery_assault");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_rattletrap_battery_assault", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval  (line 199, @0x0000000002bf0ce0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Max<int>, Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// globals: `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Rattletrap_BatteryAssault *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // xmm0_4
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int v10; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  int v13; // eax
  float m_Size; // xmm1_4
  float v15; // [rsp-10h] [rbp-34h]
  float v17; // [rsp-8h] [rbp-2Ch]
  float v18; // [rsp-8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    v8 = LODWORD(fInterval);
    v8.m128_f32[0] = fInterval / LevelSpecialValue;
    v9 = _mm_cmplt_ss(0x3F800000u, v8);
    LODWORD(v15) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, v8).m128_f32[0]) | v9.m128_i32[0] & 0x3F800000;
    v17 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    v18 = v17 / CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "interval", -1, 0);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    if ( CDOTABaseAbility::GetCaster(this)->m_pBot != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyCreeps(
        Caster->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        v10);
      v12 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyHeroes(
        v12->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        v10);
    }
    v13 = (*(this->_vptr_IHandleEntity + 247))(this);
    m_Size = 1.0;
    if ( CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size > 0 )
      m_Size = CDOTA_Ability_Rattletrap_BatteryAssault::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * ((v13 * (v18 * v15)) / m_Size));
  }
  return result;
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::~CDOTA_Modifier_Rattletrap_BatteryAssault  (line 229, @0x0000000002c03830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::~CDOTA_Modifier_Rattletrap_BatteryAssault(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this)
{
  this->_vptr_CDOTA_Buff = &off_45501D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::~CDOTA_Modifier_Rattletrap_BatteryAssault  (line 229, @0x0000000002c03850, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_BatteryAssault
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::~CDOTA_Modifier_Rattletrap_BatteryAssault(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this)
{
  this->_vptr_CDOTA_Buff = &off_45501D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::IsPurgable  (line 242, @0x0000000002bff1a0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::IsPurgable(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this)
{
  return 0;
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::OnCreated  (line 251, @0x0000000002bf30e0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::OnCreated(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "interval", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1549, 0.2, 0.2, 9, 0, 1.0);
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::OnDestroy  (line 267, @0x0000000002bd59a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::OnDestroy(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1549);
}


// CDOTA_Modifier_Rattletrap_BatteryAssault::OnIntervalThink  (line 280, @0x0000000002be7320, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetTeamNumber, Purge, RandomVector, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator+=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, RandomInt, CEntityHandle::operator CEntityInstance* (27 total)
// strings: "particles/units/heroes/hero_rattletrap/rattletrap_battery_assault.vpcf", "Hero_Rattletrap.Battery_Assault_Launch", "modifier_stunned", "particles/units/heroes/hero_rattletrap/rattletrap_battery_shrapnel.vpcf", "attach_hitloc", "Hero_Rattletrap.Battery_Assault_Impact"
void __fastcall CDOTA_Modifier_Rattletrap_BatteryAssault::OnIntervalThink(
        CDOTA_Modifier_Rattletrap_BatteryAssault *const this)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v3; // xmm2
  float v4; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v13; // eax
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTABaseAbility *v16; // rax
  __m128i v17; // xmm3
  float v18; // r15d
  CDOTABaseAbility *v19; // r14
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // r15
  CDOTA_ParticleManager *v23; // rax
  const Vector *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTABaseAbility *v27; // r15
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  unsigned int v34; // r15d
  unsigned int v35; // r14d
  vec_t v36; // xmm2_4
  __m128i v37; // xmm6
  __m128i v38; // xmm7
  unsigned int v39; // r15d
  unsigned int v40; // r14d
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  __m128i v43; // xmm4
  __m128i v44; // xmm5
  __m128i v45; // xmm6
  int v46; // r15d
  int v47; // r14d
  float v48; // ebx
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  int iIndex; // [rsp+1Ch] [rbp-C4h]
  int radius; // [rsp+2Ch] [rbp-B4h] BYREF
  QAngle angles; // [rsp+30h] [rbp-B0h] BYREF
  Vector vecFwd; // [rsp+40h] [rbp-A0h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-90h]
  float v56; // [rsp+58h] [rbp-88h]
  Vector v57; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+A8h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  *v3.m128i_i32 = radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &entities, 2, 19, 256, 0, 0);
  v9 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_rattletrap/rattletrap_battery_assault.vpcf",
                  1,
                  v9,
                  0,
                  0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, v9);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Rattletrap.Battery_Assault_Launch", 0.0, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    v29 = CDOTA_Buff::GetCaster(this);
    v30 = GetParticleManager();
    LODWORD(v29) = CDOTA_ParticleManager::CreateParticle(
                     v30,
                     "particles/units/heroes/hero_rattletrap/rattletrap_battery_shrapnel.vpcf",
                     1,
                     v29,
                     0,
                     0);
    v31 = CDOTA_Buff::GetCaster(this);
    angles = *CBaseEntity::GetAbsAngles(v31);
    AngleVectors(&angles, &vecFwd, 0, 0);
    x_low = LODWORD(vecFwd.x);
    y_low = LODWORD(vecFwd.y);
    *x_low.m128i_i32 = vecFwd.x * -100.0;
    *y_low.m128i_i32 = vecFwd.y * -100.0;
    v34 = _mm_cvtsi128_si32(x_low);
    v35 = _mm_cvtsi128_si32(y_low);
    Vector::Random(&v57, 100.0, v36);
    v37 = _mm_cvtsi32_si128(v34);
    v38 = _mm_cvtsi32_si128(v35);
    *v37.m128i_i32 = *v37.m128i_i32 + v57.x;
    *v38.m128i_i32 = *v38.m128i_i32 + v57.y;
    v39 = _mm_cvtsi128_si32(v37);
    v40 = _mm_cvtsi128_si32(v38);
    v41 = CDOTA_Buff::GetCaster(this);
    v42 = CBaseEntity::GetAbsOrigin(v41);
    v43 = _mm_cvtsi32_si128(v39);
    v44 = _mm_cvtsi32_si128(v40);
    *v43.m128i_i32 = *v43.m128i_i32 + v42->x;
    *v44.m128i_i32 = *v44.m128i_i32 + v42->y;
    v45 = _mm_cvtsi32_si128(0x41800000u);
    v46 = _mm_cvtsi128_si32(v43);
    *v45.m128i_i32 = *v45.m128i_i32 + v42->z;
    v47 = _mm_cvtsi128_si32(v44);
    v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
    v49 = GetParticleManager();
    v55 = __PAIR64__(v47, v46);
    v56 = v48;
    CDOTA_ParticleManager::SetParticleControl(v49, v29, 1, COERCE_DOUBLE(__PAIR64__(v47, v46)), v48);
    v50 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v50, v29);
  }
  else
  {
    v13 = RandomInt(0, (entities.m_Size - 1));
    v14 = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v13]);
    v15 = v14;
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
    {
      v16 = CDOTA_Buff::GetAbility(this);
      *v17.m128i_i32 = (*(v16->_vptr_IHandleEntity + 247))(v16);
      v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
      v19 = CDOTA_Buff::GetAbility(this);
      v20 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v20, v15, v19, v18, 2, 0);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v21);
      v22 = CDOTA_Buff::GetCaster(this);
      v23 = GetParticleManager();
      iIndex = CDOTA_ParticleManager::CreateParticle(
                 v23,
                 "particles/units/heroes/hero_rattletrap/rattletrap_battery_shrapnel.vpcf",
                 1,
                 v22,
                 0,
                 0);
      v24 = CBaseEntity::GetAbsOrigin(v15);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v25, iIndex, 1, v15, 5, "attach_hitloc", *v24, 1);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, iIndex);
      v27 = CDOTA_Buff::GetAbility(this);
      v28 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v15, v28, v27, "modifier_stunned", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_Rattletrap.Battery_Assault_Impact", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Rattletrap_PowerCogs::~CDOTA_Ability_Rattletrap_PowerCogs  (line 343, @0x0000000002c05670, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::~CDOTA_Ability_Rattletrap_PowerCogs(
        CDOTA_Ability_Rattletrap_PowerCogs *const this)
{
  this->_vptr_IHandleEntity = &off_4550530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rattletrap_PowerCogs::~CDOTA_Ability_Rattletrap_PowerCogs  (line 343, @0x0000000002c05690, libserver.so)  // inlines: ~CDOTA_Ability_Rattletrap_PowerCogs
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::~CDOTA_Ability_Rattletrap_PowerCogs(
        CDOTA_Ability_Rattletrap_PowerCogs *const this)
{
  this->_vptr_IHandleEntity = &off_4550530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rattletrap_PowerCogs::Schema_DynamicBinding  (line 345, @0x0000000002bff1b0, libserver.so)
// globals: CDOTA_Ability_Rattletrap_PowerCogs::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_PowerCogs *const this)
{
  return CDOTA_Ability_Rattletrap_PowerCogs::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 345, @0x0000000002bff1c0, libserver.so)
// globals: CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::DestructInstance  (line 345, @0x0000000002bff1d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rattletrap_PowerCogs>
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::FreeInstance  (line 345, @0x0000000002bff1f0, libserver.so)
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::CanAllocate  (line 345, @0x0000000002bff210, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 345, @0x0000000002bff220, libserver.so)
// globals: CDOTA_Ability_Rattletrap_PowerCogs::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_PowerCogs::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::AllocateInstance  (line 345, @0x0000000002c02570, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::ConstructInstance  (line 345, @0x0000000002c04b80, libserver.so)  // inlines: CDOTA_Ability_Rattletrap_PowerCogs, Construct<CDOTA_Ability_Rattletrap_PowerCogs>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4550530;
  }
  return p;
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 345, @0x0000000002c0ac30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 345, @0x0000000002c0ac50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal  (line 345, @0x0000000002c14800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "rattletrap_power_cogs", "CDOTA_Ability_Rattletrap_PowerCogs"
// globals: `guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass, CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass, __dso_handle, CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo, CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass);
    CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass._vptr_CEntityClass = off_45504B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass);
    __cxa_atexit(
      CDOTA_Ability_Rattletrap_PowerCogs::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rattletrap_PowerCogsClass != 0 )
    return &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass;
  if ( `guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo,
      "CDOTA_Ability_Rattletrap_PowerCogs",
      "rattletrap_power_cogs",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo);
  }
  CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass.m_pClassInfo = &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo;
  CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass.m_pBaseClassInfo = CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rattletrap_PowerCogsClass = &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass;
  CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClassInfo.m_pClass = &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass;
  CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rattletrap_PowerCogsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rattletrap_PowerCogs::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_PowerCogsClass;
}


// CDOTA_Ability_Rattletrap_PowerCogs::YouForgotToImplementOrDeclareServerClass  (line 362, @0x0000000002bd3550, libserver.so)
int __fastcall CDOTA_Ability_Rattletrap_PowerCogs::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rattletrap_PowerCogs *const this)
{
  return 0;
}


// CDOTA_Ability_Rattletrap_PowerCogs::GetServerClass  (line 362, @0x0000000002bdc870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rattletrap_PowerCogs::GetServerClass(
        CDOTA_Ability_Rattletrap_PowerCogs *const this)
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


// CDOTA_Ability_Rattletrap_PowerCogs::OnSpellStart  (line 372, @0x0000000002bf0f00, libserver.so)  // inlines: AddObstructionProperty, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, QAngle, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, AngleVectors, KeyValues::KeyValues, KeyValues::SetFloat (28 total)
// strings: "cogs_radius", "extra_pull_buffer", "particles/units/heroes/hero_rattletrap/rattletrap_cog_deploy.vpcf", "npc_dota_rattletrap_cog", "modifier_rattletrap_cog", "cog_index" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Rattletrap_PowerCogs::OnSpellStart(CDOTA_Ability_Rattletrap_PowerCogs *const this)
{
  int v2; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // rax
  int m_Value; // ebx
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rax
  CDOTA_BaseNPC *UnitByName; // rbx
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  int m_nObstructionProperties; // ecx
  ObstructionRecord_t *m_pObstructionRecord; // rax
  ObstructionRecord_t *v20; // rdx
  int v21; // eax
  __m128d v22; // xmm0
  float v23; // r14d
  CDOTA_BaseNPC *v24; // r13
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rbx
  CDOTA_BaseNPC *v27; // rax
  __int64 v28; // rbx
  int v29; // r13d
  CHandle<CBaseEntity> *v30; // rdx
  uint32 m_Index; // eax
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CBaseEntity *m_pInstance; // r14
  const Vector *v36; // rax
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  float v40; // xmm1_4
  int v41; // ebx
  CDOTA_BaseNPC *v42; // rax
  int i; // ebx
  double v44; // xmm1_8
  float v45; // xmm3_4
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC_Hero *v47; // rdi
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v50; // rax
  float v51; // xmm3_4
  int extra_pull_buffer; // [rsp+38h] [rbp-D8h]
  int nNumHeroesCogged; // [rsp+40h] [rbp-D0h]
  int nNumHeroesCoggeda; // [rsp+40h] [rbp-D0h]
  float flCogRadius; // [rsp+44h] [rbp-CCh]
  int cogs_radius; // [rsp+48h] [rbp-C8h]
  float vOrigin; // [rsp+4Ch] [rbp-C4h]
  CDOTA_BaseNPC *COG_COLLECT_ZONEa; // [rsp+50h] [rbp-C0h]
  float COG_COLLECT_ZONE; // [rsp+50h] [rbp-C0h]
  float y; // [rsp+58h] [rbp-B8h]
  float vCenter; // [rsp+5Ch] [rbp-B4h]
  QAngle angles; // [rsp+70h] [rbp-A0h] BYREF
  Vector vForward; // [rsp+80h] [rbp-90h] BYREF
  Vector v64; // [rsp+90h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntitiesNearby; // [rsp+A0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-38h]
  Vector v68; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v69; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = 0;
  v67 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  cogs_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cogs_radius", -1, 0);
  extra_pull_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "extra_pull_buffer", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_rattletrap/rattletrap_cog_deploy.vpcf",
                      0,
                      Caster,
                      0,
                      0);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v5, Caster);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1550, 0.2, 0.2, 9, 0, 1.0);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  nNumHeroesCogged = 0;
  vCenter = AbsOrigin->x;
  y = AbsOrigin->y;
  vOrigin = AbsOrigin->z;
  flCogRadius = 0.0;
  do
  {
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v10 = CDOTABaseAbility::GetCaster(this);
    COG_COLLECT_ZONEa = CDOTABaseAbility::GetCaster(this);
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    UnitByName = DOTA_CreateUnitByName("npc_dota_rattletrap_cog", v12, 1, COG_COLLECT_ZONEa, v10, m_Value);
    if ( UnitByName != 0 )
    {
      angles.x = 0.0;
      angles.z = 0.0;
      angles.y = nNumHeroesCogged;
      AngleVectors(&angles, &vForward, 0, 0);
      KeyValues::KeyValues(&kv, "modifier_rattletrap_cog");
      KeyValues::SetFloat(&kv, "x", v14);
      KeyValues::SetFloat(&kv, "y", v15);
      KeyValues::SetFloat(&kv, "duration", v16);
      KeyValues::SetInt(&kv, "cog_index", v2);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(UnitByName, v17, this, "modifier_rattletrap_cog", &kv, 0);
      v64.y = (vForward.y * cogs_radius) + y;
      v64.z = (vForward.z * cogs_radius) + vOrigin;
      v64.x = (cogs_radius * vForward.x) + vCenter;
      *&hEntitiesNearby.m_Size = GetPositionOnGround(&v64, UnitByName);
      CBaseEntity::SetAbsOrigin(UnitByName, &hEntitiesNearby);
      m_nObstructionProperties = UnitByName->m_nObstructionProperties;
      m_pObstructionRecord = UnitByName->m_pObstructionRecord;
      UnitByName->m_nObstructionProperties = m_nObstructionProperties | 8;
      if ( m_pObstructionRecord != 0 )
      {
        m_pObstructionRecord->m_ObjectProperties = m_nObstructionProperties | 8;
        v21 = UnitByName->m_nObstructionProperties;
        v20 = UnitByName->m_pObstructionRecord;
        BYTE1(v21) |= 8u;
        UnitByName->m_nObstructionProperties = v21;
        if ( v20 != 0 )
          v20->m_ObjectProperties = v21;
      }
      else
      {
        UnitByName->m_nObstructionProperties = m_nObstructionProperties | 0x808;
      }
      C2DGridObstructionManager::UpdateObjectObstruction(
        &g_GridNav.m_ObstructionManager,
        &UnitByName->CObstructionObject);
      flCogRadius = UnitByName->m_flHullRadius;
      KeyValues::~KeyValues(&kv);
    }
    nNumHeroesCogged += 45;
    ++v2;
  }
  while ( v2 != 8 );
  hEntitiesNearby.m_Size = 0;
  hEntitiesNearby.m_Memory.m_pMemory = 0;
  hEntitiesNearby.m_Memory.m_nAllocationCount = 0;
  hEntitiesNearby.m_Memory.m_nGrowSize = 0;
  COG_COLLECT_ZONE = (cogs_radius + extra_pull_buffer);
  v22.m128d_f64[1] = COG_COLLECT_ZONE;
  v22.m128d_f64[0] = COG_COLLECT_ZONE * 1.414213562373095;
  v23 = COERCE_FLOAT(_mm_cvtsi128_si32(_mm_cvtpd_ps(_mm_movedup_pd(v22))));
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  v27 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v27->m_iTeamNum.m_Value, v26, v24, v23, &hEntitiesNearby, 2, 1, 0, 0, 0);
  if ( hEntitiesNearby.m_Size <= 0 )
  {
    nNumHeroesCoggeda = 0;
  }
  else
  {
    nNumHeroesCoggeda = 0;
    v28 = 0;
    v29 = 0;
    do
    {
      while ( 1 )
      {
        v30 = &hEntitiesNearby.m_Memory.m_pMemory[v28];
        m_Index = hEntitiesNearby.m_Memory.m_pMemory[v28].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v32 = v30->m_Index;
          v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30->m_Index) >> 9) & 0x3F];
          if ( v33 != 0 )
          {
            v34 = &v33[v32 & 0x1FF];
            if ( v34 != 0 && m_Index == v34->m_EHandle.m_Index )
            {
              m_pInstance = v34->m_pInstance;
              if ( v34->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 0x800) == 0 )
              {
                v36 = CBaseEntity::GetAbsOrigin(v34->m_pInstance);
                v37 = v36->y;
                if ( v36->x >= (vCenter - COG_COLLECT_ZONE)
                  && (COG_COLLECT_ZONE + vCenter) >= v36->x
                  && v37 >= (y - COG_COLLECT_ZONE)
                  && (y + COG_COLLECT_ZONE) >= v37 )
                {
                  *&v68.x = __PAIR64__(LODWORD(y), LODWORD(vCenter));
                  v68.z = vOrigin;
                  FindClearSpaceForUnit(m_pInstance, v68, 0);
                  if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                    break;
                }
              }
            }
          }
        }
        ++v29;
        ++v28;
        if ( hEntitiesNearby.m_Size <= v29 )
          goto LABEL_24;
      }
      nNumHeroesCoggeda += LOBYTE(m_pInstance[4].m_pfnMoveDone.__delta) == 0;
      ++v29;
      ++v28;
    }
    while ( hEntitiesNearby.m_Size > v29 );
  }
LABEL_24:
  KeyValues::KeyValues(&kv, "modifier_rattletrap_cog_thinker");
  KeyValues::SetFloat(&kv, "x", v38);
  KeyValues::SetFloat(&kv, "y", v39);
  KeyValues::SetFloat(&kv, "duration", v40);
  v41 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v42 = CDOTABaseAbility::GetCaster(this);
  v69.z = vOrigin;
  *&v69.x = __PAIR64__(LODWORD(y), LODWORD(vCenter));
  Thinker_Create(v42, this, "modifier_rattletrap_cog_thinker", &kv, v69, v41, 0, 1, 0);
  for ( i = 0; i != 360; i += 45 )
  {
    angles.x = 0.0;
    angles.z = 0.0;
    angles.y = i;
    AngleVectors(&angles, &vForward, 0, 0);
    *&v44 = LODWORD(vForward.z);
    *&v44 = (vForward.z * cogs_radius) + vOrigin;
    v64.y = (vForward.y * cogs_radius) + y;
    v64.z = *&v44;
    v64.x = (cogs_radius * vForward.x) + vCenter;
    CGridNav::ResolveNPCPositions(&g_GridNav, 0, *&v64.x, v44, flCogRadius, v45);
  }
  if ( nNumHeroesCoggeda > 1 )
  {
    v46 = CDOTABaseAbility::GetCaster(this);
    if ( v46 != 0 && (v46->m_iUnitType & 1) != 0 )
      v47 = v46;
    else
      v47 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v47,
      0,
      kill_eater_event_t::kKillEaterEvent_Clockwerk_2Cogs,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v50 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v50,
    0,
    m_iAbilityID,
    0,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(vCenter))),
    vOrigin,
    -1.0,
    v51);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntitiesNearby);
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::~CDOTA_Modifier_Rattletrap_Cog_Thinker  (line 486, @0x0000000002c037e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::~CDOTA_Modifier_Rattletrap_Cog_Thinker(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4550FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::~CDOTA_Modifier_Rattletrap_Cog_Thinker  (line 486, @0x0000000002c03800, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_Cog_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::~CDOTA_Modifier_Rattletrap_Cog_Thinker(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4550FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::IsHidden  (line 491, @0x0000000002bff230, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::IsHidden(CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::IsAura  (line 493, @0x0000000002bff240, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::IsAura(CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetModifierAura  (line 494, @0x0000000002bff250, libserver.so)
// strings: "modifier_rattletrap_cog_marker"
const char *__fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetModifierAura(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return "modifier_rattletrap_cog_marker";
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchTeam  (line 496, @0x0000000002bff260, libserver.so)
int __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchType  (line 497, @0x0000000002bff270, libserver.so)
int __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchFlags  (line 498, @0x0000000002bff280, libserver.so)
int __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 16;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraRadius  (line 499, @0x0000000002bff290, libserver.so)
int __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraRadius(CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return this->cogs_radius - this->extra_pull_buffer;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraDuration  (line 500, @0x0000000002bff2b0, libserver.so)
float __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::GetAuraDuration(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  return 1.0;
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::OnRemoved  (line 502, @0x0000000002c143f0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::OnRemoved(CDOTA_Modifier_Rattletrap_Cog_Thinker *const this)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nCogSound);
}


// CDOTA_Modifier_Rattletrap_Cog_Thinker::OnCreated  (line 518, @0x0000000002bec030, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, DOTA_EmitSoundLocation
// strings: "cogs_radius", "extra_pull_buffer", "Hero_Rattletrap.Power_Cogs"
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Thinker::OnCreated(
        CDOTA_Modifier_Rattletrap_Cog_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->cogs_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->extra_pull_buffer = 0;
    goto LABEL_4;
  }
  this->cogs_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "cogs_radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->extra_pull_buffer = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "extra_pull_buffer", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  this->m_nCogSound = DOTA_EmitSoundLocation(AbsOrigin, "Hero_Rattletrap.Power_Cogs", 1);
}


// CDOTA_Modifier_Rattletrap_Cog_Marker::~CDOTA_Modifier_Rattletrap_Cog_Marker  (line 530, @0x0000000002c04230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Marker::~CDOTA_Modifier_Rattletrap_Cog_Marker(
        CDOTA_Modifier_Rattletrap_Cog_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45512D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_Cog_Marker::~CDOTA_Modifier_Rattletrap_Cog_Marker  (line 530, @0x0000000002c04250, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_Cog_Marker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_Cog_Marker::~CDOTA_Modifier_Rattletrap_Cog_Marker(
        CDOTA_Modifier_Rattletrap_Cog_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45512D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_Cog_Marker::IsPurgable  (line 534, @0x0000000002bff2c0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Cog_Marker::IsPurgable(CDOTA_Modifier_Rattletrap_Cog_Marker *const this)
{
  return 0;
}


// CDOTA_Modifier_Rattletrap_Cog_Marker::IsHidden  (line 535, @0x0000000002bff2d0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Cog_Marker::IsHidden(CDOTA_Modifier_Rattletrap_Cog_Marker *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Cog::~CDOTA_Modifier_Rattletrap_Cog  (line 546, @0x0000000002c03790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_Cog::~CDOTA_Modifier_Rattletrap_Cog(
        CDOTA_Modifier_Rattletrap_Cog *const this)
{
  this->_vptr_CDOTA_Buff = &off_4551630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_Cog::~CDOTA_Modifier_Rattletrap_Cog  (line 546, @0x0000000002c037b0, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_Cog
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_Cog::~CDOTA_Modifier_Rattletrap_Cog(
        CDOTA_Modifier_Rattletrap_Cog *const this)
{
  this->_vptr_CDOTA_Buff = &off_4551630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_Cog::IsHidden  (line 551, @0x0000000002bff2e0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Cog::IsHidden(CDOTA_Modifier_Rattletrap_Cog *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Cog::OnCreated  (line 588, @0x0000000002bf3d60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, operator=
// calls: KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::StartIntervalThink
// strings: "cog_index", "trigger_distance", "push_length", "push_duration", "cogs_radius", "attacks_to_destroy" (8 total)
void __fastcall CDOTA_Modifier_Rattletrap_Cog::OnCreated(CDOTA_Modifier_Rattletrap_Cog *const this, KeyValues *pKV)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  vec_t v6; // r13d
  float v7; // xmm1_4
  vec_t Float; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v17; // r13
  CDOTA_ParticleManager *v18; // rax
  float v19; // xmm1_4

  this->m_bEnabled = 1;
  this->m_iAttackCount = 0;
  this->m_iCogIndex = KeyValues::GetInt(pKV, "cog_index", 0);
  *v5.m128i_i32 = KeyValues::GetFloat(pKV, "y", v4);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Float = KeyValues::GetFloat(pKV, "x", v7);
  this->vCenter.y = v6;
  this->vCenter.x = Float;
  this->vCenter.z = 0.0;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->trigger_distance, "trigger_distance");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->push_length, "push_length");
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->push_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "push_duration", -1, 0);
  else
    this->push_duration = 0.0;
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &this->cogs_radius, "cogs_radius");
  v13 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v13, &this->attacks_to_destroy, "attacks_to_destroy");
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_rattletrap/rattletrap_cog_ambient.vpcf",
                       2,
                       0,
                       0,
                       0);
  Parent = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v17 = Parent;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v18, m_nFXIndex, 0, v17, 5, "attach_attack1", vec3_invalid, 1);
  CDOTA_Buff::StartIntervalThink(this, 0.050000001, v19);
}


// CDOTA_Modifier_Rattletrap_Cog::OnDestroy  (line 614, @0x0000000002bd5a50, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CDOTA_Modifier_Rattletrap_Cog::OnDestroy(CDOTA_Modifier_Rattletrap_Cog *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CTakeDamageInfo dmg; // [rsp+0h] [rbp-B0h] BYREF

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  CTakeDamageInfo::CTakeDamageInfo(&dmg, v5, Parent, 0.0, 0, 0);
  v6 = CDOTA_Buff::GetParent(this);
  (*(v6->_vptr_IHandleEntity + 92))(v6, &dmg);
  CTakeDamageInfo::~CTakeDamageInfo(&dmg);
}


// CDOTA_Modifier_Rattletrap_Cog::OnIntervalThink  (line 638, @0x0000000002be4b90, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, Length2D, Length2DSqr, LookupEntity, NormalizeInPlace, String, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, end, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, SortEHANDLEVectorByLocation, CBaseEntity::GetLifeState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTALocomotor::HasMotionControllerWithHigherPriority, GetParticleManager, CDOTA_ParticleManager::CreateParticle (24 total)
// strings: "npc_dota_rattletrap_cog", "modifier_rattletrap_cog_marker", "modifier_item_forcestaff_active", "particles/units/heroes/hero_rattletrap/rattletrap_cog_attack.vpcf", "attach_attack1", "attach_hitloc" (12 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Rattletrap_Cog::OnIntervalThink(CDOTA_Modifier_Rattletrap_Cog *const this)
{
  __m128i v1; // xmm7
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // rax
  __int64 v10; // r13
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *m_pInstance; // r14
  const Vector *v17; // rax
  __m128i v18; // xmm6
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v21; // xmm0_4
  int cogs_radius; // r12d
  int v23; // r12d
  float v24; // r12d
  const Vector *v25; // rbx
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  const Vector *v28; // rax
  float v29; // xmm4_4
  float v30; // xmm0_4
  CHandle<CBaseEntity> *m_pMemory; // rbx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  const CBaseEntity *v34; // r12
  const char *delta; // rsi
  const Vector *v36; // r15
  const Vector *v37; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTALocomotor *v39; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v42; // rax
  const Vector *v43; // rbx
  CDOTA_BaseNPC *v44; // r13
  CDOTA_ParticleManager *v45; // rax
  const Vector *v46; // rbx
  CDOTA_ParticleManager *v47; // rax
  CDOTA_ParticleManager *v48; // rax
  CDOTA_ParticleManager *v49; // rax
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *pClosestCog; // [rsp+20h] [rbp-E0h]
  CBaseEntity *v58; // [rsp+28h] [rbp-D8h]
  float v60; // [rsp+44h] [rbp-BCh]
  CHandle<CBaseEntity> *__for_end; // [rsp+48h] [rbp-B8h]
  EHANDLE hCogEnt; // [rsp+50h] [rbp-B0h]
  Vector vPushDir; // [rsp+60h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hCogs; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v67; // [rsp+C8h] [rbp-38h]

  v67 = __readfsqword(0x28u);
  if ( this->m_bEnabled )
  {
    *v1.m128i_i32 = this->trigger_distance;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    Parent = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 19, 512, 1, 0);
    v8 = CDOTA_Buff::GetParent(this);
    v9 = CBaseEntity::GetAbsOrigin(v8);
    SortEHANDLEVectorByLocation(&entities, v9, 0);
    if ( entities.m_Size > 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = &entities.m_Memory.m_pMemory[v10];
          m_Index = v11->m_Index;
          if ( v11->m_Index + 2 > 1 )
          {
            v13 = v11->m_Index;
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = &v14[v13 & 0x1FF];
              if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
              {
                m_pInstance = v15->m_pInstance;
                if ( v15->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && *&m_pInstance[2].m_DamageModifiers.m_Head != 0.0 )
                {
                  v17 = CBaseEntity::GetAbsOrigin(v15->m_pInstance);
                  x = v17->x;
                  y = v17->y;
                  vPushDir.z = 0.0;
                  v21 = y - this->vCenter.y;
                  cogs_radius = this->cogs_radius;
                  vPushDir.x = x - this->vCenter.x;
                  vPushDir.y = v21;
                  if ( cogs_radius <= fsqrt((vPushDir.x * vPushDir.x) + (v21 * v21)) )
                    break;
                }
              }
            }
          }
          if ( entities.m_Size <= ++v10 )
            goto LABEL_30;
        }
        v23 = this->trigger_distance + cogs_radius;
        hCogs.m_Size = 0;
        hCogs.m_Memory.m_pMemory = 0;
        hCogs.m_Memory.m_nAllocationCount = 0;
        *v18.m128i_i32 = v23;
        hCogs.m_Memory.m_nGrowSize = 0;
        v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
        v25 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v26 = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(v26->m_iTeamNum.m_Value, v25, m_pInstance, v24, &hCogs, 1, 32, 8, 0, 0);
        pClosestCog = CDOTA_Buff::GetParent(this);
        v58 = pClosestCog;
        v27 = CBaseEntity::GetAbsOrigin(pClosestCog);
        v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v29 = v28->x - v27->x;
        v30 = v28->y - v27->y;
        m_pMemory = hCogs.m_Memory.m_pMemory;
        __for_end = &hCogs.m_Memory.m_pMemory[hCogs.m_Size];
        v60 = (v30 * v30) + (v29 * v29);
        if ( hCogs.m_Memory.m_pMemory != __for_end )
        {
          while ( 1 )
          {
            hCogEnt.m_Index = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(hCogEnt.m_Index) >> 9) & 0x3F];
              if ( v32 != 0 )
              {
                v33 = &v32[hCogEnt.m_Index & 0x1FF];
                if ( v33 != 0 && m_pMemory->m_Index == v33->m_EHandle.m_Index )
                {
                  v34 = v33->m_pInstance;
                  if ( v33->m_pInstance != 0 && v34->m_bIsDOTANPC )
                  {
                    delta = v34[4].m_pfnUse.__delta;
                    if ( delta != 0
                      && (delta == "npc_dota_rattletrap_cog" || strcmp(delta, "npc_dota_rattletrap_cog") == 0) )
                    {
                      v36 = CBaseEntity::GetAbsOrigin(v33->m_pInstance);
                      v37 = CBaseEntity::GetAbsOrigin(m_pInstance);
                      if ( v60 > (((v37->x - v36->x) * (v37->x - v36->x)) + ((v37->y - v36->y) * (v37->y - v36->y))) )
                        break;
                    }
                  }
                }
              }
            }
            if ( __for_end == ++m_pMemory )
              goto LABEL_27;
          }
          v58 = v34;
          pClosestCog = v34;
        }
LABEL_27:
        if ( (CBaseEntity::GetLifeState(v58) == LifeState_t::LIFE_ALIVE
           || CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_rattletrap_cog_marker", 0) == 0)
          && pClosestCog == CDOTA_Buff::GetParent(this) )
        {
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_item_forcestaff_active", 0);
          if ( ModifierByName != 0 )
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
          v39 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
          if ( !CDOTALocomotor::HasMotionControllerWithHigherPriority(v39, 0) )
            break;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCogs);
        if ( entities.m_Size <= ++v10 )
          goto LABEL_30;
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_rattletrap/rattletrap_cog_attack.vpcf",
                   2,
                   0,
                   0,
                   0);
      v42 = CDOTA_Buff::GetParent(this);
      v43 = CBaseEntity::GetAbsOrigin(v42);
      v44 = CDOTA_Buff::GetParent(this);
      v45 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v45, Particle, 0, v44, 5, "attach_attack1", *v43, 1);
      v46 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v47 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v47, Particle, 1, m_pInstance, 5, "attach_hitloc", *v46, 1);
      v48 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v48, Particle);
      LODWORD(v46) = this->m_nFXIndex;
      v49 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v49, v46, 0);
      if ( (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 0x800) == 0 )
      {
        KeyValues::KeyValues(&kv, "modfiier_rattletrap_cog_push");
        KeyValues::SetFloat(&kv, "duration", v50);
        VectorNormalize(&vPushDir);
        KeyValues::SetFloat(&kv, "direction_x", v51);
        KeyValues::SetFloat(&kv, "direction_y", v52);
        KeyValues::SetFloat(&kv, "direction_z", v53);
        Ability = CDOTA_Buff::GetAbility(this);
        v55 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v55, Ability, "modifier_rattletrap_cog_push", &kv, 0);
        KeyValues::~KeyValues(&kv);
      }
      v56 = CDOTA_Buff::GetParent(this);
      if ( v56 == 0 || !v56->m_bIsDOTANPC )
        v56 = 0;
      CDOTA_BaseNPC::UnitEmitSound(v56, "Hero_Rattletrap.Power_Cogs_Impact", 0.0, 0, 0);
      this->m_bEnabled = 0;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hCogs);
    }
LABEL_30:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Rattletrap_Cog::DeclareFunctions  (line 737, @0x0000000002bd3560, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Rattletrap_Cog::DeclareFunctions(CDOTA_Modifier_Rattletrap_Cog *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
  this->m_Functions[36].__pfn = (&stru_10 + 705);
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Rattletrap_Cog::OnAttacked  (line 745, @0x0000000002bdb200, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::UnitEmitSound, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// strings: "Hero_Rattletrap.Power_Cog.Destroy"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Rattletrap_Cog::OnAttacked(
        CDOTA_Modifier_Rattletrap_Cog *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v16; // rax
  CTakeDamageInfo dmg; // [rsp+0h] [rbp-B0h] BYREF

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
          ++this->m_iAttackCount;
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || !v12->m_bIsDOTANPC )
          {
            v12 = 0;
          }
          if ( CDOTA_Buff::GetCaster(this) == v12 || this->m_iAttackCount >= this->attacks_to_destroy )
          {
            m_nFXIndex = this->m_nFXIndex;
            ParticleManager = GetParticleManager();
            CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
            Parent = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Rattletrap.Power_Cog.Destroy", 0.0, 0, 0);
            CTakeDamageInfo::CTakeDamageInfo(&dmg, v12, v12, 0.0, 0, 0);
            v16 = CDOTA_Buff::GetParent(this);
            (*(v16->_vptr_IHandleEntity + 92))(v16, &dmg);
            CTakeDamageInfo::~CTakeDamageInfo(&dmg);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Rattletrap_Cog::GetModifierIncomingDamage_Percentage  (line 769, @0x0000000002bd35a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rattletrap_Cog::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Rattletrap_Cog *const this,
        const CModifierParams *const params)
{
  return 0xC2C8000000000001LL;
}


// CDOTA_Modifier_Rattletrap_Cog::CheckState  (line 776, @0x0000000002bd35c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Rattletrap_Cog::CheckState(
        CDOTA_Modifier_Rattletrap_Cog *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20000uLL;
  buffState->m_nDisabledStateMask &= ~0x20000uLL;
}


// CDOTA_Modifier_Rattletrap_CogPush::~CDOTA_Modifier_Rattletrap_CogPush  (line 787, @0x0000000002c03720, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::~CDOTA_Modifier_Rattletrap_CogPush(
        CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  this->_vptr_CDOTA_Buff = &off_4551970;
  this->_vptr_CHorizontalMotionController = &off_4551C60;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_CogPush::~CDOTA_Modifier_Rattletrap_CogPush  (line 787, @0x0000000002c03750, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_CogPush
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::~CDOTA_Modifier_Rattletrap_CogPush(
        CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  this->_vptr_CDOTA_Buff = &off_4551970;
  this->_vptr_CHorizontalMotionController = &off_4551C60;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_CogPush::IsDebuff  (line 796, @0x0000000002bff2f0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_CogPush::IsDebuff(CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_CogPush::IsStunDebuff  (line 797, @0x0000000002bff300, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_CogPush::IsStunDebuff(CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_CogPush::IsHorizontalMotionValidToApply  (line 810, @0x0000000002bff310, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Rattletrap_CogPush::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Rattletrap_CogPush::IsMotionController  (line 812, @0x0000000002bff340, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_CogPush::IsMotionController(CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_CogPush::OnCreated  (line 832, @0x0000000002bf33b0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetFloat, CDOTA_Buff::Destroy
// strings: "push_length", "push_duration", "direction_x", "direction_y", "direction_z"
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::OnCreated(
        CDOTA_Modifier_Rattletrap_CogPush *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v8; // rax
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  vec_t Float; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->push_length = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "push_length", -1, 0);
  else
    this->push_length = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->push_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "push_duration", -1, 0);
  else
    this->push_duration = 0.0;
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flStartTime = v6;
  Parent = CDOTA_Buff::GetParent(this);
  v8 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v8, &this->CHorizontalMotionController, 0) )
  {
    this->m_vDirection.x = KeyValues::GetFloat(pKV, "direction_x", v9);
    this->m_vDirection.y = KeyValues::GetFloat(pKV, "direction_y", v10);
    Float = KeyValues::GetFloat(pKV, "direction_z", v11);
    this->m_flCurTime = 0.0;
    this->m_vDirection.z = Float;
    this->m_flEndTime = this->push_duration;
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Rattletrap_CogPush::OnDestroy  (line 855, @0x0000000002be69a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint
// strings: "drain_amount"
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::OnDestroy(CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // r13
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // r12
  CDOTABaseAbility *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm3_4
  float flDamage; // [rsp+Ch] [rbp-34h]
  float flDamagea; // [rsp+Ch] [rbp-34h]
  int drain_amount[9]; // [rsp+1Ch] [rbp-24h] BYREF
  Vector v18; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, drain_amount, "drain_amount");
  flDamage = drain_amount[0];
  v5 = CDOTA_Buff::GetAbility(this);
  v6 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v6, v5, flDamage, 2, 0);
  flDamagea = drain_amount[0];
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ReduceMana(v8, flDamagea, v9);
  LODWORD(v5) = drain_amount[0];
  v10 = CDOTA_Buff::GetParent(this);
  v11 = CDOTA_Buff::GetAbility(this);
  CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, v11, v10, v5);
  v12 = CDOTA_Buff::GetCaster(this);
  LODWORD(v10) = (*(v12->_vptr_IHandleEntity + 414))(v12);
  v13 = CDOTA_Buff::GetParent(this);
  v18 = *CBaseEntity::GetAbsOrigin(v13);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v10, v18, 100.0, v14);
}


// CDOTA_Modifier_Rattletrap_CogPush::CheckState  (line 874, @0x0000000002bd35e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::CheckState(
        CDOTA_Modifier_Rattletrap_CogPush *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Rattletrap_CogPush::UpdateHorizontalMotion  (line 883, @0x0000000002bd5af0, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::UpdateHorizontalMotion(
        CDOTA_Modifier_Rattletrap_CogPush *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  __m128i x_low; // xmm3
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm2_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm3_4
  float v19; // [rsp+8h] [rbp-28h]
  float v20; // [rsp+Ch] [rbp-24h]
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

  x_low = LODWORD(this->m_vDirection.x);
  v6 = this->m_flCurTime + a3;
  v7 = a3 / this->m_flEndTime;
  this->m_flCurTime = v6;
  v8 = this->push_length * v7;
  *x_low.m128i_i32 = *x_low.m128i_i32 * v8;
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v19 = this->m_vDirection.y * v8;
  v20 = v8 * this->m_vDirection.z;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = v20 + AbsOrigin->z;
  v13 = v9 + AbsOrigin->x;
  vOrigin.y = v19 + AbsOrigin->y;
  vOrigin.z = v12;
  vOrigin.x = v13;
  v14 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(v14, &vOrigin);
  Caster = CDOTA_Buff::GetCaster(this);
  v16 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v17 = CDOTA_Buff::GetParent(this);
  v23 = *CBaseEntity::GetAbsOrigin(v17);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v16, v23, m_flHullRadius, v18);
  if ( this->m_flCurTime >= this->m_flEndTime )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Rattletrap_CogPush::OnHorizontalMotionInterrupted  (line 902, @0x0000000002bd4870, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Rattletrap_CogPush::DeclareFunctions  (line 911, @0x0000000002bd35f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimationWeight(CModifierParams const&)
void __fastcall CDOTA_Modifier_Rattletrap_CogPush::DeclareFunctions(CDOTA_Modifier_Rattletrap_CogPush *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[91].__delta = 0;
  this->m_Functions[91].__pfn = CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimationWeight;
}


// CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimation  (line 919, @0x0000000002bd3630, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimation(
        CDOTA_Modifier_Rattletrap_CogPush *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimationWeight  (line 926, @0x0000000002bd6af0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Rattletrap_CogPush::GetOverrideAnimationWeight(
        CDOTA_Modifier_Rattletrap_CogPush *const this,
        const CModifierParams *const params)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v5; // xmm0_4
  float flElapsed; // [rsp+0h] [rbp-Ch]
  ModifierVariant_t result; // 0:rax.16

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  flElapsed = v2 - this->m_flStartTime;
  (*(this->_vptr_CDOTA_Buff + 31))(this, params);
  if ( flElapsed < 0.2 )
  {
    *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, flElapsed / 0.2)) << 32) | 1;
LABEL_5:
    result.m_szVal = 0;
    return result;
  }
  *&result.m_eType = 0x3F80000000000001LL;
  v5 = (v3 - flElapsed) - 0.1;
  if ( v5 >= 0.5 )
    goto LABEL_5;
  result.m_szVal = 0;
  *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.0099999998, v5 + v5)) << 32) | 1;
  return result;
}


// CDOTA_Ability_Rattletrap_RocketFlare::~CDOTA_Ability_Rattletrap_RocketFlare  (line 949, @0x0000000002c19870, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::~CDOTA_Ability_Rattletrap_RocketFlare(
        CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  this->_vptr_IHandleEntity = &off_4551D30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecEnemyHeroesInFog);
  if ( (this->m_vecEnemyHeroesInFog.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecEnemyHeroesInFog.m_Memory),
        (this->m_vecEnemyHeroesInFog.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecEnemyHeroesInFog.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Rattletrap_RocketFlare::~CDOTA_Ability_Rattletrap_RocketFlare  (line 949, @0x0000000002c19d30, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Rattletrap_RocketFlare, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::~CDOTA_Ability_Rattletrap_RocketFlare(
        CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  this->_vptr_IHandleEntity = &off_4551D30;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecEnemyHeroesInFog);
  if ( (this->m_vecEnemyHeroesInFog.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecEnemyHeroesInFog.m_Memory);
    if ( (this->m_vecEnemyHeroesInFog.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecEnemyHeroesInFog.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rattletrap_RocketFlare::Schema_DynamicBinding  (line 951, @0x0000000002bff350, libserver.so)
// globals: CDOTA_Ability_Rattletrap_RocketFlare::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  return CDOTA_Ability_Rattletrap_RocketFlare::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 951, @0x0000000002bff360, libserver.so)
// globals: CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::DestructInstance  (line 951, @0x0000000002bff370, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rattletrap_RocketFlare>
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::FreeInstance  (line 951, @0x0000000002bff390, libserver.so)
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::CanAllocate  (line 951, @0x0000000002bff3b0, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 951, @0x0000000002bff3c0, libserver.so)
// globals: CDOTA_Ability_Rattletrap_RocketFlare::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_RocketFlare::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::AllocateInstance  (line 951, @0x0000000002c025b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::ConstructInstance  (line 951, @0x0000000002c09fb0, libserver.so)  // inlines: CDOTA_Ability_Rattletrap_RocketFlare, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Rattletrap_RocketFlare>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4551D30;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 951, @0x0000000002c0ac80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 951, @0x0000000002c0aca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal  (line 951, @0x0000000002c14950, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "rattletrap_rocket_flare", "CDOTA_Ability_Rattletrap_RocketFlare"
// globals: `guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass, CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass, __dso_handle, CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo, CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass);
    CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass._vptr_CEntityClass = off_4551CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass);
    __cxa_atexit(
      CDOTA_Ability_Rattletrap_RocketFlare::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rattletrap_RocketFlareClass != 0 )
    return &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass;
  if ( `guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo,
      "CDOTA_Ability_Rattletrap_RocketFlare",
      "rattletrap_rocket_flare",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo);
  }
  CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass.m_pClassInfo = &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo;
  CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass.m_pBaseClassInfo = CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rattletrap_RocketFlareClass = &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass;
  CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClassInfo.m_pClass = &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass;
  CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rattletrap_RocketFlareClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rattletrap_RocketFlare::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_RocketFlareClass;
}


// CDOTA_Ability_Rattletrap_RocketFlare::GetAOERadius  (line 958, @0x0000000002c1a3f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Rattletrap_RocketFlare::GetAOERadius(CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Rattletrap_RocketFlare::ShouldSpeakAbilityConcept  (line 962, @0x0000000002bff3d0, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_RocketFlare::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Rattletrap_RocketFlare *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Rattletrap_RocketFlare::YouForgotToImplementOrDeclareServerClass  (line 967, @0x0000000002bd3650, libserver.so)
int __fastcall CDOTA_Ability_Rattletrap_RocketFlare::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  return 0;
}


// CDOTA_Ability_Rattletrap_RocketFlare::GetServerClass  (line 967, @0x0000000002bdc6b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rattletrap_RocketFlare::GetServerClass(
        CDOTA_Ability_Rattletrap_RocketFlare *const this)
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


// CDOTA_Ability_Rattletrap_RocketFlare::OnSpellStart  (line 977, @0x0000000002bf62e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CGameTrace, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, EnableInteractsWith, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, GrowMemory, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, QueueConcept, Ray_t, RnCollisionAttr_t, Set, String, ToDOTABaseNPC, ToDOTABaseNPCHero, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (36 total)
// strings: "particles/units/heroes/hero_rattletrap/rattletrap_rocket_flare.vpcf", "attach_rocket", "rocket_flare_projectile", "start_x", "start_y", "start_z" (11 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Rattletrap_RocketFlare::OnSpellStart(CDOTA_Ability_Rattletrap_RocketFlare *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // r13d
  float m_fValue; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  CDOTA_BaseNPC *v10; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm5_4
  int z_low; // xmm6_4
  vec_t v24; // xmm1_4
  int v25; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v28; // eax
  __int16 v29; // cx
  int m_Value; // eax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  int LinearProjectile; // r15d
  CEntityInstance *v38; // rax
  CDOTA_BaseNPC *v39; // r12
  CEntityIdentity *v40; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  int v45; // r12d
  int v46; // r15d
  int NthPlayerIDOnTeam; // eax
  CEntityIdentity *v48; // rdx
  CEntityIdentity *v49; // rdx
  CDOTA_BaseNPC *v50; // rax
  CBaseEntity *v51; // rdi
  CDOTA_BaseNPC *v52; // rbx
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  const QAngle *AbsAngles; // rax
  CEntityInstance *m_pInstance; // r14
  CDOTA_BaseNPC *v57; // rax
  CDOTA_BaseNPC *v58; // rax
  CEntityIdentity *v59; // rdx
  int v60; // eax
  __int16 v61; // cx
  __int64 m_Size; // r14
  int v63; // eax
  CHandle<CBaseEntity> *v64; // rax
  float v65; // [rsp+14h] [rbp-22Ch]
  CDOTA_BaseNPC *vStarta; // [rsp+18h] [rbp-228h]
  float vStart; // [rsp+18h] [rbp-228h]
  float vStart_8; // [rsp+20h] [rbp-220h]
  float z; // [rsp+24h] [rbp-21Ch]
  float y; // [rsp+28h] [rbp-218h]
  float x; // [rsp+38h] [rbp-208h]
  EHANDLE hVisionEntity; // [rsp+40h] [rbp-200h] BYREF
  int v73[4]; // [rsp+50h] [rbp-1F0h] BYREF
  __int64 v74; // [rsp+60h] [rbp-1E0h]
  Vector vDirection; // [rsp+68h] [rbp-1D8h] BYREF
  float v76; // [rsp+74h] [rbp-1CCh]
  float v77; // [rsp+78h] [rbp-1C8h]
  CTraceFilterSimple v78; // [rsp+80h] [rbp-1C0h] BYREF
  CResponseCriteriaSet info; // [rsp+C0h] [rbp-180h] BYREF
  int v80; // [rsp+F8h] [rbp-148h]
  int v81; // [rsp+FCh] [rbp-144h]
  float v82; // [rsp+100h] [rbp-140h]
  int v83; // [rsp+104h] [rbp-13Ch]
  int v84; // [rsp+108h] [rbp-138h]
  int v85; // [rsp+10Ch] [rbp-134h]
  int v86; // [rsp+110h] [rbp-130h]
  char v87; // [rsp+114h] [rbp-12Ch]
  int v88; // [rsp+118h] [rbp-128h]
  int vision_radius; // [rsp+11Ch] [rbp-124h]
  char v90; // [rsp+120h] [rbp-120h]
  char v91; // [rsp+121h] [rbp-11Fh]
  char v92; // [rsp+122h] [rbp-11Eh]
  char v93; // [rsp+123h] [rbp-11Dh]
  int v94; // [rsp+124h] [rbp-11Ch]
  int v95; // [rsp+128h] [rbp-118h]
  KeyValues *p_kv; // [rsp+130h] [rbp-110h]
  trace_t tr; // [rsp+140h] [rbp-100h] BYREF
  KeyValues kv; // [rsp+1F0h] [rbp-50h] BYREF
  unsigned __int64 v99; // [rsp+208h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v99 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v74 = *&CursorPosition.x;
  vDirection.x = CursorPosition.z;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  *(&info._vptr_CResponseCriteriaSet + 1) = CursorPosition.y + 0.0;
  v82 = m_fValue;
  *(&info.m_Lookup.m_Elements.m_pMemory + 1) = *(&info._vptr_CResponseCriteriaSet + 1)
                                             - *(&info._vptr_CResponseCriteriaSet + 1);
  HIDWORD(info.m_Lookup.m_LessFunc) = 0;
  memset(&info.m_Lookup.m_Elements.m_nGrowSize, 0, 28);
  *&info.m_Lookup.m_Elements.m_pMemory = (CursorPosition.x + 0.0) - (CursorPosition.x + 0.0);
  *&info.m_Lookup.m_Elements.m_nAllocationCount = (CursorPosition.z - 256.0) - (CursorPosition.z + 1024.0);
  v81 = 0;
  v80 = 0;
  *&info._vptr_CResponseCriteriaSet = CursorPosition.x + 0.0;
  *&info.m_Lookup.m_LessFunc = CursorPosition.z + 1024.0;
  LOBYTE(v83) = 1;
  BYTE1(v83) = (((*&info.m_Lookup.m_Elements.m_pMemory * *&info.m_Lookup.m_Elements.m_pMemory)
               + (*(&info.m_Lookup.m_Elements.m_pMemory + 1) * *(&info.m_Lookup.m_Elements.m_pMemory + 1)))
              + (*&info.m_Lookup.m_Elements.m_nAllocationCount * *&info.m_Lookup.m_Elements.m_nAllocationCount)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v78, 0, 4, 0);
  v78.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &info, &v78, &tr);
  x = tr.endpos.x;
  y = tr.endpos.y;
  z = tr.endpos.z;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v7 = x - AbsOrigin->x;
  v76 = y - AbsOrigin->y;
  v77 = 0.0;
  vDirection.z = v7;
  v8 = VectorNormalize(&vDirection.z);
  v9 = v8;
  if ( v8 < 0.0099999998 )
  {
    vStart = v8;
    v54 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v54);
    AngleVectors(AbsAngles, &vDirection.z, 0, 0);
    v9 = vStart;
  }
  v65 = v9;
  v10 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_rattletrap/rattletrap_rocket_flare.vpcf",
               2,
               0,
               0,
               v10);
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  vStarta = CDOTABaseAbility::GetCaster(this);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, Particle, 0, vStarta, 4, "attach_rocket", *v14, 1);
  *&v78._vptr_CTraceFilter = x + 0.0;
  *(&v78._vptr_CTraceFilter + 1) = y + 0.0;
  *&v78.m_attr.m_nInteractsWith = z + 32.0;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, Particle, 1, *&v78._vptr_CTraceFilter, *&v78.m_attr.m_nInteractsWith);
  *(&info._vptr_CResponseCriteriaSet + 4) = 0;
  *&info._vptr_CResponseCriteriaSet = LevelSpecialValue;
  vStart_8 = LevelSpecialValue;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v17,
    Particle,
    2,
    *&info._vptr_CResponseCriteriaSet,
    *&info.m_Lookup.m_LessFunc);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 7, v18, 2, 0, vec3_invalid, 1);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = v21->y;
  z_low = LODWORD(v21->z);
  *&info.m_Lookup.m_Elements.m_pMemory = v21->x;
  *(&info.m_Lookup.m_Elements.m_pMemory + 1) = v22;
  v83 = -1;
  info._vptr_CResponseCriteriaSet = 0;
  v24 = vec3_origin.y;
  LOWORD(v82) = 1;
  v25 = LODWORD(vec3_origin.z);
  v80 = 0;
  info.m_nNumPrefixedContexts = v25;
  info.m_Lookup.m_pElements = __PAIR64__(LODWORD(v24), LODWORD(vec3_origin.x));
  v81 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = -1;
  vision_radius = -1;
  v90 = 0;
  v91 = 1;
  v92 = 0;
  v93 = 0;
  p_kv = 0;
  v94 = 0;
  v95 = 0;
  info.m_Lookup.m_LessFunc = this;
  info.m_Lookup.m_Elements.m_nAllocationCount = z_low;
  *&info.m_bOverrideOnAppend = v65;
  *&info.m_Lookup.m_Root = v76 * vStart_8;
  *&info.m_Lookup.m_FirstFree = v77 * vStart_8;
  *&info.m_Lookup.m_Elements.m_nGrowSize = vStart_8 * vDirection.z;
  v26 = CDOTABaseAbility::GetCaster(this);
  if ( v26 != 0 && (m_pEntity = v26->m_pEntity) != 0 )
  {
    v28 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v29 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v83) = v29 | v83 & 0x8000;
    v83 = (v28 << 15) | v83 & 0x7FFF;
  }
  else
  {
    v83 = -1;
  }
  v87 = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vision_radius = v3;
  v88 = m_Value;
  KeyValues::KeyValues(&kv, "rocket_flare_projectile");
  KeyValues::SetFloat(&kv, "target_x", v31);
  KeyValues::SetFloat(&kv, "target_y", v32);
  KeyValues::SetFloat(&kv, "target_z", v33);
  KeyValues::SetFloat(&kv, "start_x", v34);
  KeyValues::SetFloat(&kv, "start_y", v35);
  KeyValues::SetFloat(&kv, "start_z", v36);
  KeyValues::SetInt(&kv, "fxindex", Particle);
  p_kv = &kv;
  LinearProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  KeyValues::~KeyValues(&kv);
  CDOTA_ProjectileManager::GetLinearProjectileVisionEntity(
    &hVisionEntity.m_Index,
    &g_DOTAProjectileManager,
    LinearProjectile);
  v38 = CEntityHandle::operator CEntityInstance *(&hVisionEntity);
  v39 = v38;
  if ( v38 != 0 && BYTE3(v38[7]._vptr_IHandleEntity) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_rattletrap_rocket_flare");
    v53 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v39, v53, this, "modifier_rattletrap_rocket_flare", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CResponseCriteriaSet::CResponseCriteriaSet(&info);
  v40 = this->m_pEntity;
  m_pAsString = "";
  if ( v40->m_designerName.u.m_Id != 0 )
    m_pAsString = v40->m_designerName.u.m_pAsString;
  CResponseCriteriaSet::AppendCriteria(&info, "abilityname", m_pAsString, 1.0);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 4, 0.5, &info, 3, 1, 0, 0, 0);
  }
  v43 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(24, "Hero_Rattletrap.Rocket_Flare.Fire", v43);
  v44 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Rattletrap.Rocket_Flare.Fire.FP", v44);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecEnemyHeroesInFog);
  v45 = 0;
  v46 = (CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == 2) + 2;
  do
  {
    NthPlayerIDOnTeam = CDOTA_PlayerResource::GetNthPlayerIDOnTeam(g_pDOTAPlayerResource, v46, ++v45);
    CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v73, g_pDOTAPlayerResource, NthPlayerIDOnTeam);
    if ( (v73[0] + 2) > 1 )
    {
      v48 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v73[0]) >> 9) & 0x3F];
      if ( v48 != 0 )
      {
        v49 = &v48[v73[0] & 0x1FF];
        if ( v49 != 0 && v73[0] == v49->m_EHandle.m_Index )
        {
          m_pInstance = v49->m_pInstance;
          if ( v49->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            v57 = CDOTABaseAbility::GetCaster(this);
            if ( !CBaseModelEntity::CanBeSeenByTeam(m_pInstance, v57->m_iTeamNum.m_Value) )
            {
              v58 = CDOTABaseAbility::GetCaster(this);
              if ( !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v58) )
              {
                v73[0] = -1;
                v59 = m_pInstance->m_pEntity;
                if ( v59 != 0 )
                {
                  v60 = (v59->m_EHandle.m_Index >> 15) - (v59->m_flags & 1);
                  v61 = 0x7FFF;
                  if ( v59->m_EHandle.m_Index != -1 )
                    v61 = v59->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v73[0]) = v61 | v73[0] & 0x8000;
                  v73[0] = (v60 << 15) | v73[0] & 0x7FFF;
                }
                m_Size = this->m_vecEnemyHeroesInFog.m_Size;
                v63 = this->m_vecEnemyHeroesInFog.m_Size;
                if ( m_Size == this->m_vecEnemyHeroesInFog.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vecEnemyHeroesInFog.m_Memory, 1);
                  v63 = this->m_vecEnemyHeroesInFog.m_Size;
                }
                this->m_vecEnemyHeroesInFog.m_Size = v63 + 1;
                v64 = &this->m_vecEnemyHeroesInFog.m_Memory.m_pMemory[m_Size];
                if ( v64 != 0 )
                  v64->m_Index = v73[0];
              }
            }
          }
        }
      }
    }
  }
  while ( v45 != 5 );
  v50 = CDOTABaseAbility::GetCaster(this);
  v51 = *&v50[1].m_DamageModifiers.m_Head;
  v52 = v50;
  if ( v51 != 0 )
  {
    CBaseEntity::AddEffects(v51, 32);
    (*(**&v52[1].m_DamageModifiers.m_Head + 1704LL))(*&v52[1].m_DamageModifiers.m_Head);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&info);
}


// CDOTA_Ability_Rattletrap_RocketFlare::OnProjectileHit_ExtraData  (line 1079, @0x0000000002bf17c0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, HasElement, IndexToIdentity, IsRealHero, IsValid, Length2D, LookupEntity, MarkPVSInformationDirty, RemoveEffects, Set, String, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetFloat, KeyValues::GetInt, CDOTAFogOfWarSystem::AddTempViewer, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (23 total)
// strings: "start_x", "start_y", "start_z", "fxindex", "particles/units/heroes/hero_rattletrap/rattletrap_rocket_flare_illumination.vpcf", "abilityname" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Rattletrap_RocketFlare::OnProjectileHit_ExtraData(
        CDOTA_Ability_Rattletrap_RocketFlare *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityInstance *v6; // rdx
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v9; // r12
  CDOTA_BaseNPC *v10; // r13
  int LevelSpecialValue; // r13d
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  int Int; // eax
  __m128i v19; // xmm3
  int v20; // ebx
  float v21; // r13d
  CDOTA_BaseNPC *v22; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rbx
  CDOTA_BaseNPC *v30; // rax
  __int64 v31; // r13
  int v32; // r12d
  CHandle<CBaseEntity> *v33; // rdx
  uint32 m_Index; // eax
  __int16 v35; // cx
  CEntityIdentity *v36; // rdx
  CEntityIdentity *v37; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v39; // rax
  double v40; // xmm0_8
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC_Hero *v42; // rdi
  CEntityIdentity *m_pEntity; // rax
  int v44; // edx
  __int16 v45; // cx
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC_Hero *v47; // rdi
  CEntityIdentity *v48; // rax
  const char *m_pAsString; // rdx
  float v50; // xmm2_4
  CDOTA_BaseNPC_Hero *v51; // rax
  bool bLongRangeHeroKill; // [rsp+3Bh] [rbp-A5h]
  float duration; // [rsp+3Ch] [rbp-A4h]
  float durationa; // [rsp+3Ch] [rbp-A4h]
  Vector vTarget; // [rsp+40h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+70h] [rbp-70h] BYREF

  v6 = CEntityHandle::operator CEntityInstance *(hTarget);
  result = 0;
  if ( v6 == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = *&Caster[1].m_DamageModifiers.m_Head;
    v10 = Caster;
    if ( v9 != 0 )
    {
      (*(v9->_vptr_IHandleEntity + 188))(*&Caster[1].m_DamageModifiers.m_Head, v9->m_fEffects.m_Value & 0xFFFFFFDF);
      v9->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(v9);
      (*(**&v10[1].m_DamageModifiers.m_Head + 1704LL))(*&v10[1].m_DamageModifiers.m_Head);
    }
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    vTarget.x = KeyValues::GetFloat(pExtraData, "target_x", v12);
    vTarget.y = KeyValues::GetFloat(pExtraData, "target_y", v13);
    vTarget.z = KeyValues::GetFloat(pExtraData, "target_z", v14);
    KeyValues::GetFloat(pExtraData, "start_x", v15);
    KeyValues::GetFloat(pExtraData, "start_y", v16);
    KeyValues::GetFloat(pExtraData, "start_z", v17);
    Int = KeyValues::GetInt(pExtraData, "fxindex", 0);
    *v19.m128i_i32 = LevelSpecialValue;
    v20 = Int;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_ROCKETFLARE,
      v22->m_iTeamNum.m_Value,
      &vTarget,
      v21,
      duration,
      0);
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nGrowSize = 0;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v20, 0);
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = GetParticleManager();
    LODWORD(v24) = CDOTA_ParticleManager::CreateParticle(
                     v25,
                     "particles/units/heroes/hero_rattletrap/rattletrap_rocket_flare_illumination.vpcf",
                     2,
                     0,
                     0,
                     v24);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, v24, 0, *&vTarget.x, vTarget.z);
    LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
    criteria._vptr_CResponseCriteriaSet = LODWORD(duration);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v27,
      v24,
      1,
      *&criteria._vptr_CResponseCriteriaSet,
      *&criteria.m_Lookup.m_LessFunc);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v28, v24);
    v29 = CDOTABaseAbility::GetCaster(this);
    v30 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v30->m_iTeamNum.m_Value, &vTarget, v29, v21, &entities, 2, 3, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v31 = 0;
      v32 = 0;
      bLongRangeHeroKill = 0;
      do
      {
        v33 = &entities.m_Memory.m_pMemory[v31];
        m_Index = entities.m_Memory.m_pMemory[v31].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v35 = v33->m_Index;
          v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v33->m_Index) >> 9) & 0x3F];
          if ( v36 != 0 )
          {
            v37 = &v36[v35 & 0x1FF];
            if ( v37 != 0 && m_Index == v37->m_EHandle.m_Index )
            {
              m_pInstance = v37->m_pInstance;
              if ( v37->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                durationa = (*(this->_vptr_IHandleEntity + 247))(this);
                v39 = CDOTABaseAbility::GetCaster(this);
                v40 = ApplyDamage(v39, m_pInstance, this, durationa, 2, 0);
                if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v40) == 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  if ( LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  {
                    v41 = CDOTABaseAbility::GetCaster(this);
                    if ( v41 != 0 && (v41->m_iUnitType & 1) != 0 )
                      v42 = v41;
                    else
                      v42 = 0;
                    EconEntity_OnOwnerKillEaterEvent(
                      v42,
                      0,
                      kill_eater_event_t::kKillEaterEvent_Clockwerk_RocketKills,
                      1,
                      INVALID_ITEM_DEF_INDEX);
                    LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
                    m_pEntity = m_pInstance->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v44 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      v45 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v45 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(criteria._vptr_CResponseCriteriaSet) = v45 | criteria._vptr_CResponseCriteriaSet & 0x8000;
                      LODWORD(criteria._vptr_CResponseCriteriaSet) = (v44 << 15)
                                                                   | criteria._vptr_CResponseCriteriaSet & 0x7FFF;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           &this->m_vecEnemyHeroesInFog,
                           &criteria) >= 0 )
                    {
                      v46 = CDOTABaseAbility::GetCaster(this);
                      if ( v46 != 0 && (v46->m_iUnitType & 1) != 0 )
                        v47 = v46;
                      else
                        v47 = 0;
                      EconEntity_OnOwnerKillEaterEvent(
                        v47,
                        0,
                        kill_eater_event_t::kKillEaterEvent_Clockwerk_BlindRocketKills,
                        1,
                        INVALID_ITEM_DEF_INDEX);
                    }
                  }
                  bLongRangeHeroKill = 1;
                }
              }
            }
          }
        }
        ++v32;
        ++v31;
      }
      while ( entities.m_Size > v32 );
      if ( bLongRangeHeroKill )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        v48 = this->m_pEntity;
        m_pAsString = "";
        if ( v48->m_designerName.u.m_Id != 0 )
          m_pAsString = v48->m_designerName.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", m_pAsString, 1.0);
        CResponseCriteriaSet::AppendCriteria(&criteria, "flaretraveldist", 1.0, v50);
        v51 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC_Hero::SetKillCriteria(v51, &criteria);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    return 1;
  }
  return result;
}


// CDOTA_Ability_Rattletrap_RocketFlare::GetAbilityDamageToTargetOverInterval  (line 1166, @0x0000000002bd64a0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Rattletrap_RocketFlare::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Rattletrap_RocketFlare *const this,
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


// CDOTA_Modifier_Rattletrap_RocketFlare::~CDOTA_Modifier_Rattletrap_RocketFlare  (line 1178, @0x0000000002c036d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::~CDOTA_Modifier_Rattletrap_RocketFlare(
        CDOTA_Modifier_Rattletrap_RocketFlare *const this)
{
  this->_vptr_CDOTA_Buff = &off_45527B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Rattletrap_RocketFlare::~CDOTA_Modifier_Rattletrap_RocketFlare  (line 1178, @0x0000000002c036f0, libserver.so)  // inlines: ~CDOTA_Modifier_Rattletrap_RocketFlare
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::~CDOTA_Modifier_Rattletrap_RocketFlare(
        CDOTA_Modifier_Rattletrap_RocketFlare *const this)
{
  this->_vptr_CDOTA_Buff = &off_45527B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_RocketFlare::IsHidden  (line 1186, @0x0000000002bff3e0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::IsHidden(CDOTA_Modifier_Rattletrap_RocketFlare *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_RocketFlare::GetPriority  (line 1187, @0x0000000002bff3f0, libserver.so)
int __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::GetPriority(CDOTA_Modifier_Rattletrap_RocketFlare *const this)
{
  return 2;
}


// CDOTA_Modifier_Rattletrap_RocketFlare::OnCreated  (line 1195, @0x0000000002bdfdf0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "Hero_Rattletrap.Rocket_Flare.Travel"
void __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::OnCreated(
        CDOTA_Modifier_Rattletrap_RocketFlare *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nFlareSound);
  Parent = CDOTA_Buff::GetParent(this);
  this->m_nFlareSound = DOTA_EmitSound(4, "Hero_Rattletrap.Rocket_Flare.Travel", Parent);
}


// CDOTA_Modifier_Rattletrap_RocketFlare::OnDestroy  (line 1205, @0x0000000002bdfe40, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CSoundOpGameSystem::StopSoundEvent, DOTA_EmitSoundLocation
// strings: "Hero_Rattletrap.Rocket_Flare.Explode"
void __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::OnDestroy(CDOTA_Modifier_Rattletrap_RocketFlare *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  Vector vPos; // [rsp+0h] [rbp-20h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nFlareSound);
  DOTA_EmitSoundLocation(&vPos, "Hero_Rattletrap.Rocket_Flare.Explode", 1);
}


// CDOTA_Modifier_Rattletrap_RocketFlare::CheckState  (line 1227, @0x0000000002bd3660, libserver.so)  // inlines: Disable
void __fastcall CDOTA_Modifier_Rattletrap_RocketFlare::CheckState(
        CDOTA_Modifier_Rattletrap_RocketFlare *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nDisabledStateMask |= 0x100000uLL;
  buffState->m_nEnabledStateMask &= ~0x100000uLL;
}


// CDOTA_Ability_Rattletrap_Hookshot::~CDOTA_Ability_Rattletrap_Hookshot  (line 1242, @0x0000000002c056c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::~CDOTA_Ability_Rattletrap_Hookshot(
        CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  this->_vptr_IHandleEntity = &off_4552B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Rattletrap_Hookshot::~CDOTA_Ability_Rattletrap_Hookshot  (line 1242, @0x0000000002c056e0, libserver.so)  // inlines: ~CDOTA_Ability_Rattletrap_Hookshot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::~CDOTA_Ability_Rattletrap_Hookshot(
        CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  this->_vptr_IHandleEntity = &off_4552B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Rattletrap_Hookshot::Schema_DynamicBinding  (line 1244, @0x0000000002bff400, libserver.so)
// globals: CDOTA_Ability_Rattletrap_Hookshot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_Hookshot::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  return CDOTA_Ability_Rattletrap_Hookshot::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1244, @0x0000000002bff410, libserver.so)
// globals: CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::DestructInstance  (line 1244, @0x0000000002bff420, libserver.so)  // inlines: Destruct<CDOTA_Ability_Rattletrap_Hookshot>
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::FreeInstance  (line 1244, @0x0000000002bff440, libserver.so)
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::CanAllocate  (line 1244, @0x0000000002bff460, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1244, @0x0000000002bff470, libserver.so)
// globals: CDOTA_Ability_Rattletrap_Hookshot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Rattletrap_Hookshot::s_pSchemaBinding;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::AllocateInstance  (line 1244, @0x0000000002c025f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::ConstructInstance  (line 1244, @0x0000000002c04bb0, libserver.so)  // inlines: CDOTA_Ability_Rattletrap_Hookshot, CEntityHandle, CHandle, Construct<CDOTA_Ability_Rattletrap_Hookshot>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 233) = 0;
    *p = &off_4552B50;
    *(p + 234) = -1;
    *(p + 235) = -1;
  }
  return p;
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1244, @0x0000000002c0acd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1244, @0x0000000002c0acf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal  (line 1244, @0x0000000002c14aa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Rattletrap_Hookshot"
// globals: `guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass, CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass, __dso_handle, CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo, CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass);
    CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass._vptr_CEntityClass = off_4552AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass);
    __cxa_atexit(
      CDOTA_Ability_Rattletrap_Hookshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Rattletrap_HookshotClass != 0 )
    return &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass;
  if ( `guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo,
      "CDOTA_Ability_Rattletrap_Hookshot",
      "rattletrap_hookshot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo);
  }
  CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass.m_pClassInfo = &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo;
  CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass.m_pBaseClassInfo = CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Rattletrap_HookshotClass = &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass;
  CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClassInfo.m_pClass = &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass;
  CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Rattletrap_HookshotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Rattletrap_Hookshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Rattletrap_HookshotClass;
}


// CDOTA_Ability_Rattletrap_Hookshot::GetAvoidRadius  (line 1254, @0x0000000002c1a410, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "latch_radius"
float __fastcall CDOTA_Ability_Rattletrap_Hookshot::GetAvoidRadius(CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "latch_radius", -1, 0) + 150.0;
}


// CDOTA_Ability_Rattletrap_Hookshot::IsAvoidMagical  (line 1255, @0x0000000002bff480, libserver.so)
bool __fastcall CDOTA_Ability_Rattletrap_Hookshot::IsAvoidMagical(CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  return 1;
}


// CDOTA_Ability_Rattletrap_Hookshot::GetAvoidStrength  (line 1256, @0x0000000002bff490, libserver.so)
float __fastcall CDOTA_Ability_Rattletrap_Hookshot::GetAvoidStrength(
        CDOTA_Ability_Rattletrap_Hookshot *const this,
        CDOTA_Bot *pBot)
{
  return 0.89999998;
}


// CDOTA_Ability_Rattletrap_Hookshot::YouForgotToImplementOrDeclareServerClass  (line 1274, @0x0000000002bd3680, libserver.so)
int __fastcall CDOTA_Ability_Rattletrap_Hookshot::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  return 0;
}


// CDOTA_Ability_Rattletrap_Hookshot::GetServerClass  (line 1274, @0x0000000002bdca30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Rattletrap_Hookshot::GetServerClass(
        CDOTA_Ability_Rattletrap_Hookshot *const this)
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


// CDOTA_Ability_Rattletrap_Hookshot::OnStolen  (line 1283, @0x0000000002bd3fb0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CDOTABaseAbility::GetCaster
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::OnStolen(
        CDOTA_Ability_Rattletrap_Hookshot *const this,
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


// CDOTA_Ability_Rattletrap_Hookshot::OnAbilityPhaseStart  (line 1293, @0x0000000002bd5320, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Rattletrap_Hookshot::OnAbilityPhaseStart(CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1551, 0.2, 0.2, 0, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Rattletrap_Hookshot::OnSpellStart  (line 1303, @0x0000000002be7900, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, InValidate, Set, StopSoundEvent, Vector, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::UnitEmitSound (22 total)
// strings: "latch_radius", "particles/units/heroes/hero_rattletrap/rattletrap_hookshot.vpcf", "attach_weapon", "Hero_Rattletrap.Hookshot.Fire"
void __fastcall CDOTA_Ability_Rattletrap_Hookshot::OnSpellStart(CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  vec_t v14; // xmm3_4
  vec_t v15; // xmm4_4
  vec_t z; // xmm1_4
  vec_t y; // xmm3_4
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // si
  int m_Value; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  vec_t v29; // xmm1_4
  vec_t v30; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v33; // r13
  CDOTA_ParticleManager *v34; // rax
  int v35; // r12d
  CDOTA_ParticleManager *v36; // rax
  int v37; // r12d
  CDOTA_ParticleManager *v38; // rax
  int v39; // r12d
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // r13
  int v42; // r12d
  CDOTA_ParticleManager *v43; // rax
  CSoundOpGameSystem *v44; // r13
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CBaseEntity *v47; // rdi
  CDOTA_BaseNPC *v48; // rbx
  CDOTA_BaseNPC *v49; // rax
  const QAngle *AbsAngles; // rax
  float v51; // [rsp+14h] [rbp-22Ch]
  float v52; // [rsp+18h] [rbp-228h]
  float v53; // [rsp+1Ch] [rbp-224h]
  Vector vDirection; // [rsp+20h] [rbp-220h] BYREF
  Vector vTargetPos; // [rsp+30h] [rbp-210h]
  __int64 v56; // [rsp+40h] [rbp-200h]
  float v57; // [rsp+48h] [rbp-1F8h]
  Vector vecFallbackPosition; // [rsp+50h] [rbp-1F0h]
  sLinearProjectileCreateInfo info; // [rsp+60h] [rbp-1E0h] BYREF
  CRecipientFilter v60; // [rsp+E0h] [rbp-160h] BYREF
  unsigned __int64 v61; // [rsp+218h] [rbp-28h]

  v61 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "latch_radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v6 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v7 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v6;
  vDirection.x = v7;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v49 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v49);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v8 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v51 = vDirection.x * v8;
  v52 = vDirection.y * v8;
  v53 = v8 * vDirection.z;
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = v52 + v10->y;
  v12 = v53 + v10->z;
  v13 = v51 + v10->x;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  vTargetPos.y = v11 + 0.0;
  vTargetPos.z = v12 + 96.0;
  vTargetPos.x = v13 + 0.0;
  v14 = vDirection.y * v3;
  v15 = v3 * vDirection.x;
  this->m_vProjectileVelocity.z = vDirection.z * v3;
  z = vec3_origin.z;
  this->m_vProjectileVelocity.y = v14;
  y = vec3_origin.y;
  this->m_vProjectileVelocity.x = v15;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.z = z;
  info.vAcceleration.z = z;
  info.fEndRadius = 0.0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
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
  info.pAbility = this;
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  info.vSpawnOrigin.x = v19->x;
  info.vSpawnOrigin.y = v19->y;
  v20 = v19->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vSpawnOrigin.z = v20;
  info.vVelocity = this->m_vProjectileVelocity;
  info.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  info.fStartRadius = LevelSpecialValue;
  info.fEndRadius = LevelSpecialValue;
  v22 = CDOTABaseAbility::GetCaster(this);
  if ( v22 != 0 && (m_pEntity = v22->m_pEntity) != 0 )
  {
    v24 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v24 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 3;
  info.iUnitTargetType = 3;
  info.iUnitTargetFlags = 80;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.bVisibleToEnemies = 0;
  info.iVisionRadius = 100;
  info.bIgnoreSource = 1;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  this->m_bRetract = 0;
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_rattletrap/rattletrap_hookshot.vpcf",
                       2,
                       0,
                       0,
                       0);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  v29 = v28->z + 96.0;
  v30 = v28->x + 0.0;
  vecFallbackPosition.y = v28->y + 0.0;
  vecFallbackPosition.z = v29;
  vecFallbackPosition.x = v30;
  v31 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v33 = v31;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v34, m_nFXIndex, 0, v33, 5, "attach_weapon", vecFallbackPosition, 1);
  v35 = this->m_nFXIndex;
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v36, v35, 1, *&vTargetPos.x, vTargetPos.z);
  v37 = this->m_nFXIndex;
  v57 = 0.0;
  v56 = COERCE_UNSIGNED_INT(v3);
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v37, 2, *&v56, v57);
  v39 = this->m_nFXIndex;
  v56 = 1092616192;
  v57 = 0.0;
  v40 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v40, v39, 3, *&v56, v57);
  if ( this->m_bStolen.m_Value )
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_hSourceCaster);
  else
    v41 = CDOTABaseAbility::GetCaster(this);
  v42 = this->m_nFXIndex;
  v43 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v43, v42, 7, v41, 2, 0, vec3_invalid, 1);
  v44 = g_pSoundOpGameSystem;
  if ( this->m_nHookshotSound.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v60);
    v60._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v60);
    v60._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v60);
    CSoundOpGameSystem::StopSoundEvent(v44, &v60, this->m_nHookshotSound);
    v60._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v60);
    this->m_nHookshotSound.m_nGuid.m_Data = 0;
    this->m_nHookshotSound.m_hStackHash = -1;
  }
  v45 = CDOTABaseAbility::GetCaster(this);
  this->m_nHookshotSound = CDOTA_BaseNPC::UnitEmitSound(v45, "Hero_Rattletrap.Hookshot.Fire", 0.0, 0, 0);
  v46 = CDOTABaseAbility::GetCaster(this);
  v47 = *&v46[1].m_vecVelocity.m_vecY.m_nEncoder;
  v48 = v46;
  if ( v47 != 0 )
  {
    CBaseEntity::AddEffects(v47, 32);
    (*(**&v48[1].m_vecVelocity.m_vecY.m_nEncoder + 1704LL))(*&v48[1].m_vecVelocity.m_vecY.m_nEncoder);
  }
}


// CDOTA_Ability_Rattletrap_Hookshot::OnProjectileHit  (line 1367, @0x0000000002bed810, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, FastSqrt, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetTogglableWearable, InState, InValidate, IsInvulnerable, IsRealHero, Length2D, MarkPVSInformationDirty, RemoveEffects, Set, SpeakConcept, StopSoundEvent, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, VectorAdd, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator+, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, KeyValues::SetPtr (32 total)
// strings: "Hero_Rattletrap.Hookshot.Impact", "modifier_stunned", "modifier_rattletrap_hookshot", "hookshot_hit", "attach_hitloc", "attach_attack1" (7 total)
// globals: INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Rattletrap_Hookshot::OnProjectileHit(
        CDOTA_Ability_Rattletrap_Hookshot *const this,
        const CEntityHandle *hTarget,
        const CFieldPath *vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v5; // rbx
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v14; // rax
  int LevelSpecialValue; // r15d
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // r15
  CDOTA_BaseNPC *v20; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  float v22; // xmm0_4
  __m128d v23; // xmm0
  unsigned int v24; // xmm4_4
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  int z_low; // xmm0_4
  vec_t y; // xmm1_4
  vec_t v32; // xmm0_4
  float x; // xmm3_4
  vec_t v34; // xmm0_4
  float z; // xmm1_4
  int v36; // xmm0_4
  float v37; // xmm2_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v39; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v41; // eax
  __int16 v42; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  const Vector *v47; // rax
  CDOTA_ParticleManager *v48; // rax
  int v49; // eax
  int m_nFXIndex; // esi
  __m128d v51; // xmm0
  unsigned int v52; // xmm4_4
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  CDOTA_BaseNPC *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  KeyValues *v57; // rsi
  CDOTA_BaseNPC *v58; // rax
  CDOTA_BaseNPC_Hero *v59; // rdi
  float pImpactDist; // [rsp+20h] [rbp-230h]
  CSoundOpGameSystem *iIndex; // [rsp+30h] [rbp-220h]
  unsigned __int8 iIndexb; // [rsp+30h] [rbp-220h]
  float iIndexa; // [rsp+30h] [rbp-220h]
  int iIndexc; // [rsp+30h] [rbp-220h]
  const Vector *iIndexd; // [rsp+30h] [rbp-220h]
  CDOTA_BaseNPC *iIndexe; // [rsp+30h] [rbp-220h]
  int pKVa; // [rsp+38h] [rbp-218h]
  int pKVb; // [rsp+38h] [rbp-218h]
  int pKVc; // [rsp+38h] [rbp-218h]
  int pKVd; // [rsp+38h] [rbp-218h]
  int pKVe; // [rsp+38h] [rbp-218h]
  int pKVf; // [rsp+38h] [rbp-218h]
  KeyValues *pKV; // [rsp+38h] [rbp-218h]
  double v74; // [rsp+50h] [rbp-200h]
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-1F0h] BYREF
  int v76; // [rsp+98h] [rbp-1B8h]
  int v77; // [rsp+9Ch] [rbp-1B4h]
  char v78; // [rsp+A0h] [rbp-1B0h]
  char v79; // [rsp+A1h] [rbp-1AFh]
  int v80; // [rsp+A4h] [rbp-1ACh]
  int v81; // [rsp+A8h] [rbp-1A8h]
  int v82; // [rsp+ACh] [rbp-1A4h]
  int v83; // [rsp+B0h] [rbp-1A0h]
  char v84; // [rsp+B4h] [rbp-19Ch]
  int v85; // [rsp+B8h] [rbp-198h]
  int v86; // [rsp+BCh] [rbp-194h]
  char v87; // [rsp+C0h] [rbp-190h]
  char v88; // [rsp+C1h] [rbp-18Fh]
  char v89; // [rsp+C2h] [rbp-18Eh]
  char v90; // [rsp+C3h] [rbp-18Dh]
  int v91; // [rsp+C4h] [rbp-18Ch]
  int v92; // [rsp+C8h] [rbp-188h]
  __int64 v93; // [rsp+D0h] [rbp-180h]
  KeyValues kv; // [rsp+E0h] [rbp-170h] BYREF
  unsigned __int64 v95; // [rsp+218h] [rbp-38h]
  Vector vecFallbackPosition; // 0:^40.12
  Vector v97; // 0:^50.12

  v95 = __readfsqword(0x28u);
  if ( this->m_bRetract )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = *&Caster[1].m_vecVelocity.m_vecY.m_nEncoder;
    v6 = Caster;
    if ( v5 != 0 )
    {
      (*(v5->_vptr_IHandleEntity + 188))(
        *&Caster[1].m_vecVelocity.m_vecY.m_nEncoder,
        v5->m_fEffects.m_Value & 0xFFFFFFDF);
      v5->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(v5);
      (*(**&v6[1].m_vecVelocity.m_vecY.m_nEncoder + 1704LL))(*&v6[1].m_vecVelocity.m_vecY.m_nEncoder);
    }
    return 1;
  }
  pImpactDist = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v10 = CEntityHandle::operator CEntityInstance *(hTarget);
  v11 = v10;
  if ( v10 == 0 || !v10->m_bIsDOTANPC )
  {
    v11 = 0;
    goto LABEL_26;
  }
  if ( CDOTABaseAbility::GetCaster(this) != v10 )
  {
    v12 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
    v14 = CBaseEntity::GetAbsOrigin(v11);
    pImpactDist = fsqrt(
                    ((v14->x - AbsOrigin->x) * (v14->x - AbsOrigin->x))
                  + ((v14->y - AbsOrigin->y) * (v14->y - AbsOrigin->y)));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Rattletrap.Hookshot.Impact", 0.0, 0, 0);
    iIndex = g_pSoundOpGameSystem;
    if ( this->m_nHookshotSound.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&kv);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&kv);
      kv.m_uValue = &off_3FCB130;
      CRecipientFilter::MakeReliable(&kv);
      CSoundOpGameSystem::StopSoundEvent(iIndex, &kv, this->m_nHookshotSound);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv);
      this->m_nHookshotSound.m_nGuid.m_Data = 0;
      this->m_nHookshotSound.m_hStackHash = -1;
    }
    iIndexb = v11->m_iTeamNum.m_Value;
    if ( iIndexb != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      && !v11->m_bIsWaitingToSpawn.m_Value
      && (v11->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v16);
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v11, v17, this, "modifier_stunned", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    iIndexa = pImpactDist / LevelSpecialValue;
    KeyValues::KeyValues(&kv, "modifier_stunned");
    KeyValues::SetFloat(&kv, "duration", v18);
    KeyValues::SetPtr(&kv, "target", v11);
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v20, v19, this, "modifier_rattletrap_hookshot", &kv, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "hookshot_hit", "1", 1.0);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
    v22 = iIndexa;
    iIndexc = this->m_nFXIndex;
    v23.m128d_f64[1] = (v22 + v22);
    v23.m128d_f64[0] = v23.m128d_f64[1] - 0.1;
    *&v24 = _mm_movedup_pd(v23).m128d_f64[0];
    *&v74 = v24;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, iIndexc, 3, v74, 0.0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    KeyValues::~KeyValues(&kv);
  }
  if ( (*(v11->_vptr_IHandleEntity + 408))(v11) == 0 )
  {
LABEL_26:
    v44 = CDOTABaseAbility::GetCaster(this);
    iIndexd = CBaseEntity::GetAbsOrigin(v44);
    pKVc = this->m_nFXIndex;
    v45 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v45, pKVc, 1, *&iIndexd->x, iIndexd->z);
    v46 = CDOTABaseAbility::GetCaster(this);
    v47 = CBaseEntity::GetAbsOrigin(v46);
    v97.x = v47->x + 0.0;
    v97.y = v47->y + 0.0;
    v97.z = v47->z + 96.0;
    iIndexe = CDOTABaseAbility::GetCaster(this);
    pKVd = this->m_nFXIndex;
    v48 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v48, pKVd, 1, iIndexe, 5, "attach_attack1", v97, 1);
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "latch_radius", -1, 0);
    v49 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
    m_nFXIndex = this->m_nFXIndex;
    LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
    pKVe = m_nFXIndex;
    v51.m128d_f64[1] = ((pImpactDist + pImpactDist) / v49);
    v51.m128d_f64[0] = v51.m128d_f64[1] - 0.1;
    *&v52 = _mm_movedup_pd(v51).m128d_f64[0];
    criteria._vptr_CResponseCriteriaSet = v52;
    v53 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v53,
      pKVe,
      3,
      *&criteria._vptr_CResponseCriteriaSet,
      *&criteria.m_Lookup.m_LessFunc);
    pKVf = this->m_nFXIndex;
    v54 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v54, pKVf);
    if ( v11 == 0 || (v11->m_iUnitType & 1) == 0 )
      goto LABEL_19;
LABEL_28:
    if ( !v11->m_bIsIllusion.m_Value )
    {
      v55 = CDOTABaseAbility::GetCaster(this);
      if ( !CBaseModelEntity::CanBeSeenByTeam(v11, v55->m_iTeamNum.m_Value) )
      {
        v56 = CDOTABaseAbility::GetCaster(this);
        if ( !CDOTA_BaseNPC::IsInvisibleTo(v11, v56) )
        {
          v57 = 0;
          if ( v11->m_bIsDOTANPC && (v11->m_iUnitType & 1) != 0 && !v11->m_bIsIllusion.m_Value )
            v57 = v11;
          pKV = v57;
          v58 = CDOTABaseAbility::GetCaster(this);
          if ( v58 != 0 && (v58->m_iUnitType & 1) != 0 )
            v59 = v58;
          else
            v59 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v59,
            pKV,
            kill_eater_event_t::kKillEaterEvent_Clockwerk_BlindHooks,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
    }
    goto LABEL_19;
  }
  v26 = CBaseEntity::GetAbsOrigin(v11);
  vecFallbackPosition.y = v26->y + 0.0;
  vecFallbackPosition.z = v26->z + 96.0;
  vecFallbackPosition.x = v26->x + 0.0;
  pKVa = this->m_nFXIndex;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v27, pKVa, 1, v11, 5, "attach_hitloc", vecFallbackPosition, 1);
  pKVb = this->m_nFXIndex;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v28, pKVb);
  if ( (v11->m_iUnitType & 1) != 0 )
    goto LABEL_28;
LABEL_19:
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_HOOKSHOT,
    v29->m_iTeamNum.m_Value,
    vLocation,
    450.0,
    0.1,
    1);
  z_low = LODWORD(vec3_origin.z);
  y = vec3_origin.y;
  v78 = 1;
  criteria.m_nNumPrefixedContexts = z_low;
  v32 = *&vLocation->u.m_pPaths;
  x = this->m_vProjectileVelocity.x;
  criteria.m_Lookup.m_pElements = __PAIR64__(LODWORD(y), LODWORD(vec3_origin.x));
  *&criteria.m_Lookup.m_Elements.m_pMemory = v32;
  v34 = *&vLocation->u.m_FixedPaths[2].m_nValue;
  z = this->m_vProjectileVelocity.z;
  v80 = -1;
  *(&criteria.m_Lookup.m_Elements.m_pMemory + 1) = v34;
  v36 = *&vLocation->u.m_FixedPaths[4].m_nValue;
  v37 = this->m_vProjectileVelocity.y;
  criteria._vptr_CResponseCriteriaSet = 0;
  criteria.m_Lookup.m_Elements.m_nAllocationCount = v36;
  *&criteria.m_bOverrideOnAppend = 0;
  v76 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v86 = -1;
  v87 = 0;
  v88 = 1;
  v89 = 0;
  v90 = 0;
  v93 = 0;
  v91 = 0;
  v92 = 0;
  criteria.m_Lookup.m_LessFunc = this;
  *&criteria.m_Lookup.m_Elements.m_nGrowSize = -x;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *&criteria.m_Lookup.m_Root = -v37;
  *&criteria.m_Lookup.m_FirstFree = -z;
  *&criteria.m_bOverrideOnAppend = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  v39 = CDOTABaseAbility::GetCaster(this);
  if ( v39 != 0 && (m_pEntity = v39->m_pEntity) != 0 )
  {
    v41 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v42 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v42 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v80) = v42 | v80 & 0x8000;
    v80 = (v41 << 15) | v80 & 0x7FFF;
  }
  else
  {
    v80 = -1;
  }
  v84 = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v88 = 0;
  v86 = 100;
  v89 = 1;
  v85 = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &criteria);
  this->m_bRetract = 1;
  return 1;
}


// CDOTA_Ability_Rattletrap_Hookshot::GetCooldown  (line 1470, @0x0000000002befc30, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Rattletrap_Hookshot::GetCooldown(
        CDOTA_Ability_Rattletrap_Hookshot *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Rattletrap_Hookshot::GetAbilityDamageToTargetOverInterval  (line 1477, @0x0000000002be94a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Rattletrap_Hookshot::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Rattletrap_Hookshot *const this,
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


// CDOTA_Ability_Rattletrap_Hookshot::GetStunDuration  (line 1487, @0x0000000002be9500, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Rattletrap_Hookshot::GetStunDuration(CDOTA_Ability_Rattletrap_Hookshot *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Rattletrap_Hookshot::~CDOTA_Modifier_Rattletrap_Hookshot  (line 1496, @0x0000000002c19ab0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::~CDOTA_Modifier_Rattletrap_Hookshot(
        CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4553610;
  this->_vptr_CHorizontalMotionController = &off_4553900;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDamaged);
  if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory),
        (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Rattletrap_Hookshot::~CDOTA_Modifier_Rattletrap_Hookshot  (line 1496, @0x0000000002c19e90, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Rattletrap_Hookshot, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::~CDOTA_Modifier_Rattletrap_Hookshot(
        CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4553610;
  this->_vptr_CHorizontalMotionController = &off_4553900;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDamaged);
  if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
    if ( (this->m_hDamaged.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDamaged.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Rattletrap_Hookshot::IsPurgable  (line 1507, @0x0000000002bff4a0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Hookshot::IsPurgable(CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  return 0;
}


// CDOTA_Modifier_Rattletrap_Hookshot::IsHorizontalMotionValidToApply  (line 1513, @0x0000000002bff4b0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Rattletrap_Hookshot::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Rattletrap_Hookshot::IsMotionController  (line 1515, @0x0000000002bff4e0, libserver.so)
bool __fastcall CDOTA_Modifier_Rattletrap_Hookshot::IsMotionController(CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  return 1;
}


// CDOTA_Modifier_Rattletrap_Hookshot::OnCreated  (line 1537, @0x0000000002bf3a10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, KeyValues::GetPtr, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::Destroy
// strings: "stun_radius", "Hero_Rattletrap.Hookshot.Retract"
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::OnCreated(
        CDOTA_Modifier_Rattletrap_Hookshot *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v9; // rax
  _QWORD *Ptr; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v15; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->speed, "speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->stun_radius, "stun_radius");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->damage, "damage");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "duration", -1, 0);
  else
    this->duration = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  v9 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v9, &this->CHorizontalMotionController, 0)
    && (Ptr = KeyValues::GetPtr(pKV, "target", 0)) != 0
    && *(Ptr + 339) != 0 )
  {
    v11 = Ptr[1];
    if ( v11 != 0 )
    {
      v12 = (*(v11 + 16) >> 15) - (*(v11 + 48) & 1);
      v13 = 0x7FFF;
      if ( *(v11 + 16) != -1 )
        v13 = *(v11 + 16) & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v13 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1552, 0.0, 0.0, 0, 0, 1.0);
    v15 = CDOTA_Buff::GetCaster(this);
    this->m_nRetractSound = CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_Rattletrap.Hookshot.Retract", 0.0, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Rattletrap_Hookshot::OnDestroy  (line 1568, @0x0000000002bdb660, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, InValidate, IndexToIdentity, IsValid, LookupEntity, SpeakConcept, StopSoundEvent, String, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria (16 total)
// strings: "hookshot_target_reached", "targetclassname", "Hero_Rattletrap.Hookshot.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::OnDestroy(CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CSoundOpGameSystem *v8; // r13
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-1A0h] BYREF
  CRecipientFilter v14; // [rsp+50h] [rbp-160h] BYREF
  unsigned __int64 v15; // [rsp+188h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
          CResponseCriteriaSet::AppendCriteria(&criteria, "hookshot_target_reached", "1", 1.0);
          m_pEntity = m_pInstance->m_pEntity;
          m_pAsString = "";
          if ( m_pEntity->m_designerName.u.m_Id != 0 )
            m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
          CResponseCriteriaSet::AppendCriteria(&criteria, "targetclassname", m_pAsString, 1.0);
          m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Rattletrap.Hookshot.Damage", 0.0, 0, 0);
          CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        }
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v6, &this->CHorizontalMotionController);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1553, 0.0, 0.2, 0, 0, 1.0);
  v8 = g_pSoundOpGameSystem;
  if ( this->m_nRetractSound.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v14);
    v14._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v14);
    v14._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v14);
    CSoundOpGameSystem::StopSoundEvent(v8, &v14, this->m_nRetractSound);
    v14._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v14);
    this->m_nRetractSound.m_nGuid.m_Data = 0;
    this->m_nRetractSound.m_hStackHash = -1;
  }
}


// CDOTA_Modifier_Rattletrap_Hookshot::UpdateHorizontalMotion  (line 1597, @0x0000000002bf7630, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DotProduct, Element, FastSqrt, Get, GetInstance, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, HasElement, InState, IsInvulnerable, Length2D, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (22 total)
// strings: "modifier_stunned"
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::UpdateHorizontalMotion(
        CDOTA_Modifier_Rattletrap_Hookshot *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CEntityInstance *v5; // rax
  float v6; // xmm1_4
  __m128i v7; // xmm3
  float v8; // r12d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // r12
  int v14; // r13d
  CHandle<CBaseEntity> *v15; // r15
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v20; // r15
  CDOTA_BaseNPC *v21; // rax
  __int64 m_Size; // r14
  int v23; // eax
  CHandle<CBaseEntity> *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r12
  const Vector *v27; // rax
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  float speed; // xmm0_4
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  __m128i v33; // xmm3
  __m128i v34; // xmm2
  float v35; // r14d
  CDOTA_BaseNPC *v36; // rax
  const Vector *v37; // rax
  vec_t v38; // xmm1_4
  vec_t v39; // xmm0_4
  float v40; // xmm7_4
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // rax
  const Vector *v43; // rax
  vec_t v44; // xmm0_4
  vec_t v45; // xmm2_4
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  float v48; // xmm2_4
  float v49; // xmm1_4
  const Vector *v50; // rax
  float v51; // xmm0_4
  int v52; // xmm2_4
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  const Vector *v55; // r12
  CDOTA_BaseNPC *v56; // rax
  __m128i v57; // xmm5
  float v58; // r13d
  CDOTA_BaseNPC *v59; // r12
  CDOTA_BaseNPC *v60; // rax
  const Vector *v61; // r14
  CDOTA_BaseNPC *v62; // rax
  __int64 v63; // r12
  int v64; // r13d
  CHandle<CBaseEntity> *v65; // r14
  CEntityInstance *v66; // rax
  CDOTABaseAbility *v67; // r14
  CDOTA_BaseNPC *v68; // rax
  CDOTABaseAbility *v69; // r14
  CDOTA_BaseNPC *v70; // rax
  __int64 v71; // r14
  int v72; // eax
  CHandle<CBaseEntity> *v73; // rax
  const Vector *v74; // r12
  CDOTA_BaseNPC *v75; // rax
  float dtb; // [rsp+2Ch] [rbp-D4h]
  float flToTargetLena; // [rsp+30h] [rbp-D0h]
  float flToTargetLen; // [rsp+30h] [rbp-D0h]
  float flToTargetLenb; // [rsp+30h] [rbp-D0h]
  float flToTargetLenc; // [rsp+30h] [rbp-D0h]
  CBaseEntity *v82; // [rsp+40h] [rbp-C0h]
  float TARGET_RANGEc; // [rsp+58h] [rbp-A8h]
  float TARGET_RANGEd; // [rsp+58h] [rbp-A8h]
  float TARGET_RANGE; // [rsp+58h] [rbp-A8h]
  float TARGET_RANGEe; // [rsp+58h] [rbp-A8h]
  CDOTA_BaseNPC *TARGET_RANGEa; // [rsp+58h] [rbp-A8h]
  CHandle<CBaseEntity> *TARGET_RANGEb; // [rsp+58h] [rbp-A8h]
  Vector vDirection; // [rsp+60h] [rbp-A0h] BYREF
  Vector vNewLocation; // [rsp+70h] [rbp-90h] BYREF
  Vector vNewDirection; // [rsp+80h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v94; // [rsp+C8h] [rbp-38h]

  v94 = __readfsqword(0x28u);
  v5 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v82 = v5;
  if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_stunned");
    KeyValues::SetFloat(&kv, "duration", v6);
    *v7.m128i_i32 = this->stun_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    Parent = CDOTA_Buff::GetParent(this);
    v10 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, Parent, v8, &entities, 2, 19, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        while ( 1 )
        {
          v15 = &entities.m_Memory.m_pMemory[v13];
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                 &this->m_hDamaged,
                 &entities.m_Memory.m_pMemory[v13]) < 0 )
          {
            v16 = CEntityHandle::operator CEntityInstance *(v15);
            v17 = v16;
            if ( v16 != 0
              && BYTE3(v16[7]._vptr_IHandleEntity) != 0
              && LOBYTE(v16[71]._vptr_IHandleEntity) == 0
              && (BYTE1(v16[58]._vptr_IHandleEntity) & 1) == 0 )
            {
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v17, Caster, Ability, "modifier_stunned", &kv, 0);
              flToTargetLena = this->damage;
              v20 = CDOTA_Buff::GetAbility(this);
              v21 = CDOTA_Buff::GetParent(this);
              ApplyDamage(v21, v17, v20, flToTargetLena, 2, 0);
              v15 = &entities.m_Memory.m_pMemory[v13];
            }
            m_Size = this->m_hDamaged.m_Size;
            v23 = this->m_hDamaged.m_Size;
            if ( m_Size == this->m_hDamaged.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hDamaged.m_Memory, 1);
              v23 = this->m_hDamaged.m_Size;
            }
            this->m_hDamaged.m_Size = v23 + 1;
            v24 = &this->m_hDamaged.m_Memory.m_pMemory[m_Size];
            if ( v24 != 0 )
              break;
          }
          ++v14;
          ++v13;
          if ( entities.m_Size <= v14 )
            goto LABEL_16;
        }
        ++v14;
        ++v13;
        v24->m_Index = v15->m_Index;
      }
      while ( entities.m_Size > v14 );
    }
LABEL_16:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    v25 = CDOTA_Buff::GetParent(this);
    v26 = CBaseEntity::GetAbsOrigin(v25);
    v27 = CBaseEntity::GetAbsOrigin(v82);
    v28 = v27->y - v26->y;
    v29 = v27->z - v26->z;
    vDirection.x = v27->x - v26->x;
    vDirection.y = v28;
    vDirection.z = v29;
    VectorNormalize(&vDirection);
    speed = this->speed;
    x_low = LODWORD(vDirection.x);
    y_low = LODWORD(vDirection.y);
    *x_low.m128i_i32 = vDirection.x * speed;
    *y_low.m128i_i32 = vDirection.y * speed;
    v33 = x_low;
    *v33.m128i_i32 = (vDirection.x * speed) * a3;
    v34 = y_low;
    *v34.m128i_i32 = (vDirection.y * speed) * a3;
    v35 = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
    LODWORD(v26) = _mm_cvtsi128_si32(v34);
    TARGET_RANGEc = a3 * (speed * vDirection.z);
    v36 = CDOTA_Buff::GetParent(this);
    v37 = CBaseEntity::GetAbsOrigin(v36);
    v38 = *&v26 + v37->y;
    v39 = TARGET_RANGEc + v37->z;
    v40 = *&v82[2].m_bNetworkQuantizeOriginAndAngles + v82[2].m_flOverriddenFriction;
    vNewLocation.x = v35 + v37->x;
    vNewLocation.y = v38;
    vNewLocation.z = v39;
    TARGET_RANGEd = v40;
    v41 = CDOTA_Buff::GetParent(this);
    TARGET_RANGE = (TARGET_RANGEd + (v41->m_flHullRadius + v41->m_flCollisionPadding)) + 5.0;
    v42 = CBaseEntity::GetAbsOrigin(v82);
    flToTargetLen = fsqrt(
                      ((vNewLocation.x - v42->x) * (vNewLocation.x - v42->x))
                    + ((vNewLocation.y - v42->y) * (vNewLocation.y - v42->y)));
    v43 = CBaseEntity::GetAbsOrigin(v82);
    v44 = v43->z - vNewLocation.z;
    v45 = v43->x - vNewLocation.x;
    vNewDirection.y = v43->y - vNewLocation.y;
    vNewDirection.z = v44;
    vNewDirection.x = v45;
    VectorNormalize(&vNewDirection);
    if ( (((vNewDirection.x * vDirection.x) + (vNewDirection.y * vDirection.y)) + (vNewDirection.z * vDirection.z)) < 0.0
      || TARGET_RANGE > flToTargetLen )
    {
      v48 = vDirection.y * TARGET_RANGE;
      v49 = vDirection.z * TARGET_RANGE;
      TARGET_RANGEe = vDirection.x * TARGET_RANGE;
      flToTargetLenb = v48;
      dtb = v49;
      v50 = CBaseEntity::GetAbsOrigin(v82);
      v51 = v50->z - dtb;
      *&v52 = v50->x - TARGET_RANGEe;
      *(&entities.m_Size + 1) = v50->y - flToTargetLenb;
      *&entities.m_Memory.m_pMemory = v51;
      entities.m_Size = v52;
      v53 = CDOTA_Buff::GetParent(this);
      CBaseEntity::SetAbsOrigin(v53, &entities);
      v54 = CDOTA_Buff::GetParent(this);
      v55 = CBaseEntity::GetAbsOrigin(v54);
      v56 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::DoesUnitCollideAtPosition(v56, 1, *&v55->x, v55->z) )
      {
        v74 = CBaseEntity::GetAbsOrigin(v82);
        v75 = CDOTA_Buff::GetParent(this);
        CBaseEntity::SetAbsOrigin(v75, v74);
      }
      *v57.m128i_i32 = this->stun_radius;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v58 = COERCE_FLOAT(_mm_cvtsi128_si32(v57));
      v59 = CDOTA_Buff::GetParent(this);
      v60 = CDOTA_Buff::GetParent(this);
      v61 = CBaseEntity::GetAbsOrigin(v60);
      v62 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v62->m_iTeamNum.m_Value, v61, v59, v58, &entities, 2, 19, 0, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v63 = 0;
        v64 = 0;
        do
        {
          while ( 1 )
          {
            v65 = &entities.m_Memory.m_pMemory[v63];
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hDamaged,
                   &entities.m_Memory.m_pMemory[v63]) < 0 )
            {
              v66 = CEntityHandle::operator CEntityInstance *(v65);
              TARGET_RANGEa = v66;
              if ( v66 == 0
                || BYTE3(v66[7]._vptr_IHandleEntity) == 0
                || LOBYTE(v66[71]._vptr_IHandleEntity) != 0
                || (BYTE1(v66[58]._vptr_IHandleEntity) & 1) != 0 )
              {
                TARGET_RANGEb = v65;
              }
              else
              {
                v67 = CDOTA_Buff::GetAbility(this);
                v68 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(TARGET_RANGEa, v68, v67, "modifier_stunned", &kv, 0);
                flToTargetLenc = this->damage;
                v69 = CDOTA_Buff::GetAbility(this);
                v70 = CDOTA_Buff::GetParent(this);
                ApplyDamage(v70, TARGET_RANGEa, v69, flToTargetLenc, 2, 0);
                TARGET_RANGEb = &entities.m_Memory.m_pMemory[v63];
              }
              v71 = this->m_hDamaged.m_Size;
              v72 = this->m_hDamaged.m_Size;
              if ( v71 == this->m_hDamaged.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hDamaged.m_Memory, 1);
                v72 = this->m_hDamaged.m_Size;
              }
              this->m_hDamaged.m_Size = v72 + 1;
              v73 = &this->m_hDamaged.m_Memory.m_pMemory[v71];
              if ( v73 != 0 )
                break;
            }
            ++v64;
            ++v63;
            if ( entities.m_Size <= v64 )
              goto LABEL_36;
          }
          ++v64;
          ++v63;
          v73->m_Index = TARGET_RANGEb->m_Index;
        }
        while ( entities.m_Size > v64 );
      }
LABEL_36:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
    else
    {
      VectorAngles(&vDirection, &entities);
      entities.m_Size = 0;
      LODWORD(entities.m_Memory.m_pMemory) = 0;
      v46 = CDOTA_Buff::GetParent(this);
      CBaseEntity::SetAbsAngles(v46, &entities);
      v47 = CDOTA_Buff::GetParent(this);
      CBaseEntity::SetAbsOrigin(v47, &vNewLocation);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Rattletrap_Hookshot::OnHorizontalMotionInterrupted  (line 1703, @0x0000000002bd4890, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Rattletrap_Hookshot *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Rattletrap_Hookshot::CheckState  (line 1712, @0x0000000002bd3690, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Rattletrap_Hookshot::CheckState(
        CDOTA_Modifier_Rattletrap_Hookshot *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xAuLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFF5LL;
}


