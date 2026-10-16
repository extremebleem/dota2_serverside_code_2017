// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:41
class CDOTA_Unit_Hero_EmberSpirit : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_EmberSpirit(CDOTA_Unit_Hero_EmberSpirit &);
	CDOTA_Unit_Hero_EmberSpirit(CDOTA_Unit_Hero_EmberSpirit &);
	CDOTA_Unit_Hero_EmberSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_EmberSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:49
class C_CDOTA_Unit_Hero_EmberSpirit_MapInstall {
	C_CDOTA_Unit_Hero_EmberSpirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:65
class CDOTA_Ability_EmberSpirit_SearingChains : public CDOTABaseAbility {
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
	CDOTA_Ability_EmberSpirit_SearingChains(CDOTA_Ability_EmberSpirit_SearingChains &);
	CDOTA_Ability_EmberSpirit_SearingChains(CDOTA_Ability_EmberSpirit_SearingChains &);
	CDOTA_Ability_EmberSpirit_SearingChains();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_EmberSpirit_SearingChains();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:80
class C_CDOTA_Ability_EmberSpirit_SearingChains_MapInstall {
	C_CDOTA_Ability_EmberSpirit_SearingChains_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:180
class CDOTA_Modifier_EmberSpirit_SearingChains : public CDOTA_Buff {
public:

private:

	int chains_damage;  // +0xba8
	float tick_interval;  // +0xbac
	CDOTA_Modifier_EmberSpirit_SearingChains();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_EmberSpirit_SearingChains();

	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:253
class CDOTA_Ability_EmberSpirit_SleightOfFist : public CDOTABaseAbility {
public:

private:

	int m_nHeroesKilled;  // +0x39c
	int m_nFXMarkerIndex;  // +0x3b8
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
	CDOTA_Ability_EmberSpirit_SleightOfFist(CDOTA_Ability_EmberSpirit_SleightOfFist &);
	CDOTA_Ability_EmberSpirit_SleightOfFist(CDOTA_Ability_EmberSpirit_SleightOfFist &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	CDOTA_Ability_EmberSpirit_SleightOfFist();
	virtual void OnSpellStart();
	void DoFistAttack();
	void EndSleightOfFist();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_EmberSpirit_SleightOfFist();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:281
class C_CDOTA_Ability_EmberSpirit_SleightOfFist_MapInstall {
	C_CDOTA_Ability_EmberSpirit_SleightOfFist_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:487
class CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker : public CDOTA_Buff {
public:

	CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker(CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker &);
	CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker(const CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker &);
	CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:509
class CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster : public CDOTA_Buff {
public:

private:

	int bonus_hero_damage;  // +0xba8
	int creep_damage_penalty;  // +0xbac
	int radius;  // +0xbb0
	float attack_interval;  // +0xbb4
	CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnDestroy();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	virtual void OnIntervalThink();
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:656
class CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability : public CDOTA_Buff {
public:

	CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability();

	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:685
class CDOTA_Ability_EmberSpirit_FlameGuard : public CDOTABaseAbility {
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
	CDOTA_Ability_EmberSpirit_FlameGuard(CDOTA_Ability_EmberSpirit_FlameGuard &);
	CDOTA_Ability_EmberSpirit_FlameGuard(CDOTA_Ability_EmberSpirit_FlameGuard &);
	CDOTA_Ability_EmberSpirit_FlameGuard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_EmberSpirit_FlameGuard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:728
class CDOTA_Modifier_EmberSpirit_FlameGuard : public CDOTA_Buff {
public:

private:

	int absorb_amount;  // +0xba8
	int damage_per_second;  // +0xbac
	int radius;  // +0xbb0
	float tick_interval;  // +0xbb4
	int m_nAbsorbRemaining;  // +0xbb8
	float m_flShowParticleInterval;  // +0xbbc
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierIncomingSpellDamageConstant(const CModifierParams &);
	virtual void OnIntervalThink();
	CDOTA_Modifier_EmberSpirit_FlameGuard();
	virtual ~CDOTA_Modifier_EmberSpirit_FlameGuard();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:901
class CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xbc0
	float charge_restore_time;  // +0xbc4
	bool m_bIsThinking;  // +0xbc8
	CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	void AddActiveRemnant(EHANDLE);
	void RemoveActiveRemnant(EHANDLE);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1009
class CDOTA_Modifier_EmberSpirit_FireRemnantThinker : public CDOTA_Buff {
public:

private:

	int m_nProjectileHandle;  // +0xba8
	CDOTA_Modifier_EmberSpirit_FireRemnantThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	void StartFX();
	virtual ~CDOTA_Modifier_EmberSpirit_FireRemnantThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1115
struct RemnantData_t {
private:

	EHANDLE m_hRemnant;  // +0x0
	int m_nProjectileHandle;  // +0x4
	RemnantData_t();

	RemnantData_t(const RemnantData_t &);
	RemnantData_t & operator=(const RemnantData_t &);

	// sizeof = 8
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1123
class CDOTA_Ability_EmberSpirit_FireRemnant : public CDOTABaseAbility {
public:

private:

	int max_charges;  // +0x3a8
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
	CDOTA_Ability_EmberSpirit_FireRemnant(CDOTA_Ability_EmberSpirit_FireRemnant &);
	CDOTA_Ability_EmberSpirit_FireRemnant(CDOTA_Ability_EmberSpirit_FireRemnant &);
	CDOTA_Ability_EmberSpirit_FireRemnant();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool ProcsMagicStick();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(int);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual const char * GetIntrinsicModifierName();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual bool IsRefreshable();
	virtual void RefreshCharges();
	virtual ~CDOTA_Ability_EmberSpirit_FireRemnant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[239] ProcsMagicStick
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[292] OnProjectileThink
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[280] GetIntrinsicModifierName
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[217] IsRefreshable
	// vtable[318] RefreshCharges
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1156
class C_CDOTA_Ability_EmberSpirit_FireRemnant_MapInstall {
	C_CDOTA_Ability_EmberSpirit_FireRemnant_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1421
class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int m_nProjectileID;  // +0x39c
	EHANDLE m_hRemnantToKill;  // +0x3c4
	bool m_bProjectileStarted;  // +0x3c8
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
	CDOTA_Ability_EmberSpirit_Activate_FireRemnant(CDOTA_Ability_EmberSpirit_Activate_FireRemnant &);
	CDOTA_Ability_EmberSpirit_Activate_FireRemnant(CDOTA_Ability_EmberSpirit_Activate_FireRemnant &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_EmberSpirit_Activate_FireRemnant();
	virtual void OnSpellStart();
	void CreateRemnantProjectile(EHANDLE);
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_EmberSpirit_Activate_FireRemnant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 976
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1460
class C_CDOTA_Ability_EmberSpirit_Activate_FireRemnant_MapInstall {
	C_CDOTA_Ability_EmberSpirit_Activate_FireRemnant_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1809
class CDOTA_Modifier_EmberSpirit_FireRemnant_Timer : public CDOTA_Buff {
public:

	CDOTA_Modifier_EmberSpirit_FireRemnant_Timer(CDOTA_Modifier_EmberSpirit_FireRemnant_Timer &);
	CDOTA_Modifier_EmberSpirit_FireRemnant_Timer(const CDOTA_Modifier_EmberSpirit_FireRemnant_Timer &);
	CDOTA_Modifier_EmberSpirit_FireRemnant_Timer();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual ~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer();

	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_ember_spirit.cpp:1825
class CDOTA_Modifier_EmberSpirit_FireRemnant : public CDOTA_Buff {
public:

	CDOTA_Modifier_EmberSpirit_FireRemnant();
	virtual const char * GetTexture();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_EmberSpirit_FireRemnant();

	// vtable[32] GetTexture
	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_EmberSpirit::~CDOTA_Unit_Hero_EmberSpirit  (line 41, @0x0000000002c99f50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_EmberSpirit::~CDOTA_Unit_Hero_EmberSpirit(CDOTA_Unit_Hero_EmberSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45B4370;
  this->_vptr_INextBotEventResponder = &off_45B5350;
  this->_vptr_CObstructionObject = &off_45B5680;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_EmberSpirit::~CDOTA_Unit_Hero_EmberSpirit  (line 41, @0x0000000002c99f90, libserver.so)  // inlines: ~CDOTA_Unit_Hero_EmberSpirit
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_EmberSpirit::~CDOTA_Unit_Hero_EmberSpirit(CDOTA_Unit_Hero_EmberSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45B4370;
  this->_vptr_INextBotEventResponder = &off_45B5350;
  this->_vptr_CObstructionObject = &off_45B5680;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_EmberSpirit::Schema_DynamicBinding  (line 43, @0x0000000002c88dc0, libserver.so)
// globals: CDOTA_Unit_Hero_EmberSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_EmberSpirit::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_EmberSpirit *const this)
{
  return CDOTA_Unit_Hero_EmberSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002c88df0, libserver.so)
// globals: CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002c88e00, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_EmberSpirit>
void __fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002c88e20, libserver.so)
void __fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002c88e40, libserver.so)
bool __fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002c88e50, libserver.so)
// globals: CDOTA_Unit_Hero_EmberSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_EmberSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002c8fba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002c93ff0, libserver.so)  // inlines: CDOTA_Unit_Hero_EmberSpirit, Construct<CDOTA_Unit_Hero_EmberSpirit>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45B4370;
    *(p + 236) = &off_45B5350;
    *(p + 257) = &off_45B5680;
  }
  return p;
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002ca36b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002ca3780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal  (line 43, @0x0000000002cbdad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_ember_spirit", "CDOTA_Unit_Hero_EmberSpirit"
// globals: `guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass, CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass, __dso_handle, CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo, CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass);
    CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass._vptr_CEntityClass = off_45B42F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_EmberSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_EmberSpiritClass != 0 )
    return &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass;
  if ( `guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo,
      "CDOTA_Unit_Hero_EmberSpirit",
      "npc_dota_hero_ember_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo);
  }
  CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass.m_pClassInfo = &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo;
  CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass.m_pBaseClassInfo = CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_EmberSpiritClass = &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass;
  CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClassInfo.m_pClass = &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass;
  CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_EmberSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_EmberSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EmberSpiritClass;
}


// CDOTA_Unit_Hero_EmberSpirit::YouForgotToImplementOrDeclareServerClass  (line 49, @0x0000000002c1c670, libserver.so)
int __fastcall CDOTA_Unit_Hero_EmberSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_EmberSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_EmberSpirit::GetServerClass  (line 49, @0x0000000002c35d70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_EmberSpirit::GetServerClass(CDOTA_Unit_Hero_EmberSpirit *const this)
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


// CDOTA_Ability_EmberSpirit_SearingChains::~CDOTA_Ability_EmberSpirit_SearingChains  (line 65, @0x0000000002c98580, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::~CDOTA_Ability_EmberSpirit_SearingChains(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  this->_vptr_IHandleEntity = &off_45B5750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EmberSpirit_SearingChains::~CDOTA_Ability_EmberSpirit_SearingChains  (line 65, @0x0000000002c985a0, libserver.so)  // inlines: ~CDOTA_Ability_EmberSpirit_SearingChains
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::~CDOTA_Ability_EmberSpirit_SearingChains(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  this->_vptr_IHandleEntity = &off_45B5750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EmberSpirit_SearingChains::Schema_DynamicBinding  (line 67, @0x0000000002c88e60, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SearingChains::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  return CDOTA_Ability_EmberSpirit_SearingChains::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 67, @0x0000000002c88e70, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::DestructInstance  (line 67, @0x0000000002c88e80, libserver.so)  // inlines: Destruct<CDOTA_Ability_EmberSpirit_SearingChains>
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::FreeInstance  (line 67, @0x0000000002c88ea0, libserver.so)
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::CanAllocate  (line 67, @0x0000000002c88ec0, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 67, @0x0000000002c88ed0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SearingChains::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_SearingChains::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::AllocateInstance  (line 67, @0x0000000002c8fbe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::ConstructInstance  (line 67, @0x0000000002c94b60, libserver.so)  // inlines: CDOTA_Ability_EmberSpirit_SearingChains, Construct<CDOTA_Ability_EmberSpirit_SearingChains>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45B5750;
  }
  return p;
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 67, @0x0000000002ca2160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 67, @0x0000000002ca2180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal  (line 67, @0x0000000002cc5d40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ember_spirit_searing_chains", "CDOTA_Ability_EmberSpirit_SearingChains"
// globals: `guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass, CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo, CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo
CEntityClass *__cdecl CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass) != 0 )
  {
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pClassInfo = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_flags = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pInputs = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_nInputCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pOutputs = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_nOutputCount = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pGameClass = 0;
    CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass._vptr_CEntityClass = off_45B56D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass);
    __cxa_atexit(
      CDOTA_Ability_EmberSpirit_SearingChains::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EmberSpirit_SearingChainsClass != 0 )
    return &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass;
  if ( `guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo,
      "CDOTA_Ability_EmberSpirit_SearingChains",
      "ember_spirit_searing_chains",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo);
  }
  CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pClassInfo = &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo;
  CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pBaseClassInfo = CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EmberSpirit_SearingChainsClass = &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass;
  CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClassInfo.m_pClass = &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass;
  CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EmberSpirit_SearingChainsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EmberSpirit_SearingChains::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SearingChainsClass;
}


// CDOTA_Ability_EmberSpirit_SearingChains::GetAOERadius  (line 71, @0x0000000002cb77c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_EmberSpirit_SearingChains::GetAOERadius(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_EmberSpirit_SearingChains::YouForgotToImplementOrDeclareServerClass  (line 80, @0x0000000002c1c680, libserver.so)
int __fastcall CDOTA_Ability_EmberSpirit_SearingChains::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_SearingChains::GetServerClass  (line 80, @0x0000000002c34db0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EmberSpirit_SearingChains::GetServerClass(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
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


// CDOTA_Ability_EmberSpirit_SearingChains::OnSpellStart  (line 89, @0x0000000002c78310, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (27 total)
// strings: "unit_count", "special_bonus_unique_ember_spirit_2", "modifier_ember_spirit_searing_chains", "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_cast.vpcf", "searing_chains_hero", "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_start.vpcf" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_EmberSpirit_SearingChains::OnSpellStart(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v6; // xmm2
  float v7; // r14d
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  int m_Size; // eax
  CDOTA_BaseNPC *v14; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  int v18; // esi
  int v19; // r13d
  int v20; // r12d
  CHandle<CBaseEntity> *v21; // rdx
  uint32 m_Index; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // r12
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC_Hero *v30; // rdi
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_ParticleManager *v32; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  int v38; // [rsp+34h] [rbp-BCh]
  CDOTA_BaseNPC *duration; // [rsp+38h] [rbp-B8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "unit_count", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ember_spirit_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  *v6.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, v8, v7, &entities, 2, 3, 384, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_ember_spirit_searing_chains");
  KeyValues::SetFloat(&kv, "duration", v12);
  m_Size = entities.m_Size;
  if ( v3 <= entities.m_Size )
    m_Size = v3;
  v38 = m_Size;
  v14 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_cast.vpcf",
                   1,
                   v14,
                   0,
                   0);
  *&criteria._vptr_CResponseCriteriaSet = v7;
  *(&criteria._vptr_CResponseCriteriaSet + 1) = v7;
  *&criteria.m_Lookup.m_LessFunc = v7;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v16,
    v14,
    1,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria.m_Lookup.m_LessFunc);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, v14);
  v18 = entities.m_Size;
  if ( entities.m_Size > 0 && v38 > 0 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = RandomInt(0, (v18 - 1));
      v21 = &entities.m_Memory.m_pMemory[v20];
      m_Index = v21->m_Index;
      if ( v21->m_Index + 2 > 1
        && (v23 = v21->m_Index,
            (v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F]) != 0)
        && (v25 = &v24[v23 & 0x1FF]) != 0
        && m_Index == v25->m_EHandle.m_Index
        && (m_pInstance = v25->m_pInstance, v25->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v27 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_ember_spirit_searing_chains", &kv, 0);
        CDOTA_BaseNPC::Interrupt(m_pInstance);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&entities, v20);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v28 = 0;
          if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            v28 = m_pInstance;
          v29 = CDOTABaseAbility::GetCaster(this);
          v30 = 0;
          if ( v29 != 0 && v29->m_bIsDOTANPC && (v29->m_iUnitType & 1) != 0 && !v29->m_bIsIllusion.m_Value )
            v30 = v29;
          EconEntity_OnOwnerKillEaterEvent(
            v30,
            v28,
            kill_eater_event_t::kKillEaterEvent_EmberSpirit_EnemiesChained,
            1,
            INVALID_ITEM_DEF_INDEX);
          CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
          CResponseCriteriaSet::AppendCriteria(&criteria, "searing_chains_hero", "yes", 1.0);
          m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
          CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        }
        v32 = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     v32,
                     "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_start.vpcf",
                     2,
                     0,
                     0,
                     0);
        duration = CDOTABaseAbility::GetCaster(this);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v34, Particle, 0, duration, 5, "attach_hitloc", vec3_invalid, 1);
        v35 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v35, Particle, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
        v36 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v36, Particle);
        if ( ++v19 == v38 )
          break;
      }
      else if ( ++v19 == v38 )
      {
        break;
      }
      v18 = entities.m_Size;
    }
  }
  v37 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_EmberSpirit.SearingChains.Cast", v37);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_EmberSpirit_SearingChains::GetAbilityDamageToTargetOverInterval  (line 158, @0x0000000002c560d0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "chains_damage"
__int64 __fastcall CDOTA_Ability_EmberSpirit_SearingChains::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EmberSpirit_SearingChains *const this,
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
    fIntervalb = fIntervala * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "chains_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_EmberSpirit_SearingChains::GetSlowDuration  (line 171, @0x0000000002c56170, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_EmberSpirit_SearingChains::GetSlowDuration(
        CDOTA_Ability_EmberSpirit_SearingChains *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_EmberSpirit_SearingChains::~CDOTA_Modifier_EmberSpirit_SearingChains  (line 180, @0x0000000002c92860, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::~CDOTA_Modifier_EmberSpirit_SearingChains(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B6210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_SearingChains::~CDOTA_Modifier_EmberSpirit_SearingChains  (line 180, @0x0000000002c92880, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_SearingChains
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::~CDOTA_Modifier_EmberSpirit_SearingChains(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B6210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_SearingChains::StatusEffectPriority  (line 189, @0x0000000002c88ee0, libserver.so)
int __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::StatusEffectPriority(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this)
{
  return 10;
}


// CDOTA_Modifier_EmberSpirit_SearingChains::OnCreated  (line 201, @0x0000000002c75ca0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "chains_damage", "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_debuff.vpcf", "attach_hitloc", "Hero_EmberSpirit.SearingChains.Target", "Hero_EmberSpirit.SearingChains.Burn"
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::OnCreated(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->chains_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    LevelSpecialValue = 0.0;
    this->tick_interval = 0.0;
    goto LABEL_4;
  }
  this->chains_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chains_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "tick_interval", -1, 0);
  this->tick_interval = LevelSpecialValue;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ember_spirit/ember_spirit_searing_chains_debuff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 0, v11, 5, "attach_hitloc", *AbsOrigin, 1);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v15 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_EmberSpirit.SearingChains.Target", v15);
  v16 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(8, "Hero_EmberSpirit.SearingChains.Burn", v16);
}


// CDOTA_Modifier_EmberSpirit_SearingChains::OnIntervalThink  (line 222, @0x0000000002c1eee0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::OnIntervalThink(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float chains_damage; // [rsp+Ch] [rbp-24h]

  chains_damage = this->chains_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, chains_damage, 2, 0);
}


// CDOTA_Modifier_EmberSpirit_SearingChains::OnDestroy  (line 231, @0x0000000002c1f8a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_EmberSpirit.SearingChains.Burn"
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::OnDestroy(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_EmberSpirit.SearingChains.Burn");
}


// CDOTA_Modifier_EmberSpirit_SearingChains::CheckState  (line 240, @0x0000000002c1c690, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_EmberSpirit_SearingChains::CheckState(
        CDOTA_Modifier_EmberSpirit_SearingChains *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFFFELL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x7E | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 1;
  buffState->m_nDisabledStateMask = v3;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::~CDOTA_Ability_EmberSpirit_SleightOfFist  (line 253, @0x0000000002cb6b80, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::~CDOTA_Ability_EmberSpirit_SleightOfFist(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  this->_vptr_IHandleEntity = &off_45B6570;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackEntities);
  if ( (this->m_hAttackEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackEntities.m_Memory),
        (this->m_hAttackEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::~CDOTA_Ability_EmberSpirit_SleightOfFist  (line 253, @0x0000000002cb71b0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_EmberSpirit_SleightOfFist, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::~CDOTA_Ability_EmberSpirit_SleightOfFist(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  this->_vptr_IHandleEntity = &off_45B6570;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackEntities);
  if ( (this->m_hAttackEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackEntities.m_Memory);
    if ( (this->m_hAttackEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAttackEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::Schema_DynamicBinding  (line 255, @0x0000000002c88ef0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SleightOfFist::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  return CDOTA_Ability_EmberSpirit_SleightOfFist::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 255, @0x0000000002c88f00, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::DestructInstance  (line 255, @0x0000000002c88f10, libserver.so)  // inlines: Destruct<CDOTA_Ability_EmberSpirit_SleightOfFist>
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::FreeInstance  (line 255, @0x0000000002c88f30, libserver.so)
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::CanAllocate  (line 255, @0x0000000002c88f50, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 255, @0x0000000002c88f60, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_SleightOfFist::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_SleightOfFist::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::AllocateInstance  (line 255, @0x0000000002c8fc20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::ConstructInstance  (line 255, @0x0000000002ca0b30, libserver.so)  // inlines: CDOTA_Ability_EmberSpirit_SleightOfFist, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_EmberSpirit_SleightOfFist>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_45B6570;
    *(p + 117) = 0;
    *(p + 236) = 0;
    *(p + 237) = 0;
    *(p + 238) = -1;
  }
  return p;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 255, @0x0000000002ca21b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 255, @0x0000000002ca21d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal  (line 255, @0x0000000002cc6090, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ember_spirit_sleight_of_fist", "CDOTA_Ability_EmberSpirit_SleightOfFist"
// globals: `guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass, CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo, CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo
CEntityClass *__cdecl CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass) != 0 )
  {
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pClassInfo = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_flags = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pInputs = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_nInputCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pOutputs = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_nOutputCount = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pGameClass = 0;
    CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass._vptr_CEntityClass = off_45B64F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass);
    __cxa_atexit(
      CDOTA_Ability_EmberSpirit_SleightOfFist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EmberSpirit_SleightOfFistClass != 0 )
    return &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass;
  if ( `guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo,
      "CDOTA_Ability_EmberSpirit_SleightOfFist",
      "ember_spirit_sleight_of_fist",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo);
  }
  CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pClassInfo = &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo;
  CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pBaseClassInfo = CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EmberSpirit_SleightOfFistClass = &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass;
  CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClassInfo.m_pClass = &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass;
  CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EmberSpirit_SleightOfFistClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EmberSpirit_SleightOfFist::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_SleightOfFistClass;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::GetAOERadius  (line 259, @0x0000000002cb77e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::GetAOERadius(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::YouForgotToImplementOrDeclareServerClass  (line 281, @0x0000000002c1c6c0, libserver.so)
int __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::GetServerClass  (line 281, @0x0000000002c35630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::GetServerClass(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
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


// CDOTA_Ability_EmberSpirit_SleightOfFist::OnSpellStart  (line 290, @0x0000000002c77a70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, KeyValues::KeyValues, CDOTABaseAbility::GetCursorPosition, DOTA_EmitSoundLocation, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove (23 total)
// strings: "modifier_ember_spirit_sleight_of_fist_marker", "Hero_EmberSpirit.SleightOfFist.Cast", "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_cast.vpcf", "sleight_of_fist_start", "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_caster.vpcf", "modifier_ember_spirit_sleight_of_fist_caster"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::OnSpellStart(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  __m128i v6; // xmm2
  float v7; // r12d
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  int m_Size; // eax
  int v15; // ebx
  __int64 v16; // r12
  int v17; // esi
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v24; // rax
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  int m_nFXMarkerIndex; // ebx
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  int Particle; // eax
  int v32; // ebx
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // r12
  int v35; // ebx
  CDOTA_ParticleManager *v36; // rax
  CDOTA_BaseNPC *v37; // r12
  CDOTA_BaseNPC *v38; // rax
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-38h]
  Vector CursorPosition; // 0:kr20_12.12

  v42 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  this->m_vCastLoc.x = AbsOrigin->x;
  this->m_vCastLoc.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->m_nHeroesKilled = 0;
  this->m_vCastLoc.z = z;
  KeyValues::KeyValues(&kv, "modifier_ember_spirit_sleight_of_fist_marker");
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocation(&criteria, "Hero_EmberSpirit.SleightOfFist.Cast", 1);
  *v6.m128i_i32 = LevelSpecialValue;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTABaseAbility::GetCaster(this);
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &criteria, v8, v7, &this->m_hAttackEntities, 2, 3, 16, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_cast.vpcf",
                  2,
                  0,
                  0,
                  0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v8, 0, *&CursorPosition.x, CursorPosition.z);
  *&criteria._vptr_CResponseCriteriaSet = v7;
  *(&criteria._vptr_CResponseCriteriaSet + 1) = v7;
  *&criteria.m_Lookup.m_LessFunc = v7;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v12,
    v8,
    1,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria.m_Lookup.m_LessFunc);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, v8);
  m_Size = this->m_hAttackEntities.m_Size;
  v15 = m_Size - 1;
  if ( m_Size - 1 >= 0 )
  {
    v16 = v15;
    do
    {
      while ( 1 )
      {
        v18 = &this->m_hAttackEntities.m_Memory.m_pMemory[v16];
        m_Index = v18->m_Index;
        if ( v18->m_Index + 2 > 1 )
        {
          v20 = v18->m_Index;
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
          if ( v21 != 0 )
          {
            v22 = &v21[v20 & 0x1FF];
            if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
            {
              m_pInstance = v22->m_pInstance;
              if ( v22->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v22->m_pInstance) != 0 )
              {
                v24 = CDOTABaseAbility::GetCaster(this);
                if ( !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v24) && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
                {
                  m_Value = m_pInstance->m_nUnitState64.m_Value;
                  if ( (m_Value & 0x100) == 0 && (m_Value & 4) == 0 )
                    break;
                }
              }
            }
          }
        }
        v17 = v15--;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hAttackEntities, v17);
        --v16;
        if ( v15 == -1 )
          goto LABEL_16;
      }
      v26 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, this, "modifier_ember_spirit_sleight_of_fist_marker", &kv, 0);
      --v15;
      --v16;
    }
    while ( v15 != -1 );
LABEL_16:
    m_Size = this->m_hAttackEntities.m_Size;
  }
  if ( m_Size != 0 )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "sleight_of_fist_start", "yes", 1.0);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    m_nFXMarkerIndex = this->m_nFXMarkerIndex;
    if ( m_nFXMarkerIndex != -1 )
    {
      v29 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v29, m_nFXMarkerIndex, 0);
    }
    v30 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v30,
                 "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_caster.vpcf",
                 2,
                 0,
                 0,
                 0);
    this->m_nFXMarkerIndex = Particle;
    v32 = Particle;
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v33, v32, 0, *&this->m_vCastLoc.x, this->m_vCastLoc.z);
    v34 = CDOTABaseAbility::GetCaster(this);
    v35 = this->m_nFXMarkerIndex;
    v36 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v36, v35, 1, v34, 1, 0, vec3_invalid, 1);
    KeyValues::KeyValues(&kv2, "modifier_ember_spirit_sleight_of_fist_caster");
    v37 = CDOTABaseAbility::GetCaster(this);
    v38 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v38, v37, this, "modifier_ember_spirit_sleight_of_fist_caster", &kv, 0);
    KeyValues::~KeyValues(&kv2);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::DoFistAttack  (line 347, @0x0000000002c773f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsDisarmed, IsInvulnerable, IsRealHero, IsValid, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::IsInvisibleTo, CBaseEntity::GetAbsOrigin, VectorNormalize, FindClearSpaceForUnit, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack (21 total)
// callers: CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnIntervalThink
// strings: "modifier_ember_spirit_sleight_of_fist_marker", "modifier_ember_spirit_sleight_of_fist_caster_invulnerability", "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_tgt.vpcf", "attach_hitloc", "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_trail.vpcf", "Hero_EmberSpirit.SleightOfFist.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::DoFistAttack(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  int v2; // ebx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hAttackEntities; // r15
  __int64 v4; // r14
  int v5; // esi
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  unsigned __int64 v20; // r14
  CDOTA_BaseNPC *v21; // r15
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v25; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  int v32; // r14d
  CDOTA_BaseNPC *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  float y; // [rsp+10h] [rbp-90h]
  float x; // [rsp+14h] [rbp-8Ch]
  float pKV; // [rsp+18h] [rbp-88h]
  const Vector vecStartPos; // [rsp+20h] [rbp-80h]
  Vector vDir; // [rsp+30h] [rbp-70h] BYREF
  Vector vPos; // [rsp+40h] [rbp-60h]
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  v2 = this->m_hAttackEntities.m_Size - 1;
  if ( v2 < 0 )
  {
LABEL_16:
    CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist(this);
    return;
  }
  p_m_hAttackEntities = &this->m_hAttackEntities;
  v4 = v2;
  while ( 1 )
  {
    v6 = &this->m_hAttackEntities.m_Memory.m_pMemory[v4];
    m_Index = v6->m_Index;
    if ( v6->m_Index + 2 > 1 )
    {
      v8 = v6->m_Index;
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[v8 & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            break;
        }
      }
    }
LABEL_3:
    v5 = v2--;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_hAttackEntities, v5);
    --v4;
    if ( v2 == -1 )
      goto LABEL_16;
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v10->m_pInstance) == 0
    || (Caster = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, Caster))
    || m_pInstance->m_bIsWaitingToSpawn.m_Value
    || ((m_Value = m_pInstance->m_nUnitState64.m_Value) & 0x100) != 0
    || (m_Value & 4) != 0 )
  {
    if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
      && (m_pInstance->m_iUnitType & 1) != 0
      && !m_pInstance->m_bIsIllusion.m_Value )
    {
      ++this->m_nHeroesKilled;
    }
    CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_ember_spirit_sleight_of_fist_marker");
    goto LABEL_3;
  }
  v14 = CDOTABaseAbility::GetCaster(this);
  vecStartPos = *CBaseEntity::GetAbsOrigin(v14);
  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
  x = AbsOrigin->x;
  v16 = this->m_vCastLoc.y - AbsOrigin->y;
  y = AbsOrigin->y;
  pKV = AbsOrigin->z;
  v17 = this->m_vCastLoc.x - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v16;
  vDir.x = v17;
  VectorNormalize(&vDir);
  vPos.y = (vDir.y * 50.0) + y;
  vPos.z = (vDir.z * 50.0) + pKV;
  vPos.x = (50.0 * vDir.x) + x;
  v18 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v18, vPos, 1);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v19, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability");
  v20 = CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value;
  KeyValues::KeyValues(&kv, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability");
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v22, v21, this, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability", &kv, 0);
  if ( (v20 & 2) == 0 )
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v23, m_pInstance, 0, 1, 0, 0, 0);
    v25 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PerformAttack(v25, AttackRecord, m_pInstance, 1, 1, 1, 0);
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_tgt.vpcf",
               2,
               0,
               0,
               0);
  v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 0, m_pInstance, 5, "attach_hitloc", *v28, 1);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v30, Particle);
  v31 = GetParticleManager();
  v32 = CDOTA_ParticleManager::CreateParticle(
          v31,
          "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_trail.vpcf",
          2,
          0,
          0,
          0);
  v33 = CDOTABaseAbility::GetCaster(this);
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v34, v32, 0, v33, 5, "attach_hitloc", vec3_invalid, 1);
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, v32, 1, *&vecStartPos.x, vecStartPos.z);
  v36 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v36, v32);
  CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EmberSpirit.SleightOfFist.Damage", 0.0, 0, 0);
  CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_ember_spirit_sleight_of_fist_marker");
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hAttackEntities, v2);
  if ( (m_pInstance->m_iUnitType & 1) != 0
    && !m_pInstance->m_bIsIllusion.m_Value
    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
  {
    ++this->m_nHeroesKilled;
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist  (line 434, @0x0000000002c4de40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::RemoveModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::DestroyParticleEffect, EconEntity_OnOwnerKillEaterEvent
// callers: CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnDestroy, CDOTA_Ability_EmberSpirit_SleightOfFist::DoFistAttack, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnSpellStart
// strings: "modifier_ember_spirit_sleight_of_fist_marker", "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_trail.vpcf", "attach_hitloc", "modifier_ember_spirit_sleight_of_fist_caster", "modifier_ember_spirit_sleight_of_fist_caster_invulnerability"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r13
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  int m_nFXMarkerIndex; // ebx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC_Hero *v24; // rdi
  Vector vecStartPos; // 0:^10.12

  v2 = this->m_hAttackEntities.m_Size - 1;
  if ( v2 >= 0 )
  {
    v3 = 4LL * v2;
    v4 = 4 * (v2 - v2) - 4;
    do
    {
      while ( 1 )
      {
        v5 = &this->m_hAttackEntities.m_Memory.m_pMemory[v3 / 4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        v3 -= 4LL;
        if ( v3 == v4 )
          goto LABEL_11;
      }
      v3 -= 4LL;
      CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_ember_spirit_sleight_of_fist_marker");
    }
    while ( v3 != v4 );
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAttackEntities);
  Caster = CDOTABaseAbility::GetCaster(this);
  vecStartPos = *CBaseEntity::GetAbsOrigin(Caster);
  v12 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v12, this->m_vCastLoc, 1);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_ember_spirit/ember_spirit_sleightoffist_trail.vpcf",
               2,
               0,
               0,
               0);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 0, v15, 5, "attach_hitloc", vec3_invalid, 1);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, Particle, 1, *&vecStartPos.x, vecStartPos.z);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
  m_nFXMarkerIndex = this->m_nFXMarkerIndex;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(v20, m_nFXMarkerIndex, 0);
  this->m_nFXMarkerIndex = -1;
  v21 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v21, "modifier_ember_spirit_sleight_of_fist_caster");
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v22, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability");
  if ( this->m_nHeroesKilled > 1 )
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    v24 = 0;
    if ( v23 != 0 && v23->m_bIsDOTANPC && (v23->m_iUnitType & 1) != 0 && !v23->m_bIsIllusion.m_Value )
      v24 = v23;
    EconEntity_OnOwnerKillEaterEvent(
      v24,
      0,
      kill_eater_event_t::kKillEaterEvent_EmberSpirit_SleightOfFistMultiKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_Ability_EmberSpirit_SleightOfFist::GetAbilityDamageToTargetOverInterval  (line 473, @0x0000000002c56190, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "bonus_hero_damage"
__int64 __fastcall CDOTA_Ability_EmberSpirit_SleightOfFist::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EmberSpirit_SleightOfFist *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  int AverageTrueAttackDamage; // r13d
  float v9; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(Caster, 0);
    v9 = AverageTrueAttackDamage + CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bonus_hero_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * v9);
  }
  return result;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker  (line 487, @0x0000000002c93be0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B6FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker  (line 487, @0x0000000002c93c00, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B6FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::IsHidden  (line 492, @0x0000000002c88f70, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::IsHidden(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::IsPurgable  (line 493, @0x0000000002c88f80, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::IsPurgable(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::GetEffectName  (line 495, @0x0000000002c88f90, libserver.so)
// strings: "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_targetted_marker.vp
const char *__fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::GetEffectName(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  return "particles/units/heroes/hero_ember_spirit/ember_spirit_sleight_of_fist_targetted_marker.vpcf";
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::GetEffectAttachType  (line 496, @0x0000000002c88fa0, libserver.so)
int __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::GetEffectAttachType(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  return 7;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::ShouldUseOverheadOffset  (line 497, @0x0000000002c88fb0, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker::ShouldUseOverheadOffset(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Marker *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster  (line 509, @0x0000000002c92810, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B7350;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster  (line 509, @0x0000000002c92830, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B7350;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::IsPurgable  (line 517, @0x0000000002c88fc0, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::IsPurgable(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnCreated  (line 543, @0x0000000002c75290, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::AddEffects, CDOTA_Buff::StartIntervalThink, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "bonus_hero_damage", "creep_damage_penalty", "attack_interval", "modifier_ember_spirit_sleight_of_fist_caster_invulnerability"
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnCreated(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm1_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_hero_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_hero_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_hero_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->creep_damage_penalty = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "creep_damage_penalty", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->radius = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->attack_interval = 0.0;
      goto LABEL_6;
    }
  }
  this->creep_damage_penalty = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->attack_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "attack_interval", -1, 0);
LABEL_6:
  KeyValues::KeyValues(&kv, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability");
  v7 = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(
    Parent,
    Caster,
    v7,
    "modifier_ember_spirit_sleight_of_fist_caster_invulnerability",
    &kv,
    0);
  v10 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::AddEffects(v10, 32);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->attack_interval, v11);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnHeroKilled  (line 563, @0x0000000002c30540, libserver.so)  // inlines: Attacker, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, CDOTABaseAbility::LoadAbilityData
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnHeroKilled(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  CDOTABaseAbility *v20; // [rsp+8h] [rbp-28h]

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance && CDOTA_Buff::GetAbility(this) != 0 )
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
          if ( v12 != 0
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(v12[71].m_pEntity) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            m_pAbilityData = Ability->m_pAbilityData;
            if ( m_pAbilityData == 0 )
            {
              v20 = Ability;
              CDOTABaseAbility::LoadAbilityData(Ability, 0);
              m_pAbilityData = v20->m_pAbilityData;
            }
            m_iAbilityID = m_pAbilityData->m_iAbilityID;
            Caster = CDOTA_Buff::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
            v18 = CDOTA_Buff::GetCaster(this);
            CDOTAGamerules::SendProjectionAbilityMessage(
              g_pGameRules,
              v18,
              0,
              m_iAbilityID,
              0,
              0,
              *&AbsOrigin->x,
              AbsOrigin->z,
              -1.0,
              v19);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnDestroy  (line 578, @0x0000000002c4e0b0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetAbility, __dynamic_cast, CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist
// strings: "modifier_ember_spirit_sleight_of_fist_caster_invulnerability"
// globals: `typeinfo for'CDOTA_Ability_EmberSpirit_SleightOfFist
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnDestroy(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_Ability_EmberSpirit_SleightOfFist *v5; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 188))(Caster, Caster->m_fEffects.m_Value & 0xFFFFFFDF);
  Caster->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_ember_spirit_sleight_of_fist_caster_invulnerability");
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v5 = __dynamic_cast(
           Ability,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_EmberSpirit_SleightOfFist,
           0);
    if ( v5 != 0 )
      CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist(v5);
  }
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnIntervalThink  (line 597, @0x0000000002c778f0, libserver.so)
// calls: CDOTA_Buff::GetAbility, __dynamic_cast, CDOTA_Ability_EmberSpirit_SleightOfFist::DoFistAttack
// globals: `typeinfo for'CDOTA_Ability_EmberSpirit_SleightOfFist
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnIntervalThink(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_Ability_EmberSpirit_SleightOfFist *v3; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
    {
      v3 = __dynamic_cast(
             Ability,
             &`typeinfo for'CDOTABaseAbility,
             &`typeinfo for'CDOTA_Ability_EmberSpirit_SleightOfFist,
             0);
      if ( v3 != 0 )
        CDOTA_Ability_EmberSpirit_SleightOfFist::DoFistAttack(v3);
    }
  }
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::DeclareFunctions  (line 613, @0x0000000002c1c6d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::DeclareFunctions(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[28].__pfn = CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[147].__pfn = CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierPreAttack_BonusDamage  (line 625, @0x0000000002c2cc80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->htarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    return 1uLL;
  }
  *v2.m128i_i32 = this->bonus_hero_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierDamageOutgoing_Percentage  (line 640, @0x0000000002c2cbf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->htarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
  {
    return 1uLL;
  }
  *v2.m128i_i32 = this->creep_damage_penalty;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability  (line 656, @0x0000000002c927c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B7670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability  (line 656, @0x0000000002c927e0, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::~CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B7670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::IsHidden  (line 661, @0x0000000002c88fd0, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::IsHidden(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::CheckState  (line 667, @0x0000000002c1c730, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability::CheckState(
        CDOTA_Modifier_EmberSpirit_SleightOfFist_Caster_Invulnerability *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804102uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBEFDLL;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::~CDOTA_Ability_EmberSpirit_FlameGuard  (line 685, @0x0000000002c985d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::~CDOTA_Ability_EmberSpirit_FlameGuard(
        CDOTA_Ability_EmberSpirit_FlameGuard *const this)
{
  this->_vptr_IHandleEntity = &off_45B79D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::~CDOTA_Ability_EmberSpirit_FlameGuard  (line 685, @0x0000000002c985f0, libserver.so)  // inlines: ~CDOTA_Ability_EmberSpirit_FlameGuard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::~CDOTA_Ability_EmberSpirit_FlameGuard(
        CDOTA_Ability_EmberSpirit_FlameGuard *const this)
{
  this->_vptr_IHandleEntity = &off_45B79D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::Schema_DynamicBinding  (line 687, @0x0000000002c88fe0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FlameGuard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_FlameGuard::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_FlameGuard *const this)
{
  return CDOTA_Ability_EmberSpirit_FlameGuard::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 687, @0x0000000002c88ff0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::DestructInstance  (line 687, @0x0000000002c89000, libserver.so)  // inlines: Destruct<CDOTA_Ability_EmberSpirit_FlameGuard>
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::FreeInstance  (line 687, @0x0000000002c89020, libserver.so)
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::CanAllocate  (line 687, @0x0000000002c89040, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 687, @0x0000000002c89050, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FlameGuard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_FlameGuard::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::AllocateInstance  (line 687, @0x0000000002c8fc60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::ConstructInstance  (line 687, @0x0000000002c94b90, libserver.so)  // inlines: CDOTA_Ability_EmberSpirit_FlameGuard, Construct<CDOTA_Ability_EmberSpirit_FlameGuard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45B79D0;
  }
  return p;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 687, @0x0000000002ca2200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 687, @0x0000000002ca2220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal  (line 687, @0x0000000002cc63e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ember_spirit_flame_guard", "CDOTA_Ability_EmberSpirit_FlameGuard"
// globals: `guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass, CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo, CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo
CEntityClass *__cdecl CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass) != 0 )
  {
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pClassInfo = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_flags = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pInputs = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_nInputCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pOutputs = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_nOutputCount = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pGameClass = 0;
    CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass._vptr_CEntityClass = off_45B7950;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass);
    __cxa_atexit(
      CDOTA_Ability_EmberSpirit_FlameGuard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EmberSpirit_FlameGuardClass != 0 )
    return &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass;
  if ( `guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo,
      "CDOTA_Ability_EmberSpirit_FlameGuard",
      "ember_spirit_flame_guard",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo);
  }
  CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pClassInfo = &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo;
  CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pBaseClassInfo = CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EmberSpirit_FlameGuardClass = &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass;
  CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClassInfo.m_pClass = &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass;
  CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EmberSpirit_FlameGuardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EmberSpirit_FlameGuard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FlameGuardClass;
}


// CDOTA_Ability_EmberSpirit_FlameGuard::OnSpellStart  (line 699, @0x0000000002c54410, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_ember_spirit_flame_guard"
void __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::OnSpellStart(CDOTA_Ability_EmberSpirit_FlameGuard *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_ember_spirit_flame_guard");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_ember_spirit_flame_guard", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_EmberSpirit_FlameGuard::GetAbilityDamageToTargetOverInterval  (line 712, @0x0000000002c56220, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_EmberSpirit_FlameGuard::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EmberSpirit_FlameGuard *const this,
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
    fIntervalb = fIntervala * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::~CDOTA_Modifier_EmberSpirit_FlameGuard  (line 728, @0x0000000002c92770, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::~CDOTA_Modifier_EmberSpirit_FlameGuard(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B8490;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::~CDOTA_Modifier_EmberSpirit_FlameGuard  (line 728, @0x0000000002c92790, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_FlameGuard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::~CDOTA_Modifier_EmberSpirit_FlameGuard(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B8490;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::OnCreated  (line 764, @0x0000000002c65320, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, ToDOTABaseNPC, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::GetModelRadius, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (15 total)
// strings: "absorb_amount", "special_bonus_unique_ember_spirit_1", "particles/units/heroes/hero_ember_spirit/ember_spirit_flameguard.vpcf", "attach_hitloc", "Hero_EmberSpirit.FlameGuard.Cast"
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::OnCreated(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v9; // xmm1_4
  int absorb_amount; // eax
  float tick_interval; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r13
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  double vecRadius; // [rsp+10h] [rbp-40h]
  float vecRadius_8; // [rsp+18h] [rbp-38h]
  double v26; // [rsp+20h] [rbp-30h]
  Vector v27; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->absorb_amount, "absorb_amount");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage_per_second, "damage_per_second");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->radius, "radius");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_interval", -1, 0);
  else
    this->tick_interval = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ember_spirit_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    absorb_amount = this->absorb_amount + CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    this->absorb_amount = absorb_amount;
  }
  else
  {
    absorb_amount = this->absorb_amount;
  }
  tick_interval = this->tick_interval;
  this->m_nAbsorbRemaining = absorb_amount;
  this->m_flShowParticleInterval = 1.0;
  CDOTA_Buff::StartIntervalThink(this, tick_interval, v9);
  HIDWORD(vecRadius) = LODWORD(vec3_origin.y);
  vecRadius_8 = vec3_origin.z;
  v12 = CDOTA_Buff::GetCaster(this);
  if ( v12 == 0 || !v12->m_bIsDOTANPC )
    v12 = 0;
  LODWORD(vecRadius) = CDOTA_BaseNPC::GetModelRadius(v12);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ember_spirit/ember_spirit_flameguard.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 0, v15, 5, "attach_hitloc", vec3_invalid, 1);
  v18 = CDOTA_Buff::GetParent(this);
  v19 = GetParticleManager();
  v27.z = vecFallbackPosition;
  *&v27.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Parent, 1, v18, 1, 0, v27, 1);
  *&v26 = this->radius;
  *(&v26 + 1) = *&v26;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, Parent, 2, v26, *&v26);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, Parent, 3, vecRadius, vecRadius_8);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v22 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(8, "Hero_EmberSpirit.FlameGuard.Cast", v22);
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::OnRefresh  (line 801, @0x0000000002c73500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "absorb_amount", "special_bonus_unique_ember_spirit_1"
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::OnRefresh(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v9; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->absorb_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "absorb_amount", -1, 0);
  else
    this->absorb_amount = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_second", -1, 0);
  else
    this->damage_per_second = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
  else
    this->radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "tick_interval", -1, 0);
  else
    this->tick_interval = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ember_spirit_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    v9 = this->absorb_amount + CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    this->absorb_amount = v9;
    this->m_nAbsorbRemaining = v9;
  }
  else
  {
    this->m_nAbsorbRemaining = this->absorb_amount;
  }
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::DeclareFunctions  (line 820, @0x0000000002c1c750, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EmberSpirit_FlameGuard::GetModifierIncomingSpellDamageConstant(CModifierParams const&)
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::DeclareFunctions(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this)
{
  this->m_Functions[39].__pfn = CDOTA_Modifier_EmberSpirit_FlameGuard::GetModifierIncomingSpellDamageConstant;
  this->m_Functions[39].__delta = 0;
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::GetModifierIncomingSpellDamageConstant  (line 828, @0x0000000002c1f7c0, libserver.so)
// calls: CDOTA_Buff::Destroy
ModifierVariant_t __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::GetModifierIncomingSpellDamageConstant(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this,
        const CModifierParams *const params)
{
  int m_nAbsorbRemaining; // ebx
  __int64 fDamage_low; // xmm0_8
  __m128i v5; // xmm2
  ModifierVariant_t result; // 0:rax.16

  m_nAbsorbRemaining = this->m_nAbsorbRemaining;
  fDamage_low = LODWORD(params->fDamage);
  if ( *&fDamage_low >= m_nAbsorbRemaining )
  {
    this->m_nAbsorbRemaining = 0;
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    *v5.m128i_i32 = -m_nAbsorbRemaining;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    this->m_nAbsorbRemaining = (m_nAbsorbRemaining - *&fDamage_low);
    *&result.m_eType = ((fDamage_low ^ 0x80000000LL) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::OnIntervalThink  (line 847, @0x0000000002c4fa30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "particles/units/heroes/hero_ember_spirit/emberspirit_flame_shield_aoe_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::OnIntervalThink(
        CDOTA_Modifier_EmberSpirit_FlameGuard *const this)
{
  __m128i v1; // xmm5
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int damage_per_second; // r14d
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v17; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  __m128 m_flShowParticleInterval_low; // xmm0
  __m128 v23; // rt1
  __m128 v24; // xmm2
  float tick_interval; // [rsp+2Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-50h] BYREF

  hUnits.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hUnits, 2, 19, 0, 0, 0);
  if ( hUnits.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &hUnits.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) != m_pInstance )
              {
                damage_per_second = this->damage_per_second;
                tick_interval = this->tick_interval;
                Ability = CDOTA_Buff::GetAbility(this);
                v17 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v17, m_pInstance, Ability, damage_per_second * tick_interval, 2, 0);
                if ( this->m_flShowParticleInterval == 1.0 )
                  break;
              }
            }
          }
        }
        if ( hUnits.m_Size <= ++v8 )
          goto LABEL_15;
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_ember_spirit/emberspirit_flame_shield_aoe_impact.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      if ( SLOBYTE(CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value) >= 0 )
        m_pInstance = CDOTA_Buff::GetCaster(this);
      v20 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 1, m_pInstance, 1, 0, vec3_invalid, 1);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
      ++v8;
    }
    while ( hUnits.m_Size > v8 );
  }
LABEL_15:
  m_flShowParticleInterval_low = LODWORD(this->m_flShowParticleInterval);
  m_flShowParticleInterval_low.m128_f32[0] = m_flShowParticleInterval_low.m128_f32[0] - this->tick_interval;
  v23.m128_i32[0] = 0;
  v24 = _mm_cmple_ss(m_flShowParticleInterval_low, v23);
  LODWORD(this->m_flShowParticleInterval) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v24, m_flShowParticleInterval_low).m128_f32[0])
                                          | v24.m128_i32[0] & 0x3F800000;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
}


// CDOTA_Modifier_EmberSpirit_FlameGuard::OnDestroy  (line 883, @0x0000000002c2c810, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_EmberSpirit_FlameGuard::OnDestroy(CDOTA_Modifier_EmberSpirit_FlameGuard *const this)
{
  int absorb_amount; // r13d
  int m_nAbsorbRemaining; // r12d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC_Hero *v6; // rdi

  absorb_amount = this->absorb_amount;
  m_nAbsorbRemaining = this->m_nAbsorbRemaining;
  Parent = CDOTA_Buff::GetParent(this);
  if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value && absorb_amount - m_nAbsorbRemaining > 0 )
  {
    v5 = CDOTA_Buff::GetParent(this);
    if ( v5 != 0 )
    {
      v6 = 0;
      if ( v5->m_bIsDOTANPC && (v5->m_iUnitType & 1) != 0 && !v5->m_bIsIllusion.m_Value )
        v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    EconEntity_OnOwnerKillEaterEvent(
      v6,
      0,
      kill_eater_event_t::kKillEaterEvent_EmberSpirit_FlameGuardDamageAbsorbed,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter  (line 901, @0x0000000002cb66b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B87B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vActiveRemnants);
  if ( (this->m_vActiveRemnants.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveRemnants.m_Memory),
        (this->m_vActiveRemnants.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveRemnants.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter  (line 901, @0x0000000002cb7530, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::~CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B87B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vActiveRemnants);
  if ( (this->m_vActiveRemnants.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveRemnants.m_Memory);
    if ( (this->m_vActiveRemnants.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveRemnants.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsHidden  (line 906, @0x0000000002c89060, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsHidden(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsPurgable  (line 907, @0x0000000002c89080, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsPurgable(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsPermanent  (line 908, @0x0000000002c89090, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::IsPermanent(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::DestroyOnExpire  (line 909, @0x0000000002c890a0, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnCreated  (line 936, @0x0000000002c71bd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnCreated(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_charges = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->charge_restore_time = 0.0;
    goto LABEL_4;
  }
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "charge_restore_time", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnRefresh  (line 948, @0x0000000002c70b30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_charges"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnRefresh(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  else
    this->max_charges = 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::AddActiveRemnant  (line 955, @0x0000000002c7a440, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::AddActiveRemnant(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this,
        uint32 *hRemnant)
{
  __int64 m_Size; // r13
  int v5; // eax
  CHandle<CBaseEntity> *v6; // rax

  if ( *hRemnant != -1 )
  {
    m_Size = this->m_vActiveRemnants.m_Size;
    v5 = this->m_vActiveRemnants.m_Size;
    if ( m_Size == this->m_vActiveRemnants.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vActiveRemnants.m_Memory, 1);
      v5 = this->m_vActiveRemnants.m_Size;
    }
    this->m_vActiveRemnants.m_Size = v5 + 1;
    v6 = &this->m_vActiveRemnants.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      v6->m_Index = *hRemnant;
  }
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::RemoveActiveRemnant  (line 967, @0x0000000002c76a10, libserver.so)  // inlines: HasElement
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove
// callers: CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnDestroy, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileHit
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::RemoveActiveRemnant(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this,
        const CHandle<CBaseEntity> *hRemnant)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_vActiveRemnants; // r12

  if ( hRemnant->m_Index != -1 )
  {
    p_m_vActiveRemnants = &this->m_vActiveRemnants;
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &this->m_vActiveRemnants,
           hRemnant) >= 0 )
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
        p_m_vActiveRemnants,
        hRemnant);
  }
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnIntervalThink  (line 978, @0x0000000002c1ed30, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const this)
{
  int max_charges; // r12d
  float v3; // xmm1_4
  void (__fastcall *v4)(CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *Ability; // rax
  float v6; // xmm0_4
  CDOTABaseAbility *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]

  max_charges = this->max_charges;
  if ( max_charges <= (*(this->_vptr_CDOTA_Buff + 27))()
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), max_charges == (*(this->_vptr_CDOTA_Buff + 27))(this)) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v4 = *(this->_vptr_CDOTA_Buff + 63);
    Ability = CDOTA_Buff::GetAbility(this);
    v6 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
    v4(this, 1, v6 * charge_restore_time);
    v11 = this->charge_restore_time;
    v7 = CDOTA_Buff::GetAbility(this);
    v8 = (*(v7->_vptr_IHandleEntity + 243))(v7, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v8 * v11, v9);
  }
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::~CDOTA_Modifier_EmberSpirit_FireRemnantThinker  (line 1009, @0x0000000002c92720, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::~CDOTA_Modifier_EmberSpirit_FireRemnantThinker(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B8AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::~CDOTA_Modifier_EmberSpirit_FireRemnantThinker  (line 1009, @0x0000000002c92740, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_FireRemnantThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::~CDOTA_Modifier_EmberSpirit_FireRemnantThinker(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B8AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::IsHidden  (line 1018, @0x0000000002c890b0, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::IsHidden(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnCreated  (line 1031, @0x0000000002c1e780, libserver.so)
// calls: KeyValues::GetInt
// strings: "projHandle"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnCreated(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this,
        KeyValues *pKV)
{
  this->m_nProjectileHandle = KeyValues::GetInt(pKV, "projHandle", -1);
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX  (line 1040, @0x0000000002c40900, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CBaseAnimating::SelectWeightedSequence, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::SetParticleControlEnt (14 total)
// callers: CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnDestroy, CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileHit_ExtraData
// strings: "particles/units/heroes/hero_ember_spirit/ember_spirit_fire_remnant.vpcf"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this)
{
  CDOTA_BaseNPC *v2; // rax
  HSequence v3; // r14d
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float ModelScale; // xmm0_4
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *Caster; // rax
  Vector vecFwd; // [rsp+10h] [rbp-70h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-60h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-50h] BYREF
  QAngle angles; // [rsp+40h] [rbp-40h] BYREF
  double v21; // [rsp+50h] [rbp-30h]
  float v22; // [rsp+58h] [rbp-28h]

  this->m_nProjectileHandle = -1;
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v3.m_Data = CBaseAnimating::SelectWeightedSequence(Caster, 1500).m_Data;
  }
  else
  {
    v2 = CDOTA_Buff::GetCaster(this);
    v3.m_Data = CBaseAnimating::SelectWeightedSequence(v2, 1519).m_Data;
  }
  v4 = CDOTA_Buff::GetCaster(this);
  angles = *CBaseEntity::GetAbsAngles(v4);
  AngleVectors(&angles, &vecFwd, &vecRight, &vecUp);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ember_spirit/ember_spirit_fire_remnant.vpcf",
                      0,
                      Parent,
                      0,
                      0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Parent, 0, *&AbsOrigin->x, AbsOrigin->z);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v10,
    Parent,
    0,
    *&vecFwd.x,
    vecFwd.z,
    *&vecRight.x,
    vecRight.z,
    *&vecUp.x,
    vecUp.z);
  v11 = CDOTA_Buff::GetCaster(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 1, v11, 1, 0, vec3_invalid, 1);
  v13 = CDOTA_Buff::GetCaster(this);
  ModelScale = CBaseAnimating::GetModelScale(v13);
  v22 = 0.0;
  *(&v21 + 1) = ModelScale;
  *&v21 = v3.m_Data;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, Parent, 2, v21, v22);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::CheckState  (line 1074, @0x0000000002c1c770, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::CheckState(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBEFFLL;
}


// CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnDestroy  (line 1086, @0x0000000002c76a50, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetParent, CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::RemoveActiveRemnant, CDOTA_BaseNPC::ForceKill, CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX
// strings: "modifier_ember_spirit_fire_remnant_charge_counter"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnantThinker::OnDestroy(
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *ModifierByName; // r12
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v6; // ax
  CDOTA_BaseNPC *v7; // rax
  int m_nProjectileHandle; // esi
  EHANDLE hRemnant; // [rsp+0h] [rbp-20h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    hRemnant.m_Index = -1;
    if ( Parent != 0 )
    {
      m_pEntity = Parent->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hRemnant.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::RemoveActiveRemnant(ModifierByName, &hRemnant);
    v7 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::ForceKill(v7, 0);
  }
  m_nProjectileHandle = this->m_nProjectileHandle;
  if ( m_nProjectileHandle != -1 )
  {
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, m_nProjectileHandle);
    CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX(this);
  }
}


// CDOTA_Ability_EmberSpirit_FireRemnant::~CDOTA_Ability_EmberSpirit_FireRemnant  (line 1123, @0x0000000002ca0ec0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<RemnantData_t, int>::Purge
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::~CDOTA_Ability_EmberSpirit_FireRemnant(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  bool v2; // zf
  CUtlVectorBase<RemnantData_t,CUtlMemory<RemnantData_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vRemnantData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_45B8E30;
  this->m_vRemnantData.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vRemnantData.m_Memory,
        CUtlMemory<RemnantData_t,int>::Purge(&this->m_vRemnantData.m_Memory),
        (this->m_vRemnantData.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<RemnantData_t,int>::Purge(p_m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_EmberSpirit_FireRemnant::~CDOTA_Ability_EmberSpirit_FireRemnant  (line 1123, @0x0000000002ca1010, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_EmberSpirit_FireRemnant, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<RemnantData_t, int>::Purge
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::~CDOTA_Ability_EmberSpirit_FireRemnant(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  bool v2; // zf
  CUtlVectorBase<RemnantData_t,CUtlMemory<RemnantData_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vRemnantData.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_45B8E30;
  this->m_vRemnantData.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vRemnantData.m_Memory;
    CUtlMemory<RemnantData_t,int>::Purge(&this->m_vRemnantData.m_Memory);
    if ( (this->m_vRemnantData.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<RemnantData_t,int>::Purge(p_m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::Schema_DynamicBinding  (line 1125, @0x0000000002c890c0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FireRemnant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return CDOTA_Ability_EmberSpirit_FireRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1125, @0x0000000002c890d0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::DestructInstance  (line 1125, @0x0000000002c890e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_EmberSpirit_FireRemnant>
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::FreeInstance  (line 1125, @0x0000000002c89100, libserver.so)
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::CanAllocate  (line 1125, @0x0000000002c89120, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1125, @0x0000000002c89130, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_FireRemnant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_FireRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::AllocateInstance  (line 1125, @0x0000000002c8fca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::ConstructInstance  (line 1125, @0x0000000002c9ff10, libserver.so)  // inlines: CDOTA_Ability_EmberSpirit_FireRemnant, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_EmberSpirit_FireRemnant>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_45B8E30;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1125, @0x0000000002ca2250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1125, @0x0000000002ca2270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal  (line 1125, @0x0000000002cc5350, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ember_spirit_fire_remnant", "CDOTA_Ability_EmberSpirit_FireRemnant"
// globals: `guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass, CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo, CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo
CEntityClass *__cdecl CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass) != 0 )
  {
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pClassInfo = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_flags = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pInputs = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_nInputCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pOutputs = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_nOutputCount = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pGameClass = 0;
    CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass._vptr_CEntityClass = off_45B8DB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass);
    __cxa_atexit(
      CDOTA_Ability_EmberSpirit_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EmberSpirit_FireRemnantClass != 0 )
    return &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass;
  if ( `guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo,
      "CDOTA_Ability_EmberSpirit_FireRemnant",
      "ember_spirit_fire_remnant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo);
  }
  CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pClassInfo = &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo;
  CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pBaseClassInfo = CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EmberSpirit_FireRemnantClass = &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass;
  CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClassInfo.m_pClass = &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass;
  CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EmberSpirit_FireRemnantClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EmberSpirit_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_FireRemnantClass;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::ProcsMagicStick  (line 1129, @0x0000000002c89140, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::ProcsMagicStick(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::GetIntrinsicModifierName  (line 1135, @0x0000000002c89150, libserver.so)
// strings: "modifier_ember_spirit_fire_remnant_charge_counter"
const char *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::GetIntrinsicModifierName(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return "modifier_ember_spirit_fire_remnant_charge_counter";
}


// CDOTA_Ability_EmberSpirit_FireRemnant::GetAssociatedSecondaryAbilities  (line 1137, @0x0000000002c89160, libserver.so)
// strings: "ember_spirit_activate_fire_remnant"
const char *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return "ember_spirit_activate_fire_remnant";
}


// CDOTA_Ability_EmberSpirit_FireRemnant::IsRefreshable  (line 1142, @0x0000000002c89170, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::IsRefreshable(CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::YouForgotToImplementOrDeclareServerClass  (line 1156, @0x0000000002c1c790, libserver.so)
int __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::GetServerClass  (line 1156, @0x0000000002c35230, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::GetServerClass(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
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


// CDOTA_Ability_EmberSpirit_FireRemnant::OnUpgrade  (line 1165, @0x0000000002c218a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "ember_spirit_activate_fire_remnant"
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::OnUpgrade(CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ember_spirit_activate_fire_remnant", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::CastFilterResult  (line 1179, @0x0000000002c1f5b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_ember_spirit_fire_remnant_charge_counter"
int __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::CastFilterResult(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName == 0 || (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) != 0 )
    return 0;
  else
    return 23;
}


// CDOTA_Ability_EmberSpirit_FireRemnant::GetCustomCastError  (line 1192, @0x0000000002c1c7a0, libserver.so)
// strings: "#dota_hud_error_ember_spirit_no_charges"
const char *__fastcall CDOTA_Ability_EmberSpirit_FireRemnant::GetCustomCastError(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_ember_spirit_no_charges";
}


// CDOTA_Ability_EmberSpirit_FireRemnant::RefreshCharges  (line 1200, @0x0000000002c5f4e0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "max_charges", "modifier_ember_spirit_fire_remnant_charge_counter"
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::RefreshCharges(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  int LevelSpecialValue; // eax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  this->max_charges = LevelSpecialValue;
  v3 = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, v3);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::OnSpellStart  (line 1217, @0x0000000002c83eb0, libserver.so)  // inlines: AddActiveRemnant, AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, CopyConstruct<RemnantData_t>, Element, FastSqrt, GetBool, GetEHandle, GetEntryIndex, GetInt, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, GrowMemory, Length2D, RemnantData_t, Set, SetBlockCreepSpawn, SetThinking, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, operator[], sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_ProjectileManager::GetLinearProjectileByHandle, KeyValues::MakeCopy, DOTA_CreateUnitByName (28 total)
// strings: "speed_multiplier", "charge_restore_time", "particles/units/heroes/hero_ember_spirit/ember_spirit_fire_remnant_trail.vpcf", "projHandle", "npc_dota_ember_spirit_remnant", "modifier_ember_spirit_fire_remnant_thinker" (10 total)
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::OnSpellStart(CDOTA_Ability_EmberSpirit_FireRemnant *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  __m128i v8; // xmm0
  __m128i x_low; // xmm3
  __m128i y_low; // xmm4
  vec_t v11; // r15d
  vec_t v12; // r14d
  vec_t v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r12
  int (**vptr_IHandleEntity)(...); // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // rax
  vec_t v21; // xmm0_4
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // cx
  int v26; // r15d
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // r12
  int m_Value; // r13d
  CDOTA_BaseNPC *v29; // r12
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // rax
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm1_4
  CDOTA_BaseNPC *v38; // rax
  float v39; // xmm1_4
  CDOTA_BaseNPC *v40; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const QAngle *v43; // rax
  CEntityIdentity *v44; // rdx
  __int16 v45; // cx
  int m_Size; // eax
  RemnantData_t *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CUtlMemory<CHandle<CBaseEntity>,int> *ModifierByName; // r13
  CEntityIdentity *v50; // rdx
  __int16 v51; // cx
  int v52; // r12d
  __int64 m_nAllocationCount; // r15
  int v54; // eax
  CHandle<CBaseEntity> *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  const QAngle *AbsAngles; // rax
  float v59; // xmm0_4
  float v60; // xmm1_4
  CHandle<CBaseEntity> *m_pMemory; // rax
  void (__fastcall *v62)(CUtlMemory<CHandle<CBaseEntity>,int> *, __int64, float); // r12
  float v63; // xmm0_4
  void (__fastcall *v64)(CDOTA_Ability_EmberSpirit_FireRemnant *const); // r12
  float charge_restore_time; // [rsp+4h] [rbp-17Ch]
  CDOTA_BaseNPC *durationa; // [rsp+8h] [rbp-178h]
  int duration; // [rsp+8h] [rbp-178h]
  float fRange; // [rsp+18h] [rbp-168h]
  CDOTA_BaseNPC *fRangea; // [rsp+18h] [rbp-168h]
  int v70; // [rsp+30h] [rbp-150h]
  Vector vDir; // [rsp+40h] [rbp-140h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-130h] BYREF
  KeyValues projExtraDataKV; // [rsp+D0h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-90h] BYREF
  KeyValues kv2; // [rsp+110h] [rbp-70h] BYREF
  KeyValues kv3; // [rsp+130h] [rbp-50h] BYREF
  unsigned __int64 v77; // [rsp+148h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v77 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_multiplier", -1, 0);
  charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v5 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v6 = *&info.pszEffectName - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v5;
  vDir.x = v6;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v57 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v57);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  v7 = CDOTABaseAbility::GetCaster(this);
  *v8.m128i_i64 = (*(v7->_vptr_IHandleEntity + 386))(v7);
  x_low = LODWORD(vDir.x);
  y_low = LODWORD(vDir.y);
  *v8.m128i_i32 = ((*v8.m128i_i32 * LevelSpecialValue) / 100.0);
  *x_low.m128i_i32 = vDir.x * *v8.m128i_i32;
  *y_low.m128i_i32 = vDir.y * *v8.m128i_i32;
  *v8.m128i_i32 = *v8.m128i_i32 * vDir.z;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *&info.pszEffectName = CursorPosition;
  fRange = fsqrt(
             ((CursorPosition.x - v15->x) * (CursorPosition.x - v15->x))
           + ((CursorPosition.y - v15->y) * (CursorPosition.y - v15->y)));
  if ( fRange > vptr_IHandleEntity[229](this, &vec3_origin, 0) )
    fRange = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  y = vec3_origin.y;
  info.hSource.m_Index = -1;
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
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
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
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_ember_spirit/ember_spirit_fire_remnant_trail.vpcf";
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  info.vSpawnOrigin.x = v20->x;
  info.vSpawnOrigin.y = v20->y;
  v21 = v20->z;
  info.vVelocity.x = v11;
  info.vVelocity.y = v12;
  info.vSpawnOrigin.z = v21;
  info.vVelocity.z = v13;
  info.fDistance = fRange;
  v22 = CDOTABaseAbility::GetCaster(this);
  if ( v22 != 0 && (m_pEntity = v22->m_pEntity) != 0 )
  {
    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v25 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v25 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v24 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  v26 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  KeyValues::KeyValues(&projExtraDataKV, "fire_remnant");
  KeyValues::SetInt(&projExtraDataKV, "projHandle", v26);
  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(&g_DOTAProjectileManager, v26);
  if ( LinearProjectileByHandle != 0 )
    LinearProjectileByHandle->m_pExtraData = KeyValues::MakeCopy(&projExtraDataKV);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v29 = CDOTABaseAbility::GetCaster(this);
  fRangea = CDOTABaseAbility::GetCaster(this);
  v30 = CDOTABaseAbility::GetCaster(this);
  v31 = CBaseEntity::GetAbsOrigin(v30);
  UnitByName = DOTA_CreateUnitByName("npc_dota_ember_spirit_remnant", v31, 1, fRangea, v29, m_Value);
  if ( UnitByName != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    v33 = CDOTABaseAbility::GetCaster(this);
    v34 = CBaseEntity::GetAbsOrigin(v33);
    CBaseEntity::SetAbsOrigin(UnitByName, v34);
    KeyValues::KeyValues(&kv, "modifier_ember_spirit_fire_remnant_thinker");
    KeyValues::SetFloat(&kv, "duration", v35);
    KeyValues::SetInt(&kv, "projHandle", v26);
    v36 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v36, this, "modifier_ember_spirit_fire_remnant_thinker", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_kill");
    KeyValues::SetFloat(&kv2, "duration", v37);
    v38 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v38, this, "modifier_kill", &kv2, 0);
    KeyValues::KeyValues(&kv3, "modifier_ember_spirit_fire_remnant_timer");
    KeyValues::SetFloat(&kv3, "duration", v39);
    durationa = CDOTABaseAbility::GetCaster(this);
    v40 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v40, durationa, this, "modifier_ember_spirit_fire_remnant_timer", &kv, 0);
    UnitByName->m_bBlocksCreepSpawn = 0;
    CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, UnitByName);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    v43 = CBaseEntity::GetAbsAngles(OwnerEntity);
    CBaseEntity::SetAbsAngles(UnitByName, v43);
    v44 = UnitByName->m_pEntity;
    if ( v44 != 0 )
    {
      v45 = 0x7FFF;
      if ( v44->m_EHandle.m_Index != -1 )
        v45 = v44->m_EHandle.m_Index & 0x7FFF;
      v70 = (((v44->m_EHandle.m_Index >> 15) - (v44->m_flags & 1)) << 15) | v45 & 0x7FFF;
    }
    else
    {
      v70 = -1;
    }
    m_Size = this->m_vRemnantData.m_Size;
    duration = m_Size;
    if ( m_Size == this->m_vRemnantData.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<RemnantData_t,int>::Grow(&this->m_vRemnantData.m_Memory, 1);
      m_Size = this->m_vRemnantData.m_Size;
    }
    this->m_vRemnantData.m_Size = m_Size + 1;
    v47 = &this->m_vRemnantData.m_Memory.m_pMemory[duration];
    if ( v47 != 0 )
    {
      v47->m_nProjectileHandle = v26;
      v47->m_hRemnant.m_Index = v70;
    }
    KeyValues::~KeyValues(&kv3);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
  v48 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v48, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    if ( UnitByName != 0 )
    {
      v50 = UnitByName->m_pEntity;
      if ( v50 != 0 )
      {
        v51 = 0x7FFF;
        if ( v50->m_EHandle.m_Index != -1 )
          v51 = v50->m_EHandle.m_Index & 0x7FFF;
        v52 = (((v50->m_EHandle.m_Index >> 15) - (v50->m_flags & 1)) << 15) | v51 & 0x7FFF;
        if ( v52 != -1 )
        {
          m_nAllocationCount = ModifierByName[186].m_nAllocationCount;
          v54 = ModifierByName[186].m_nAllocationCount;
          if ( m_nAllocationCount == ModifierByName[187].m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(ModifierByName + 187, 1);
            v54 = ModifierByName[186].m_nAllocationCount;
          }
          ModifierByName[186].m_nAllocationCount = v54 + 1;
          v55 = &ModifierByName[187].m_pMemory[m_nAllocationCount];
          if ( v55 != 0 )
            v55->m_Index = v52;
        }
      }
    }
    if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
      (*&ModifierByName->m_pMemory[52].m_Index)(ModifierByName);
    if ( (*&ModifierByName->m_pMemory[54].m_Index)(ModifierByName) == 0 )
    {
      v64 = *(this->_vptr_IHandleEntity + 241);
      (*&ModifierByName->m_pMemory[66].m_Index)(ModifierByName);
      v64(this);
    }
    if ( LOBYTE(ModifierByName[188].m_nAllocationCount) == 0 )
    {
      v59 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      CDOTA_Buff::StartIntervalThink(ModifierByName, v59 * charge_restore_time, v60);
      m_pMemory = ModifierByName->m_pMemory;
      LOBYTE(ModifierByName[188].m_nAllocationCount) = 1;
      v62 = *&m_pMemory[126].m_Index;
      v63 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      v62(ModifierByName, 1, v63 * charge_restore_time);
    }
  }
  v56 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_EmberSpirit.FireRemnant.Cast", v56);
  KeyValues::~KeyValues(&projExtraDataKV);
}


// CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileThink  (line 1328, @0x0000000002c4d6f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityIndex, CGameTrace, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetParent, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, SoundEventGuid_t, ToDOTABaseNPC, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, entindex, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTA_ProjectileManager::GetLinearProjectileByHandle, CDOTA_ProjectileManager::GetLinearProjectileLocation, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CGameSceneNode::GetOwnerEntity, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter (16 total)
// strings: "Hero_EmberSpirit.FireRemnant.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileThink(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this,
        int iProjectileHandle)
{
  __int64 v4; // rbx
  RemnantData_t *v5; // rax
  uint32 m_Index; // edx
  __int16 v7; // cx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CBaseEntity *m_pInstance; // r15
  int m_fValue_low; // xmm0_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  CEntityIndex v14; // eax
  Vector vProjLocation; // [rsp+20h] [rbp-2D0h] BYREF
  CTraceFilterSimple v16; // [rsp+30h] [rbp-2C0h] BYREF
  EmitSound_t ep; // [rsp+70h] [rbp-280h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-220h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+180h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+2B8h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( this->m_vRemnantData.m_Size > 0 )
  {
    v4 = 0;
    do
    {
      v5 = &this->m_vRemnantData.m_Memory.m_pMemory[v4];
      if ( v5->m_nProjectileHandle == iProjectileHandle )
      {
        m_Index = v5->m_hRemnant.m_Index;
        if ( v5->m_hRemnant.m_Index + 2 > 1 )
        {
          v7 = v5->m_hRemnant.m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_hRemnant.m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTA_ProjectileManager::GetLinearProjectileByHandle(&g_DOTAProjectileManager, iProjectileHandle) != 0 )
              {
                CDOTA_ProjectileManager::GetLinearProjectileLocation(
                  &g_DOTAProjectileManager,
                  iProjectileHandle,
                  &vProjLocation);
                memset(&tr.m_ShapeAttributes, 0, 31);
                tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                CGameTrace::Init(&tr);
                m_fValue_low = LODWORD(phys_traceline_radius.m_pParent->m_Value.m_fValue);
                *&ep.m_nChannel = vProjLocation.x + 0.0;
                *&ep.m_SoundLevel = (vProjLocation.y + 0.0) - (vProjLocation.y + 0.0);
                ep.m_UtlVecSoundOrigin.m_Size = m_fValue_low;
                *(&ep.m_nChannel + 1) = vProjLocation.y + 0.0;
                *&ep.m_pSoundName = vProjLocation.z + 1024.0;
                HIDWORD(ep.m_pSoundName) = 0;
                ep.m_flVolume = (vProjLocation.x + 0.0) - (vProjLocation.x + 0.0);
                *&ep.m_nFlags = (vProjLocation.z - 1024.0) - (vProjLocation.z + 1024.0);
                memset(&ep.m_nPitch, 0, 36);
                *(&ep.m_UtlVecSoundOrigin.m_Size + 4) = 1;
                *(&ep.m_UtlVecSoundOrigin.m_Size + 5) = (((ep.m_flVolume * ep.m_flVolume)
                                                        + (*&ep.m_SoundLevel * *&ep.m_SoundLevel))
                                                       + (*&ep.m_nFlags * *&ep.m_nFlags)) != 0.0;
                CTraceFilterSimple::CTraceFilterSimple(&v16, 0, 4, 0);
                v16.m_attr.m_nInteractsWith |= 0x7001uLL;
                CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ep, &v16, &tr);
                vProjLocation = tr.endpos;
                CBaseEntity::SetAbsOrigin(m_pInstance, &vProjLocation);
                ep.m_pOrigin = &vProjLocation;
                ep.m_nChannel = 0;
                ep.m_flVolume = 1.0;
                ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
                ep.m_nPitch = 100;
                ep.m_flSoundTime = 0.0;
                ep.m_pflSoundDuration = 0;
                ep.m_bEmitCloseCaption = 1;
                ep.m_bWarnOnMissingCloseCaption = 0;
                ep.m_bWarnOnDirectWaveReference = 0;
                ep.m_nSpeakerEntity.m_Data = -1;
                ep.m_UtlVecSoundOrigin.m_Size = 0;
                memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
                ep.m_nFlags = 49152;
                ep.m_pSoundName = "Hero_EmberSpirit.FireRemnant.Cast";
                CRecipientFilter::CRecipientFilter(&filter);
                filter._vptr_IRecipientFilter = &off_3FB63F0;
                CRecipientFilter::AddAllPlayers(&filter);
                m_pParent = this->m_pGameSceneNode->m_pParent;
                if ( m_pParent != 0 )
                  OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
                else
                  OwnerEntity = 0;
                v14.m_Data = CEntityInstance::GetEntityIndex(OwnerEntity).m_Data;
                CBaseEntity::EmitSound(&filter, v14, &ep);
                filter._vptr_IRecipientFilter = &off_3FB63F0;
                CRecipientFilter::~CRecipientFilter(&filter);
                ep.m_UtlVecSoundOrigin.m_Size = 0;
                if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
                  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
                }
              }
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 < this->m_vRemnantData.m_Size );
  }
}


// CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileHit_ExtraData  (line 1367, @0x0000000002c793d0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, Ray_t, Remove, RnCollisionAttr_t, ToDOTABaseNPC, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[]
// calls: KeyValues::GetInt, CDOTA_ProjectileManager::GetLinearProjectileByHandle, CDOTA_ProjectileManager::GetLinearProjectileLocation, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX, DOTA_EmitSound, CDOTABaseAbility::GetCaster, CBaseEntity::StopSound (13 total)
// strings: "projHandle", "modifier_ember_spirit_fire_remnant_thinker", "Hero_EmberSpirit.FireRemnant.Create", "Hero_EmberSpirit.FireRemnant.Cast"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_EmberSpirit_FireRemnant::OnProjectileHit_ExtraData(
        CDOTA_Ability_EmberSpirit_FireRemnant *const this,
        EHANDLE hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int Int; // r13d
  int v6; // ebx
  __int64 v7; // r14
  float v8; // xmm0_4
  RemnantData_t *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  ConVar *m_pParent; // rax
  float m_fValue; // xmm1_4
  CDOTA_Modifier_EmberSpirit_FireRemnantThinker *ModifierByName; // rax
  float v19; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  int v21; // esi
  float pTraceFilter; // [rsp+8h] [rbp-198h]
  float pTraceFiltera; // [rsp+8h] [rbp-198h]
  Vector vProjLocation; // [rsp+20h] [rbp-180h] BYREF
  CTraceFilterSimple v26; // [rsp+30h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  trace_t tr; // [rsp+C0h] [rbp-E0h] BYREF

  Int = KeyValues::GetInt(pExtraData, "projHandle", 0);
  v6 = this->m_vRemnantData.m_Size - 1;
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = 0.0;
    do
    {
      while ( 1 )
      {
        v9 = &this->m_vRemnantData.m_Memory.m_pMemory[v7];
        if ( Int == v9->m_nProjectileHandle )
        {
          m_Index = v9->m_hRemnant.m_Index;
          if ( v9->m_hRemnant.m_Index + 2 > 1 )
          {
            v11 = v9->m_hRemnant.m_Index;
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_hRemnant.m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[v11 & 0x1FF];
              if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
              {
                m_pInstance = v13->m_pInstance;
                if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  pTraceFilter = v8;
                  LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(
                                               &g_DOTAProjectileManager,
                                               Int);
                  v8 = pTraceFilter;
                  if ( LinearProjectileByHandle != 0 )
                    break;
                }
              }
            }
          }
        }
        --v6;
        --v7;
        if ( v6 == -1 )
          return 0;
      }
      CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, Int, &vProjLocation);
      memset(&tr.m_ShapeAttributes, 0, 31);
      tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&tr);
      ray.m_IsRay = 1;
      ray.m_Start.w = pTraceFilter;
      m_pParent = phys_traceline_radius.m_pParent;
      ray.m_Delta.w = pTraceFilter;
      ray.m_StartOffset.w = pTraceFilter;
      ray.m_Extents.w = pTraceFilter;
      ray.m_Extents.z = pTraceFilter;
      m_fValue = m_pParent->m_Value.m_fValue;
      ray.m_Extents.y = pTraceFilter;
      ray.m_flRadius = m_fValue;
      ray.m_Extents.x = pTraceFilter;
      ray.m_Delta.y = (vProjLocation.y + pTraceFilter) - (vProjLocation.y + pTraceFilter);
      ray.m_StartOffset.z = pTraceFilter;
      ray.m_Delta.x = (vProjLocation.x + pTraceFilter) - (vProjLocation.x + pTraceFilter);
      ray.m_StartOffset.y = pTraceFilter;
      ray.m_Delta.z = (vProjLocation.z - 1024.0) - (vProjLocation.z + 1024.0);
      ray.m_StartOffset.x = pTraceFilter;
      ray.m_Start.x = vProjLocation.x + pTraceFilter;
      ray.m_Start.y = vProjLocation.y + pTraceFilter;
      ray.m_Start.z = vProjLocation.z + 1024.0;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != pTraceFilter;
      CTraceFilterSimple::CTraceFilterSimple(&v26, 0, 4, 0);
      v26.m_attr.m_nInteractsWith |= 0x7001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v26, &tr);
      vProjLocation = tr.endpos;
      CBaseEntity::SetAbsOrigin(m_pInstance, &vProjLocation);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_ember_spirit_fire_remnant_thinker", 0);
      v19 = pTraceFilter;
      if ( ModifierByName != 0 )
      {
        CDOTA_Modifier_EmberSpirit_FireRemnantThinker::StartFX(ModifierByName);
        DOTA_EmitSound(10, "Hero_EmberSpirit.FireRemnant.Create", m_pInstance);
        Caster = CDOTABaseAbility::GetCaster(this);
        CBaseEntity::StopSound(Caster, "Hero_EmberSpirit.FireRemnant.Cast");
        v19 = pTraceFilter;
      }
      v21 = v6--;
      pTraceFiltera = v19;
      --v7;
      CUtlVectorBase<RemnantData_t,CUtlMemory<RemnantData_t,int>>::ShiftElementsLeft(&this->m_vRemnantData, v21, 1);
      v8 = pTraceFiltera;
      --this->m_vRemnantData.m_Size;
    }
    while ( v6 != -1 );
  }
  return 0;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::~CDOTA_Ability_EmberSpirit_Activate_FireRemnant  (line 1421, @0x0000000002c98620, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::~CDOTA_Ability_EmberSpirit_Activate_FireRemnant(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  this->_vptr_IHandleEntity = &off_45B9930;
  this->_vptr_CHorizontalMotionController = &off_45BA3B8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::~CDOTA_Ability_EmberSpirit_Activate_FireRemnant  (line 1421, @0x0000000002c98650, libserver.so)  // inlines: ~CDOTA_Ability_EmberSpirit_Activate_FireRemnant
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::~CDOTA_Ability_EmberSpirit_Activate_FireRemnant(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  this->_vptr_IHandleEntity = &off_45B9930;
  this->_vptr_CHorizontalMotionController = &off_45BA3B8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::Schema_DynamicBinding  (line 1423, @0x0000000002c89180, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_Activate_FireRemnant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  return CDOTA_Ability_EmberSpirit_Activate_FireRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1423, @0x0000000002c891a0, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::DestructInstance  (line 1423, @0x0000000002c891b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_EmberSpirit_Activate_FireRemnant>
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::FreeInstance  (line 1423, @0x0000000002c891d0, libserver.so)
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::CanAllocate  (line 1423, @0x0000000002c891f0, libserver.so)
bool __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1423, @0x0000000002c89200, libserver.so)
// globals: CDOTA_Ability_EmberSpirit_Activate_FireRemnant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EmberSpirit_Activate_FireRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::AllocateInstance  (line 1423, @0x0000000002c8fce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::ConstructInstance  (line 1423, @0x0000000002c94bc0, libserver.so)  // inlines: CDOTA_Ability_EmberSpirit_Activate_FireRemnant, CEntityHandle, CHandle, CHorizontalMotionController, Construct<CDOTA_Ability_EmberSpirit_Activate_FireRemnant>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_45B9930;
    *(p + 114) = &off_45BA3B8;
    *(p + 241) = -1;
  }
  return p;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002ca22a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002ca22c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal  (line 1423, @0x0000000002cc56a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "ember_spirit_activate_fire_remnant", "CDOTA_Ability_EmberSpirit_Activate_FireRemnant"
// globals: `guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo
CEntityClass *__cdecl CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass) != 0 )
  {
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pClassInfo = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_flags = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pInputs = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_nInputCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pOutputs = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_nOutputCount = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pGameClass = 0;
    CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass._vptr_CEntityClass = off_45B98B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass);
    __cxa_atexit(
      CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass != 0 )
    return &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass;
  if ( `guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo,
      "CDOTA_Ability_EmberSpirit_Activate_FireRemnant",
      "ember_spirit_activate_fire_remnant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo);
  }
  CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pClassInfo = &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo;
  CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pBaseClassInfo = CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass = &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass;
  CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClassInfo.m_pClass = &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass;
  CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EmberSpirit_Activate_FireRemnantClass;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetAssociatedPrimaryAbilities  (line 1444, @0x0000000002c89210, libserver.so)
// strings: "ember_spirit_fire_remnant"
const char *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  return "ember_spirit_fire_remnant";
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::YouForgotToImplementOrDeclareServerClass  (line 1460, @0x0000000002c1c7b0, libserver.so)
int __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  return 0;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetServerClass  (line 1460, @0x0000000002c35a30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetServerClass(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
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


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CastFilterResult  (line 1470, @0x0000000002c77950, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove
// strings: "modifier_ember_spirit_fire_remnant_charge_counter", "modifier_ember_spirit_fire_remnant"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CastFilterResult(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTA_BaseNPC *v5; // rax
  int vptr_CDOTA_Buff; // eax
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int16 *v10; // rdx
  int v11; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName == 0 )
    return 23;
  v5 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v5, "modifier_ember_spirit_fire_remnant", 0) != 0 )
    return 23;
  vptr_CDOTA_Buff = ModifierByName[1]._vptr_CDOTA_Buff;
  v8 = vptr_CDOTA_Buff - 1;
  if ( vptr_CDOTA_Buff - 1 >= 0 )
  {
    v9 = 4LL * v8;
    do
    {
      v10 = (ModifierByName[1].m_References.m_pHead + v9);
      v11 = *v10;
      if ( (*v10 + 2) <= 1
        || (v12 = *v10, (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v10 >> 9) & 0x3F]) == 0)
        || (v14 = &v13[v12 & 0x1FF]) == 0
        || v11 != v14->m_EHandle.m_Index
        || v14->m_pInstance == 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&ModifierByName[1], v8);
      }
      --v8;
      v9 -= 4;
    }
    while ( v8 != -1 );
    vptr_CDOTA_Buff = ModifierByName[1]._vptr_CDOTA_Buff;
  }
  if ( vptr_CDOTA_Buff != 0 )
    return 0;
  else
    return 23;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetCustomCastError  (line 1506, @0x0000000002c1c7c0, libserver.so)
// strings: "#dota_hud_error_ember_spirit_no_active_remnants"
const char *__fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetCustomCastError(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_ember_spirit_no_active_remnants";
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnSpellStart  (line 1513, @0x0000000002c77f90, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!, operator=, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, SortEHANDLEVectorByLocation, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile, KeyValues::KeyValues (17 total)
// strings: "modifier_ember_spirit_fire_remnant_charge_counter", "modifier_ember_spirit_fire_remnant_thinker", "ember_spirit_sleight_of_fist", "modifier_ember_spirit_sleight_of_fist_caster", "modifier_ember_spirit_fire_remnant"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnSpellStart(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r14
  CDOTA_BaseNPC *v4; // rax
  CBaseEntity *CursorTarget; // rax
  int vptr_CDOTA_Buff; // eax
  int v7; // ebx
  __int64 v8; // r12
  unsigned __int16 *v9; // rsi
  int v10; // ecx
  unsigned __int64 v11; // rsi
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_Buff *v16; // r12
  void (__fastcall *v17)(CDOTA_Buff *, __int64, float); // r14
  float v18; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  int v20; // edx
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_Ability_EmberSpirit_SleightOfFist *AbilityByName; // r12
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTALocomotor *v26; // rax
  CEntityIdentity *v27; // rax
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // r12
  CDOTA_BaseNPC *v30; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-70h] BYREF
  Vector vTargetPosition; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    v4 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::GetAbsOrigin(v4);
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
    {
      CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
      vTargetPosition = *CBaseEntity::GetAbsOrigin(CursorTarget);
    }
    else
    {
      vTargetPosition = CDOTABaseAbility::GetCursorPosition(this);
    }
    vptr_CDOTA_Buff = ModifierByName[1]._vptr_CDOTA_Buff;
    v7 = vptr_CDOTA_Buff - 1;
    if ( vptr_CDOTA_Buff - 1 >= 0 )
    {
      v8 = 4LL * v7;
      do
      {
        v9 = (ModifierByName[1].m_References.m_pHead + v8);
        v10 = *v9;
        if ( (*v9 + 2) <= 1
          || (v11 = *v9, (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9) & 0x3F]) == 0)
          || (v13 = &v12[v11 & 0x1FF]) == 0
          || v10 != v13->m_EHandle.m_Index
          || v13->m_pInstance == 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&ModifierByName[1], v7);
        }
        --v7;
        v8 -= 4;
      }
      while ( v7 != -1 );
      vptr_CDOTA_Buff = ModifierByName[1]._vptr_CDOTA_Buff;
    }
    if ( vptr_CDOTA_Buff != 0 )
    {
      SortEHANDLEVectorByLocation(&ModifierByName[1], &vTargetPosition, 1);
      v14 = CEntityHandle::operator CEntityInstance *(ModifierByName[1].m_References.m_pHead);
      v15 = v14;
      if ( v14 != 0 && v14->m_bIsDOTANPC )
      {
        v16 = CDOTA_BaseNPC::FindModifierByName(v14, "modifier_ember_spirit_fire_remnant_thinker", 0);
        if ( v16 != 0 )
        {
          v17 = *(v16->_vptr_CDOTA_Buff + 63);
          v18 = (*(v16->_vptr_CDOTA_Buff + 31))(v16);
          v17(v16, 1, v18 + 10.0);
        }
        m_pEntity = v15->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v21 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hRemnantToKill.m_Index) = v21 | this->m_hRemnantToKill.m_Index & 0x8000;
          this->m_hRemnantToKill.m_Index = (v20 << 15) | this->m_hRemnantToKill.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hRemnantToKill.m_Index = -1;
        }
        v22 = CDOTABaseAbility::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v22, "ember_spirit_sleight_of_fist", 0);
        if ( AbilityByName != 0 )
        {
          v24 = CDOTABaseAbility::GetCaster(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v24, "modifier_ember_spirit_sleight_of_fist_caster", 0) != 0 )
            CDOTA_Ability_EmberSpirit_SleightOfFist::EndSleightOfFist(AbilityByName);
        }
        v25 = CDOTABaseAbility::GetCaster(this);
        v26 = (*(v25->_vptr_IHandleEntity + 376))(v25);
        if ( CDOTALocomotor::ApplyHorizontalMotionController(v26, &this->CHorizontalMotionController, 0) )
        {
          v27 = v15->m_pEntity;
          hTarget.m_Index = -1;
          if ( v27 != 0 )
          {
            v28 = 0x7FFF;
            if ( v27->m_EHandle.m_Index != -1 )
              v28 = v27->m_EHandle.m_Index & 0x7FFF;
            hTarget.m_Index = (((v27->m_EHandle.m_Index >> 15) - (v27->m_flags & 1)) << 15) | v28 & 0x7FFF;
          }
          CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile(this, &hTarget);
          KeyValues::KeyValues(&kv, "modifier_ember_spirit_fire_remnant");
          v29 = CDOTABaseAbility::GetCaster(this);
          v30 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v30, v29, this, "modifier_ember_spirit_fire_remnant", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile  (line 1612, @0x0000000002c5f550, libserver.so)  // inlines: CEntityHandle, CHandle, Color, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, Set, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, sTrackingProjectileCreateInfo
// calls: __stack_chk_fail, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_ProjectileManager::CreateTrackingProjectile
// callers: CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnSpellStart, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileHit
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        _WORD *hTarget)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // rax
  float v17; // xmm0_4
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  vec_t z; // xmm0_4
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  float x; // [rsp+8h] [rbp-A8h]
  float y; // [rsp+Ch] [rbp-A4h]
  Vector vDir; // [rsp+10h] [rbp-A0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-90h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-28h]

  v36 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[*hTarget & 0x1FF];
      if ( v4 != 0 && *hTarget == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          x = AbsOrigin->x;
          y = AbsOrigin->y;
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
          Caster = CDOTABaseAbility::GetCaster(this);
          v10 = CBaseEntity::GetAbsOrigin(Caster);
          v11 = y - v10->y;
          v12 = x - v10->x;
          vDir.z = 0.0;
          vDir.y = v11;
          vDir.x = v12;
          if ( VectorNormalize(&vDir) < 0.0099999998 )
          {
            v13 = CDOTABaseAbility::GetCaster(this);
            AbsAngles = CBaseEntity::GetAbsAngles(v13);
            AngleVectors(AbsAngles, &vDir, 0, 0);
          }
          v15 = CDOTABaseAbility::GetCaster(this);
          v16 = CBaseEntity::GetAbsOrigin(v15);
          v17 = fsqrt(((x - v16->x) * (x - v16->x)) + ((y - v16->y) * (y - v16->y)));
          if ( (v17 * 0.40000001) > 520.0 )
            LevelSpecialValue = (v17 / 0.40000001);
          v18 = CDOTABaseAbility::GetCaster(this);
          v19 = CBaseEntity::GetAbsOrigin(v18);
          this->m_vStartLocation.x = v19->x;
          v20 = v19->y;
          info.pszEffectName = 0;
          this->m_vStartLocation.y = v20;
          z = v19->z;
          info.hSource.m_Index = -1;
          info.hTarget.m_Index = -1;
          this->m_vStartLocation.z = z;
          info.colorGemColor = 0;
          info.pAttackRecord = 0;
          info.iSourceAttachment = 1;
          info.bProvidesVision = 0;
          info.vSourceLoc.x = vec3_origin.x;
          v22 = vec3_origin.y;
          info.iVisionTeamNumber = -1;
          info.vSourceLoc.y = v22;
          v23 = vec3_origin.z;
          info.iVisionRadius = 0;
          info.vSourceLoc.z = v23;
          info.bDrawsOnMinimap = 0;
          info.bDodgeable = 1;
          info.bIsAttack = 0;
          info.bVisibleToEnemies = 1;
          info.pKVExtraData = 0;
          info.bReplaceExisting = 0;
          info.flExpireTime = 0.0;
          info.flMaxImpactTime = 0.0;
          info.bServerOnly = 0;
          info.pAbility = this;
          info.iMoveSpeed = LevelSpecialValue;
          v24 = CDOTABaseAbility::GetCaster(this);
          if ( v24 != 0 && (m_pEntity = v24->m_pEntity) != 0 )
          {
            v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v27 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(info.hSource.m_Index) = v27 | info.hSource.m_Index & 0x8000;
            info.hSource.m_Index = (v26 << 15) | info.hSource.m_Index & 0x7FFF;
          }
          else
          {
            info.hSource.m_Index = -1;
          }
          v28 = CDOTABaseAbility::GetCaster(this);
          v29 = CBaseEntity::GetAbsOrigin(v28);
          info.vSourceLoc.x = v29->x;
          info.vSourceLoc.y = v29->y;
          v30 = v29->z;
          info.iSourceAttachment = 3;
          LODWORD(v29) = *hTarget;
          info.bDodgeable = 0;
          info.vSourceLoc.z = v30;
          this->m_vProjectileLocation.x = this->m_vStartLocation.x;
          v31 = this->m_vStartLocation.y;
          info.hTarget.m_Index = v29;
          this->m_vProjectileLocation.y = v31;
          this->m_vProjectileLocation.z = this->m_vStartLocation.z;
          CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
        }
      }
    }
  }
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileThink  (line 1662, @0x0000000002c225e0, libserver.so)  // inlines: operator=
// calls: CDOTABaseAbility::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_ember_spirit_fire_remnant"
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileThink(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // eax
  float v6; // xmm3_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax

  this->m_vProjectileLocation = *vLocation;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v5, *vLocation, 200.0, v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  if ( (*(v7->_vptr_IHandleEntity + 408))(v7) == 0 )
  {
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v8, "modifier_ember_spirit_fire_remnant");
  }
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileHit  (line 1677, @0x0000000002c788d0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator!, operator!=<CBaseEntity>, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, FindUnitsInRadius, ApplyDamage, CGridNav::DestroyTreesAroundPoint, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CBaseEntity::GetAbsOrigin (21 total)
// strings: "modifier_ember_spirit_fire_remnant_charge_counter", "Hero_EmberSpirit.FireRemnant.Explode", "modifier_ember_spirit_fire_remnant", "modifier_ember_spirit_fire_remnant_timer"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnProjectileHit(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        EHANDLE hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r15d
  int v8; // ebx
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  __m128i v12; // xmm4
  float v13; // ebx
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  __int64 i; // rbx
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  unsigned int v26; // eax
  float v27; // xmm3_4
  int m_Size; // r12d
  int v29; // r12d
  const CEntityHandle *m_pMemory; // rdi
  __int64 v31; // r14
  const CEntityHandle *v32; // rdx
  uint32 v33; // eax
  __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CEntityInstance *v37; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v39; // eax
  __int16 v40; // cx
  CDOTA_BaseNPC *v41; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v44; // rax
  CDOTALocomotor *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter *pRemnantBuff; // [rsp+28h] [rbp-88h]
  EHANDLE hTargeta; // [rsp+40h] [rbp-70h] BYREF
  Vector vFinalLocation; // [rsp+50h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-50h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    vFinalLocation = *vLocation;
    v9 = CEntityHandle::operator CEntityInstance *(&this->m_hRemnantToKill);
    v10 = v9;
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    {
      v41 = CDOTABaseAbility::GetCaster(this);
      pRemnantBuff = CDOTA_BaseNPC::FindModifierByName(v41, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
      if ( pRemnantBuff != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
        vFinalLocation.x = AbsOrigin->x;
        vFinalLocation.y = AbsOrigin->y;
        z = AbsOrigin->z;
        LODWORD(AbsOrigin) = this->m_hRemnantToKill.m_Index;
        vFinalLocation.z = z;
        hEntities.m_Size = AbsOrigin;
        CDOTA_Modifier_EmberSpirit_FireRemnant_ChargeCounter::RemoveActiveRemnant(pRemnantBuff, &hEntities);
        CDOTA_BaseNPC::ForceKill(v10, 0);
        DOTA_EmitSound(10, "Hero_EmberSpirit.FireRemnant.Explode", v10);
      }
    }
    else
    {
      v11 = CDOTABaseAbility::GetCaster(this);
      pRemnantBuff = CDOTA_BaseNPC::FindModifierByName(v11, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
    }
    *v12.m128i_i32 = v8;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v15->m_iTeamNum.m_Value, vLocation, v14, v13, &hEntities, 2, 3, 0, 0, 0);
    for ( i = 0; hEntities.m_Size > i; ++i )
    {
      while ( 1 )
      {
        v17 = &hEntities.m_Memory.m_pMemory[i];
        m_Index = v17->m_Index;
        if ( v17->m_Index + 2 > 1 )
        {
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = &v20[v19 & 0x1FF];
            if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
            {
              m_pInstance = v21->m_pInstance;
              if ( v21->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_nUnitState64.m_Value;
                if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
                  break;
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++i )
          goto LABEL_19;
      }
      v24 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v24, m_pInstance, this, LevelSpecialValue, 2, 0);
    }
LABEL_19:
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v26, *vLocation, 100.0, v27);
    this->m_hRemnantToKill.m_Index = -1;
    if ( pRemnantBuff != 0 )
    {
      m_Size = pRemnantBuff->m_vActiveRemnants.m_Size;
      if ( m_Size != 0 )
      {
        v29 = m_Size - 1;
        m_pMemory = pRemnantBuff->m_vActiveRemnants.m_Memory.m_pMemory;
        if ( v29 >= 0 )
        {
          v31 = v29;
          do
          {
            v32 = &m_pMemory[v31];
            v33 = m_pMemory[v31].m_Index;
            if ( v33 + 2 <= 1
              || (v34 = v32->m_Index,
                  (v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v32->m_Index) >> 9) & 0x3F]) == 0)
              || (v36 = &v35[v34 & 0x1FF]) == 0
              || v33 != v36->m_EHandle.m_Index
              || v36->m_pInstance == 0 )
            {
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                &pRemnantBuff->m_vActiveRemnants,
                v29);
              m_pMemory = pRemnantBuff->m_vActiveRemnants.m_Memory.m_pMemory;
            }
            --v29;
            --v31;
          }
          while ( v29 != -1 );
        }
        v37 = CEntityHandle::operator CEntityInstance *(m_pMemory);
        if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
        {
          m_pEntity = v37->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v40 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hRemnantToKill.m_Index) = v40 | this->m_hRemnantToKill.m_Index & 0x8000;
            this->m_hRemnantToKill.m_Index = (v39 << 15) | this->m_hRemnantToKill.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hRemnantToKill.m_Index = -1;
          }
        }
      }
    }
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hRemnantToKill) != 0 )
    {
      hTargeta.m_Index = this->m_hRemnantToKill.m_Index;
      CDOTA_Ability_EmberSpirit_Activate_FireRemnant::CreateRemnantProjectile(this, &hTargeta);
    }
    else
    {
      v44 = CDOTABaseAbility::GetCaster(this);
      v45 = (*(v44->_vptr_IHandleEntity + 376))(v44);
      CDOTALocomotor::RemoveHorizontalMotionController(v45, &this->CHorizontalMotionController);
      v46 = CDOTABaseAbility::GetCaster(this);
      FindClearSpaceForUnit(v46, vFinalLocation, 0);
      v47 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v47, "modifier_ember_spirit_fire_remnant");
      while ( 1 )
      {
        v48 = CDOTABaseAbility::GetCaster(this);
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v48, "modifier_ember_spirit_fire_remnant_timer", 0);
        if ( ModifierByName == 0 )
          break;
        CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
  }
  return 0;
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::UpdateHorizontalMotion  (line 1758, @0x0000000002c25b60, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles
// strings: "modifier_ember_spirit_fire_remnant"
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::UpdateHorizontalMotion(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  if ( CDOTA_BaseNPC::FindModifierByName(me, "modifier_ember_spirit_fire_remnant", 0) != 0 )
  {
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
    CBaseEntity::SetAbsAngles(me, &this->m_ProjectileAngles);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 334))(this);
  }
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnHorizontalMotionInterrupted  (line 1774, @0x0000000002c22f20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::RemoveHorizontalMotionController, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_ember_spirit_fire_remnant"
void __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::OnHorizontalMotionInterrupted(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v6, *AbsOrigin, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v7, "modifier_ember_spirit_fire_remnant");
}


// CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetAbilityDamageToTargetOverInterval  (line 1786, @0x0000000002c562c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_ember_spirit_fire_remnant_charge_counter"
__int64 __fastcall CDOTA_Ability_EmberSpirit_Activate_FireRemnant::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EmberSpirit_Activate_FireRemnant *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v9; // [rsp-2Ch] [rbp-2Ch]
  float v10; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_ember_spirit_fire_remnant_charge_counter", 0);
    if ( ModifierByName != 0 )
      v9 = (LODWORD(ModifierByName[1]._vptr_CDOTA_Buff) + (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName));
    else
      v9 = 0.0;
    v10 = v9 * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v10);
  }
  return result;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer  (line 1809, @0x0000000002c93b90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer(
        CDOTA_Modifier_EmberSpirit_FireRemnant_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BA410;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer  (line 1809, @0x0000000002c93bb0, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::~CDOTA_Modifier_EmberSpirit_FireRemnant_Timer(
        CDOTA_Modifier_EmberSpirit_FireRemnant_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BA410;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::GetAttributes  (line 1814, @0x0000000002c93cc0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::GetAttributes(
        CDOTA_Modifier_EmberSpirit_FireRemnant_Timer *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::IsPurgable  (line 1815, @0x0000000002c89220, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::IsPurgable(
        CDOTA_Modifier_EmberSpirit_FireRemnant_Timer *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::IsPermanent  (line 1816, @0x0000000002c89230, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant_Timer::IsPermanent(
        CDOTA_Modifier_EmberSpirit_FireRemnant_Timer *const this)
{
  return 1;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::~CDOTA_Modifier_EmberSpirit_FireRemnant  (line 1825, @0x0000000002c926d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::~CDOTA_Modifier_EmberSpirit_FireRemnant(
        CDOTA_Modifier_EmberSpirit_FireRemnant *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BA770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::~CDOTA_Modifier_EmberSpirit_FireRemnant  (line 1825, @0x0000000002c926f0, libserver.so)  // inlines: ~CDOTA_Modifier_EmberSpirit_FireRemnant
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::~CDOTA_Modifier_EmberSpirit_FireRemnant(
        CDOTA_Modifier_EmberSpirit_FireRemnant *const this)
{
  this->_vptr_CDOTA_Buff = &off_45BA770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::GetTexture  (line 1830, @0x0000000002c89240, libserver.so)
// strings: "ember_spirit_fire_remnant"
const char *__fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::GetTexture(
        CDOTA_Modifier_EmberSpirit_FireRemnant *const this)
{
  return "ember_spirit_fire_remnant";
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::IsPurgable  (line 1832, @0x0000000002c89250, libserver.so)
bool __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::IsPurgable(CDOTA_Modifier_EmberSpirit_FireRemnant *const this)
{
  return 0;
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::OnCreated  (line 1844, @0x0000000002c20550, libserver.so)
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound, CBaseEntity::AddEffects
// strings: "particles/units/heroes/hero_ember_spirit/ember_spirit_remnant_dash.vpcf", "attach_hitloc", "Hero_EmberSpirit.FireRemnant.Activate"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::OnCreated(
        CDOTA_Modifier_EmberSpirit_FireRemnant *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_ParticleManager *v6; // rax
  __int64 v7; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_ember_spirit/ember_spirit_remnant_dash.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = GetParticleManager();
  v7 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v6, Caster, 0, Parent, 5, "attach_hitloc", vec3_invalid, 1);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  *&v13.x = v7;
  v13.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Caster, 1, v8, 1, 0, v13, 1);
  CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
  v10 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_EmberSpirit.FireRemnant.Activate", v10);
  v11 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::AddEffects(v11, 32);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::OnDestroy  (line 1859, @0x0000000002c2b140, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetCaster, DOTA_EmitSound, CBaseEntity::StopSound, CBaseEntity::DispatchUpdateTransmitState
// strings: "Hero_EmberSpirit.FireRemnant.Stop", "Hero_EmberSpirit.FireRemnant.Activate"
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::OnDestroy(CDOTA_Modifier_EmberSpirit_FireRemnant *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_EmberSpirit.FireRemnant.Stop", Caster);
  v3 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v3, "Hero_EmberSpirit.FireRemnant.Activate");
  v4 = CDOTA_Buff::GetCaster(this);
  (*(v4->_vptr_IHandleEntity + 188))(v4, v4->m_fEffects.m_Value & 0xFFFFFFDF);
  v4->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v4);
}


// CDOTA_Modifier_EmberSpirit_FireRemnant::CheckState  (line 1871, @0x0000000002c1c7d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_EmberSpirit_FireRemnant::CheckState(
        CDOTA_Modifier_EmberSpirit_FireRemnant *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFEFFLL;
}


