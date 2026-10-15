// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:46
class CDOTA_Unit_Hero_PhantomAssassin : public CDOTA_BaseNPC_Hero {
	class NetworkVar_m_nArcanaLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_nFXDeath;  // +0x16ec
	typedef CDOTA_Unit_Hero_PhantomAssassin ThisClass;

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
	CDOTA_Unit_Hero_PhantomAssassin(CDOTA_Unit_Hero_PhantomAssassin &);
	CDOTA_Unit_Hero_PhantomAssassin(CDOTA_Unit_Hero_PhantomAssassin &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void CalculateActivityModifiers(Activity);
	virtual void OnDeath();
	virtual void OnAlive();
	virtual void OnDying();
	uint32 GetArcanaLevel();
	void SetArcanaLevel(uint32);
	virtual void OnIllusionPostSpawn(CDOTA_BaseNPC *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	CDOTA_Unit_Hero_PhantomAssassin();
	virtual ~CDOTA_Unit_Hero_PhantomAssassin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[442] CalculateActivityModifiers
	// vtable[470] OnDeath
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[491] OnIllusionPostSpawn
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 5880
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:114
class C_CDOTA_Unit_Hero_PhantomAssassin_MapInstall {
	C_CDOTA_Unit_Hero_PhantomAssassin_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:235
class CDOTA_Ability_PhantomAssassin_Stifling_Dagger : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomAssassin_Stifling_Dagger(CDOTA_Ability_PhantomAssassin_Stifling_Dagger &);
	CDOTA_Ability_PhantomAssassin_Stifling_Dagger(CDOTA_Ability_PhantomAssassin_Stifling_Dagger &);
	CDOTA_Ability_PhantomAssassin_Stifling_Dagger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_PhantomAssassin_Stifling_Dagger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:421
class CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster : public CDOTA_Buff {
public:

private:

	int base_damage;  // +0xba8
	int attack_factor;  // +0xbac
	CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:480
class CDOTA_Modifier_PhantomAssassin_StiflingDagger : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	CDOTA_Modifier_PhantomAssassin_StiflingDagger();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_StiflingDagger();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:539
class CDOTA_Ability_PhantomAssassin_PhantomStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomAssassin_PhantomStrike(CDOTA_Ability_PhantomAssassin_PhantomStrike &);
	CDOTA_Ability_PhantomAssassin_PhantomStrike(CDOTA_Ability_PhantomAssassin_PhantomStrike &);
	CDOTA_Ability_PhantomAssassin_PhantomStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool IsReflectionDelayed();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasBlink();
	virtual ~CDOTA_Ability_PhantomAssassin_PhantomStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[209] IsReflectionDelayed
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[323] HasBlink
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:558
class C_CDOTA_Ability_PhantomAssassin_PhantomStrike_MapInstall {
	C_CDOTA_Ability_PhantomAssassin_PhantomStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:683
class CDOTA_Modifier_PhantomAssassin_PhantomStrike : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int bonus_max_attack_count;  // +0xbb0
	int m_iAttacks;  // +0xbb4
	CDOTA_Modifier_PhantomAssassin_PhantomStrike();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_PhantomStrike();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:812
class CDOTA_Ability_PhantomAssassin_Blur : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomAssassin_Blur(CDOTA_Ability_PhantomAssassin_Blur &);
	CDOTA_Ability_PhantomAssassin_Blur(CDOTA_Ability_PhantomAssassin_Blur &);
	CDOTA_Ability_PhantomAssassin_Blur();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_PhantomAssassin_Blur();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:826
class CDOTA_Modifier_PhantomAssassin_Blur : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int bonus_evasion;  // +0xbac
	float transparency_fade;  // +0xbb0
	float m_fEnemiesFirstSeenTime;  // +0xbb4
	CDOTA_Modifier_PhantomAssassin_Blur();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_PhantomAssassin_Blur();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:934
class CDOTA_Modifier_PhantomAssassin_BlurActive : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float transparency_fade;  // +0xbac
	float m_fLastSeenEnemyTime;  // +0xbb0
	float m_fAddTime;  // +0xbb4
	CDOTA_Modifier_PhantomAssassin_BlurActive();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_PhantomAssassin_BlurActive();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1024
class CDOTA_Ability_PhantomAssassin_CoupdeGrace : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomAssassin_CoupdeGrace(CDOTA_Ability_PhantomAssassin_CoupdeGrace &);
	CDOTA_Ability_PhantomAssassin_CoupdeGrace(CDOTA_Ability_PhantomAssassin_CoupdeGrace &);
	CDOTA_Ability_PhantomAssassin_CoupdeGrace();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_PhantomAssassin_CoupdeGrace();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1038
class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public CDOTA_Buff {
public:

private:

	int crit_bonus;  // +0xba8
	int crit_chance;  // +0xbac
	bool crit_active;  // +0xbb0
	CDOTA_Modifier_PhantomAssassin_CoupdeGrace();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_CoupdeGrace();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1200
class CDOTA_PhantomAssassin_Gravestone : public CDOTA_BaseNPC_Additive {
public:

private:

	int m_nVictimPlayerID;  // +0x1198
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
	CDOTA_PhantomAssassin_Gravestone(CDOTA_PhantomAssassin_Gravestone &);
	CDOTA_PhantomAssassin_Gravestone(CDOTA_PhantomAssassin_Gravestone &);
	CDOTA_PhantomAssassin_Gravestone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void SetVictimPlayerID(int);
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_PhantomAssassin_Gravestone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1232
class C_CDOTA_PhantomAssassin_Gravestone_MapInstall {
	C_CDOTA_PhantomAssassin_Gravestone_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1299
class CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker : public CDOTA_Buff {
public:

private:

	int m_nEpitaph;  // +0xba8
	int m_nVictimPlayerID;  // +0xbac
	int m_nVictimHeroID;  // +0xbb0
	int m_nCritDmg;  // +0xbb4
	int m_nContractComplete;  // +0xbb8
	CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetEpitaph(const CModifierParams &);
	ModifierVariant_t GetVictimPlayerID(const CModifierParams &);
	ModifierVariant_t GetVictimHeroID(const CModifierParams &);
	ModifierVariant_t GetCritDamage(const CModifierParams &);
	ModifierVariant_t GetContractStatus(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1398
class CDOTA_Modifier_PhantomAssassin_Gravestone : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	bool m_bContractGravestoneComplete;  // +0xbac
	CDOTA_Modifier_PhantomAssassin_Gravestone();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_Gravestone();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_assassin.cpp:1521
class CDOTA_Modifier_PhantomAssassin_ScreenSplatter : public CDOTA_Buff {
public:

	CDOTA_Modifier_PhantomAssassin_ScreenSplatter();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomAssassin_ScreenSplatter();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_PhantomAssassin::~CDOTA_Unit_Hero_PhantomAssassin  (line 46, @0x0000000002ac68f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::~CDOTA_Unit_Hero_PhantomAssassin(
        CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  this->_vptr_IHandleEntity = &off_4408530;
  this->_vptr_INextBotEventResponder = &off_4409510;
  this->_vptr_CObstructionObject = &off_4409840;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_PhantomAssassin::~CDOTA_Unit_Hero_PhantomAssassin  (line 46, @0x0000000002ac6930, libserver.so)  // inlines: ~CDOTA_Unit_Hero_PhantomAssassin
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::~CDOTA_Unit_Hero_PhantomAssassin(
        CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  this->_vptr_IHandleEntity = &off_4408530;
  this->_vptr_INextBotEventResponder = &off_4409510;
  this->_vptr_CObstructionObject = &off_4409840;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_PhantomAssassin::Schema_DynamicBinding  (line 48, @0x0000000002ab9cb0, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomAssassin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_PhantomAssassin::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  return CDOTA_Unit_Hero_PhantomAssassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 48, @0x0000000002ab9ce0, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::DestructInstance  (line 48, @0x0000000002ab9cf0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_PhantomAssassin>
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::FreeInstance  (line 48, @0x0000000002ab9d10, libserver.so)
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::CanAllocate  (line 48, @0x0000000002ab9d30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 48, @0x0000000002ab9d40, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomAssassin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_PhantomAssassin::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::AllocateInstance  (line 48, @0x0000000002abf180, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5880);
  memset(v1, 0, 0x16F8u);
  return v1;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::ConstructInstance  (line 48, @0x0000000002ac4c70, libserver.so)  // inlines: CDOTA_Unit_Hero_PhantomAssassin, CNetworkVarBase, Construct<CDOTA_Unit_Hero_PhantomAssassin>, EnsureValidValue<unsigned int>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1468) = 0;
    *p = &off_4408530;
    *(p + 236) = &off_4409510;
    *(p + 257) = &off_4409840;
    *(p + 1467) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002acd210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000002acd590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal  (line 48, @0x0000000002ade6d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_phantom_assassin", "CDOTA_Unit_Hero_PhantomAssassin"
// globals: `guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass, CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass, __dso_handle, CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo, CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass);
    CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass._vptr_CEntityClass = off_44084B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_PhantomAssassin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PhantomAssassinClass != 0 )
    return &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass;
  if ( `guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo,
      "CDOTA_Unit_Hero_PhantomAssassin",
      "npc_dota_hero_phantom_assassin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo);
  }
  CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass.m_pClassInfo = &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo;
  CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass.m_pBaseClassInfo = CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PhantomAssassinClass = &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass;
  CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClassInfo.m_pClass = &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass;
  CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PhantomAssassinClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_PhantomAssassin::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomAssassinClass;
}


// CDOTA_Unit_Hero_PhantomAssassin::CalculateActivityModifiers  (line 52, @0x0000000002ac6e90, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::CalculateActivityModifiers(
        CDOTA_Unit_Hero_PhantomAssassin *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 450.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 350.0 && v3 <= 449.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 249.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
}


// PhantomAssassin_GetArcanaLevel  (line 103, @0x0000000002a92d00, libserver.so)  // inlines: GetBool, GetInt
// callers: CDOTA_Unit_Hero_PhantomAssassin::Spawn
int __fastcall PhantomAssassin_GetArcanaLevel(CEconItemView *pItemView)
{
  int result; // eax

  result = pa_arcana_level.m_pParent->m_Value.m_nValue;
  if ( result == 0 )
  {
    result = 1;
    if ( pItemView != 0 )
      return (*(pItemView->_vptr_IEconItemInterface + 16))(pItemView) + 1;
  }
  return result;
}


// CDOTA_Unit_Hero_PhantomAssassin::YouForgotToImplementOrDeclareServerClass  (line 114, @0x0000000002a78080, libserver.so)
int __fastcall CDOTA_Unit_Hero_PhantomAssassin::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_PhantomAssassin::GetServerClass  (line 114, @0x0000000002a89a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_PhantomAssassin::GetServerClass(CDOTA_Unit_Hero_PhantomAssassin *const this)
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


// CDOTA_Unit_Hero_PhantomAssassin::OnIllusionPostSpawn  (line 129, @0x0000000002a81840, libserver.so)  // inlines: GetArcanaLevel, NetworkStateChanged, Set, operator=<unsigned int>
// calls: __dynamic_cast
// globals: `typeinfo for'CDOTA_Unit_Hero_PhantomAssassin
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::OnIllusionPostSpawn(
        CDOTA_Unit_Hero_PhantomAssassin *const this,
        CDOTA_BaseNPC *pOriginal)
{
  _DWORD *v3; // rax
  unsigned int v4; // r12d

  if ( pOriginal != 0 )
  {
    v3 = __dynamic_cast(pOriginal, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_PhantomAssassin, 0);
    if ( v3 != 0 )
    {
      v4 = v3[1468];
      if ( v4 != this->m_nArcanaLevel.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_nArcanaLevel.m_Value = v4;
      }
    }
  }
}


// CDOTA_Unit_Hero_PhantomAssassin::Precache  (line 138, @0x0000000002a7c340, libserver.so)
// calls: DOTA_PrecacheUnitByNameSync, CDOTA_BaseNPC_Hero::Precache
// strings: "npc_dota_phantomassassin_gravestone"
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::Precache(
        CDOTA_Unit_Hero_PhantomAssassin *const this,
        const CEntityPrecacheContext *pContext)
{
  DOTA_PrecacheUnitByNameSync("npc_dota_phantomassassin_gravestone", pContext, -1);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_PhantomAssassin::Spawn  (line 148, @0x0000000002a92d30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEconWearable*, operator CEntityInstance*, operator=<int>, operator[]
// calls: CDOTA_BaseNPC_Hero::Spawn, PhantomAssassin_GetArcanaLevel
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::Spawn(
        CDOTA_Unit_Hero_PhantomAssassin *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // rbx
  CHandle<CEconWearable> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  __int64 v9; // rax
  CEconItemView *v10; // r13
  unsigned __int16 (__fastcall ***v11)(_QWORD); // rax
  unsigned int ArcanaLevel; // r13d

  v3 = 0;
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  if ( this->m_hMyWearables.m_Vector.m_Size > 0 )
  {
    do
    {
      v4 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v3];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
          {
            v9 = (*(v8->m_pInstance->_vptr_IHandleEntity + 265))(v8->m_pInstance);
            v10 = (v9 + 104);
            if ( v9 != -104 )
            {
              v11 = (*(*(v9 + 104) + 96LL))(v10);
              if ( (**v11)(v11) == 7247 )
              {
                ArcanaLevel = PhantomAssassin_GetArcanaLevel(v10);
                if ( ArcanaLevel != this->m_nArcanaLevel.m_Value )
                {
                  (*(this->_vptr_IHandleEntity + 22))(this, 5872, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  this->m_nArcanaLevel.m_Value = ArcanaLevel;
                }
              }
            }
          }
        }
      }
      ++v3;
    }
    while ( v3 < this->m_hMyWearables.m_Vector.m_Size );
  }
}


// CDOTA_Unit_Hero_PhantomAssassin::OnAlive  (line 181, @0x0000000002a78090, libserver.so)
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::OnAlive(CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  ;
}


// CDOTA_Unit_Hero_PhantomAssassin::OnDying  (line 195, @0x0000000002a780a0, libserver.so)
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::OnDying(CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  ;
}


// CDOTA_Unit_Hero_PhantomAssassin::OnDeath  (line 210, @0x0000000002a7a180, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_PhantomAssassin::OnDeath(CDOTA_Unit_Hero_PhantomAssassin *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::~CDOTA_Ability_PhantomAssassin_Stifling_Dagger  (line 235, @0x0000000002ac5930, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::~CDOTA_Ability_PhantomAssassin_Stifling_Dagger(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this)
{
  this->_vptr_IHandleEntity = &off_4409910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::~CDOTA_Ability_PhantomAssassin_Stifling_Dagger  (line 235, @0x0000000002ac5950, libserver.so)  // inlines: ~CDOTA_Ability_PhantomAssassin_Stifling_Dagger
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::~CDOTA_Ability_PhantomAssassin_Stifling_Dagger(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this)
{
  this->_vptr_IHandleEntity = &off_4409910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::Schema_DynamicBinding  (line 237, @0x0000000002ab9d50, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Stifling_Dagger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this)
{
  return CDOTA_Ability_PhantomAssassin_Stifling_Dagger::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 237, @0x0000000002ab9d60, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::DestructInstance  (line 237, @0x0000000002ab9d70, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomAssassin_Stifling_Dagger>
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::FreeInstance  (line 237, @0x0000000002ab9d90, libserver.so)
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::CanAllocate  (line 237, @0x0000000002ab9db0, libserver.so)
bool __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 237, @0x0000000002ab9dc0, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Stifling_Dagger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_Stifling_Dagger::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::AllocateInstance  (line 237, @0x0000000002abf1c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::ConstructInstance  (line 237, @0x0000000002ac2cc0, libserver.so)  // inlines: CDOTA_Ability_PhantomAssassin_Stifling_Dagger, Construct<CDOTA_Ability_PhantomAssassin_Stifling_Dagger>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4409910;
  }
  return p;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 237, @0x0000000002acc330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 237, @0x0000000002acc350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal  (line 237, @0x0000000002ade820, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "phantom_assassin_stifling_dagger", "CDOTA_Ability_PhantomAssassin_Stifling_Dagger"
// globals: `guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass, CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass, __dso_handle, CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo, CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass);
    CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass._vptr_CEntityClass = off_4409890;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomAssassin_Stifling_Dagger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass != 0 )
    return &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass;
  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo,
      "CDOTA_Ability_PhantomAssassin_Stifling_Dagger",
      "phantom_assassin_stifling_dagger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo);
  }
  CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass.m_pClassInfo = &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo;
  CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass.m_pBaseClassInfo = CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass = &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass;
  CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClassInfo.m_pClass = &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass;
  CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_Stifling_DaggerClass;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnSpellStart  (line 252, @0x0000000002aa5bf0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// strings: "dagger_speed", "particles/units/heroes/hero_phantom_assassin/phantom_assassin_stifling_dagger.vpcf", "Hero_PhantomAssassin.Dagger.Cast", "special_bonus_unique_phantom_assassin"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnSpellStart(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int (**vptr_IHandleEntity)(...); // rax
  __m128i v15; // xmm1
  float v16; // ebx
  CDOTA_BaseNPC *v17; // r12
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // r12
  int v22; // ebx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CBaseEntity *m_pInstance; // r14
  vec_t v29; // xmm0_4
  vec_t v30; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *v32; // rdx
  int v33; // eax
  __int16 v34; // cx
  CEntityIdentity *v35; // rax
  int v36; // edx
  __int16 v37; // cx
  int v38; // eax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-120h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+40h] [rbp-100h] BYREF
  sTrackingProjectileCreateInfo info2; // [rsp+A0h] [rbp-A0h] BYREF
  unsigned __int64 v42; // [rsp+108h] [rbp-38h]

  info.bProvidesVision = 0;
  v42 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iSourceAttachment = 1;
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
  info.pszEffectName = "particles/units/heroes/hero_phantom_assassin/phantom_assassin_stifling_dagger.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dagger_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && (v8 = CursorTarget->m_pEntity) != 0 )
  {
    v9 = 0x7FFF;
    if ( v8->m_EHandle.m_Index != -1 )
      v9 = v8->m_EHandle.m_Index & 0x7FFF;
    info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
  }
  else
  {
    info.hTarget.m_Index = -1;
  }
  info.bProvidesVision = 1;
  info.iSourceAttachment = 2;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 450;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v11 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_PhantomAssassin.Dagger.Cast", v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v12, "special_bonus_unique_phantom_assassin", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    *v15.m128i_i32 = vptr_IHandleEntity[226](this, &vec3_origin, 0);
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
    v20 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v20->m_iTeamNum.m_Value, AbsOrigin, v17, v16, &entities, 2, 3, 384, 0, 0);
    if ( entities.m_Size <= 0 )
    {
LABEL_36:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_34:
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
    }
    else
    {
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = &entities.m_Memory.m_pMemory[v21];
        m_Index = entities.m_Memory.m_pMemory[v21].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v25 = v23->m_Index;
          v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
          if ( v26 != 0 )
          {
            v27 = &v26[v25 & 0x1FF];
            if ( v27 != 0 && m_Index == v27->m_EHandle.m_Index )
            {
              m_pInstance = v27->m_pInstance;
              if ( v27->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTABaseAbility::GetCursorTarget(this) != m_pInstance )
              {
                break;
              }
            }
          }
        }
        ++v22;
        ++v21;
        if ( entities.m_Size <= v22 )
          goto LABEL_36;
      }
      info2.hTarget.m_Index = -1;
      info2.vSourceLoc.x = vec3_origin.x;
      v29 = vec3_origin.y;
      info2.hSource.m_Index = -1;
      info2.vSourceLoc.y = v29;
      v30 = vec3_origin.z;
      info2.colorGemColor = 0;
      info2.pAttackRecord = 0;
      info2.iMoveSpeed = 0;
      info2.vSourceLoc.z = v30;
      info2.iSourceAttachment = 1;
      info2.bProvidesVision = 0;
      info2.iVisionTeamNumber = -1;
      info2.iVisionRadius = 0;
      info2.bDrawsOnMinimap = 0;
      info2.bDodgeable = 1;
      info2.bIsAttack = 0;
      info2.bVisibleToEnemies = 1;
      info2.pKVExtraData = 0;
      info2.bReplaceExisting = 0;
      info2.flExpireTime = 0.0;
      info2.flMaxImpactTime = 0.0;
      info2.bServerOnly = 0;
      info2.pszEffectName = "particles/units/heroes/hero_phantom_assassin/phantom_assassin_stifling_dagger.vpcf";
      info2.pAbility = this;
      info2.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dagger_speed", -1, 0);
      v31 = CDOTABaseAbility::GetCaster(this);
      if ( v31 != 0 && (v32 = v31->m_pEntity) != 0 )
      {
        v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
        v34 = 0x7FFF;
        if ( v32->m_EHandle.m_Index != -1 )
          v34 = v32->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info2.hSource.m_Index) = v34 | info2.hSource.m_Index & 0x8000;
        info2.hSource.m_Index = (v33 << 15) | info2.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info2.hSource.m_Index = -1;
      }
      v35 = m_pInstance->m_pEntity;
      if ( v35 != 0 )
      {
        v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
        v37 = 0x7FFF;
        if ( v35->m_EHandle.m_Index != -1 )
          v37 = v35->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info2.hTarget.m_Index) = v37 | info2.hTarget.m_Index & 0x8000;
        info2.hTarget.m_Index = (v36 << 15) | info2.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info2.hTarget.m_Index = -1;
      }
      info2.iSourceAttachment = 2;
      info2.bProvidesVision = 1;
      v38 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      info2.iVisionRadius = 450;
      info2.iVisionTeamNumber = v38;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info2);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          goto LABEL_34;
      }
    }
  }
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnProjectileHit  (line 308, @0x0000000002a9fb60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, CDOTA_BaseNPC::RemoveModifierByName, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin (17 total)
// strings: "creep_damage", "modifier_phantom_assassin_stiflingdagger_caster", "modifier_phantom_assassin_stiflingdagger", "Hero_PhantomAssassin.Dagger.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::OnProjectileHit(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_AttackRecord *AttackRecord; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  char m_CScriptComponent_high; // r13
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC_Hero *v22; // rdi
  KeyValues kv2; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hero_damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "creep_damage", -1, 0);
  if ( (*hTarget + 2) > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[*hTarget & 0x1FF];
      if ( v6 != 0 && *hTarget == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
            && (BYTE1(vptr_IHandleEntity) & 2) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            KeyValues::KeyValues(&kv2, "modifier_phantom_assassin_stiflingdagger_caster");
            Caster = CDOTABaseAbility::GetCaster(this);
            v11 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v11, Caster, this, "modifier_phantom_assassin_stiflingdagger_caster", &kv2, 0);
            v12 = CDOTABaseAbility::GetCaster(this);
            AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v12, m_pInstance, 0, 1, 0, 1, 1);
            v14 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::PerformAttack(v14, AttackRecord, m_pInstance, 1, 0, 0, 1);
            v15 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::RemoveModifierByName(v15, "modifier_phantom_assassin_stiflingdagger_caster");
            if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0
              && SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0 )
            {
              m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
              if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
                && (*(m_pInstance->_vptr_IHandleEntity + 410))(m_pInstance) > 0 )
              {
                v21 = CDOTABaseAbility::GetCaster(this);
                if ( v21 != 0 )
                {
                  v22 = 0;
                  if ( v21->m_bIsDOTANPC && (v21->m_iUnitType & 1) != 0 && !v21->m_bIsIllusion.m_Value )
                    v22 = v21;
                }
                else
                {
                  v22 = 0;
                }
                EconEntity_OnOwnerKillEaterEvent(
                  v22,
                  0,
                  kill_eater_event_t::kKillEaterEventType_PhantomAssassin_DaggerLastHits,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              }
            }
            KeyValues::KeyValues(&kv, "modifier_phantom_assassin_stiflingdagger");
            CDOTABaseAbility::GetDuration(this);
            KeyValues::SetFloat(&kv, "duration", v16);
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            v18 = CDOTABaseAbility::GetCaster(this);
            CDOTAFogOfWarSystem::AddTempViewer(
              &g_DOTAFogOfWarSystem,
              FoWViewerType_t::FOWVIEWERTYPE_STIFLINGDAGGER,
              v18->m_iTeamNum.m_Value,
              AbsOrigin,
              450.0,
              3.3399999,
              0);
            v19 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_phantom_assassin_stiflingdagger", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_PhantomAssassin.Dagger.Target", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
            KeyValues::~KeyValues(&kv2);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetAbilityDamageToTargetOverInterval  (line 389, @0x0000000002aa0f50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "phantom_assassin_coup_de_grace"
__int64 __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v9; // r13
  int LevelSpecialValue; // r14d
  float v11; // xmm0_4
  float v12; // [rsp-8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phantom_assassin_coup_de_grace", 0);
    v9 = AbilityByName;
    if ( AbilityByName != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "crit_chance", -1, 1);
      v11 = ((LevelSpecialValue / 100.0)
           * (CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "crit_bonus", -1, 1) / 100.0))
          + 1.0;
    }
    else
    {
      v11 = 1.0;
    }
    v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "base_damage", -1, 0) * v11;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * v12);
  }
  return result;
}


// CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetSlowDuration  (line 412, @0x0000000002aa1070, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_PhantomAssassin_Stifling_Dagger::GetSlowDuration(
        CDOTA_Ability_PhantomAssassin_Stifling_Dagger *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 1);
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster  (line 421, @0x0000000002ac1370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_440A3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster  (line 421, @0x0000000002ac1390, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::~CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_440A3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::IsPurgable  (line 428, @0x0000000002ab9dd0, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::IsPurgable(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this)
{
  return 0;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::OnCreated  (line 443, @0x0000000002aaa790, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "attack_factor"
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::OnCreated(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "base_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_factor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_factor", -1, 0);
      return;
    }
  }
  else
  {
    this->base_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_factor = 0;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::DeclareFunctions  (line 453, @0x0000000002a780b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[28].__pfn = CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierDamageOutgoing_Percentage;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierPreAttack_BonusDamage  (line 461, @0x0000000002a780f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm2
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = this->base_damage / ((this->attack_factor + 100.0) / 100.0);
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierDamageOutgoing_Percentage  (line 470, @0x0000000002a78130, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger_Caster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_factor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::~CDOTA_Modifier_PhantomAssassin_StiflingDagger  (line 480, @0x0000000002ac1320, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::~CDOTA_Modifier_PhantomAssassin_StiflingDagger(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_440A6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::~CDOTA_Modifier_PhantomAssassin_StiflingDagger  (line 480, @0x0000000002ac1340, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_StiflingDagger
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::~CDOTA_Modifier_PhantomAssassin_StiflingDagger(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this)
{
  this->_vptr_CDOTA_Buff = &off_440A6F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetEffectName  (line 488, @0x0000000002ab9de0, libserver.so)
// strings: "particles/units/heroes/hero_phantom_assassin/phantom_assassin_stifling_dagger_debuff.vpcf
const char *__fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetEffectName(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this)
{
  return "particles/units/heroes/hero_phantom_assassin/phantom_assassin_stifling_dagger_debuff.vpcf";
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::OnCreated  (line 505, @0x0000000002aa9aa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::OnCreated(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::OnRefresh  (line 513, @0x0000000002aa99e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::OnRefresh(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::DeclareFunctions  (line 520, @0x0000000002a78150, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetModifierMoveSpeedBonus_Percentage  (line 527, @0x0000000002a78170, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_StiflingDagger::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_PhantomAssassin_StiflingDagger *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::~CDOTA_Ability_PhantomAssassin_PhantomStrike  (line 539, @0x0000000002ac5980, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::~CDOTA_Ability_PhantomAssassin_PhantomStrike(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_IHandleEntity = &off_440AA50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::~CDOTA_Ability_PhantomAssassin_PhantomStrike  (line 539, @0x0000000002ac59a0, libserver.so)  // inlines: ~CDOTA_Ability_PhantomAssassin_PhantomStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::~CDOTA_Ability_PhantomAssassin_PhantomStrike(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_IHandleEntity = &off_440AA50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::Schema_DynamicBinding  (line 541, @0x0000000002ab9df0, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_PhantomStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  return CDOTA_Ability_PhantomAssassin_PhantomStrike::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 541, @0x0000000002ab9e00, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::DestructInstance  (line 541, @0x0000000002ab9e10, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomAssassin_PhantomStrike>
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::FreeInstance  (line 541, @0x0000000002ab9e30, libserver.so)
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::CanAllocate  (line 541, @0x0000000002ab9e50, libserver.so)
bool __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 541, @0x0000000002ab9e60, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_PhantomStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_PhantomStrike::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::AllocateInstance  (line 541, @0x0000000002abf200, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::ConstructInstance  (line 541, @0x0000000002ac2cf0, libserver.so)  // inlines: CDOTA_Ability_PhantomAssassin_PhantomStrike, Construct<CDOTA_Ability_PhantomAssassin_PhantomStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_440AA50;
  }
  return p;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 541, @0x0000000002acc380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 541, @0x0000000002acc3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal  (line 541, @0x0000000002ade970, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "phantom_assassin_phantom_strike", "CDOTA_Ability_PhantomAssassin_PhantomStrike"
// globals: `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass, CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass, __dso_handle, CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo, CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass);
    CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass._vptr_CEntityClass = off_440A9D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomAssassin_PhantomStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass != 0 )
    return &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass;
  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo,
      "CDOTA_Ability_PhantomAssassin_PhantomStrike",
      "phantom_assassin_phantom_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo);
  }
  CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass.m_pClassInfo = &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo;
  CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass.m_pBaseClassInfo = CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass = &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass;
  CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClassInfo.m_pClass = &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass;
  CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomAssassin_PhantomStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_PhantomStrikeClass;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::IsReflectionDelayed  (line 548, @0x0000000002ab9e70, libserver.so)
bool __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::IsReflectionDelayed(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::YouForgotToImplementOrDeclareServerClass  (line 558, @0x0000000002a78190, libserver.so)
int __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  return 0;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::GetServerClass  (line 558, @0x0000000002a89d70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::GetServerClass(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
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


// CDOTA_Ability_PhantomAssassin_PhantomStrike::OnSpellStart  (line 567, @0x0000000002ab2630, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, InState, IsInvulnerable, NormalizeInPlace, Purge, RemoveAll, Reset, ToDOTABaseNPC, VectorMultiply, VectorSubtract, entindex, operator*, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::SetParticleControlEnt (28 total)
// strings: "particles/units/heroes/hero_phantom_assassin/phantom_assassin_phantom_strike_start.vpcf", "Hero_PhantomAssassin.Strike.Start", "modifier_phantom_assassin_phantom_strike", "particles/units/heroes/hero_phantom_assassin/phantom_assassin_phantom_strike_end.vpcf", "Hero_PhantomAssassin.Strike.End"
void __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::OnSpellStart(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  Vector *v14; // rax
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm0_4
  const Vector *v18; // rax
  vec_t v19; // xmm2_4
  vec_t v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  CEntityIndex v27; // eax
  __int64 m_Size; // r15
  int v29; // eax
  CEntityIndex *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  int v32; // r12d
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  float v35; // [rsp+14h] [rbp-DCh]
  float v36; // [rsp+18h] [rbp-D8h]
  float v37; // [rsp+1Ch] [rbp-D4h]
  float v38; // [rsp+1Ch] [rbp-D4h]
  int32 m_Data; // [rsp+1Ch] [rbp-D4h]
  QAngle Angles; // [rsp+20h] [rbp-D0h] BYREF
  Vector vecFwd; // [rsp+30h] [rbp-C0h] BYREF
  Vector vStartLoc; // [rsp+40h] [rbp-B0h] BYREF
  Vector vDestination; // [rsp+50h] [rbp-A0h]
  CUnitOrders attackOrder; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    Angles = *CBaseEntity::GetAbsAngles(Caster);
    AngleVectors(&Angles, &vecFwd, 0, 0);
    VectorNormalize(&vecFwd);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_phantom_assassin/phantom_assassin_phantom_strike_start.vpcf",
                              2,
                              0,
                              0);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlForward(v9, AbilityParticleEffect, 0, *&vecFwd.x, vecFwd.z);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, AbilityParticleEffect, 1, v10, 2, 0, vec3_invalid, 1);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, AbilityParticleEffect);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = CBaseEntity::GetAbsOrigin(v13);
    v15 = *&v3[2].m_bNetworkQuantizeOriginAndAngles + v3[2].m_flOverriddenFriction;
    vStartLoc = *v14;
    v37 = v15;
    v16 = CDOTABaseAbility::GetCaster(this);
    v17 = ((v16->m_flHullRadius + v16->m_flCollisionPadding) + v37) + 2.0;
    v38 = vecFwd.x * v17;
    v36 = vecFwd.y * v17;
    v35 = v17 * vecFwd.z;
    v18 = CBaseEntity::GetAbsOrigin(v3);
    v19 = v18->x - v38;
    v20 = v18->z - v35;
    vDestination.y = v18->y - v36;
    vDestination.x = v19;
    vDestination.z = v20;
    v21 = CDOTABaseAbility::GetCaster(this);
    FindClearSpaceForUnit(v21, vDestination, 1);
    DOTA_EmitSoundLocation(&vStartLoc, "Hero_PhantomAssassin.Strike.Start", 1);
    LOBYTE(AbilityParticleEffect) = v3->m_iTeamNum.m_Value;
    if ( AbilityParticleEffect != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      KeyValues::KeyValues(&kv, "modifier_phantom_assassin_phantom_strike");
      KeyValues::SetFloat(&kv, "duration", v22);
      KeyValues::SetPtr(&kv, "target", v3);
      v23 = CDOTABaseAbility::GetCaster(this);
      v24 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v24, v23, this, "modifier_phantom_assassin_phantom_strike", &kv, 0);
      attackOrder.m_bQueue = 0;
      memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
      attackOrder.m_nUnits.m_Size = 0;
      attackOrder.m_nOrderSequenceNumber = 0;
      attackOrder.m_vPosition.x = vec3_origin.x;
      y = vec3_origin.y;
      attackOrder.m_nIssuerPlayerIndex = -1;
      attackOrder.m_vPosition.y = y;
      attackOrder.m_vPosition.z = vec3_origin.z;
      v26 = CDOTABaseAbility::GetCaster(this);
      v27.m_Data = CEntityInstance::GetEntityIndex(v26).m_Data;
      m_Size = attackOrder.m_nUnits.m_Size;
      m_Data = v27.m_Data;
      v29 = attackOrder.m_nUnits.m_Size;
      if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
        v29 = attackOrder.m_nUnits.m_Size;
      }
      attackOrder.m_nUnits.m_Size = v29 + 1;
      v30 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
      if ( v30 != 0 )
        v30->m_Data = m_Data;
      attackOrder.m_nOrderType = 4;
      attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(v3);
      DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
      attackOrder.m_nUnits.m_Size = 0;
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
        if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      }
      KeyValues::~KeyValues(&kv);
    }
    v31 = CDOTABaseAbility::GetCaster(this);
    v32 = CDOTABaseAbility::CreateAbilityParticleEffect(
            this,
            "particles/units/heroes/hero_phantom_assassin/phantom_assassin_phantom_strike_end.vpcf",
            1,
            v31,
            0);
    v33 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v33, v32);
    v34 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v34, "Hero_PhantomAssassin.Strike.End", 0.0, 0, 0);
  }
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::CastFilterResult  (line 618, @0x0000000002a7b720, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::CastFilterResult(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = UnitFilter(pTarget, 3, 3, 16, Caster->m_iTeamNum.m_Value);
  if ( v5 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v5;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::GetCustomCastError  (line 632, @0x0000000002a79820, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::GetCustomCastError(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::GetAbilityDamageToTargetOverInterval  (line 642, @0x0000000002aa1090, libserver.so)  // inlines: Min<float>, RemapVal
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "bonus_max_attack_count"
__int64 __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  int AverageTrueAttackDamage; // ebx
  __m128 v14; // xmm1
  float AttacksPerSecond; // [rsp-8h] [rbp-34h]
  float AttackSpeed; // [rsp-4h] [rbp-30h]
  float fCurrentAPS; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fCurrentAPS = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_max_attack_count", -1, 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    AttacksPerSecond = CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    v9 = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(v9);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_speed", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v14.m128_f32[0] = v10 - AttackSpeed;
      LODWORD(v11) = _mm_cmple_ss(0LL, v14).m128_u32[0] & LODWORD(AttacksPerSecond);
    }
    else
    {
      v11 = ((v10 * AttacksPerSecond) / AttackSpeed) + 0.0;
    }
    if ( ((v11 - AttacksPerSecond) * fCurrentAPS) <= LevelSpecialValue )
      LevelSpecialValue = ((v11 - AttacksPerSecond) * fCurrentAPS);
    v12 = CDOTABaseAbility::GetCaster(this);
    AverageTrueAttackDamage = CDOTA_BaseNPC::GetAverageTrueAttackDamage(v12, 0);
    return ((AverageTrueAttackDamage * LevelSpecialValue)
          * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink  (line 667, @0x0000000002a98c10, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, __cxa_guard_release, __cxa_atexit
// globals: `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities, CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
bool __fastcall CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(
        CDOTA_Ability_PhantomAssassin_PhantomStrike *const this)
{
  int v2; // r13d
  CDOTA_BaseNPC *Caster; // rax
  int v4; // r12d
  CDOTA_BaseNPC *v5; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities) != 0 )
  {
    CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities.m_Size = 0;
    CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities.m_Memory.m_pMemory = 0;
    CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities,
      &_dso_handle);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities);
  v2 = (*(this->_vptr_IHandleEntity + 226))(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_Bot::GetNearbyCreeps(
    Caster->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities,
    v2);
  v4 = (*(this->_vptr_IHandleEntity + 226))(this, &vec3_origin, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_Bot::GetNearbyHeroes(
    v5->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities,
    v4);
  return CDOTA_Ability_PhantomAssassin_PhantomStrike::HasBlink(void)::hEntities.m_Size > 0;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::~CDOTA_Modifier_PhantomAssassin_PhantomStrike  (line 683, @0x0000000002ac12d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::~CDOTA_Modifier_PhantomAssassin_PhantomStrike(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_440B510;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::~CDOTA_Modifier_PhantomAssassin_PhantomStrike  (line 683, @0x0000000002ac12f0, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_PhantomStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::~CDOTA_Modifier_PhantomAssassin_PhantomStrike(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_440B510;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnCreated  (line 712, @0x0000000002aab0d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_max_attack_count"
void __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnCreated(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v4 = Ptr[1]) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    if ( *(v4 + 16) == -1 )
      v6 = 0x7FFF;
    else
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v6 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v5 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  this->m_iAttacks = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
    {
LABEL_8:
      this->bonus_max_attack_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bonus_max_attack_count", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_attack_speed = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_8;
  }
  this->bonus_max_attack_count = 0;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetActivityModifiers  (line 723, @0x0000000002a781a0, libserver.so)
// strings: "phantom_attack"
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetActivityModifiers(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "phantom_attack";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::DeclareFunctions  (line 730, @0x0000000002a781c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttack(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetActivityModifiers(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttack;
  this->m_Functions[137].__pfn = CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked;
  this->m_Functions[155].__pfn = CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetActivityModifiers;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked  (line 744, @0x0000000002a835c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttacked(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  int v12; // eax
  bool v13; // cc

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
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( RecordByIndex == 0 || !RecordByIndex->m_bTriggeredAttack )
          {
            v12 = this->m_iAttacks + 1;
            v13 = v12 < this->bonus_max_attack_count;
            this->m_iAttacks = v12;
            if ( !v13 )
              CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttack  (line 765, @0x0000000002a88a50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnAttack(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rax
  uint32 v16; // edx
  CEntityInstance *v17; // rdi
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx

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
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( RecordByIndex == 0 || !RecordByIndex->m_bTriggeredAttack )
          {
            v12 = params->htarget.m_Index;
            if ( v12 + 2 <= 1
              || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
              || (v14 = &v13[params->htarget.m_Index & 0x1FF]) == 0
              || v12 != v14->m_EHandle.m_Index
              || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
              || BYTE3(v15[7]._vptr_IHandleEntity) == 0 )
            {
              v15 = 0;
            }
            v16 = this->m_hTarget.m_Index;
            v17 = 0;
            if ( v16 + 2 > 1 )
            {
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
              if ( v18 != 0 )
              {
                v19 = &v18[this->m_hTarget.m_Index & 0x1FF];
                if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
                  v17 = v19->m_pInstance;
              }
            }
            if ( v15 != v17 )
              CDOTA_Buff::Destroy(this, 0, 0, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetModifierAttackSpeedBonus_Constant  (line 788, @0x0000000002a78250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnHeroKilled  (line 796, @0x0000000002a87bc0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_PhantomStrike::OnHeroKilled(
        CDOTA_Modifier_PhantomAssassin_PhantomStrike *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rsi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdi

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0
    || (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v11 = 0;
  }
  v12 = params->hattacker.m_Index;
  if ( v12 + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[params->hattacker.m_Index & 0x1FF]) == 0
    || v12 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0
    || (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v15 = 0;
  }
  EconEntity_OnOwnerKillEaterEvent(
    v15,
    v11,
    kill_eater_event_t::kKillEaterEventType_PhantomAssassin_PhantomStrikeKills,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Ability_PhantomAssassin_Blur::~CDOTA_Ability_PhantomAssassin_Blur  (line 812, @0x0000000002ac59d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::~CDOTA_Ability_PhantomAssassin_Blur(
        CDOTA_Ability_PhantomAssassin_Blur *const this)
{
  this->_vptr_IHandleEntity = &off_440B870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomAssassin_Blur::~CDOTA_Ability_PhantomAssassin_Blur  (line 812, @0x0000000002ac59f0, libserver.so)  // inlines: ~CDOTA_Ability_PhantomAssassin_Blur
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::~CDOTA_Ability_PhantomAssassin_Blur(
        CDOTA_Ability_PhantomAssassin_Blur *const this)
{
  this->_vptr_IHandleEntity = &off_440B870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_Blur::Schema_DynamicBinding  (line 814, @0x0000000002ab9e80, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Blur::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_Blur::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_Blur *const this)
{
  return CDOTA_Ability_PhantomAssassin_Blur::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 814, @0x0000000002ab9e90, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::DestructInstance  (line 814, @0x0000000002ab9ea0, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomAssassin_Blur>
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::FreeInstance  (line 814, @0x0000000002ab9ec0, libserver.so)
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::CanAllocate  (line 814, @0x0000000002ab9ee0, libserver.so)
bool __fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 814, @0x0000000002ab9ef0, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_Blur::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_Blur::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::AllocateInstance  (line 814, @0x0000000002abf240, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::ConstructInstance  (line 814, @0x0000000002ac2d20, libserver.so)  // inlines: CDOTA_Ability_PhantomAssassin_Blur, Construct<CDOTA_Ability_PhantomAssassin_Blur>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_440B870;
  }
  return p;
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 814, @0x0000000002acc3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 814, @0x0000000002acc3f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal  (line 814, @0x0000000002adeac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "phantom_assassin_blur", "CDOTA_Ability_PhantomAssassin_Blur"
// globals: `guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass, CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass, __dso_handle, CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo, CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass);
    CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass._vptr_CEntityClass = off_440B7F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomAssassin_Blur::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomAssassin_BlurClass != 0 )
    return &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass;
  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo,
      "CDOTA_Ability_PhantomAssassin_Blur",
      "phantom_assassin_blur",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo);
  }
  CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass.m_pClassInfo = &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo;
  CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass.m_pBaseClassInfo = CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomAssassin_BlurClass = &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass;
  CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClassInfo.m_pClass = &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass;
  CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomAssassin_BlurClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomAssassin_Blur::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_BlurClass;
}


// CDOTA_Ability_PhantomAssassin_Blur::GetIntrinsicModifierName  (line 817, @0x0000000002ab9f00, libserver.so)
// strings: "modifier_phantom_assassin_blur"
const char *__fastcall CDOTA_Ability_PhantomAssassin_Blur::GetIntrinsicModifierName(
        CDOTA_Ability_PhantomAssassin_Blur *const this)
{
  return "modifier_phantom_assassin_blur";
}


// CDOTA_Modifier_PhantomAssassin_Blur::~CDOTA_Modifier_PhantomAssassin_Blur  (line 826, @0x0000000002ac1280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::~CDOTA_Modifier_PhantomAssassin_Blur(
        CDOTA_Modifier_PhantomAssassin_Blur *const this)
{
  this->_vptr_CDOTA_Buff = &off_440C330;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_Blur::~CDOTA_Modifier_PhantomAssassin_Blur  (line 826, @0x0000000002ac12a0, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_Blur
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::~CDOTA_Modifier_PhantomAssassin_Blur(
        CDOTA_Modifier_PhantomAssassin_Blur *const this)
{
  this->_vptr_CDOTA_Buff = &off_440C330;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_Blur::IsHidden  (line 839, @0x0000000002ab9f10, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_Blur::IsHidden(CDOTA_Modifier_PhantomAssassin_Blur *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomAssassin_Blur::OnCreated  (line 853, @0x0000000002aab880, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "transparency_fade", "bonus_evasion"
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::OnCreated(
        CDOTA_Modifier_PhantomAssassin_Blur *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->transparency_fade = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->bonus_evasion = 0;
    goto LABEL_5;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->transparency_fade = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "transparency_fade", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_evasion", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v6);
  this->m_fEnemiesFirstSeenTime = 0.0;
}


// CDOTA_Modifier_PhantomAssassin_Blur::OnRefresh  (line 867, @0x0000000002aac240, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::DoRefresh
// strings: "transparency_fade", "bonus_evasion", "modifier_phantom_assassin_blur_active"
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::OnRefresh(
        CDOTA_Modifier_PhantomAssassin_Blur *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->transparency_fade = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "transparency_fade", -1, 0);
  else
    this->transparency_fade = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->bonus_evasion = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_evasion", -1, 0);
  else
    this->bonus_evasion = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phantom_assassin_blur_active", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::DoRefresh(ModifierByName, pKV, 0, 0);
}


// CDOTA_Modifier_PhantomAssassin_Blur::DeclareFunctions  (line 884, @0x0000000002a78270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_Blur::GetModifierEvasion_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::DeclareFunctions(CDOTA_Modifier_PhantomAssassin_Blur *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_PhantomAssassin_Blur::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_Blur::GetModifierEvasion_Constant  (line 891, @0x0000000002a7d360, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Blur::GetModifierEvasion_Constant(
        CDOTA_Modifier_PhantomAssassin_Blur *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_evasion;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Blur::OnIntervalThink  (line 901, @0x0000000002a98ef0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, GetGameTime, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// strings: "modifier_phantom_assassin_blur_active"
void __fastcall CDOTA_Modifier_PhantomAssassin_Blur::OnIntervalThink(CDOTA_Modifier_PhantomAssassin_Blur *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float radius; // xmm2_4
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v7; // rax
  float m_fEnemiesFirstSeenTime; // xmm0_4
  float v9; // xmm1_4
  CGameRules *v10; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  float flRadius; // [rsp+1Ch] [rbp-174h]
  KeyValues kv; // [rsp+20h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+158h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phantom_assassin_blur_active", 0) == 0 )
  {
    radius = this->radius;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_nAllocationCount = 64;
    hEntities.m_Memory.m_nGrowSize = 0x80000000;
    hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
    flRadius = radius;
    v4 = CDOTA_Buff::GetCaster(this);
    v5 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, v4, flRadius, &hEntities, 2, 1, 80, 0, 0);
    if ( hEntities.m_Size != 0 )
    {
      this->m_fEnemiesFirstSeenTime = 0.0;
    }
    else
    {
      m_fEnemiesFirstSeenTime = this->m_fEnemiesFirstSeenTime;
      v9 = 0.0;
      v10 = g_pGameRules;
      if ( m_fEnemiesFirstSeenTime == 0.0 )
      {
        if ( g_pGameRules != 0 )
          m_fEnemiesFirstSeenTime = *&g_pGameRules[18].m_szQuestName[20];
        else
          m_fEnemiesFirstSeenTime = 0.0;
        this->m_fEnemiesFirstSeenTime = m_fEnemiesFirstSeenTime;
      }
      if ( v10 != 0 )
        v9 = *&v10[18].m_szQuestName[20];
      if ( v9 > (m_fEnemiesFirstSeenTime + this->transparency_fade) )
      {
        KeyValues::KeyValues(&kv, "modifier_phantom_assassin_blur_active");
        Ability = CDOTA_Buff::GetAbility(this);
        v12 = CDOTA_Buff::GetCaster(this);
        v13 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v13, v12, Ability, "modifier_phantom_assassin_blur_active", &kv, 0);
        KeyValues::~KeyValues(&kv);
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
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::~CDOTA_Modifier_PhantomAssassin_BlurActive  (line 934, @0x0000000002ac1230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::~CDOTA_Modifier_PhantomAssassin_BlurActive(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this)
{
  this->_vptr_CDOTA_Buff = &off_440C650;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::~CDOTA_Modifier_PhantomAssassin_BlurActive  (line 934, @0x0000000002ac1250, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_BlurActive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::~CDOTA_Modifier_PhantomAssassin_BlurActive(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this)
{
  this->_vptr_CDOTA_Buff = &off_440C650;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::IsPurgable  (line 939, @0x0000000002ab9f20, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::IsPurgable(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this)
{
  return 0;
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::GetEffectName  (line 946, @0x0000000002ab9f30, libserver.so)
// strings: "particles/units/heroes/hero_phantom_assassin/phantom_assassin_blur.vpcf"
const char *__fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::GetEffectName(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this)
{
  return "particles/units/heroes/hero_phantom_assassin/phantom_assassin_blur.vpcf";
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::OnCreated  (line 965, @0x0000000002aaaea0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "transparency_fade"
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::OnCreated(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CGameRules *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->transparency_fade = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "transparency_fade", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->transparency_fade = 0.0;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
  v6 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    this->m_fLastSeenEnemyTime = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fAddTime = *&v6[18].m_szQuestName[20];
  }
  else
  {
    this->m_fLastSeenEnemyTime = 0.0;
    this->m_fAddTime = 0.0;
  }
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::OnRefresh  (line 980, @0x0000000002aaa700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "transparency_fade"
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::OnRefresh(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->transparency_fade = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "transparency_fade", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->transparency_fade = 0.0;
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::OnIntervalThink  (line 988, @0x0000000002a98d40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, DOTAGameRules, GetGameTime, GetTeamNumber, Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::Destroy, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::OnIntervalThink(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this)
{
  float radius; // xmm2_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float flRadius; // [rsp+1Ch] [rbp-144h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+20h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+138h] [rbp-28h]

  hEntities.m_Size = 0;
  v11 = __readfsqword(0x28u);
  radius = this->radius;
  hEntities.m_Memory.m_nAllocationCount = 64;
  hEntities.m_Memory.m_nGrowSize = 0x80000000;
  hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
  flRadius = radius;
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &hEntities, 2, 1, 256, 0, 0);
  if ( hEntities.m_Size != 0 )
  {
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    if ( v8 > (this->m_fLastSeenEnemyTime + this->transparency_fade) )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    v7 = 0.0;
    if ( g_pGameRules != 0 )
      v7 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fLastSeenEnemyTime = v7;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Modifier_PhantomAssassin_BlurActive::CheckState  (line 1008, @0x0000000002a7d3b0, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetCaster
void __fastcall CDOTA_Modifier_PhantomAssassin_BlurActive::CheckState(
        CDOTA_Modifier_PhantomAssassin_BlurActive *const this,
        CDOTABuffState *const buffState)
{
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    buffState->m_nEnabledStateMask |= 0x200000uLL;
    buffState->m_nDisabledStateMask &= ~0x200000uLL;
  }
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::~CDOTA_Ability_PhantomAssassin_CoupdeGrace  (line 1024, @0x0000000002ac5a20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::~CDOTA_Ability_PhantomAssassin_CoupdeGrace(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace *const this)
{
  this->_vptr_IHandleEntity = &off_440C9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::~CDOTA_Ability_PhantomAssassin_CoupdeGrace  (line 1024, @0x0000000002ac5a40, libserver.so)  // inlines: ~CDOTA_Ability_PhantomAssassin_CoupdeGrace
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::~CDOTA_Ability_PhantomAssassin_CoupdeGrace(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace *const this)
{
  this->_vptr_IHandleEntity = &off_440C9B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::Schema_DynamicBinding  (line 1026, @0x0000000002ab9f40, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_CoupdeGrace::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_CoupdeGrace *const this)
{
  return CDOTA_Ability_PhantomAssassin_CoupdeGrace::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1026, @0x0000000002ab9f50, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::DestructInstance  (line 1026, @0x0000000002ab9f60, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomAssassin_CoupdeGrace>
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::FreeInstance  (line 1026, @0x0000000002ab9f80, libserver.so)
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::CanAllocate  (line 1026, @0x0000000002ab9fa0, libserver.so)
bool __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1026, @0x0000000002ab9fb0, libserver.so)
// globals: CDOTA_Ability_PhantomAssassin_CoupdeGrace::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomAssassin_CoupdeGrace::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::AllocateInstance  (line 1026, @0x0000000002abf280, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::ConstructInstance  (line 1026, @0x0000000002ac2d50, libserver.so)  // inlines: CDOTA_Ability_PhantomAssassin_CoupdeGrace, Construct<CDOTA_Ability_PhantomAssassin_CoupdeGrace>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_440C9B0;
  }
  return p;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1026, @0x0000000002acc420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1026, @0x0000000002acc440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal  (line 1026, @0x0000000002adec10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "phantom_assassin_coup_de_grace", "CDOTA_Ability_PhantomAssassin_CoupdeGrace"
// globals: `guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass, CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass, __dso_handle, CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo, CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass);
    CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass._vptr_CEntityClass = off_440C930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomAssassin_CoupdeGrace::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass != 0 )
    return &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass;
  if ( `guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo,
      "CDOTA_Ability_PhantomAssassin_CoupdeGrace",
      "phantom_assassin_coup_de_grace",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo);
  }
  CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass.m_pClassInfo = &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo;
  CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass.m_pBaseClassInfo = CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass = &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass;
  CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClassInfo.m_pClass = &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass;
  CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomAssassin_CoupdeGraceClass;
}


// CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetIntrinsicModifierName  (line 1029, @0x0000000002ab9fc0, libserver.so)
// strings: "modifier_phantom_assassin_coupdegrace"
const char *__fastcall CDOTA_Ability_PhantomAssassin_CoupdeGrace::GetIntrinsicModifierName(
        CDOTA_Ability_PhantomAssassin_CoupdeGrace *const this)
{
  return "modifier_phantom_assassin_coupdegrace";
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::~CDOTA_Modifier_PhantomAssassin_CoupdeGrace  (line 1038, @0x0000000002ac11e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::~CDOTA_Modifier_PhantomAssassin_CoupdeGrace(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this)
{
  this->_vptr_CDOTA_Buff = &off_440D470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::~CDOTA_Modifier_PhantomAssassin_CoupdeGrace  (line 1038, @0x0000000002ac1200, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_CoupdeGrace
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::~CDOTA_Modifier_PhantomAssassin_CoupdeGrace(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this)
{
  this->_vptr_CDOTA_Buff = &off_440D470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::IsHidden  (line 1048, @0x0000000002ab9fd0, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::IsHidden(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::DeclareFunctions  (line 1065, @0x0000000002a78290, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded;
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnCreated  (line 1073, @0x0000000002aac5c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_phantom_assassin/phantom_assassin_ambient_blade.vpcf", "attach_attack1"
void __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnCreated(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *ParticleManager; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->crit_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->crit_chance = 0;
    goto LABEL_4;
  }
  this->crit_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_bonus", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
LABEL_4:
  this->crit_active = 0;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_phantom_assassin/phantom_assassin_ambient_blade.vpcf",
                         2,
                         Parent,
                         0);
  v7 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    BuffParticleEffect,
    0,
    v7,
    5,
    "attach_attack1",
    vec3_invalid,
    1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnRefresh  (line 1088, @0x0000000002aaa9d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnRefresh(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->crit_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_bonus", -1, 0);
      return;
    }
  }
  else
  {
    this->crit_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->crit_bonus = 0;
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike  (line 1097, @0x0000000002a8af40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, ToDOTABaseNPCRealHero, EconEntity_OnOwnerKillEaterEvent, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm1
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  __m128i v9; // xmm0
  CBaseEntity *m_pInstance; // r13
  uint32 v11; // eax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC_Hero *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC_Hero *v15; // rdi
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_BaseNPC_Hero *v19; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    result.m_szVal = 0;
    *v2.m128i_i32 = this->crit_chance;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
    return result;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[params->htarget.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC )
    {
      this->crit_active = 0;
      v11 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
      if ( (v11 & 0x10) == 0
        && (v11 & 0x193) != 0
        && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != m_pInstance->m_iTeamNum.m_Value )
      {
        Parent = CDOTA_Buff::GetParent(this);
        if ( RollPseudoRandomPercentage(
               this->crit_chance,
               DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_PHANTOMASSASSIN_CRIT,
               Parent) )
        {
          v13 = ToDOTABaseNPCRealHero(m_pInstance);
          v14 = CDOTA_Buff::GetParent(this);
          if ( v14 != 0 && (v14->m_iUnitType & 1) != 0 )
            v15 = v14;
          else
            v15 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v15,
            v13,
            kill_eater_event_t::kKillEaterEventType_PhantomAssassin_CoupdeGraceCrits,
            1,
            INVALID_ITEM_DEF_INDEX);
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          if ( RecordByIndex != 0 && RecordByIndex->m_bTriggeredAttack )
          {
            v19 = ToDOTABaseNPCRealHero(m_pInstance);
            Caster = CDOTA_Buff::GetCaster(this);
            if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
              v21 = Caster;
            else
              v21 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v21,
              v19,
              kill_eater_event_t::kKillEaterEventType_PhantomAssassin_DaggerCrits,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          this->crit_active = 1;
          *v9.m128i_i32 = this->crit_bonus;
          goto LABEL_10;
        }
      }
    }
    else
    {
      this->crit_active = 0;
    }
  }
  v9 = 0;
LABEL_10:
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded  (line 1135, @0x0000000002a88420, libserver.so)  // inlines: AttackerNPC, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, NormalizeInPlace, String, TargetNPC, ToBasePlayer, ToCStr, ToDOTABaseNPC, VectorSubtract, _V_strcmp, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, operator-, strstr, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound (24 total)
// strings: "particles/units/heroes/hero_phantom_assassin/phantom_assassin_crit_impact.vpcf", "attach_hitloc", "Hero_PhantomAssassin.CoupDeGrace", "phantom_assassin_screen_blood_splatter", "particles/units/heroes/hero_phantom_assassin/phantom_assassin_crit_impact_mechanical.vpcf, "Hero_PhantomAssassin.CoupDeGrace.Mech" (9 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_CoupdeGrace::OnAttackLanded(
        CDOTA_Modifier_PhantomAssassin_CoupdeGrace *const this,
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
  CDOTA_BaseNPC *v13; // r12
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // r14
  uint32 m_iUnitType; // eax
  const Vector *AbsOrigin; // rbx
  const Vector *v20; // rax
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  const char *m_pAsString; // rbx
  int v24; // ebx
  CDOTA_ParticleManager *v25; // rax
  const Vector *v26; // r15
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  const Vector *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  int v32; // esi
  const char *v33; // rbx
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // rax
  int v36; // eax
  CDOTAPlayer *PlayerByPlayerID; // rax
  CDOTAPlayer *v38; // r12
  const CEntityInstance *v39; // r13
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v42; // r15
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  const Vector *v45; // r15
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  int v48; // esi
  CDOTA_ParticleManager *v49; // rax
  int v50; // r12d
  CDOTA_ParticleManager *v51; // rax
  Vector vecFwd; // [rsp+10h] [rbp-180h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+20h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+158h] [rbp-38h]

  v54 = __readfsqword(0x28u);
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
          && this->crit_active )
        {
          this->crit_active = 0;
          v9 = params->htarget.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = params->htarget.m_Index & 0x7FFF,
                (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
            || (v12 = &v11[v10 & 0x1FF]) == 0
            || v9 != v12->m_EHandle.m_Index
            || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
            || !v13->m_bIsDOTANPC )
          {
            v13 = 0;
          }
          v14 = params->hattacker.m_Index;
          if ( v14 + 2 <= 1
            || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
            || v14 != v16->m_EHandle.m_Index
            || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
            || !v17->m_bIsDOTANPC )
          {
            v17 = 0;
          }
          if ( v13 != 0 )
          {
            m_iUnitType = v13->m_iUnitType;
            if ( (m_iUnitType & 0x10) == 0
              && (m_iUnitType & 0x193) != 0
              && v17->m_iTeamNum.m_Value != v13->m_iTeamNum.m_Value )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
              v20 = CBaseEntity::GetAbsOrigin(v17);
              v21 = v20->y - AbsOrigin->y;
              v22 = v20->z - AbsOrigin->z;
              vecFwd.x = v20->x - AbsOrigin->x;
              vecFwd.y = v21;
              vecFwd.z = v22;
              VectorNormalize(&vecFwd);
              m_pAsString = v13->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0
                && (strstr(v13->m_iszUnitName.m_Value.u.m_pAsString, "_siege") != 0
                 || strcmp(m_pAsString, "npc_dota_hero_shredder") == 0
                 || strcmp(m_pAsString, "npc_dota_hero_rattletrap") == 0
                 || strcmp(m_pAsString, "npc_dota_hero_tinker") == 0) )
              {
                BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                       this,
                                       "particles/units/heroes/hero_phantom_assassin/phantom_assassin_crit_impact_mechanical.vpcf",
                                       2,
                                       0,
                                       0);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  ParticleManager,
                  BuffParticleEffect,
                  0,
                  v13,
                  5,
                  "attach_hitloc",
                  vec3_invalid,
                  1);
                v42 = CBaseEntity::GetAbsOrigin(v13);
                v43 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v43, BuffParticleEffect, 1, *&v42->x, v42->z);
                v44 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlForward(v44, BuffParticleEffect, 1, *&vecFwd.x, vecFwd.z);
                v45 = CBaseEntity::GetAbsOrigin(v13);
                v46 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v46, BuffParticleEffect, 10, v13, 1, 0, *v45, 1);
                v47 = GetParticleManager();
                v48 = BuffParticleEffect;
                v33 = "Hero_PhantomAssassin.CoupDeGrace.Mech";
                CDOTA_ParticleManager::ReleaseParticleIndex(v47, v48);
              }
              else
              {
                v24 = CDOTA_Buff::CreateBuffParticleEffect(
                        this,
                        "particles/units/heroes/hero_phantom_assassin/phantom_assassin_crit_impact.vpcf",
                        2,
                        0,
                        0);
                v25 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v25, v24, 0, v13, 5, "attach_hitloc", vec3_invalid, 1);
                v26 = CBaseEntity::GetAbsOrigin(v13);
                v27 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v27, v24, 1, *&v26->x, v26->z);
                v28 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlForward(v28, v24, 1, *&vecFwd.x, vecFwd.z);
                v29 = CBaseEntity::GetAbsOrigin(v13);
                v30 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v30, v24, 10, v13, 1, 0, *v29, 1);
                v31 = GetParticleManager();
                v32 = v24;
                v33 = "Hero_PhantomAssassin.CoupDeGrace";
                CDOTA_ParticleManager::ReleaseParticleIndex(v31, v32);
              }
              Caster = CDOTA_Buff::GetCaster(this);
              ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, v33);
              CDOTA_BaseNPC::UnitEmitSound(v13, ReplacementSound, 0.0, 0, 0);
              CRecipientFilter::CRecipientFilter(&filter);
              filter._vptr_IRecipientFilter = &off_3FB63F0;
              CRecipientFilter::AddAllPlayers(&filter);
              filter._vptr_IRecipientFilter = &off_3FCB130;
              CRecipientFilter::MakeReliable(&filter);
              v36 = (*(v13->_vptr_IHandleEntity + 414))(v13);
              PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(v36);
              v38 = PlayerByPlayerID;
              if ( PlayerByPlayerID != 0 )
              {
                v39 = 0;
                if ( (*(PlayerByPlayerID->_vptr_IHandleEntity + 140))(PlayerByPlayerID) != 0 )
                  v39 = v38;
              }
              else
              {
                v39 = 0;
              }
              CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 1);
              CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 2);
              CRecipientFilter::RemoveRecipientsByTeamNumber(&filter, 3);
              if ( v39 != 0
                && CDOTA_BaseNPC::HasModifiedAbilityParticleName(v17, "phantom_assassin_screen_blood_splatter") )
              {
                CRecipientFilter::AddRecipient(&filter, v39);
                v49 = GetParticleManager();
                v50 = CDOTA_ParticleManager::CreateParticle(
                        v49,
                        "phantom_assassin_screen_blood_splatter",
                        8,
                        0,
                        &filter,
                        v17);
                v51 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v51, v50);
              }
              filter._vptr_IRecipientFilter = &off_3FB63F0;
              CRecipientFilter::~CRecipientFilter(&filter);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_PhantomAssassin_Gravestone::~CDOTA_PhantomAssassin_Gravestone  (line 1200, @0x0000000002ac01c0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_PhantomAssassin_Gravestone::~CDOTA_PhantomAssassin_Gravestone(
        CDOTA_PhantomAssassin_Gravestone *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_PhantomAssassin_Gravestone::~CDOTA_PhantomAssassin_Gravestone  (line 1200, @0x0000000002ac0210, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_PhantomAssassin_Gravestone
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_PhantomAssassin_Gravestone::~CDOTA_PhantomAssassin_Gravestone(
        CDOTA_PhantomAssassin_Gravestone *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_PhantomAssassin_Gravestone::Schema_DynamicBinding  (line 1202, @0x0000000002ab9fe0, libserver.so)
// globals: CDOTA_PhantomAssassin_Gravestone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_PhantomAssassin_Gravestone::Schema_DynamicBinding(
        const CDOTA_PhantomAssassin_Gravestone *const this)
{
  return CDOTA_PhantomAssassin_Gravestone::s_pSchemaBinding;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1202, @0x0000000002aba010, libserver.so)
// globals: CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::DestructInstance  (line 1202, @0x0000000002aba020, libserver.so)  // inlines: Destruct<CDOTA_PhantomAssassin_Gravestone>
void __fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::FreeInstance  (line 1202, @0x0000000002aba040, libserver.so)
void __fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::CanAllocate  (line 1202, @0x0000000002aba060, libserver.so)
bool __fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1202, @0x0000000002aba070, libserver.so)
// globals: CDOTA_PhantomAssassin_Gravestone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_PhantomAssassin_Gravestone::s_pSchemaBinding;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::AllocateInstance  (line 1202, @0x0000000002abf2c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::ConstructInstance  (line 1202, @0x0000000002ac0030, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_PhantomAssassin_Gravestone, Construct<CDOTA_PhantomAssassin_Gravestone>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_440D7D0;
    *(p + 236) = &off_440E730;
    *(p + 257) = &off_440EA60;
  }
  return p;
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1202, @0x0000000002acd010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1202, @0x0000000002acd2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal  (line 1202, @0x0000000002aded60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_phantomassassin_gravestone", "CDOTA_PhantomAssassin_Gravestone"
// globals: `guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass, CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass, __dso_handle, CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo, CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo
CEntityClass *__cdecl CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass);
    CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass._vptr_CEntityClass = off_440D750;
    __cxa_guard_release(&`guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass);
    __cxa_atexit(
      CDOTA_PhantomAssassin_Gravestone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_PhantomAssassin_GravestoneClass != 0 )
    return &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass;
  if ( `guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo,
      "CDOTA_PhantomAssassin_Gravestone",
      "npc_dota_phantomassassin_gravestone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo);
  }
  CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass.m_pClassInfo = &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo;
  CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass.m_pBaseClassInfo = CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_PhantomAssassin_GravestoneClass = &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass;
  CDOTA_PhantomAssassin_Gravestone::GetEntityClassInfo(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClassInfo.m_pClass = &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass;
  CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_PhantomAssassin_GravestoneClass->m_pComponentOverrides = 0;
  return &CDOTA_PhantomAssassin_Gravestone::GetEntityClassInternal(void)::g_EntityCDOTA_PhantomAssassin_GravestoneClass;
}


// CDOTA_PhantomAssassin_Gravestone::YouForgotToImplementOrDeclareServerClass  (line 1232, @0x0000000002a782d0, libserver.so)
int __fastcall CDOTA_PhantomAssassin_Gravestone::YouForgotToImplementOrDeclareServerClass(
        CDOTA_PhantomAssassin_Gravestone *const this)
{
  return 0;
}


// CDOTA_PhantomAssassin_Gravestone::GetServerClass  (line 1232, @0x0000000002a897f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_PhantomAssassin_Gravestone::GetServerClass(CDOTA_PhantomAssassin_Gravestone *const this)
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


// CDOTA_PhantomAssassin_Gravestone::Spawn  (line 1240, @0x0000000002a79750, libserver.so)  // inlines: SetBlockCreepSpawn
// calls: CDOTA_BaseNPC::Spawn
void __fastcall CDOTA_PhantomAssassin_Gravestone::Spawn(
        CDOTA_PhantomAssassin_Gravestone *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_bBlocksCreepSpawn = 0;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker  (line 1299, @0x0000000002ac1190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_440EAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker  (line 1299, @0x0000000002ac11b0, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::~CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_440EAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::IsHidden  (line 1305, @0x0000000002aba080, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::IsHidden(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetEpitaph  (line 1308, @0x0000000002aba090, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetEpitaph(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nEpitaph;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimPlayerID  (line 1309, @0x0000000002aba0b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimPlayerID(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nVictimPlayerID;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimHeroID  (line 1310, @0x0000000002aba0d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimHeroID(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nVictimHeroID;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetCritDamage  (line 1311, @0x0000000002aba0f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetCritDamage(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nCritDmg;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetContractStatus  (line 1312, @0x0000000002aba110, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetContractStatus(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nContractComplete;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::CheckState  (line 1333, @0x0000000002a782e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::CheckState(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82900300uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D6FFCFFLL;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::OnCreated  (line 1346, @0x0000000002a794f0, libserver.so)
// calls: KeyValues::GetInt
// strings: "Epitaph", "CritDamage", "Contract"
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::OnCreated(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        KeyValues *pKV)
{
  this->m_nEpitaph = KeyValues::GetInt(pKV, "Epitaph", 0);
  this->m_nVictimPlayerID = KeyValues::GetInt(pKV, "VictimPlayerID", 0);
  this->m_nVictimHeroID = KeyValues::GetInt(pKV, "VictimHeroID", 0);
  this->m_nCritDmg = KeyValues::GetInt(pKV, "CritDamage", 0);
  this->m_nContractComplete = KeyValues::GetInt(pKV, "Contract", 0);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::AddCustomTransmiterData  (line 1357, @0x0000000002a7b590, libserver.so)  // inlines: set_activity, set_armor, set_damage, set_has_activity, set_has_armor, set_has_damage, set_has_movement_speed, set_has_range, set_movement_speed, set_range
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::AddCustomTransmiterData(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v2; // eax
  int v3; // ecx
  int m_nVictimPlayerID; // edx
  int m_nVictimHeroID; // edx
  int m_nCritDmg; // edx
  int m_nContractComplete; // edx

  v2 = *(entry + 4);
  v3 = v2;
  BYTE1(v3) = BYTE1(v2) | 8;
  *(entry + 17) = this->m_nEpitaph;
  *(entry + 4) = v3;
  m_nVictimPlayerID = this->m_nVictimPlayerID;
  *(entry + 4) = v2 | 0x200800;
  *(entry + 32) = m_nVictimPlayerID;
  m_nVictimHeroID = this->m_nVictimHeroID;
  *(entry + 4) = v2 | 0xA00800;
  *(entry + 34) = m_nVictimHeroID;
  m_nCritDmg = this->m_nCritDmg;
  *(entry + 4) = v2 | 0x1A00800;
  *(entry + 35) = m_nCritDmg;
  m_nContractComplete = this->m_nContractComplete;
  *(entry + 4) = v2 | 0x3A00800;
  *(entry + 36) = m_nContractComplete;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::DeclareFunctions  (line 1385, @0x0000000002a78310, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetEpitaph(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimPlayerID(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimHeroID(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetCritDamage(CModifierParams const&), CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetContractStatus(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetEpitaph;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimPlayerID;
  this->m_Functions[121].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetVictimHeroID;
  this->m_Functions[122].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetCritDamage;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[123].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone_Thinker::GetContractStatus;
  this->m_Functions[123].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::~CDOTA_Modifier_PhantomAssassin_Gravestone  (line 1398, @0x0000000002ac1140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::~CDOTA_Modifier_PhantomAssassin_Gravestone(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this)
{
  this->_vptr_CDOTA_Buff = &off_440EE10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::~CDOTA_Modifier_PhantomAssassin_Gravestone  (line 1398, @0x0000000002ac1160, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_Gravestone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::~CDOTA_Modifier_PhantomAssassin_Gravestone(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this)
{
  this->_vptr_CDOTA_Buff = &off_440EE10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::IsHidden  (line 1404, @0x0000000002aba130, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::IsHidden(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::DeclareFunctions  (line 1418, @0x0000000002a783a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::OnCreated  (line 1425, @0x0000000002a783c0, libserver.so)
void __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::OnCreated(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this,
        KeyValues *pKV)
{
  this->m_bContractGravestoneComplete = 0;
}


// CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath  (line 1432, @0x0000000002a8aa30, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, Get, GetAssassinMiniGameVictimHeroID, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, QAngle, SetVictimPlayerID, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTAHeroList::LimitedUnitEnsureSpace, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, DOTA_CreateUnitByName, KeyValues::KeyValues, RandomInt, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, GetPositionOnGround (24 total)
// strings: "npc_dota_phantomassassin_gravestone", "modifier_phantomassassin_gravestone_thinker", "Epitaph", "CritDamage", "Contract", "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/pa_arcana_grave (8 total)
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Unit_Hero_PhantomAssassin
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_Gravestone::OnDeath(
        CDOTA_Modifier_PhantomAssassin_Gravestone *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r13
  CDOTA_BaseNPC *Caster; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdx
  int m_Value; // ebx
  CDOTA_BaseNPC *v20; // r15
  const Vector *v21; // rax
  CDOTA_BaseNPC *UnitByName; // rbx
  int v23; // eax
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rax
  unsigned int v26; // r13d
  CEntityInstance *v27; // rax
  _DWORD *v28; // rax
  int BuffParticleEffect; // eax
  int v30; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  bool bContractComplete; // [rsp+13h] [rbp-8Dh]
  int value; // [rsp+14h] [rbp-8Ch]
  CDOTA_BaseNPC *pEconItemOwner; // [rsp+20h] [rbp-80h]
  int nCritDmg; // [rsp+28h] [rbp-78h]
  int nVictimPlayerID; // [rsp+2Ch] [rbp-74h]
  Vector vLocationOnGround; // [rsp+30h] [rbp-70h] BYREF
  QAngle vAngles; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kvGravestone; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-38h]

  v43 = __readfsqword(0x28u);
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
          v9 = params->hunit.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hunit.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0
                  && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                  && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(v12[71].m_pEntity) == 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTAHeroList::LimitedUnitEnsureSpace(
                    &g_HeroList,
                    Caster,
                    EHeroLimitedUnitType::HERO_LIMITED_UNIT_PHANTOM_ASSASSIN_GRAVESTONES,
                    32,
                    1);
                  iRecord = params->iRecord;
                  AttackRecordsManager = GetAttackRecordsManager();
                  bContractComplete = 0;
                  RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
                  value = v12[100].m_pEntity;
                  v18 = *&g_pGameRules[16].m_szQuestName[74];
                  if ( *&g_pGameRules[16].m_szQuestName[72] == 3 && value == v18 && !this->m_bContractGravestoneComplete )
                  {
                    this->m_bContractGravestoneComplete = 1;
                    bContractComplete = 1;
                  }
                  nVictimPlayerID = (*(v12->_vptr_IHandleEntity + 414))(v12, v17, v18);
                  if ( RecordByIndex != 0 && RecordByIndex->m_flCriticalBonus > 1.0 )
                    nCritDmg = RecordByIndex->m_flCriticalDamage;
                  else
                    nCritDmg = 0;
                  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
                  v20 = CDOTA_Buff::GetCaster(this);
                  pEconItemOwner = CDOTA_Buff::GetCaster(this);
                  v21 = (*(v12[39].m_hPrivateScope.m_hScope + 73))(&v12[39].m_hPrivateScope);
                  UnitByName = DOTA_CreateUnitByName(
                                 "npc_dota_phantomassassin_gravestone",
                                 v21,
                                 1,
                                 pEconItemOwner,
                                 v20,
                                 m_Value);
                  if ( UnitByName != 0 )
                  {
                    KeyValues::KeyValues(&kvGravestone, "modifier_phantomassassin_gravestone_thinker");
                    v23 = RandomInt(1, 13);
                    KeyValues::SetInt(&kvGravestone, "Epitaph", v23);
                    KeyValues::SetInt(&kvGravestone, "VictimPlayerID", nVictimPlayerID);
                    KeyValues::SetInt(&kvGravestone, "VictimHeroID", value);
                    KeyValues::SetInt(&kvGravestone, "CritDamage", nCritDmg);
                    KeyValues::SetInt(&kvGravestone, "Contract", bContractComplete);
                    v24 = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(
                      UnitByName,
                      v24,
                      0,
                      "modifier_phantomassassin_gravestone_thinker",
                      &kvGravestone,
                      0);
                    LODWORD(UnitByName[1]._vptr_IHandleEntity) = nVictimPlayerID;
                    v25 = (*(v12[39].m_hPrivateScope.m_hScope + 73))(&v12[39].m_hPrivateScope);
                    vLocationOnGround = GetPositionOnGround(v25, v12);
                    (*(UnitByName->_vptr_IHandleEntity + 128))(UnitByName, &vLocationOnGround, 0, 0);
                    vAngles.y = RandomFloat(-180.0, -90.0);
                    v26 = 1;
                    vAngles.x = 0.0;
                    vAngles.z = 0.0;
                    v27 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
                    if ( v27 != 0
                      && BYTE3(v27[7]._vptr_IHandleEntity) != 0
                      && (v27[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                    {
                      v28 = __dynamic_cast(
                              v27,
                              &`typeinfo for'CDOTA_BaseNPC_Hero,
                              &`typeinfo for'CDOTA_Unit_Hero_PhantomAssassin,
                              0);
                      if ( v28 != 0 )
                        v26 = v28[1468];
                    }
                    CBaseEntity::SetAbsAngles(UnitByName, &vAngles);
                    (*(UnitByName->_vptr_IHandleEntity + 388))(UnitByName, v26);
                    if ( v26 == 2 )
                    {
                      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                             this,
                                             "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/p"
                                             "a_arcana_gravemarker_lvl2.vpcf",
                                             2,
                                             0,
                                             0);
                    }
                    else if ( v26 == 3 )
                    {
                      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                             this,
                                             "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/p"
                                             "a_arcana_gravemarker_lvl3.vpcf",
                                             2,
                                             0,
                                             0);
                    }
                    else
                    {
                      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                             this,
                                             "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/p"
                                             "a_arcana_gravemarker_lvl1.vpcf",
                                             2,
                                             0,
                                             0);
                    }
                    v30 = BuffParticleEffect;
                    AbsOrigin = CBaseEntity::GetAbsOrigin(UnitByName);
                    ParticleManager = GetParticleManager();
                    CDOTA_ParticleManager::SetParticleControlEnt(
                      ParticleManager,
                      v30,
                      0,
                      UnitByName,
                      0,
                      0,
                      *AbsOrigin,
                      1);
                    v33 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v33, v30);
                    v34 = CDOTA_Buff::GetCaster(this);
                    CDOTAHeroList::LimitedUnitTrack(
                      &g_HeroList,
                      v34,
                      EHeroLimitedUnitType::HERO_LIMITED_UNIT_PHANTOM_ASSASSIN_GRAVESTONES,
                      UnitByName);
                    KeyValues::~KeyValues(&kvGravestone);
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


// CDOTA_Modifier_PhantomAssassin_ScreenSplatter::~CDOTA_Modifier_PhantomAssassin_ScreenSplatter  (line 1521, @0x0000000002ac10f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomAssassin_ScreenSplatter::~CDOTA_Modifier_PhantomAssassin_ScreenSplatter(
        CDOTA_Modifier_PhantomAssassin_ScreenSplatter *const this)
{
  this->_vptr_CDOTA_Buff = &off_440F130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomAssassin_ScreenSplatter::~CDOTA_Modifier_PhantomAssassin_ScreenSplatter  (line 1521, @0x0000000002ac1110, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomAssassin_ScreenSplatter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomAssassin_ScreenSplatter::~CDOTA_Modifier_PhantomAssassin_ScreenSplatter(
        CDOTA_Modifier_PhantomAssassin_ScreenSplatter *const this)
{
  this->_vptr_CDOTA_Buff = &off_440F130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomAssassin_ScreenSplatter::IsHidden  (line 1526, @0x0000000002aba140, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomAssassin_ScreenSplatter::IsHidden(
        CDOTA_Modifier_PhantomAssassin_ScreenSplatter *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomAssassin_ScreenSplatter::DeclareFunctions  (line 1535, @0x0000000002a783d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomAssassin_ScreenSplatter::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomAssassin_ScreenSplatter::DeclareFunctions(
        CDOTA_Modifier_PhantomAssassin_ScreenSplatter *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_PhantomAssassin_ScreenSplatter::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_PhantomAssassin_ScreenSplatter::OnDeath  (line 1542, @0x0000000002a85590, libserver.so)  // inlines: AttackerNPC, CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToBasePlayer, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTAPlayer::GetPlayerByPlayerID, CRecipientFilter::AddRecipient, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CRecipientFilter::~CRecipientFilter, _Unwind_Resume
// strings: "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/pa_arcana_scree
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomAssassin_ScreenSplatter::OnDeath(
        CDOTA_Modifier_PhantomAssassin_ScreenSplatter *const this,
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
  int v13; // eax
  CDOTAPlayer *PlayerByPlayerID; // rax
  const CEntityInstance *v15; // rbx
  int v16; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CReliableBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v19; // [rsp+138h] [rbp-28h]

  v19 = __readfsqword(0x28u);
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
          v9 = params->hunit.m_Index;
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->hunit.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || !v12->m_bIsDOTANPC )
          {
            v12 = 0;
          }
          if ( (v12->m_iUnitType & 1) != 0
            && !v12->m_bIsIllusion.m_Value
            && v12 != CDOTA_Buff::GetParent(this)
            && (*(v12->_vptr_IHandleEntity + 436))(v12) == 0 )
          {
            CRecipientFilter::CRecipientFilter(&filter);
            filter._vptr_IRecipientFilter = &off_3FB63F0;
            CRecipientFilter::AddAllPlayers(&filter);
            filter._vptr_IRecipientFilter = &off_3FCB130;
            CRecipientFilter::MakeReliable(&filter);
            v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
            PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(v13);
            v15 = PlayerByPlayerID;
            if ( PlayerByPlayerID != 0 && (*(PlayerByPlayerID->_vptr_IHandleEntity + 140))(PlayerByPlayerID) != 0 )
            {
              CRecipientFilter::AddRecipient(&filter, v15);
              v16 = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/econ/items/phantom_assassin/phantom_assassin_arcana_elder_smith/pa_arcana_screen_blood_splatter.vpcf",
                      8,
                      0,
                      &filter);
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, v16);
            }
            filter._vptr_IRecipientFilter = &off_3FB63F0;
            CRecipientFilter::~CRecipientFilter(&filter);
          }
        }
      }
    }
  }
  return 1uLL;
}


