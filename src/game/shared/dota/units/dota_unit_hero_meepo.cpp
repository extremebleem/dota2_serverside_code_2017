// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:41
class CDOTA_Unit_Hero_Meepo : public CDOTA_BaseNPC_Hero {
	class NetworkVar_m_nWhichMeepo {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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
	CDOTA_Unit_Hero_Meepo(CDOTA_Unit_Hero_Meepo &);
	CDOTA_Unit_Hero_Meepo(CDOTA_Unit_Hero_Meepo &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Meepo();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool IsInventoryEnabled();
	int GetSlot();
	uint8 GetUnitLabelIndex();
	const char * GetUnitLabel();
	virtual ~CDOTA_Unit_Hero_Meepo();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[159] ModifyOrAppendCriteria
	// vtable[480] IsInventoryEnabled
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:108
class C_CDOTA_Unit_Hero_Meepo_MapInstall {
	C_CDOTA_Unit_Hero_Meepo_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:130
class CDOTA_Ability_Meepo_Earthbind : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_Meepo_Earthbind(CDOTA_Ability_Meepo_Earthbind &);
	CDOTA_Ability_Meepo_Earthbind(CDOTA_Ability_Meepo_Earthbind &);
	CDOTA_Ability_Meepo_Earthbind();
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
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Meepo_Earthbind();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[322] GetStunDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:155
class C_CDOTA_Ability_Meepo_Earthbind_MapInstall {
	C_CDOTA_Ability_Meepo_Earthbind_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:258
class CDOTA_Modifier_Meepo_Earthbind : public CDOTA_Buff {
public:

	CDOTA_Modifier_Meepo_Earthbind();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Meepo_Earthbind();

	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// vtable[6] GetPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:295
class CDOTA_Ability_Meepo_Geostrike : public CDOTABaseAbility {
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
	CDOTA_Ability_Meepo_Geostrike(CDOTA_Ability_Meepo_Geostrike &);
	CDOTA_Ability_Meepo_Geostrike(CDOTA_Ability_Meepo_Geostrike &);
	CDOTA_Ability_Meepo_Geostrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Meepo_Geostrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:330
class CDOTA_Modifier_Meepo_Self_Geostrike : public CDOTA_Buff {
public:

	CDOTA_Modifier_Meepo_Self_Geostrike();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Meepo_Self_Geostrike();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:399
class CDOTA_Modifier_Meepo_Geostrike_Debuff : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Meepo_Geostrike_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Meepo_Geostrike_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:451
class CDOTA_Ability_Meepo_DividedWeStand : public CDOTABaseAbility {
	class NetworkVar_m_nWhichDividedWeStand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nNumDividedWeStand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_entPrimeDividedWeStand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_entNextDividedWeStand {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_iPendingUpgrades;  // +0x3a0
	bool m_bHadScepter;  // +0x3a4
	typedef CDOTA_Ability_Meepo_DividedWeStand ThisClass;

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
	CDOTA_Ability_Meepo_DividedWeStand(CDOTA_Ability_Meepo_DividedWeStand &);
	CDOTA_Ability_Meepo_DividedWeStand(CDOTA_Ability_Meepo_DividedWeStand &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Meepo_DividedWeStand();
	virtual const char * GetIntrinsicModifierName();
	int GetSlot();
	int GetCount();
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	CDOTA_BaseNPC_Hero * GetPrimeHero();
	float GetCloneStatsValue(float, float);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnHeroLevelUp();
	virtual void OnOwnerSpawned();
	virtual void OnUpgrade();
	virtual void ChangeTeam(int);
	virtual void OwnerRespawned();
	virtual void OnHeroCalculateStatBonus();
	virtual bool HeroXPChange(float);
	virtual void OnOwnerDied();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual void OnInventoryContentsChanged();
	virtual void OnAbilityUpgrade(CDOTABaseAbility *);
	virtual CDOTA_BaseNPC * GetCloneSource();
	CDOTA_BaseNPC_Hero * CreateClone();
	virtual ~CDOTA_Ability_Meepo_DividedWeStand();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[287] GetAdditionalOwnedUnits
	// vtable[8] Spawn
	// vtable[282] OnHeroLevelUp
	// vtable[269] OnOwnerSpawned
	// vtable[268] OnUpgrade
	// vtable[70] ChangeTeam
	// vtable[207] OwnerRespawned
	// vtable[285] OnHeroCalculateStatBonus
	// vtable[286] HeroXPChange
	// vtable[271] OnOwnerDied
	// vtable[284] OnItemEquipped
	// vtable[283] OnInventoryContentsChanged
	// vtable[288] OnAbilityUpgrade
	// vtable[250] GetCloneSource
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:505
class C_CDOTA_Ability_Meepo_DividedWeStand_MapInstall {
	C_CDOTA_Ability_Meepo_DividedWeStand_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:1242
class CDOTA_Modifier_Meepo_Divided_We_Stand : public CDOTA_Buff {
public:

private:

	float respawn;  // +0xba8
	CDOTA_Modifier_Meepo_Divided_We_Stand();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPercentageRespawnTime(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual ~CDOTA_Modifier_Meepo_Divided_We_Stand();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:1358
class CDOTA_Ability_Meepo_Poof : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_Meepo_Poof(CDOTA_Ability_Meepo_Poof &);
	CDOTA_Ability_Meepo_Poof(CDOTA_Ability_Meepo_Poof &);
	CDOTA_Ability_Meepo_Poof();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual float GetCooldown(int);
	void DoPoofDamage(Vector);
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Meepo_Poof();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[242] GetCooldown
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_meepo.cpp:1398
class C_CDOTA_Ability_Meepo_Poof_MapInstall {
	C_CDOTA_Ability_Meepo_Poof_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Meepo::~CDOTA_Unit_Hero_Meepo  (line 41, @0x0000000002c9a270, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Meepo::~CDOTA_Unit_Hero_Meepo(CDOTA_Unit_Hero_Meepo *const this)
{
  this->_vptr_IHandleEntity = &off_45D80B0;
  this->_vptr_INextBotEventResponder = &off_45D9090;
  this->_vptr_CObstructionObject = &off_45D93C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Meepo::~CDOTA_Unit_Hero_Meepo  (line 41, @0x0000000002c9a2b0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Meepo
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Meepo::~CDOTA_Unit_Hero_Meepo(CDOTA_Unit_Hero_Meepo *const this)
{
  this->_vptr_IHandleEntity = &off_45D80B0;
  this->_vptr_INextBotEventResponder = &off_45D9090;
  this->_vptr_CObstructionObject = &off_45D93C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Meepo::Schema_DynamicBinding  (line 43, @0x0000000002c8a6f0, libserver.so)
// globals: CDOTA_Unit_Hero_Meepo::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Meepo::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Meepo *const this)
{
  return CDOTA_Unit_Hero_Meepo::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 43, @0x0000000002c8a720, libserver.so)
// globals: CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::DestructInstance  (line 43, @0x0000000002c8a730, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Meepo>
void __fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::FreeInstance  (line 43, @0x0000000002c8a750, libserver.so)
void __fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::CanAllocate  (line 43, @0x0000000002c8a770, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 43, @0x0000000002c8a780, libserver.so)
// globals: CDOTA_Unit_Hero_Meepo::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Meepo::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::AllocateInstance  (line 43, @0x0000000002c903e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::ConstructInstance  (line 43, @0x0000000002c942e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Meepo, CNetworkVarBase, Construct<CDOTA_Unit_Hero_Meepo>, EnsureValidValue<int>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = 0;
    *p = &off_45D80B0;
    *(p + 236) = &off_45D9090;
    *(p + 257) = &off_45D93C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002ca3470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 43, @0x0000000002ca39f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Meepo::GetEntityClassInternal  (line 43, @0x0000000002cbd830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_meepo", "CDOTA_Unit_Hero_Meepo"
// globals: `guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass, CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass, __dso_handle, CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo, CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Meepo::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass);
    CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass._vptr_CEntityClass = off_45D8030;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Meepo::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MeepoClass != 0 )
    return &CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo,
      "CDOTA_Unit_Hero_Meepo",
      "npc_dota_hero_meepo",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo);
  }
  CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass.m_pClassInfo = &CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo;
  CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MeepoClass = &CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass;
  CDOTA_Unit_Hero_Meepo::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MeepoClassInfo.m_pClass = &CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass;
  CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MeepoClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Meepo::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MeepoClass;
}


// CDOTA_Unit_Hero_Meepo::IsInventoryEnabled  (line 54, @0x0000000002cb39f0, libserver.so)
// calls: CDOTA_Unit_Hero_Meepo::GetSlot
bool __fastcall CDOTA_Unit_Hero_Meepo::IsInventoryEnabled(CDOTA_Unit_Hero_Meepo *const this)
{
  return CDOTA_Unit_Hero_Meepo::GetSlot(this) == 0;
}


// CDOTA_Unit_Hero_Meepo::YouForgotToImplementOrDeclareServerClass  (line 108, @0x0000000002c1d2e0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Meepo::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Meepo *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Meepo::GetServerClass  (line 108, @0x0000000002c352b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Meepo::GetServerClass(CDOTA_Unit_Hero_Meepo *const this)
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


// CDOTA_Ability_Meepo_Earthbind::~CDOTA_Ability_Meepo_Earthbind  (line 130, @0x0000000002c98db0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Meepo_Earthbind::~CDOTA_Ability_Meepo_Earthbind(
        CDOTA_Ability_Meepo_Earthbind *const this)
{
  this->_vptr_IHandleEntity = &off_45D9490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Meepo_Earthbind::~CDOTA_Ability_Meepo_Earthbind  (line 130, @0x0000000002c98dd0, libserver.so)  // inlines: ~CDOTA_Ability_Meepo_Earthbind
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Meepo_Earthbind::~CDOTA_Ability_Meepo_Earthbind(
        CDOTA_Ability_Meepo_Earthbind *const this)
{
  this->_vptr_IHandleEntity = &off_45D9490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Meepo_Earthbind::Schema_DynamicBinding  (line 132, @0x0000000002c8a790, libserver.so)
// globals: CDOTA_Ability_Meepo_Earthbind::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Earthbind::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Earthbind *const this)
{
  return CDOTA_Ability_Meepo_Earthbind::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 132, @0x0000000002c8a7a0, libserver.so)
// globals: CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::DestructInstance  (line 132, @0x0000000002c8a7b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Meepo_Earthbind>
void __fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::FreeInstance  (line 132, @0x0000000002c8a7d0, libserver.so)
void __fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::CanAllocate  (line 132, @0x0000000002c8a7f0, libserver.so)
bool __fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 132, @0x0000000002c8a800, libserver.so)
// globals: CDOTA_Ability_Meepo_Earthbind::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Earthbind::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::AllocateInstance  (line 132, @0x0000000002c90420, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::ConstructInstance  (line 132, @0x0000000002c95070, libserver.so)  // inlines: CDOTA_Ability_Meepo_Earthbind, Construct<CDOTA_Ability_Meepo_Earthbind>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45D9490;
  }
  return p;
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 132, @0x0000000002ca2a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 132, @0x0000000002ca2a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal  (line 132, @0x0000000002cbb0d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Meepo_Earthbind"
// globals: `guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass, CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass, __dso_handle, CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo, CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo
CEntityClass *__cdecl CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass);
    CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass._vptr_CEntityClass = off_45D9410;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass);
    __cxa_atexit(
      CDOTA_Ability_Meepo_Earthbind::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Meepo_EarthbindClass != 0 )
    return &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass;
  if ( `guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo,
      "CDOTA_Ability_Meepo_Earthbind",
      "meepo_earthbind",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo);
  }
  CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass.m_pClassInfo = &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo;
  CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass.m_pBaseClassInfo = CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Meepo_EarthbindClass = &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass;
  CDOTA_Ability_Meepo_Earthbind::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClassInfo.m_pClass = &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass;
  CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Meepo_EarthbindClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Meepo_Earthbind::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_EarthbindClass;
}


// CDOTA_Ability_Meepo_Earthbind::YouForgotToImplementOrDeclareServerClass  (line 155, @0x0000000002c1d2f0, libserver.so)
int __fastcall CDOTA_Ability_Meepo_Earthbind::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Meepo_Earthbind *const this)
{
  return 0;
}


// CDOTA_Ability_Meepo_Earthbind::GetServerClass  (line 155, @0x0000000002c35ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Meepo_Earthbind::GetServerClass(CDOTA_Ability_Meepo_Earthbind *const this)
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


// CDOTA_Ability_Meepo_Earthbind::OnSpellStart  (line 164, @0x0000000002c61000, libserver.so)  // inlines: CEntityHandle, CGameTrace, CHandle, EnableInteractsWith, GetEHandle, GetEntryIndex, GetFloat, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle (16 total)
// strings: "Hero_Meepo.Earthbind.Cast", "particles/units/heroes/hero_meepo/meepo_earthbind_projectile_fx.vpcf", "attach_attack2"
void __fastcall CDOTA_Ability_Meepo_Earthbind::OnSpellStart(CDOTA_Ability_Meepo_Earthbind *const this)
{
  int LevelSpecialValue; // r14d
  float v3; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm2_4
  float v7; // xmm0_4
  vec_t v8; // xmm2_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v21; // r12d
  CDOTA_ParticleManager *v22; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v24; // rax
  int v25; // r12d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  int v28; // ebx
  const CBaseAnimating *v29; // r12
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const QAngle *AbsAngles; // rax
  float v33; // [rsp+10h] [rbp-1D0h]
  float fDist; // [rsp+14h] [rbp-1CCh]
  float y; // [rsp+18h] [rbp-1C8h]
  float x; // [rsp+1Ch] [rbp-1C4h]
  Vector vDirection; // [rsp+28h] [rbp-1B8h] BYREF
  float v38; // [rsp+34h] [rbp-1ACh]
  float v39; // [rsp+38h] [rbp-1A8h]
  CTraceFilterSimple v40; // [rsp+40h] [rbp-1A0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+80h] [rbp-160h] BYREF
  trace_t tr; // [rsp+100h] [rbp-E0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  *&info.bHasFrontalCone = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  info.vSpawnOrigin.y = (CursorPosition.y + 0.0) - (CursorPosition.y + 0.0);
  memset(&info.vVelocity, 0, 36);
  info.vSpawnOrigin.x = (CursorPosition.x + 0.0) - (CursorPosition.x + 0.0);
  info.vSpawnOrigin.z = (CursorPosition.z - 256.0) - (CursorPosition.z + 1024.0);
  *&info.pszEffectName = CursorPosition.x + 0.0;
  *(&info.pszEffectName + 1) = CursorPosition.y + 0.0;
  info.pAbility = COERCE_UNSIGNED_INT(CursorPosition.z + 1024.0);
  LOBYTE(info.hSource.m_Index) = 1;
  BYTE1(info.hSource.m_Index) = (((info.vSpawnOrigin.x * info.vSpawnOrigin.x)
                                + (info.vSpawnOrigin.y * info.vSpawnOrigin.y))
                               + (info.vSpawnOrigin.z * info.vSpawnOrigin.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v40, 0, 4, 0);
  v40.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &info, &v40, &tr);
  x = tr.endpos.x;
  y = tr.endpos.y;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(tr.endpos.z)));
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = x - AbsOrigin->x;
  v38 = y - AbsOrigin->y;
  vDirection.z = v6;
  v39 = 0.0;
  v7 = VectorNormalize(&vDirection.z);
  if ( v7 < 0.0099999998 )
  {
    fDist = v7;
    v31 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v31);
    AngleVectors(AbsAngles, &vDirection.z, 0, 0);
    v7 = fDist;
  }
  v33 = v7;
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.fDistance = 0.0;
  info.bHasFrontalCone = 1;
  v8 = vec3_origin.y;
  info.fStartRadius = 0.0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v8;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v8;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v8;
  info.vAcceleration.z = z;
  info.fEndRadius = 0.0;
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
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(v10);
  info.vSpawnOrigin.x = v11->x;
  info.vSpawnOrigin.y = v11->y;
  v12 = v11->z;
  info.fDistance = v33;
  info.vSpawnOrigin.z = v12;
  info.vVelocity.x = LevelSpecialValue * vDirection.z;
  info.vVelocity.y = v38 * LevelSpecialValue;
  info.vVelocity.z = v39 * LevelSpecialValue;
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( v13 != 0 && (m_pEntity = v13->m_pEntity) != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v16 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v15 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 300;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v18 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Meepo.Earthbind.Cast", v18);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_meepo/meepo_earthbind_projectile_fx.vpcf",
               2,
               0,
               0,
               0);
  this->m_nFXIndex = Particle;
  v21 = Particle;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, v21, 0, *&info.vSpawnOrigin.x, info.vSpawnOrigin.z);
  m_nFXIndex = this->m_nFXIndex;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, m_nFXIndex, 1, COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x))), v3);
  v25 = this->m_nFXIndex;
  LODWORD(v40.m_attr.m_nInteractsWith) = 0;
  v40._vptr_CTraceFilter = COERCE_UNSIGNED_INT(LevelSpecialValue);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, v25, 2, *&v40._vptr_CTraceFilter, *&v40.m_attr.m_nInteractsWith);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = this->m_nFXIndex;
  v29 = v27;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v30, v28, 5, v29, 5, "attach_attack2", vec3_invalid, 1);
}


// CDOTA_Ability_Meepo_Earthbind::OnProjectileHit  (line 212, @0x0000000002c6ea70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator[], ~CUtlVector
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound (16 total)
// strings: "modifier_meepo_earthbind", "Hero_Meepo.Earthbind.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Meepo_Earthbind::OnProjectileHit(
        CDOTA_Ability_Meepo_Earthbind *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CEntityInstance *v8; // rax
  unsigned int v9; // edx
  int LevelSpecialValue; // r12d
  __m128i v12; // xmm1
  float v13; // r12d
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *Caster; // rax
  __int64 v17; // r13
  int v18; // r12d
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC_Hero *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC_Hero *v29; // rdi
  CDOTA_BaseNPC_Hero *pVictim; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  v8 = CEntityHandle::operator CEntityInstance *(hTarget);
  v9 = 0;
  if ( v8 == 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    *v12.m128i_i32 = LevelSpecialValue;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    entities.m_Memory.m_nGrowSize = 0;
    v14 = CEntityHandle::operator CEntityInstance *(hTarget);
    if ( v14 != 0 && BYTE3(v14[7]._vptr_IHandleEntity) != 0 )
      v15 = v14;
    else
      v15 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, vLocation, v15, v13, &entities, 2, 3, 256, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = &entities.m_Memory.m_pMemory[v17];
        m_Index = entities.m_Memory.m_pMemory[v17].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v21 = v19->m_Index;
          v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
          if ( v22 != 0 )
          {
            v23 = &v22[v21 & 0x1FF];
            if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
            {
              m_pInstance = v23->m_pInstance;
              if ( v23->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_meepo_earthbind");
                KeyValues::SetFloat(&kv, "duration", v25);
                v26 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, this, "modifier_meepo_earthbind", &kv, 0);
                pVictim = 0;
                if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  v27 = 0;
                  if ( LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                    v27 = m_pInstance;
                  pVictim = v27;
                }
                v28 = CDOTABaseAbility::GetCaster(this);
                if ( v28 != 0 && (v28->m_iUnitType & 1) != 0 )
                  v29 = v28;
                else
                  v29 = 0;
                EconEntity_OnOwnerKillEaterEvent(
                  v29,
                  pVictim,
                  kill_eater_event_t::kKillEaterEventType_Meepo_Earthbinds,
                  1,
                  INVALID_ITEM_DEF_INDEX);
                DOTA_EmitSound(10, "Hero_Meepo.Earthbind.Target", m_pInstance);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
        ++v18;
        ++v17;
      }
      while ( entities.m_Size > v18 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    return 1;
  }
  return v9;
}


// CDOTA_Ability_Meepo_Earthbind::GetStunDuration  (line 252, @0x0000000002c568c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Meepo_Earthbind::GetStunDuration(CDOTA_Ability_Meepo_Earthbind *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Meepo_Earthbind::~CDOTA_Modifier_Meepo_Earthbind  (line 258, @0x0000000002c91d10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Meepo_Earthbind::~CDOTA_Modifier_Meepo_Earthbind(
        CDOTA_Modifier_Meepo_Earthbind *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D9F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Meepo_Earthbind::~CDOTA_Modifier_Meepo_Earthbind  (line 258, @0x0000000002c91d30, libserver.so)  // inlines: ~CDOTA_Modifier_Meepo_Earthbind
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Meepo_Earthbind::~CDOTA_Modifier_Meepo_Earthbind(
        CDOTA_Modifier_Meepo_Earthbind *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D9F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Meepo_Earthbind::GetEffectName  (line 265, @0x0000000002c8a810, libserver.so)
// strings: "particles/units/heroes/hero_meepo/meepo_earthbind.vpcf"
const char *__fastcall CDOTA_Modifier_Meepo_Earthbind::GetEffectName(CDOTA_Modifier_Meepo_Earthbind *const this)
{
  return "particles/units/heroes/hero_meepo/meepo_earthbind.vpcf";
}


// CDOTA_Modifier_Meepo_Earthbind::GetPriority  (line 267, @0x0000000002c8a820, libserver.so)
int __fastcall CDOTA_Modifier_Meepo_Earthbind::GetPriority(CDOTA_Modifier_Meepo_Earthbind *const this)
{
  return 2;
}


// CDOTA_Modifier_Meepo_Earthbind::CheckState  (line 276, @0x0000000002c1d300, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Meepo_Earthbind::CheckState(
        CDOTA_Modifier_Meepo_Earthbind *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rdx
  uint64 v3; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFBFELL;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x7E | 0x80;
  buffState->m_nDisabledStateMask = v3;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x401;
}


// CDOTA_Ability_Meepo_Geostrike::~CDOTA_Ability_Meepo_Geostrike  (line 295, @0x0000000002c98e00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Meepo_Geostrike::~CDOTA_Ability_Meepo_Geostrike(
        CDOTA_Ability_Meepo_Geostrike *const this)
{
  this->_vptr_IHandleEntity = &off_45DA2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Meepo_Geostrike::~CDOTA_Ability_Meepo_Geostrike  (line 295, @0x0000000002c98e20, libserver.so)  // inlines: ~CDOTA_Ability_Meepo_Geostrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Meepo_Geostrike::~CDOTA_Ability_Meepo_Geostrike(
        CDOTA_Ability_Meepo_Geostrike *const this)
{
  this->_vptr_IHandleEntity = &off_45DA2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Meepo_Geostrike::Schema_DynamicBinding  (line 297, @0x0000000002c8a830, libserver.so)
// globals: CDOTA_Ability_Meepo_Geostrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Geostrike::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Geostrike *const this)
{
  return CDOTA_Ability_Meepo_Geostrike::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 297, @0x0000000002c8a840, libserver.so)
// globals: CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::DestructInstance  (line 297, @0x0000000002c8a850, libserver.so)  // inlines: Destruct<CDOTA_Ability_Meepo_Geostrike>
void __fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::FreeInstance  (line 297, @0x0000000002c8a870, libserver.so)
void __fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::CanAllocate  (line 297, @0x0000000002c8a890, libserver.so)
bool __fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 297, @0x0000000002c8a8a0, libserver.so)
// globals: CDOTA_Ability_Meepo_Geostrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Geostrike::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::AllocateInstance  (line 297, @0x0000000002c90460, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::ConstructInstance  (line 297, @0x0000000002c950a0, libserver.so)  // inlines: CDOTA_Ability_Meepo_Geostrike, Construct<CDOTA_Ability_Meepo_Geostrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45DA2B0;
  }
  return p;
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 297, @0x0000000002ca2a70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 297, @0x0000000002ca2a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal  (line 297, @0x0000000002cbb220, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "meepo_geostrike", "CDOTA_Ability_Meepo_Geostrike"
// globals: `guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass, CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass, __dso_handle, CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo, CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass);
    CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass._vptr_CEntityClass = off_45DA230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Meepo_Geostrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Meepo_GeostrikeClass != 0 )
    return &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass;
  if ( `guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo,
      "CDOTA_Ability_Meepo_Geostrike",
      "meepo_geostrike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo);
  }
  CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass.m_pClassInfo = &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo;
  CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass.m_pBaseClassInfo = CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Meepo_GeostrikeClass = &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass;
  CDOTA_Ability_Meepo_Geostrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClassInfo.m_pClass = &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass;
  CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Meepo_GeostrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Meepo_Geostrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_GeostrikeClass;
}


// CDOTA_Ability_Meepo_Geostrike::GetIntrinsicModifierName  (line 299, @0x0000000002c8a8b0, libserver.so)
// strings: "modifier_meepo_self_geostrike"
const char *__fastcall CDOTA_Ability_Meepo_Geostrike::GetIntrinsicModifierName(
        CDOTA_Ability_Meepo_Geostrike *const this)
{
  return "modifier_meepo_self_geostrike";
}


// CDOTA_Ability_Meepo_Geostrike::GetAbilityDamageToTargetOverInterval  (line 309, @0x0000000002c262b0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Meepo_Geostrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Meepo_Geostrike *const this,
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
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    fIntervalb = (*(this->_vptr_IHandleEntity + 247))(this) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Meepo_Geostrike::GetSlowDuration  (line 322, @0x0000000002c24670, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Meepo_Geostrike::GetSlowDuration(CDOTA_Ability_Meepo_Geostrike *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Meepo_Self_Geostrike::~CDOTA_Modifier_Meepo_Self_Geostrike  (line 330, @0x0000000002c91cc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Meepo_Self_Geostrike::~CDOTA_Modifier_Meepo_Self_Geostrike(
        CDOTA_Modifier_Meepo_Self_Geostrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DAD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Meepo_Self_Geostrike::~CDOTA_Modifier_Meepo_Self_Geostrike  (line 330, @0x0000000002c91ce0, libserver.so)  // inlines: ~CDOTA_Modifier_Meepo_Self_Geostrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Meepo_Self_Geostrike::~CDOTA_Modifier_Meepo_Self_Geostrike(
        CDOTA_Modifier_Meepo_Self_Geostrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DAD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Meepo_Self_Geostrike::IsHidden  (line 339, @0x0000000002c8a8c0, libserver.so)
bool __fastcall CDOTA_Modifier_Meepo_Self_Geostrike::IsHidden(CDOTA_Modifier_Meepo_Self_Geostrike *const this)
{
  return 1;
}


// CDOTA_Modifier_Meepo_Self_Geostrike::DeclareFunctions  (line 346, @0x0000000002c1d330, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Meepo_Self_Geostrike::DeclareFunctions(CDOTA_Modifier_Meepo_Self_Geostrike *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded  (line 359, @0x0000000002c33010, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_ModifierManager::GetBuffByIndex, CDOTA_Buff::GetCaster, CDOTA_Buff::GetName, CDOTA_Buff::ForceRefresh, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues (14 total)
// strings: "modifier_meepo_geostrike_debuff", "Hero_Meepo.Geostrike"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Self_Geostrike::OnAttackLanded(
        CDOTA_Modifier_Meepo_Self_Geostrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v17; // r15
  int v18; // ebx
  CDOTA_Buff *i; // rax
  CDOTA_Buff *v20; // r15
  const char *Name; // rax
  CDOTABaseAbility *Ability; // rax
  float v23; // xmm1_4
  CDOTABaseAbility *v24; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v26 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
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
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    goto LABEL_16;
  v13 = params->hattacker.m_Index;
  if ( v13 + 2 <= 1 )
    goto LABEL_16;
  v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v14 == 0 )
    goto LABEL_16;
  v15 = &v14[params->hattacker.m_Index & 0x1FF];
  if ( v15 == 0 )
    goto LABEL_16;
  if ( v13 != v15->m_EHandle.m_Index )
    goto LABEL_16;
  v17 = v15->m_pInstance;
  if ( v15->m_pInstance == 0
    || !v17->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != v17
    || params->nDamageCategory != 1
    || v12 == 0
    || m_pInstance == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0
    || HIBYTE(m_pInstance[7].m_CScriptComponent) == v12->m_iTeamNum.m_Value )
  {
    goto LABEL_16;
  }
  if ( SLODWORD(m_pInstance[65]._vptr_IHandleEntity) <= 0 )
  {
LABEL_35:
    KeyValues::KeyValues(&kv, "modifier_meepo_geostrike_debuff");
    Ability = CDOTA_Buff::GetAbility(this);
    CDOTABaseAbility::GetDuration(Ability);
    KeyValues::SetFloat(&kv, "duration", v23);
    v24 = CDOTA_Buff::GetAbility(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, v24, "modifier_meepo_geostrike_debuff", &kv, 0);
    DOTA_EmitSound(10, "Hero_Meepo.Geostrike", m_pInstance);
    KeyValues::~KeyValues(&kv);
LABEL_16:
    *&result.m_eType = 1;
    goto LABEL_17;
  }
  v18 = 0;
  for ( i = CDOTA_ModifierManager::GetBuffByIndex(&m_pInstance[64].m_worldGroupId, 0, 0);
        ;
        i = CDOTA_ModifierManager::GetBuffByIndex(&m_pInstance[64].m_worldGroupId, v18, 0) )
  {
    v20 = i;
    if ( i != 0 && CDOTA_Buff::GetCaster(i) == v12 )
    {
      Name = CDOTA_Buff::GetName(v20);
      if ( Name == "modifier_meepo_geostrike_debuff" || strcmp(Name, "modifier_meepo_geostrike_debuff") == 0 )
        break;
    }
    if ( ++v18 >= SLODWORD(m_pInstance[65]._vptr_IHandleEntity) )
      goto LABEL_35;
  }
  CDOTA_Buff::ForceRefresh(v20);
  *&result.m_eType = 1;
LABEL_17:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::~CDOTA_Modifier_Meepo_Geostrike_Debuff  (line 399, @0x0000000002c91c70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::~CDOTA_Modifier_Meepo_Geostrike_Debuff(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DB090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::~CDOTA_Modifier_Meepo_Geostrike_Debuff  (line 399, @0x0000000002c91c90, libserver.so)  // inlines: ~CDOTA_Modifier_Meepo_Geostrike_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::~CDOTA_Modifier_Meepo_Geostrike_Debuff(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DB090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::GetEffectName  (line 408, @0x0000000002c8a8d0, libserver.so)
// strings: "particles/units/heroes/hero_meepo/meepo_geostrike.vpcf"
const char *__fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::GetEffectName(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  return "particles/units/heroes/hero_meepo/meepo_geostrike.vpcf";
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::GetStatusEffectName  (line 409, @0x0000000002c8a8e0, libserver.so)
// strings: "particles/status_fx/status_effect_brewmaster_thunder_clap.vpcf"
const char *__fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  return "particles/status_fx/status_effect_brewmaster_thunder_clap.vpcf";
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::StatusEffectPriority  (line 410, @0x0000000002c8a8f0, libserver.so)
int __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  return 42;
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::GetAttributes  (line 411, @0x0000000002c8a900, libserver.so)
int __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::GetAttributes(CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  return 2;
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::DeclareFunctions  (line 422, @0x0000000002c1d350, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Meepo_Geostrike_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::DeclareFunctions(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Meepo_Geostrike_Debuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::OnCreated  (line 427, @0x0000000002c710d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::OnCreated(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 433, @0x0000000002c1d370, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Meepo_Geostrike_Debuff::OnIntervalThink  (line 438, @0x0000000002c1ef90, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Meepo_Geostrike_Debuff::OnIntervalThink(
        CDOTA_Modifier_Meepo_Geostrike_Debuff *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r14d
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, v3, 2, 0);
}


// CDOTA_Ability_Meepo_DividedWeStand::~CDOTA_Ability_Meepo_DividedWeStand  (line 451, @0x0000000002c98e50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::~CDOTA_Ability_Meepo_DividedWeStand(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  this->_vptr_IHandleEntity = &off_45DB3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Meepo_DividedWeStand::~CDOTA_Ability_Meepo_DividedWeStand  (line 451, @0x0000000002c98e70, libserver.so)  // inlines: ~CDOTA_Ability_Meepo_DividedWeStand
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::~CDOTA_Ability_Meepo_DividedWeStand(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  this->_vptr_IHandleEntity = &off_45DB3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Meepo_DividedWeStand::Schema_DynamicBinding  (line 453, @0x0000000002c8a910, libserver.so)
// globals: CDOTA_Ability_Meepo_DividedWeStand::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_DividedWeStand::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  return CDOTA_Ability_Meepo_DividedWeStand::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 453, @0x0000000002c8a920, libserver.so)
// globals: CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::DestructInstance  (line 453, @0x0000000002c8a930, libserver.so)  // inlines: Destruct<CDOTA_Ability_Meepo_DividedWeStand>
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::FreeInstance  (line 453, @0x0000000002c8a950, libserver.so)
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::CanAllocate  (line 453, @0x0000000002c8a970, libserver.so)
bool __fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 453, @0x0000000002c8a980, libserver.so)
// globals: CDOTA_Ability_Meepo_DividedWeStand::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_DividedWeStand::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::AllocateInstance  (line 453, @0x0000000002c904a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::ConstructInstance  (line 453, @0x0000000002ca0280, libserver.so)  // inlines: CDOTA_Ability_Meepo_DividedWeStand, CEntityHandle, CNetworkHandleBase, CNetworkVarBase, Construct<CDOTA_Ability_Meepo_DividedWeStand>, EnsureValidValue<int>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_45DB3F0;
    *(p + 229) = 0;
    *(p + 230) = -1;
    *(p + 231) = -1;
  }
  return p;
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 453, @0x0000000002ca2ac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 453, @0x0000000002ca2ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal  (line 453, @0x0000000002cc38d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "meepo_divided_we_stand", "CDOTA_Ability_Meepo_DividedWeStand"
// globals: `guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass, CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo, CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo
CEntityClass *__cdecl CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass) != 0 )
  {
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pClassInfo = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_flags = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pInputs = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_nInputCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pOutputs = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_nOutputCount = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pGameClass = 0;
    CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass._vptr_CEntityClass = off_45DB370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass);
    __cxa_atexit(
      CDOTA_Ability_Meepo_DividedWeStand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Meepo_DividedWeStandClass != 0 )
    return &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass;
  if ( `guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo,
      "CDOTA_Ability_Meepo_DividedWeStand",
      "meepo_divided_we_stand",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo);
  }
  CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pClassInfo = &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo;
  CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pBaseClassInfo = CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Meepo_DividedWeStandClass = &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass;
  CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClassInfo.m_pClass = &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass;
  CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Meepo_DividedWeStandClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Meepo_DividedWeStand::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_DividedWeStandClass;
}


// CDOTA_Ability_Meepo_DividedWeStand::GetIntrinsicModifierName  (line 461, @0x0000000002c8a990, libserver.so)
// strings: "modifier_meepo_divided_we_stand"
const char *__fastcall CDOTA_Ability_Meepo_DividedWeStand::GetIntrinsicModifierName(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  return "modifier_meepo_divided_we_stand";
}


// CDOTA_Ability_Meepo_DividedWeStand::YouForgotToImplementOrDeclareServerClass  (line 505, @0x0000000002c1d390, libserver.so)
int __fastcall CDOTA_Ability_Meepo_DividedWeStand::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  return 0;
}


// CDOTA_Ability_Meepo_DividedWeStand::GetServerClass  (line 505, @0x0000000002c350b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Meepo_DividedWeStand::GetServerClass(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
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


// CDOTA_Ability_Meepo_DividedWeStand::GetCount  (line 523, @0x0000000002c45570, libserver.so)
int __fastcall CDOTA_Ability_Meepo_DividedWeStand::GetCount(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  return this->m_nNumDividedWeStand.m_Value;
}


// CDOTA_Ability_Meepo_DividedWeStand::GetAdditionalOwnedUnits  (line 529, @0x0000000002c80f60, libserver.so)  // inlines: AddToTail, CEntityHandle, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPCHero, operator[]
// calls: CDOTABaseAbility::GetCaster, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::Find, CUtlMemory<CDOTA_BaseNPC*, int>::Grow
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::GetAdditionalOwnedUnits(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *pVecOwnedUnits)
{
  unsigned __int16 v3; // dx
  int v4; // esi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // r14
  __int64 m_Size; // rax
  int v12; // ecx
  CDOTA_BaseNPC **v13; // rax
  unsigned __int16 v14; // dx
  int v15; // esi
  int v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  int v19; // [rsp+Ch] [rbp-44h]
  CDOTA_BaseNPC *src; // [rsp+10h] [rbp-40h] BYREF

  if ( pVecOwnedUnits != 0 )
  {
    if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    LODWORD(src) = v5;
    if ( v5 + 2 > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 )
          {
            do
            {
              Caster = CDOTABaseAbility::GetCaster(m_pInstance);
              v10 = Caster;
              if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
              {
                src = Caster;
                if ( CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::Find(pVecOwnedUnits, &src) == -1 )
                {
                  m_Size = pVecOwnedUnits->m_Size;
                  v12 = pVecOwnedUnits->m_Size;
                  if ( m_Size == pVecOwnedUnits->m_Memory.m_nAllocationCount )
                  {
                    v19 = pVecOwnedUnits->m_Size;
                    CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&pVecOwnedUnits->m_Memory, 1);
                    v12 = pVecOwnedUnits->m_Size;
                    m_Size = v19;
                  }
                  pVecOwnedUnits->m_Size = v12 + 1;
                  v13 = &pVecOwnedUnits->m_Memory.m_pMemory[m_Size];
                  if ( v13 != 0 )
                    *v13 = v10;
                }
              }
              if ( HIDWORD(m_pInstance[19].m_pEntity) == -1 )
              {
                v14 = 0x7FFF;
                v15 = 0x7FFF;
              }
              else
              {
                v14 = WORD2(m_pInstance[19].m_pEntity) & 0x7FFF;
                v15 = v14;
              }
              v16 = (HIDWORD(m_pInstance[19].m_pEntity) >> 15 << 15) | v14 & 0x7FFF;
              LODWORD(src) = v16;
              if ( (v16 + 2) <= 1 )
                break;
              v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
              if ( v17 == 0 )
                break;
              v18 = &v17[v15 & 0x1FF];
              if ( v18 == 0 )
                break;
              if ( v16 != v18->m_EHandle.m_Index )
                break;
              m_pInstance = v18->m_pInstance;
            }
            while ( v18->m_pInstance != 0 );
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero  (line 549, @0x0000000002c45580, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CDOTA_Ability_Meepo_DividedWeStand*
// callers: CDOTA_Ability_Meepo_DividedWeStand::GetCloneSource, CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged, CDOTA_Ability_Meepo_DividedWeStand::OwnerRespawned, CDOTA_Ability_Meepo_DividedWeStand::HeroXPChange, CDOTA_Ability_Meepo_DividedWeStand::OnOwnerDied, CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Intellect, CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Agility, CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Strength, CDOTA_Ability_Meepo_DividedWeStand::OnAbilityUpgrade, CDOTA_Ability_Meepo_DividedWeStand::OnHeroLevelUp, CDOTA_Ability_Meepo_DividedWeStand::OnHeroCalculateStatBonus, CDOTA_Ability_Meepo_DividedWeStand::CreateClone (15 total)
CDOTA_BaseNPC_Hero *__fastcall CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  uint32 v1; // ecx
  unsigned __int16 v2; // dx
  int v3; // edi
  int v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *result; // rax
  CEntityInstance *m_pInstance; // rax
  unsigned __int16 v9; // dx
  int v10; // edi
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx

  v1 = this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15;
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (v1 << 15) | v2 & 0x7FFF;
  if ( (v4 + 2) <= 1 )
    return 0;
  v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[v3 & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( v4 != v6->m_EHandle.m_Index )
    return 0;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 )
    return 0;
  if ( HIDWORD(m_pInstance[11].m_pEntity) == -1 )
  {
    v9 = 0x7FFF;
    v10 = 0x7FFF;
  }
  else
  {
    v9 = WORD2(m_pInstance[11].m_pEntity) & 0x7FFF;
    v10 = v9;
  }
  v11 = (HIDWORD(m_pInstance[11].m_pEntity) >> 15 << 15) | v9 & 0x7FFF;
  if ( (v11 + 2) <= 1 )
    return 0;
  v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
  if ( v12 == 0 )
    return 0;
  v13 = &v12[v10 & 0x1FF];
  if ( v13 == 0 )
    return 0;
  if ( v11 != v13->m_EHandle.m_Index )
    return 0;
  result = v13->m_pInstance;
  if ( v13->m_pInstance == 0 || !result->m_bIsDOTANPC )
    return 0;
  if ( (result->m_iUnitType & 1) == 0 )
    return 0;
  return result;
}


// CDOTA_Ability_Meepo_DividedWeStand::GetCloneStatsValue  (line 559, @0x0000000002c47300, libserver.so)
float __fastcall CDOTA_Ability_Meepo_DividedWeStand::GetCloneStatsValue(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        float a2,
        float flPrimeStat,
        float flCloneStat)
{
  return a2 - flPrimeStat;
}


// CDOTA_Ability_Meepo_DividedWeStand::Spawn  (line 565, @0x0000000002c2bf50, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CDOTABaseAbility::Spawn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::Spawn(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        const CEntityKeyValues *pKeyValues)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v7; // edx
  __int16 v8; // cx

  CDOTABaseAbility::Spawn(this, pKeyValues);
  m_Index = this->m_entPrimeDividedWeStand.m_Value.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_entPrimeDividedWeStand.m_Value.m_Index) >> 9)
                                                            & 0x3F]) == 0
    || (v5 = &v4[this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || this != v5->m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v8 = 0x7FFF;
      else
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_entPrimeDividedWeStand.m_Value.m_Index) = v8
                                                             | this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x8000;
      this->m_entPrimeDividedWeStand.m_Value.m_Index = (v7 << 15)
                                                     | this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_entPrimeDividedWeStand.m_Value.m_Index = -1;
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::GetCloneSource  (line 575, @0x0000000002c456f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero
CDOTA_BaseNPC *__fastcall CDOTA_Ability_Meepo_DividedWeStand::GetCloneSource(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC_Hero *PrimeHero; // rcx
  CDOTA_BaseNPC *result; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
  result = 0;
  if ( Caster != PrimeHero )
    return PrimeHero;
  return result;
}


// CDOTA_Ability_Meepo_DividedWeStand::CreateClone  (line 584, @0x0000000002c47310, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, ReplicateModelFromOtherHero, Set, SetAbilityPoints, SetActive, SetHasInventory, String, operator CDOTA_Ability_Meepo_DividedWeStand*, operator!=, operator!=<CDOTA_BaseNPC_Hero>, operator=, operator=<CDOTA_BaseNPC_Hero*>, operator=<int>
// calls: CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SetControllableByPlayer, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetModel, CBaseModelEntity::SetModel, CDOTA_BaseNPC::GetInventory, FindClearSpaceForUnit, CDOTA_BaseNPC::CreateAbilities
// callers: CDOTA_Ability_Meepo_DividedWeStand::OnUpgrade, CDOTA_Ability_Meepo_DividedWeStand::OnOwnerSpawned, CDOTA_Ability_Meepo_DividedWeStand::OnItemEquipped
// strings: "meepo_divided_we_stand"
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Hero *__fastcall CDOTA_Ability_Meepo_DividedWeStand::CreateClone(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  CDOTA_BaseNPC_Hero *PrimeHero; // r14
  unsigned __int16 v3; // dx
  int v4; // edi
  uint32 v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC_Hero *result; // rax
  unsigned __int16 v9; // cx
  int v10; // edi
  CBaseEntity *m_pInstance; // r12
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int m_Value; // r15d
  Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdx
  const char *m_pAsString; // rdi
  CDOTA_BaseNPC_Hero *v19; // r12
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_Meepo_DividedWeStand *i; // r15
  uint32 m_Index; // esi
  unsigned __int16 v23; // cx
  int v24; // edi
  uint32 v25; // edx
  CEntityIdentity *v26; // rcx
  CEntityIdentity *v27; // rcx
  int v28; // edi
  CConcreteEntityList *v29; // rcx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  int v33; // ecx
  __int16 v34; // si
  int v35; // edx
  int v36; // edx
  CEntityIdentity *v37; // rcx
  CEntityIdentity *v38; // rcx
  CEntityIdentity *v39; // rdx
  int v40; // ecx
  __int16 v41; // si
  unsigned __int16 v42; // dx
  int v43; // edi
  uint32 v44; // eax
  __int64 v45; // rsi
  CEntityIdentity *v46; // rdx
  CEntityIdentity *v47; // rdx
  int v48; // eax
  CEntityIdentity *v49; // rdx
  __int16 v50; // cx
  CEntityInstance *v51; // r15
  CEntityInstance *v52; // r15
  CEntityInstance *v53; // rax
  int v54; // r8d
  unsigned __int16 v55; // dx
  int v56; // edi
  uint32 v57; // eax
  CEntityIdentity *v58; // rdx
  CEntityIdentity *v59; // rdx
  unsigned __int16 v60; // dx
  CEntityIdentity *v61; // rax
  char *v62; // rax
  int v63; // [rsp+4h] [rbp-4Ch]
  CDOTA_Ability_Meepo_DividedWeStand *pNewHeroDividedWeStanda; // [rsp+8h] [rbp-48h]
  CDOTA_Ability_Meepo_DividedWeStand *pNewHeroDividedWeStandb; // [rsp+8h] [rbp-48h]
  CDOTA_Ability_Meepo_DividedWeStand *pNewHeroDividedWeStand; // [rsp+8h] [rbp-48h]
  int pNewHeroDividedWeStandc; // [rsp+8h] [rbp-48h]
  CEntityHandle v68[16]; // [rsp+10h] [rbp-40h] BYREF
  Vector v69; // 0:xmm0_8.8,8:xmm1_4.4

  PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  v68[0].m_Index = v5;
  if ( v5 + 2 <= 1 )
    return 0;
  v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
  if ( v6 == 0 )
    return 0;
  v7 = &v6[v4 & 0x1FF];
  if ( v7 == 0 || v5 != v7->m_EHandle.m_Index || this != v7->m_pInstance || PrimeHero == 0 )
    return 0;
  if ( PrimeHero->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v9 = 0x7FFF;
    v10 = 0x7FFF;
  }
  else
  {
    v9 = PrimeHero->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v10 = v9;
  }
  m_pInstance = 0;
  v12 = (PrimeHero->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
  v68[0].m_Index = v12;
  if ( v12 + 2 > 1 )
  {
    v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
    if ( v13 != 0 )
    {
      v14 = &v13[v10 & 0x1FF];
      if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
        m_pInstance = v14->m_pInstance;
    }
  }
  m_Value = PrimeHero->m_iTeamNum.m_Value;
  AbsOrigin = CBaseEntity::GetAbsOrigin(PrimeHero);
  m_pEntity = PrimeHero->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v19 = DOTA_Character_ScriptSpawn_Synchronous(m_pAsString, m_Value, m_pInstance, 0, 0, *AbsOrigin);
  if ( g_pGameRules != 0 && *&g_pGameRules[6].m_szQuestName[68] == 18 )
    CDOTA_BaseNPC::CreateAbilities(v19, 1);
  result = 0;
  if ( v19 != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v19, "meepo_divided_we_stand", 0);
    if ( AbilityByName != 0 )
    {
      for ( i = this; ; i = v27->m_pInstance )
      {
        m_Index = i->m_entNextDividedWeStand.m_Value.m_Index;
        if ( m_Index == -1 )
        {
          v23 = 0x7FFF;
          v24 = 0x7FFF;
        }
        else
        {
          v23 = i->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
          v24 = v23;
        }
        v25 = (i->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v23 & 0x7FFF;
        v68[0].m_Index = v25;
        if ( v25 + 2 <= 1 )
          break;
        v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
        if ( v26 == 0 )
          break;
        v27 = &v26[v24 & 0x1FF];
        if ( v27 == 0 || v25 != v27->m_EHandle.m_Index || v27->m_pInstance == 0 )
          break;
      }
      v28 = i->m_nWhichDividedWeStand.m_Value;
      if ( v28 + 1 != LODWORD(AbilityByName[1]._vptr_IHandleEntity) )
      {
        v63 = v28 + 1;
        pNewHeroDividedWeStanda = AbilityByName;
        (*(AbilityByName->_vptr_IHandleEntity + 22))(AbilityByName, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        AbilityByName = pNewHeroDividedWeStanda;
        pNewHeroDividedWeStanda->m_nWhichDividedWeStand.m_Value = v63;
        m_Index = i->m_entNextDividedWeStand.m_Value.m_Index;
      }
      v29 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 <= 1
        || (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_entNextDividedWeStand.m_Value.m_Index) >> 9)
                                                                 & 0x3F]) == 0
        || (v31 = &v30[i->m_entNextDividedWeStand.m_Value.m_Index & 0x1FF]) == 0
        || v31->m_EHandle.m_Index != m_Index
        || AbilityByName != v31->m_pInstance )
      {
        pNewHeroDividedWeStandb = AbilityByName;
        (*(i->_vptr_IHandleEntity + 22))(i, 924, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        AbilityByName = pNewHeroDividedWeStandb;
        v32 = pNewHeroDividedWeStandb->m_pEntity;
        if ( v32 != 0 )
        {
          v33 = (v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1);
          if ( v32->m_EHandle.m_Index == -1 )
            v34 = 0x7FFF;
          else
            v34 = v32->m_EHandle.m_Index & 0x7FFF;
          LOWORD(i->m_entNextDividedWeStand.m_Value.m_Index) = v34 | i->m_entNextDividedWeStand.m_Value.m_Index & 0x8000;
          v35 = (v33 << 15) | i->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
          v29 = CEntityHandle::gm_pEntityList;
          i->m_entNextDividedWeStand.m_Value.m_Index = v35;
        }
        else
        {
          i->m_entNextDividedWeStand.m_Value.m_Index = -1;
          v29 = CEntityHandle::gm_pEntityList;
        }
      }
      v36 = AbilityByName[1].m_pEntity;
      if ( (v36 + 2) <= 1
        || (v37 = v29->m_pIdentityChunks[(LOWORD(AbilityByName[1].m_pEntity) >> 9) & 0x3F]) == 0
        || (v38 = &v37[AbilityByName[1].m_pEntity & 0x1FF]) == 0
        || v36 != v38->m_EHandle.m_Index
        || this != v38->m_pInstance )
      {
        pNewHeroDividedWeStand = AbilityByName;
        (*(AbilityByName->_vptr_IHandleEntity + 22))(AbilityByName, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v39 = this->m_pEntity;
        AbilityByName = pNewHeroDividedWeStand;
        if ( v39 != 0 )
        {
          v40 = (v39->m_EHandle.m_Index >> 15) - (v39->m_flags & 1);
          if ( v39->m_EHandle.m_Index == -1 )
            v41 = 0x7FFF;
          else
            v41 = v39->m_EHandle.m_Index & 0x7FFF;
          LOWORD(pNewHeroDividedWeStand->m_entPrimeDividedWeStand.m_Value.m_Index) = v41
                                                                                   | pNewHeroDividedWeStand->m_entPrimeDividedWeStand.m_Value.m_Index
                                                                                   & 0x8000;
          pNewHeroDividedWeStand->m_entPrimeDividedWeStand.m_Value.m_Index = (v40 << 15)
                                                                           | pNewHeroDividedWeStand->m_entPrimeDividedWeStand.m_Value.m_Index
                                                                           & 0x7FFF;
        }
        else
        {
          pNewHeroDividedWeStand->m_entPrimeDividedWeStand.m_Value.m_Index = -1;
        }
      }
      (*(AbilityByName->_vptr_IHandleEntity + 262))(AbilityByName);
    }
    if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
    {
      v42 = 0x7FFF;
      v43 = 0x7FFF;
    }
    else
    {
      v42 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
      v43 = v42;
    }
    v44 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v42 & 0x7FFF;
    v68[0].m_Index = v44;
    v45 = g_pEntitySystem;
    if ( v44 + 2 > 1 )
    {
      v46 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v43 >> 9];
      if ( v46 != 0 )
      {
        v47 = &v46[v43 & 0x1FF];
        if ( v47 != 0 && v44 == v47->m_EHandle.m_Index )
        {
          v52 = v47->m_pInstance;
          if ( v47->m_pInstance != 0 )
          {
            v53 = v47->m_pInstance;
            v54 = 0;
            do
            {
              ++v54;
              if ( HIDWORD(v53[19].m_pEntity) == -1 )
              {
                v55 = 0x7FFF;
                v56 = 0x7FFF;
              }
              else
              {
                v55 = WORD2(v53[19].m_pEntity) & 0x7FFF;
                v56 = v55;
              }
              v57 = (HIDWORD(v53[19].m_pEntity) >> 15 << 15) | v55 & 0x7FFF;
              v68[0].m_Index = v57;
              if ( v57 + 2 <= 1 )
                break;
              v58 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v56 >> 9];
              if ( v58 == 0 )
                break;
              v59 = &v58[v56 & 0x1FF];
              if ( v59 == 0 )
                break;
              if ( v57 != v59->m_EHandle.m_Index )
                break;
              v53 = v59->m_pInstance;
            }
            while ( v59->m_pInstance != 0 );
            do
            {
              if ( v54 != HIDWORD(v52[19]._vptr_IHandleEntity) )
              {
                pNewHeroDividedWeStandc = v54;
                (*(v52->_vptr_IHandleEntity + 22))(v52, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                v54 = pNewHeroDividedWeStandc;
                HIDWORD(v52[19]._vptr_IHandleEntity) = pNewHeroDividedWeStandc;
              }
              if ( HIDWORD(v52[19].m_pEntity) == -1 )
              {
                v60 = 0x7FFF;
                v45 = 0x7FFF;
              }
              else
              {
                v60 = WORD2(v52[19].m_pEntity) & 0x7FFF;
                v45 = v60;
              }
              v68[0].m_Index = (HIDWORD(v52[19].m_pEntity) >> 15 << 15) | v60 & 0x7FFF;
              if ( v68[0].m_Index + 2 <= 1 )
                break;
              v61 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v45 >> 9];
              if ( v61 == 0 )
                break;
              v45 = 120 * (v45 & 0x1FF);
              v62 = v61 + v45;
              if ( v62 == 0 )
                break;
              if ( v68[0].m_Index != *(v62 + 4) )
                break;
              v52 = *v62;
            }
            while ( *v62 != 0 );
          }
        }
      }
    }
    v48 = (*(PrimeHero->_vptr_IHandleEntity + 414))(PrimeHero, v45);
    CDOTA_BaseNPC::SetControllableByPlayer(v19, v48, 0);
    if ( v19->m_iAbilityPoints.m_Value != 0 )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v19->m_iAbilityPoints.m_Value = 0;
    }
    (*(v19->_vptr_IHandleEntity + 388))(v19, PrimeHero->m_iCurrentLevel.m_Value);
    v68[0].m_Index = -1;
    v49 = PrimeHero->m_pEntity;
    if ( v49 != 0 )
    {
      v50 = 0x7FFF;
      if ( v49->m_EHandle.m_Index != -1 )
        v50 = v49->m_EHandle.m_Index & 0x7FFF;
      v68[0].m_Index = (((v49->m_EHandle.m_Index >> 15) - (v49->m_flags & 1)) << 15) | v50 & 0x7FFF;
    }
    v51 = CEntityHandle::operator CEntityInstance *(&v19->m_hReplicatingOtherHeroModel.m_Value);
    if ( v51 != CEntityHandle::operator CEntityInstance *(v68) )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 4812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v19->m_hReplicatingOtherHeroModel.m_Value = v68[0];
    }
    CBaseEntity::GetModel(v68, PrimeHero);
    CBaseModelEntity::SetModel(v19, v68);
    CDOTA_BaseNPC::GetInventory(v19)->m_bIsActive = 0;
    v19->m_bHasInventory = 0;
    v69 = *CBaseEntity::GetAbsOrigin(PrimeHero);
    FindClearSpaceForUnit(v19, v69, 1);
    (*(this->_vptr_IHandleEntity + 283))(this);
    return v19;
  }
  return result;
}


// CDOTA_Ability_Meepo_DividedWeStand::OnUpgrade  (line 662, @0x0000000002c47bf0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::OnUpgrade, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTA_Ability_Meepo_DividedWeStand::CreateClone
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnUpgrade(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  unsigned __int16 v3; // cx
  int v4; // edi
  uint32 v5; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  CDOTABaseAbility::OnUpgrade(this);
  PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
  if ( PrimeHero != 0 && !PrimeHero->m_bIsIllusion.m_Value )
  {
    if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
    {
      v3 = 0x7FFF;
      v4 = 0x7FFF;
    }
    else
    {
      v3 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
      v4 = v3;
    }
    v5 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
    if ( v5 + 2 > 1 )
    {
      v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
      if ( v6 != 0 )
      {
        v7 = &v6[v4 & 0x1FF];
        if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && this == v7->m_pInstance )
        {
          if ( (*(PrimeHero->_vptr_IHandleEntity + 408))(PrimeHero) != 0 )
            CDOTA_Ability_Meepo_DividedWeStand::CreateClone(this);
          else
            ++this->m_iPendingUpgrades;
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnOwnerSpawned  (line 684, @0x0000000002c47cf0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity
// calls: CDOTABaseAbility::OnOwnerSpawned, CDOTA_Ability_Meepo_DividedWeStand::CreateClone
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnOwnerSpawned(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // r12d

  CDOTABaseAbility::OnOwnerSpawned(this);
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && this == v6->m_pInstance )
      {
        v7 = 0;
        if ( this->m_iPendingUpgrades > 0 )
        {
          do
          {
            ++v7;
            CDOTA_Ability_Meepo_DividedWeStand::CreateClone(this);
          }
          while ( this->m_iPendingUpgrades > v7 );
          (*(this->_vptr_IHandleEntity + 288))(this, this);
          this->m_iPendingUpgrades = 0;
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnHeroLevelUp  (line 703, @0x0000000002c46b80, libserver.so)  // inlines: CEntityHandle, Get, GetAbilityPoints, GetBaseAgility, GetBaseIntellect, GetBaseStrength, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetAbilityPoints, SetBaseAgility, SetBaseIntellect, SetBaseStrength, ToDOTABaseNPCHero, operator=<float>, operator=<int>
// calls: CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTABaseAbility::GetCaster
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnHeroLevelUp(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntitySystem *v5; // r14
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  unsigned int *PrimeHero; // r12
  unsigned __int16 v9; // dx
  int v10; // esi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  float *v16; // rbx
  unsigned int v17; // r15d
  unsigned __int16 v18; // ax
  int v19; // esi
  int v20; // edx
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  unsigned int v23; // [rsp+Ch] [rbp-44h]
  unsigned int v24; // [rsp+Ch] [rbp-44h]
  unsigned int v25; // [rsp+Ch] [rbp-44h]

  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  v5 = g_pEntitySystem;
  if ( v4 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index && this == v7->m_pInstance )
      {
        PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
        if ( this->m_entNextDividedWeStand.m_Value.m_Index == -1 )
        {
          v9 = 0x7FFF;
          v10 = 0x7FFF;
        }
        else
        {
          v9 = this->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
          v10 = v9;
        }
        v11 = (this->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
        if ( v11 + 2 > 1 )
        {
          v12 = v5->m_EntityList.m_pIdentityChunks[v10 >> 9];
          if ( v12 != 0 )
          {
            v13 = &v12[v10 & 0x1FF];
            if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 )
              {
                do
                {
                  Caster = CDOTABaseAbility::GetCaster(m_pInstance);
                  v16 = Caster;
                  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
                  {
                    (*(Caster->_vptr_IHandleEntity + 388))(Caster, PrimeHero[533]);
                    v17 = PrimeHero[1193];
                    if ( v17 != *(v16 + 1193) )
                    {
                      (*(*v16 + 176LL))(v16, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *(v16 + 1193) = v17;
                    }
                    if ( *(PrimeHero + 1158) != v16[1158] )
                    {
                      v25 = PrimeHero[1158];
                      (*(*v16 + 176LL))(v16, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *(v16 + 1158) = v25;
                    }
                    if ( *(PrimeHero + 1159) != v16[1159] )
                    {
                      v24 = PrimeHero[1159];
                      (*(*v16 + 176LL))(v16, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *(v16 + 1159) = v24;
                    }
                    if ( *(PrimeHero + 1160) != v16[1160] )
                    {
                      v23 = PrimeHero[1160];
                      (*(*v16 + 176LL))(v16, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      *(v16 + 1160) = v23;
                    }
                    (*(*v16 + 3920LL))(v16);
                  }
                  if ( HIDWORD(m_pInstance[19].m_pEntity) == -1 )
                  {
                    v18 = 0x7FFF;
                    v19 = 0x7FFF;
                  }
                  else
                  {
                    v18 = WORD2(m_pInstance[19].m_pEntity) & 0x7FFF;
                    v19 = v18;
                  }
                  v20 = (HIDWORD(m_pInstance[19].m_pEntity) >> 15 << 15) | v18 & 0x7FFF;
                  if ( (v20 + 2) <= 1 )
                    break;
                  v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v19 >> 9];
                  if ( v21 == 0 )
                    break;
                  v22 = &v21[v19 & 0x1FF];
                  if ( v22 == 0 )
                    break;
                  if ( v20 != v22->m_EHandle.m_Index )
                    break;
                  m_pInstance = v22->m_pInstance;
                }
                while ( v22->m_pInstance != 0 );
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnItemEquipped  (line 737, @0x0000000002c47df0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDamageCustom, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTABaseAbility::GetCaster, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTA_Item::ExpireSellback, CDOTA_Ability_Meepo_DividedWeStand::CreateClone, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// strings: "item_ultimate_scepter"
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnItemEquipped(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        CDOTA_Item *pItem)
{
  CDOTA_BaseNPC_Hero *PrimeHero; // r13
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTA_BaseNPC_Hero *v8; // rax
  CDOTA_BaseNPC_Hero *Clone; // r12
  CDOTA_BaseNPC_Hero *v10; // rax
  int Health; // r13d
  CDOTA_BaseNPC_Hero *v12; // rax
  int (**vptr_IHandleEntity)(...); // rax
  CTakeDamageInfo newinfo; // [rsp+0h] [rbp-B0h] BYREF

  if ( pItem != 0
    && !this->m_bHadScepter
    && CDOTABaseAbility::GetCaster(this) != 0
    && (CDOTABaseAbility::GetCaster(this) == 0 || !CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value) )
  {
    PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
    if ( PrimeHero == CDOTABaseAbility::GetCaster(this) )
    {
      m_pAbilityData = pItem->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pAbilityData->m_pszAbilityName != 0
          && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
        {
          m_Value = pItem->m_iPlayerOwnerID.m_Value;
          v8 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
          if ( (*(v8->_vptr_IHandleEntity + 414))(v8) == m_Value )
          {
            if ( pItem->m_bDroppable.m_Value )
            {
              (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pItem->m_bDroppable.m_Value = 0;
            }
            if ( pItem->m_bSellable.m_Value )
            {
              (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pItem->m_bSellable.m_Value = 0;
            }
            CDOTA_Item::ExpireSellback(pItem);
            Clone = CDOTA_Ability_Meepo_DividedWeStand::CreateClone(this);
            if ( Clone != 0 )
            {
              v10 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
              if ( v10 != 0 && (*(v10->_vptr_IHandleEntity + 408))(v10) == 0 )
              {
                Health = CBaseEntity::GetHealth(Clone);
                v12 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
                CTakeDamageInfo::CTakeDamageInfo(&newinfo, this, v12, Health, 0, 0);
                newinfo.m_iDamageCustom = 2;
                CBaseEntity::TakeDamage(Clone, &newinfo);
                CTakeDamageInfo::~CTakeDamageInfo(&newinfo);
              }
            }
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            this->m_bHadScepter = 1;
            vptr_IHandleEntity[288](this, this);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged  (line 774, @0x0000000002c45720, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, ClassMatches, Get, GetClassName, GetClassNameAsCStr, GetClassname, GetEntryIndex, GetHandleEntity, GetInstance, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, Init, LookupEntity, OnInventoryContentsChanged, SetIsClonedItemProxy, String, ToDOTABaseNPCHero, operator=
// calls: CDOTABaseAbility::InitBaseValues, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CDOTABaseAbility::GetCaster, CEntityIdentity::ClassMatches, CEntityHandle::GetHandleEntity, CDOTA_UnitInventory::NumItemsInInventory, CDOTA_UnitInventory::RemoveItem, CDOTA_BaseNPC::GetCurrentActiveAbility, CDOTA_BaseNPC::MoveItem, CDOTA_BaseNPC::AddItem (13 total)
// strings: "item_boots", "item_guardian_greaves", "item_travel_boots", "item_travel_boots_2"
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnInventoryContentsChanged(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  int v7; // ebx
  int v8; // r13d
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v12; // r15
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const CEntityIdentity *v15; // rdi
  const char *v16; // r12
  IHandleEntity *HandleEntity; // r13
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_UnitInventory *v20; // rax
  int v21; // eax
  int v22; // r12d
  CDOTA_UnitInventory *v23; // rax
  CDOTA_UnitInventory *v24; // rax
  CDOTA_Item *v25; // rax
  CDOTA_Item *v26; // r15
  const CEntityIdentity *v27; // rdi
  CDOTA_UnitInventory *v28; // rax
  CDOTA_Item *v29; // rax
  CDOTA_Item *v30; // r12
  const CEntityIdentity *v31; // rdi
  CDOTA_BaseNPC_Hero *v32; // rax
  CDOTA_UnitInventory *v33; // rax
  CDOTA_Item *v34; // rbx
  CEntityIdentity *v35; // rax
  const char *v36; // rsi
  unsigned __int16 v37; // dx
  int v38; // esi
  int v39; // eax
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rdx
  const CEntityIdentity *v42; // rdi
  const char *v43; // r12
  const CEntityIdentity *v44; // rdi
  const char *v45; // r12
  const CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // r12
  const CEntityIdentity *v48; // rdi
  const char *v49; // r12
  const CEntityIdentity *v50; // rdi
  const char *v51; // r12
  const CEntityIdentity *v52; // rdi
  const char *v53; // r12
  int i; // r12d
  CDOTA_UnitInventory *v55; // rax
  CDOTA_Item *v56; // r15
  CDOTA_UnitInventory *v57; // rax
  const char *iszBoots; // [rsp+0h] [rbp-50h]
  int iItem; // [rsp+8h] [rbp-48h]
  bool bGiveBoots; // [rsp+Fh] [rbp-41h]

  CDOTABaseAbility::InitBaseValues(this);
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 <= 1 )
    return;
  v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
  if ( v5 == 0 )
    return;
  v6 = &v5[v3 & 0x1FF];
  if ( v6 == 0 || v4 != v6->m_EHandle.m_Index || this != v6->m_pInstance )
    return;
  iszBoots = 0;
  v7 = 0;
  v8 = 0;
  iItem = 0;
  do
  {
    while ( 1 )
    {
      PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
      Inventory = CDOTA_BaseNPC::GetInventory(PrimeHero);
      ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v7);
      v12 = ItemInSlot;
      if ( ItemInSlot == 0 )
        goto LABEL_11;
      m_Value = ItemInSlot->m_iPlayerOwnerID.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( (*(Caster->_vptr_IHandleEntity + 414))(Caster) != m_Value )
        goto LABEL_11;
      if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_boots") || v8 != 0 )
        break;
      m_pEntity = v12->m_pEntity;
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      if ( !CEntityIdentity::ClassMatches(m_pEntity, "item_tranquil_boots") )
      {
        if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_phase_boots") )
          goto LABEL_20;
        iszBoots = m_pAsString;
        if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_arcane_boots") )
          goto LABEL_59;
        if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_power_treads") )
          goto LABEL_66;
        iItem = v7;
        v8 = 1;
        goto LABEL_75;
      }
LABEL_80:
      v50 = v12->m_pEntity;
      v51 = v50->m_designerName.u.m_pAsString;
      if ( CEntityIdentity::ClassMatches(v50, "item_phase_boots") )
        goto LABEL_20;
      if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_arcane_boots") )
        goto LABEL_59;
      iszBoots = v51;
      if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_power_treads") )
        goto LABEL_66;
      if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_guardian_greaves") )
      {
        iItem = v7;
        v8 = 2;
        goto LABEL_85;
      }
LABEL_77:
      v48 = v12->m_pEntity;
      v49 = v48->m_designerName.u.m_pAsString;
      if ( !CEntityIdentity::ClassMatches(v48, "item_travel_boots") )
      {
        if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots_2") )
          goto LABEL_27;
        iszBoots = v49;
        v8 = 6;
        iItem = v7;
        goto LABEL_11;
      }
LABEL_87:
      v52 = v12->m_pEntity;
      v53 = v52->m_designerName.u.m_pAsString;
      if ( CEntityIdentity::ClassMatches(v52, "item_travel_boots_2") )
        goto LABEL_27;
      iszBoots = v53;
      v8 = 7;
      iItem = v7;
LABEL_11:
      if ( ++v7 == 9 )
        goto LABEL_28;
    }
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_tranquil_boots") && v8 <= 1 )
      goto LABEL_80;
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_phase_boots") && v8 <= 2 )
    {
LABEL_20:
      v15 = v12->m_pEntity;
      v16 = v15->m_designerName.u.m_pAsString;
      if ( CEntityIdentity::ClassMatches(v15, "item_arcane_boots") )
      {
LABEL_59:
        v42 = v12->m_pEntity;
        v43 = v42->m_designerName.u.m_pAsString;
        if ( !CEntityIdentity::ClassMatches(v42, "item_power_treads") )
        {
          if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_guardian_greaves") )
          {
            iszBoots = v43;
            if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots") )
            {
              if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots_2") )
                goto LABEL_27;
              iItem = v7;
              v8 = 4;
              goto LABEL_11;
            }
            goto LABEL_87;
          }
          goto LABEL_77;
        }
      }
      else if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_power_treads") )
      {
        iszBoots = v16;
        if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_guardian_greaves") )
        {
          if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots") )
          {
            iItem = v7;
            v8 = 3;
            goto LABEL_25;
          }
          goto LABEL_87;
        }
        goto LABEL_77;
      }
LABEL_66:
      v44 = v12->m_pEntity;
      v45 = v44->m_designerName.u.m_pAsString;
      if ( !CEntityIdentity::ClassMatches(v44, "item_guardian_greaves") )
      {
        if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots") )
        {
          iszBoots = v45;
          if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots_2") )
            goto LABEL_27;
          iItem = v7;
          v8 = 5;
          goto LABEL_11;
        }
        goto LABEL_87;
      }
      goto LABEL_77;
    }
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_arcane_boots") && v8 <= 3 )
      goto LABEL_59;
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_power_treads") && v8 <= 4 )
      goto LABEL_66;
LABEL_75:
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_guardian_greaves") && v8 <= 5 )
      goto LABEL_77;
LABEL_85:
    if ( CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots") && v8 <= 6 )
      goto LABEL_87;
LABEL_25:
    if ( !CEntityIdentity::ClassMatches(v12->m_pEntity, "item_travel_boots_2") || v8 > 7 )
      goto LABEL_11;
LABEL_27:
    iItem = v7++;
    v8 = 8;
    iszBoots = v12->m_pEntity->m_designerName.u.m_pAsString;
  }
  while ( v7 != 9 );
LABEL_28:
  HandleEntity = CEntityHandle::GetHandleEntity(&this->m_entNextDividedWeStand.m_Value);
  if ( HandleEntity == 0 )
    return;
  while ( 2 )
  {
    v18 = CDOTABaseAbility::GetCaster(HandleEntity);
    v19 = v18;
    if ( v18 == 0 || (v18->m_iUnitType & 1) == 0 )
      goto LABEL_49;
    v20 = CDOTA_BaseNPC::GetInventory(v18);
    v21 = CDOTA_UnitInventory::NumItemsInInventory(v20);
    if ( iszBoots == 0 )
    {
      if ( v21 > 0 )
      {
        for ( i = 0; i != 9; ++i )
        {
          v55 = CDOTA_BaseNPC::GetInventory(v19);
          v56 = CDOTA_UnitInventory::GetItemInSlot(v55, i);
          if ( v56 != 0 )
          {
            v57 = CDOTA_BaseNPC::GetInventory(v19);
            CDOTA_UnitInventory::RemoveItem(v57, v56, 1, 0);
            if ( v56 == CDOTA_BaseNPC::GetCurrentActiveAbility(v19) && v56->m_bChanneling )
              CDOTABaseAbility::EndChannel(v56, 1);
          }
        }
      }
      goto LABEL_49;
    }
    if ( v21 <= 0 )
      goto LABEL_42;
    v22 = 0;
    bGiveBoots = 1;
    while ( 2 )
    {
      while ( 2 )
      {
        v24 = CDOTA_BaseNPC::GetInventory(v19);
        v25 = CDOTA_UnitInventory::GetItemInSlot(v24, v22);
        v26 = v25;
        if ( v25 == 0 )
        {
LABEL_37:
          if ( ++v22 == 9 )
            goto LABEL_41;
          continue;
        }
        break;
      }
      v27 = v25->m_pEntity;
      if ( iszBoots != v27->m_designerName.u.m_pAsString && !CEntityIdentity::ClassMatches(v27, iszBoots) )
      {
        v23 = CDOTA_BaseNPC::GetInventory(v19);
        CDOTA_UnitInventory::RemoveItem(v23, v26, 1, 0);
        if ( v26 == CDOTA_BaseNPC::GetCurrentActiveAbility(v19) && v26->m_bChanneling )
        {
          CDOTABaseAbility::EndChannel(v26, 1);
          bGiveBoots = 1;
        }
        else
        {
          bGiveBoots = 1;
        }
        goto LABEL_37;
      }
      ++v22;
      CDOTA_BaseNPC::MoveItem(v19, v26, iItem);
      bGiveBoots = 0;
      if ( v22 != 9 )
        continue;
      break;
    }
LABEL_41:
    if ( bGiveBoots )
    {
LABEL_42:
      CDOTA_BaseNPC::AddItem(v19, iszBoots, 3, -1, 0);
      v28 = CDOTA_BaseNPC::GetInventory(v19);
      v29 = CDOTA_UnitInventory::GetItemInSlot(v28, 0);
      v30 = v29;
      if ( v29 != 0 )
      {
        CDOTA_BaseNPC::MoveItem(v19, v29, iItem);
        v31 = v30->m_pEntity;
        v30->m_bIsClonedItemProxy = 1;
        if ( CEntityIdentity::ClassMatches(v31, "item_power_treads") )
        {
          v32 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
          v33 = CDOTA_BaseNPC::GetInventory(v32);
          v34 = CDOTA_UnitInventory::GetItemInSlot(v33, iItem);
          if ( v34 != 0 )
          {
            v35 = v30->m_pEntity;
            v36 = "";
            if ( v35->m_designerName.u.m_Id != 0 )
              v36 = v35->m_designerName.u.m_pAsString;
            if ( CEntityIdentity::ClassMatches(v34->m_pEntity, v36) )
              (*(v30->_vptr_IHandleEntity + 343))(v30, v34);
          }
        }
      }
    }
LABEL_49:
    if ( HIDWORD(HandleEntity[115]._vptr_IHandleEntity) == -1 )
    {
      v37 = 0x7FFF;
      v38 = 0x7FFF;
    }
    else
    {
      v37 = WORD2(HandleEntity[115]._vptr_IHandleEntity) & 0x7FFF;
      v38 = v37;
    }
    v39 = (HIDWORD(HandleEntity[115]._vptr_IHandleEntity) >> 15 << 15) | v37 & 0x7FFF;
    if ( (v39 + 2) > 1 )
    {
      v40 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v38 >> 9];
      if ( v40 != 0 )
      {
        v41 = &v40[v38 & 0x1FF];
        if ( v41 != 0 && v39 == v41->m_EHandle.m_Index )
        {
          HandleEntity = v41->m_pInstance;
          if ( v41->m_pInstance != 0 )
            continue;
        }
      }
    }
    break;
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::ChangeTeam  (line 959, @0x0000000002c306f0, libserver.so)  // inlines: CEntityHandle, ChangeTeam, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, ToDOTABaseNPCHero, operator=<int>
// calls: CDOTABaseAbility::GetCaster
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::ChangeTeam(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        int iTeamNum)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  unsigned __int16 v9; // dx
  int v10; // edi
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *i; // rdx
  CDOTABaseAbility *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v16; // dx
  int v17; // esi
  CEntityIdentity *v18; // rdx

  if ( iTeamNum != this->m_iTeamNum.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = iTeamNum;
  }
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
  if ( v6 + 2 > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && this == v8->m_pInstance )
      {
        if ( this->m_entNextDividedWeStand.m_Value.m_Index == -1 )
        {
          v9 = 0x7FFF;
          v10 = 0x7FFF;
        }
        else
        {
          v9 = this->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
          v10 = v9;
        }
        v11 = (this->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
        if ( v11 + 2 > 1 )
        {
          v12 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
          if ( v12 != 0 )
          {
            for ( i = &v12[v10 & 0x1FF]; i != 0; i = &v18[v17 & 0x1FF] )
            {
              if ( v11 != i->m_EHandle.m_Index )
                break;
              m_pInstance = i->m_pInstance;
              if ( i->m_pInstance == 0 )
                break;
              Caster = CDOTABaseAbility::GetCaster(i->m_pInstance);
              if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
                (*(Caster->_vptr_IHandleEntity + 70))(Caster, iTeamNum);
              if ( HIDWORD(m_pInstance[1].m_pEntity) == -1 )
              {
                v16 = 0x7FFF;
                v17 = 0x7FFF;
              }
              else
              {
                v16 = WORD2(m_pInstance[1].m_pEntity) & 0x7FFF;
                v17 = v16;
              }
              v11 = (HIDWORD(m_pInstance[1].m_pEntity) >> 15 << 15) | v16 & 0x7FFF;
              if ( v11 + 2 <= 1 )
                break;
              v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v17 >> 9];
              if ( v18 == 0 )
                break;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OwnerRespawned  (line 981, @0x0000000002c45f80, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SetRespawnPosition, ToDOTABaseNPCHero, operator=
// calls: CDOTABaseAbility::OwnerRespawned, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::IncrementInterpolationFrame
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OwnerRespawned(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntitySystem *v5; // rbx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  unsigned __int16 v8; // cx
  int v9; // esi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *i; // rdx
  CDOTABaseAbility *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v15; // rbx
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  unsigned __int16 v21; // dx
  int v22; // esi
  CEntityIdentity *v23; // rdx

  CDOTABaseAbility::OwnerRespawned(this);
  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  v5 = g_pEntitySystem;
  if ( v4 + 2 > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v3 & 0x1FF];
      if ( v7 != 0
        && v4 == v7->m_EHandle.m_Index
        && this == v7->m_pInstance
        && CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this) != 0 )
      {
        if ( this->m_entNextDividedWeStand.m_Value.m_Index == -1 )
        {
          v8 = 0x7FFF;
          v9 = 0x7FFF;
        }
        else
        {
          v8 = this->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
          v9 = v8;
        }
        v10 = (this->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
        if ( v10 + 2 > 1 )
        {
          v11 = v5->m_EntityList.m_pIdentityChunks[v9 >> 9];
          if ( v11 != 0 )
          {
            for ( i = &v11[v9 & 0x1FF]; i != 0; i = &v23[v22 & 0x1FF] )
            {
              if ( v10 != i->m_EHandle.m_Index )
                break;
              m_pInstance = i->m_pInstance;
              if ( i->m_pInstance == 0 )
                break;
              Caster = CDOTABaseAbility::GetCaster(i->m_pInstance);
              v15 = Caster;
              if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
              {
                PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(PrimeHero);
                y = AbsOrigin->y;
                z = AbsOrigin->z;
                v15[1].m_lastNetworkChange = AbsOrigin->x;
                vptr_IHandleEntity = v15->_vptr_IHandleEntity;
                *&v15[1].touchStamp = y;
                *&v15[1].m_think.__pfn = z;
                vptr_IHandleEntity[494](v15, 0, 0, 0);
                CBaseEntity::IncrementInterpolationFrame(v15);
              }
              if ( HIDWORD(m_pInstance[1].m_pEntity) == -1 )
              {
                v21 = 0x7FFF;
                v22 = 0x7FFF;
              }
              else
              {
                v21 = WORD2(m_pInstance[1].m_pEntity) & 0x7FFF;
                v22 = v21;
              }
              v10 = (HIDWORD(m_pInstance[1].m_pEntity) >> 15 << 15) | v21 & 0x7FFF;
              if ( v10 + 2 <= 1 )
                break;
              v23 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
              if ( v23 == 0 )
                break;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnHeroCalculateStatBonus  (line 1006, @0x0000000002c46f30, libserver.so)  // inlines: CEntityHandle, CUtlSymbolLarge, ClassMatches, Get, GetBaseAgility, GetBaseIntellect, GetBaseStrength, GetClassName, GetEntryIndex, GetHandleEntity, GetInstance, GetPlayerOwnerID, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetBaseAgility, SetBaseIntellect, SetBaseStrength, ToDOTABaseNPCHero, operator!, operator=<float>
// calls: CEntityHandle::GetHandleEntity, CDOTABaseAbility::GetCaster, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTA_BaseNPC::GetInventory, CDOTA_UnitInventory::GetItemInSlot, CEntityIdentity::ClassMatches
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnHeroCalculateStatBonus(
        CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  int v10; // ebx
  CDOTA_BaseNPC_Hero *v11; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInSlot; // rax
  CDOTA_Item *v14; // r15
  int v15; // r14d
  CDOTA_BaseNPC_Hero *v16; // rax
  CDOTA_UnitInventory *v17; // rax
  CDOTA_Item *v18; // r14
  const CEntityIdentity *m_pEntity; // rdi
  const char *m_pAsString; // rsi
  unsigned __int16 v21; // cx
  int v22; // esi
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  float v26; // [rsp+4h] [rbp-4Ch]
  float v27; // [rsp+4h] [rbp-4Ch]
  float m_Value; // [rsp+4h] [rbp-4Ch]
  CDOTA_Ability_Meepo_DividedWeStand *pCloneDividedWeStand; // [rsp+8h] [rbp-48h]

  if ( this->m_entPrimeDividedWeStand.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_entPrimeDividedWeStand.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_entPrimeDividedWeStand.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index && v6->m_pInstance != 0 && this == v6->m_pInstance )
      {
        pCloneDividedWeStand = CEntityHandle::GetHandleEntity(&this->m_entNextDividedWeStand.m_Value);
        if ( pCloneDividedWeStand != 0 )
        {
          do
          {
            Caster = CDOTABaseAbility::GetCaster(pCloneDividedWeStand);
            v8 = Caster;
            if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
            {
              PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
              if ( PrimeHero->m_flStrength.m_Value != *&v8[1].m_NetworkTransmitComponent.m_nStateFlags )
              {
                m_Value = PrimeHero->m_flStrength.m_Value;
                (*(v8->_vptr_IHandleEntity + 22))(v8, 4632, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                *&v8[1].m_NetworkTransmitComponent.m_nStateFlags = m_Value;
                PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
              }
              if ( PrimeHero->m_flAgility.m_Value != *&v8[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter )
              {
                v27 = PrimeHero->m_flAgility.m_Value;
                (*(v8->_vptr_IHandleEntity + 22))(v8, 4636, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                *&v8[1].m_NetworkTransmitComponent.m_nTransmitStateOwnedCounter = v27;
                PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
              }
              if ( PrimeHero->m_flIntellect.m_Value != *&v8[1].m_NetworkTransmitComponent.m_pOuter )
              {
                v26 = PrimeHero->m_flIntellect.m_Value;
                (*(v8->_vptr_IHandleEntity + 22))(v8, 4640, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                *&v8[1].m_NetworkTransmitComponent.m_pOuter = v26;
              }
              v10 = 0;
              (*(v8->_vptr_IHandleEntity + 490))(v8);
              do
              {
                while ( 1 )
                {
                  v11 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
                  Inventory = CDOTA_BaseNPC::GetInventory(v11);
                  ItemInSlot = CDOTA_UnitInventory::GetItemInSlot(Inventory, v10);
                  v14 = ItemInSlot;
                  if ( ItemInSlot != 0 )
                  {
                    v15 = ItemInSlot->m_iPlayerOwnerID.m_Value;
                    v16 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
                    if ( v15 == (*(v16->_vptr_IHandleEntity + 414))(v16)
                      && CEntityIdentity::ClassMatches(v14->m_pEntity, "item_power_treads") )
                    {
                      v17 = CDOTA_BaseNPC::GetInventory(v8);
                      v18 = CDOTA_UnitInventory::GetItemInSlot(v17, v10);
                      if ( v18 != 0 )
                      {
                        m_pEntity = v18->m_pEntity;
                        m_pAsString = v14->m_pEntity->m_designerName.u.m_pAsString;
                        if ( m_pAsString == m_pEntity->m_designerName.u.m_pAsString )
                          break;
                        if ( m_pAsString == 0 )
                          m_pAsString = "";
                        if ( CEntityIdentity::ClassMatches(m_pEntity, m_pAsString) )
                          break;
                      }
                    }
                  }
                  if ( ++v10 == 9 )
                    goto LABEL_31;
                }
                ++v10;
                (*(v18->_vptr_IHandleEntity + 343))(v18, v14);
              }
              while ( v10 != 9 );
            }
LABEL_31:
            if ( pCloneDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index == -1 )
            {
              v21 = 0x7FFF;
              v22 = 0x7FFF;
            }
            else
            {
              v21 = pCloneDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
              v22 = v21;
            }
            v23 = (pCloneDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
            if ( (v23 + 2) <= 1 )
              break;
            v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
            if ( v24 == 0 )
              break;
            v25 = &v24[v22 & 0x1FF];
            if ( v25 == 0 )
              break;
            if ( v23 != v25->m_EHandle.m_Index )
              break;
            pCloneDividedWeStand = v25->m_pInstance;
          }
          while ( v25->m_pInstance != 0 );
        }
      }
    }
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::OnAbilityUpgrade  (line 1054, @0x0000000002c46890, libserver.so)  // inlines: CEntityHandle, Get, GetAbilityName, GetAbilityPoints, GetEntryIndex, GetHandleEntity, GetInstance, GetLevel, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetAbilityPoints, ToDOTABaseNPCHero, _V_strcmp, operator=<int>
// calls: CDOTABaseAbility::GetCaster, CEntityHandle::GetHandleEntity, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::HasSpecialAbility, CDOTA_BaseNPC::AddSpecialAbility, strcmp, CDOTABaseAbility::UpgradeAbility, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero
// strings: "<NoAbilityName>"
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnAbilityUpgrade(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        CDOTABaseAbility *a2)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r14
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC_Hero *v5; // r12
  int v6; // ebx
  CDOTABaseAbility *AbilityByIndex; // r13
  int v8; // esi
  int i; // ebx
  CDOTABaseAbility *v10; // r15
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v12; // rsi
  const char *m_pszAbilityName; // rax
  DOTAAbilityData_t *v14; // rax
  const char *v15; // rdi
  const char *v16; // rax
  unsigned __int16 v17; // cx
  int v18; // esi
  int v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  int m_Value; // ebx
  int delta_high; // ebx
  CDOTA_Ability_Meepo_DividedWeStand *pDividedWeStand; // [rsp+10h] [rbp-50h]
  int iAbility; // [rsp+1Ch] [rbp-44h]

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v3 = Caster;
  else
    v3 = 0;
  pDividedWeStand = CEntityHandle::GetHandleEntity(&this->m_entPrimeDividedWeStand.m_Value);
  if ( pDividedWeStand != 0 )
  {
    do
    {
      v4 = CDOTABaseAbility::GetCaster(pDividedWeStand);
      v5 = v4;
      if ( v4 != 0 && (v4->m_iUnitType & 1) != 0 && v4 != v3 )
      {
        iAbility = 0;
        while ( iAbility < CDOTA_BaseNPC::GetAbilityCount(v3) )
        {
          v6 = 1;
          AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v3, iAbility);
          if ( AbilityByIndex != 0 )
          {
            do
            {
              while ( !CDOTA_BaseNPC::HasSpecialAbility(v3, v6) )
              {
                if ( ++v6 == 9 )
                  goto LABEL_14;
              }
              v8 = v6++;
              CDOTA_BaseNPC::AddSpecialAbility(v5, v8);
            }
            while ( v6 != 9 );
LABEL_14:
            for ( i = 0; i < CDOTA_BaseNPC::GetAbilityCount(v5); ++i )
            {
              v10 = CDOTA_BaseNPC::GetAbilityByIndex(v5, i);
              if ( v10 != 0 )
              {
                m_pAbilityData = AbilityByIndex->m_pAbilityData;
                v12 = "<NoAbilityName>";
                if ( m_pAbilityData != 0 )
                {
                  m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
                  if ( m_pszAbilityName != 0 )
                    v12 = m_pszAbilityName;
                }
                v14 = v10->m_pAbilityData;
                v15 = "<NoAbilityName>";
                if ( v14 != 0 )
                {
                  v16 = v14->m_pszAbilityName;
                  if ( v16 != 0 )
                    v15 = v16;
                }
                if ( strcmp(v15, v12) == 0 )
                {
                  if ( v10->m_iLevel.m_Value >= AbilityByIndex->m_iLevel.m_Value )
                    break;
                  if ( (*(AbilityByIndex->_vptr_IHandleEntity + 214))(AbilityByIndex) != 1
                    || v5 == CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this) )
                  {
                    m_Value = v10->m_iLevel.m_Value;
                    if ( m_Value >= AbilityByIndex->m_iLevel.m_Value )
                      break;
                    do
                    {
                      ++m_Value;
                      CDOTABaseAbility::UpgradeAbility(v10, 0);
                    }
                    while ( m_Value < AbilityByIndex->m_iLevel.m_Value );
                  }
                  else
                  {
                    (*(v10->_vptr_IHandleEntity + 212))(v10, AbilityByIndex->m_iLevel.m_Value);
                  }
                  delta_high = HIDWORD(v3[1].m_pfnTouch.__delta);
                  if ( delta_high != v5->m_iAbilityPoints.m_Value )
                  {
                    (*(v5->_vptr_IHandleEntity + 22))(v5, 4772, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                    v5->m_iAbilityPoints.m_Value = delta_high;
                    ++iAbility;
                    goto LABEL_27;
                  }
                  break;
                }
              }
            }
          }
          ++iAbility;
LABEL_27:
          ;
        }
      }
      if ( pDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index == -1 )
      {
        v17 = 0x7FFF;
        v18 = 0x7FFF;
      }
      else
      {
        v17 = pDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index & 0x7FFF;
        v18 = v17;
      }
      v19 = (pDividedWeStand->m_entNextDividedWeStand.m_Value.m_Index >> 15 << 15) | v17 & 0x7FFF;
      if ( (v19 + 2) <= 1 )
        break;
      v20 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v18 >> 9];
      if ( v20 == 0 )
        break;
      v21 = &v20[v18 & 0x1FF];
      if ( v21 == 0 )
        break;
      if ( v19 != v21->m_EHandle.m_Index )
        break;
      pDividedWeStand = v21->m_pInstance;
    }
    while ( v21->m_pInstance != 0 );
  }
}


// CDOTA_Ability_Meepo_DividedWeStand::HeroXPChange  (line 1123, @0x0000000002c46210, libserver.so)
// calls: CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTABaseAbility::GetCaster
bool __fastcall CDOTA_Ability_Meepo_DividedWeStand::HeroXPChange(
        CDOTA_Ability_Meepo_DividedWeStand *const this,
        float a2,
        float flXP)
{
  CDOTA_BaseNPC_Hero *PrimeHero; // rbx

  PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
  return PrimeHero != 0
      && PrimeHero != CDOTABaseAbility::GetCaster(this)
      && (*(PrimeHero->_vptr_IHandleEntity + 493))(PrimeHero, 0, 0, 1, a2);
}


// CDOTA_Ability_Meepo_DividedWeStand::OnOwnerDied  (line 1138, @0x0000000002c46280, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SetDamageCustom, SetPassiveKill, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::OnOwnerDied, CDOTABaseAbility::GetCaster, CEntityHandle::GetHandleEntity, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CBaseEntity::GetHealth (17 total)
// strings: "meepo_dying", "modifier_magic_immune", "modifier_invulnerable", "modifier_dazzle_shallow_grave", "modifier_skeleton_king_reincarnation_scepter_active"
void __fastcall CDOTA_Ability_Meepo_DividedWeStand::OnOwnerDied(CDOTA_Ability_Meepo_DividedWeStand *const this)
{
  IHandleEntity *HandleEntity; // r12
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  CBaseEntity *v4; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rbx
  float v7; // xmm1_4
  unsigned __int16 v8; // dx
  int v9; // esi
  int v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  IHandleEntity *m_pInstance; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r12
  CDOTA_Buff *ModifierByName; // rax
  unsigned __int16 v17; // dx
  int v18; // esi
  int v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  int Health; // eax
  CTakeDamageInfo newinfo; // [rsp+10h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  CDOTABaseAbility::OnOwnerDied(this);
  if ( !CDOTABaseAbility::GetCaster(this)->m_bWasKilledPassively )
  {
    HandleEntity = CEntityHandle::GetHandleEntity(&this->m_entPrimeDividedWeStand.m_Value);
    PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(this);
    v4 = PrimeHero;
    if ( PrimeHero != 0 && !PrimeHero->m_bIsIllusion.m_Value && HandleEntity != 0 )
    {
      do
      {
        Caster = CDOTABaseAbility::GetCaster(HandleEntity);
        v6 = Caster;
        if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
        {
          KeyValues::KeyValues(&kv, "meepo_dying");
          KeyValues::SetFloat(&kv, "duration", v7);
          CDOTA_BaseNPC::AddNewModifier(v6, v6, this, "modifier_magic_immune", &kv, 0);
          CDOTA_BaseNPC::AddNewModifier(v6, v6, this, "modifier_invulnerable", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
        if ( HIDWORD(HandleEntity[115]._vptr_IHandleEntity) == -1 )
        {
          v8 = 0x7FFF;
          v9 = 0x7FFF;
        }
        else
        {
          v8 = WORD2(HandleEntity[115]._vptr_IHandleEntity) & 0x7FFF;
          v9 = v8;
        }
        v10 = (HIDWORD(HandleEntity[115]._vptr_IHandleEntity) >> 15 << 15) | v8 & 0x7FFF;
        LODWORD(newinfo._vptr_CTakeDamageInfo) = v10;
        if ( (v10 + 2) <= 1 )
          break;
        v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
        if ( v11 == 0 )
          break;
        v12 = &v11[v9 & 0x1FF];
        if ( v12 == 0 )
          break;
        if ( v10 != v12->m_EHandle.m_Index )
          break;
        HandleEntity = v12->m_pInstance;
      }
      while ( v12->m_pInstance != 0 );
      m_pInstance = CEntityHandle::GetHandleEntity(&this->m_entPrimeDividedWeStand.m_Value);
      if ( m_pInstance != 0 )
      {
        do
        {
          v14 = CDOTABaseAbility::GetCaster(m_pInstance);
          v15 = v14;
          if ( v14 != 0
            && (v14->m_iUnitType & 1) != 0
            && v14 != CDOTABaseAbility::GetCaster(this)
            && (*(v15->_vptr_IHandleEntity + 408))(v15) != 0 )
          {
            CDOTA_BaseNPC::RemoveModifierByName(v15, "modifier_dazzle_shallow_grave");
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                               v15,
                               "modifier_skeleton_king_reincarnation_scepter_active",
                               0);
            if ( ModifierByName != 0 )
            {
              BYTE4(ModifierByName[1]._vptr_CDOTA_Buff) = 1;
              CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
            }
            else
            {
              Health = CBaseEntity::GetHealth(v15);
              CTakeDamageInfo::CTakeDamageInfo(&newinfo, this, v4, Health, 0, 0);
              newinfo.m_iDamageCustom = 2;
              CBaseEntity::TakeDamage(v15, &newinfo);
              CTakeDamageInfo::~CTakeDamageInfo(&newinfo);
            }
          }
          if ( HIDWORD(m_pInstance[115]._vptr_IHandleEntity) == -1 )
          {
            v17 = 0x7FFF;
            v18 = 0x7FFF;
          }
          else
          {
            v17 = WORD2(m_pInstance[115]._vptr_IHandleEntity) & 0x7FFF;
            v18 = v17;
          }
          v19 = (HIDWORD(m_pInstance[115]._vptr_IHandleEntity) >> 15 << 15) | v17 & 0x7FFF;
          LODWORD(newinfo._vptr_CTakeDamageInfo) = v19;
          if ( (v19 + 2) <= 1 )
            break;
          v20 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v18 >> 9];
          if ( v20 == 0 )
            break;
          v21 = &v20[v18 & 0x1FF];
          if ( v21 == 0 )
            break;
          if ( v19 != v21->m_EHandle.m_Index )
            break;
          m_pInstance = v21->m_pInstance;
        }
        while ( v21->m_pInstance != 0 );
      }
    }
  }
}


// CDOTA_Unit_Hero_Meepo::GetSlot  (line 1203, @0x0000000002c47fd0, libserver.so)  // inlines: GetSlot
// calls: CDOTA_BaseNPC::FindAbilityByName
// callers: CDOTA_Unit_Hero_Meepo::IsInventoryEnabled, CDOTA_Ability_Meepo_Poof::OnSpellStart
// strings: "meepo_divided_we_stand"
int __fastcall CDOTA_Unit_Hero_Meepo::GetSlot(CDOTA_Unit_Hero_Meepo *const this)
{
  CDOTABaseAbility *AbilityByName; // rax
  int result; // eax

  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "meepo_divided_we_stand", 0);
  if ( AbilityByName == 0 )
    return this->m_nWhichMeepo.m_Value;
  result = AbilityByName[1]._vptr_IHandleEntity;
  if ( result == 0 )
    return this->m_nWhichMeepo.m_Value;
  return result;
}


// CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria  (line 1219, @0x0000000002c247e0, libserver.so)  // inlines: CUtlSymbol, GetSlot
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, __cxa_guard_acquire, CDOTA_BaseNPC::FindAbilityByName, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "meepo_divided_we_stand", "meepo_count", "meepo_slot"
// globals: `guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos, `guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo, CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos, CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo
void __fastcall CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Meepo *const this,
        CResponseCriteriaSet *const set)
{
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  float vptr_IHandleEntity_high; // xmm0_4
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+0h] [rbp-30h] BYREF

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  if ( `guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("meepo_count");
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos);
  }
  if ( `guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("meepo_slot");
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo);
  }
  m_Value = this->m_nWhichMeepo.m_Value;
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "meepo_divided_we_stand", 0);
  vptr_IHandleEntity_high = 0.0;
  if ( AbilityByName != 0 )
  {
    m_Value = AbilityByName[1]._vptr_IHandleEntity;
    vptr_IHandleEntity_high = SHIDWORD(AbilityByName[1]._vptr_IHandleEntity);
  }
  criteria.m_Id = CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symNumMeepos.m_Id;
  CResponseCriteriaSet::AppendCriteria(set, &criteria, vptr_IHandleEntity_high, 1.0);
  criteria.m_Id = CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria(CResponseCriteriaSet &)::symWhichMeepo.m_Id;
  CResponseCriteriaSet::AppendCriteria(set, &criteria, m_Value, 1.0);
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::~CDOTA_Modifier_Meepo_Divided_We_Stand  (line 1242, @0x0000000002c91c20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::~CDOTA_Modifier_Meepo_Divided_We_Stand(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DBEB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::~CDOTA_Modifier_Meepo_Divided_We_Stand  (line 1242, @0x0000000002c91c40, libserver.so)  // inlines: ~CDOTA_Modifier_Meepo_Divided_We_Stand
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::~CDOTA_Modifier_Meepo_Divided_We_Stand(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this)
{
  this->_vptr_CDOTA_Buff = &off_45DBEB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::IsHidden  (line 1249, @0x0000000002c8a9a0, libserver.so)
bool __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::IsHidden(CDOTA_Modifier_Meepo_Divided_We_Stand *const this)
{
  return 1;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::OnCreated  (line 1266, @0x0000000002c594e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::OnCreated(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->respawn = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "respawn", -1, 0);
  else
    this->respawn = 0.0;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::OnRefresh  (line 1273, @0x0000000002c59540, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::OnRefresh(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->respawn = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "respawn", -1, 0);
  else
    this->respawn = 0.0;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::DeclareFunctions  (line 1280, @0x0000000002c1d3a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierPercentageRespawnTime(CModifierParams const&), CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::DeclareFunctions(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this)
{
  this->m_Functions[75].__pfn = CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierPercentageRespawnTime;
  this->m_Functions[75].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Intellect;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierPercentageRespawnTime  (line 1290, @0x0000000002c1d410, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierPercentageRespawnTime(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->respawn) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Intellect  (line 1296, @0x0000000002c46650, libserver.so)  // inlines: GetBaseIntellect
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero
// strings: "meepo_divided_we_stand"
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Meepo_DividedWeStand *AbilityByName; // rax
  CDOTA_Ability_Meepo_DividedWeStand *v6; // r12
  CDOTA_BaseNPC_Hero *PrimeHero; // r13
  CDOTA_BaseNPC_Hero *v8; // rax
  double v9; // xmm0_8
  float m_Value; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) == 0
    || (Caster = CDOTA_Buff::GetCaster(this),
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "meepo_divided_we_stand", 0),
        v6 = AbilityByName,
        AbilityByName == 0)
    || (PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(AbilityByName)) == 0 )
  {
    *&result.m_eType = 1;
LABEL_3:
    result.m_szVal = 0;
    return result;
  }
  result.m_szVal = CDOTA_Buff::GetCaster(this);
  *&result.m_eType = 1;
  if ( PrimeHero == result.m_szVal )
    goto LABEL_3;
  v8 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(v6);
  m_Value = v8->m_flIntellect.m_Value;
  v9 = (*(v8->_vptr_IHandleEntity + 498))(v8);
  result.m_szVal = 0;
  *&v9 = *&v9 - m_Value;
  *&result.m_eType = (*&v9 << 32) | 1LL;
  return result;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Agility  (line 1316, @0x0000000002c46710, libserver.so)  // inlines: GetBaseAgility
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero
// strings: "meepo_divided_we_stand"
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Meepo_DividedWeStand *AbilityByName; // rax
  CDOTA_Ability_Meepo_DividedWeStand *v6; // r12
  CDOTA_BaseNPC_Hero *PrimeHero; // r13
  CDOTA_BaseNPC_Hero *v8; // rax
  double v9; // xmm0_8
  float m_Value; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) == 0
    || (Caster = CDOTA_Buff::GetCaster(this),
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "meepo_divided_we_stand", 0),
        v6 = AbilityByName,
        AbilityByName == 0)
    || (PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(AbilityByName)) == 0 )
  {
    *&result.m_eType = 1;
LABEL_3:
    result.m_szVal = 0;
    return result;
  }
  result.m_szVal = CDOTA_Buff::GetCaster(this);
  *&result.m_eType = 1;
  if ( PrimeHero == result.m_szVal )
    goto LABEL_3;
  v8 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(v6);
  m_Value = v8->m_flAgility.m_Value;
  v9 = (*(v8->_vptr_IHandleEntity + 497))(v8);
  result.m_szVal = 0;
  *&v9 = *&v9 - m_Value;
  *&result.m_eType = (*&v9 << 32) | 1LL;
  return result;
}


// CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Strength  (line 1336, @0x0000000002c467d0, libserver.so)  // inlines: GetBaseStrength
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero
// strings: "meepo_divided_we_stand"
ModifierVariant_t __fastcall CDOTA_Modifier_Meepo_Divided_We_Stand::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Meepo_Divided_We_Stand *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Meepo_DividedWeStand *AbilityByName; // rax
  CDOTA_Ability_Meepo_DividedWeStand *v6; // r12
  CDOTA_BaseNPC_Hero *PrimeHero; // r13
  CDOTA_BaseNPC_Hero *v8; // rax
  double v9; // xmm0_8
  float m_Value; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_iUnitType & 1) == 0
    || (Caster = CDOTA_Buff::GetCaster(this),
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "meepo_divided_we_stand", 0),
        v6 = AbilityByName,
        AbilityByName == 0)
    || (PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(AbilityByName)) == 0 )
  {
    *&result.m_eType = 1;
LABEL_3:
    result.m_szVal = 0;
    return result;
  }
  result.m_szVal = CDOTA_Buff::GetCaster(this);
  *&result.m_eType = 1;
  if ( PrimeHero == result.m_szVal )
    goto LABEL_3;
  v8 = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(v6);
  m_Value = v8->m_flStrength.m_Value;
  v9 = (*(v8->_vptr_IHandleEntity + 496))(v8);
  result.m_szVal = 0;
  *&v9 = *&v9 - m_Value;
  *&result.m_eType = (*&v9 << 32) | 1LL;
  return result;
}


// CDOTA_Ability_Meepo_Poof::~CDOTA_Ability_Meepo_Poof  (line 1358, @0x0000000002c98ea0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Meepo_Poof::~CDOTA_Ability_Meepo_Poof(CDOTA_Ability_Meepo_Poof *const this)
{
  this->_vptr_IHandleEntity = &off_45DC210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Meepo_Poof::~CDOTA_Ability_Meepo_Poof  (line 1358, @0x0000000002c98ec0, libserver.so)  // inlines: ~CDOTA_Ability_Meepo_Poof
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Meepo_Poof::~CDOTA_Ability_Meepo_Poof(CDOTA_Ability_Meepo_Poof *const this)
{
  this->_vptr_IHandleEntity = &off_45DC210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Meepo_Poof::Schema_DynamicBinding  (line 1360, @0x0000000002c8a9b0, libserver.so)
// globals: CDOTA_Ability_Meepo_Poof::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Poof::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Poof *const this)
{
  return CDOTA_Ability_Meepo_Poof::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1360, @0x0000000002c8a9c0, libserver.so)
// globals: CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::DestructInstance  (line 1360, @0x0000000002c8a9d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Meepo_Poof>
void __fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::FreeInstance  (line 1360, @0x0000000002c8a9f0, libserver.so)
void __fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::CanAllocate  (line 1360, @0x0000000002c8aa10, libserver.so)
bool __fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1360, @0x0000000002c8aa20, libserver.so)
// globals: CDOTA_Ability_Meepo_Poof::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Meepo_Poof::s_pSchemaBinding;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::AllocateInstance  (line 1360, @0x0000000002c904e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::ConstructInstance  (line 1360, @0x0000000002c950d0, libserver.so)  // inlines: CDOTA_Ability_Meepo_Poof, Construct<CDOTA_Ability_Meepo_Poof>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = 0;
    *p = &off_45DC210;
    *(p + 230) = -1;
  }
  return p;
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1360, @0x0000000002ca2b10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1360, @0x0000000002ca2b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Meepo_Poof::GetEntityClassInternal  (line 1360, @0x0000000002cbb370, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "meepo_poof", "CDOTA_Ability_Meepo_Poof"
// globals: `guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass, CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass, __dso_handle, CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo, CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo
CEntityClass *__cdecl CDOTA_Ability_Meepo_Poof::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass);
    CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass._vptr_CEntityClass = off_45DC190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass);
    __cxa_atexit(
      CDOTA_Ability_Meepo_Poof::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Meepo_PoofClass != 0 )
    return &CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass;
  if ( `guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo,
      "CDOTA_Ability_Meepo_Poof",
      "meepo_poof",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo);
  }
  CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass.m_pClassInfo = &CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo;
  CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass.m_pBaseClassInfo = CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Meepo_PoofClass = &CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass;
  CDOTA_Ability_Meepo_Poof::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Meepo_PoofClassInfo.m_pClass = &CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass;
  CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Meepo_PoofClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Meepo_Poof::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Meepo_PoofClass;
}


// CDOTA_Ability_Meepo_Poof::GetAOERadius  (line 1387, @0x0000000002cb78a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Meepo_Poof::GetAOERadius(CDOTA_Ability_Meepo_Poof *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Meepo_Poof::YouForgotToImplementOrDeclareServerClass  (line 1398, @0x0000000002c1d430, libserver.so)
int __fastcall CDOTA_Ability_Meepo_Poof::YouForgotToImplementOrDeclareServerClass(CDOTA_Ability_Meepo_Poof *const this)
{
  return 0;
}


// CDOTA_Ability_Meepo_Poof::GetServerClass  (line 1398, @0x0000000002c358b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Meepo_Poof::GetServerClass(CDOTA_Ability_Meepo_Poof *const this)
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


// CDOTA_Ability_Meepo_Poof::GetCooldown  (line 1417, @0x0000000002c63a90, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_meepo"
float __fastcall CDOTA_Ability_Meepo_Poof::GetCooldown(CDOTA_Ability_Meepo_Poof *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_meepo", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Meepo_Poof::OnSpellStart  (line 1431, @0x0000000002c6ef20, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPCHero, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator=, operator[]
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero, CDOTA_BaseNPC::HasScepter, CDOTA_Unit_Hero_Meepo::GetSlot, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (19 total)
// strings: "meepo_divided_we_stand", "particles/units/heroes/hero_meepo/meepo_poof_end.vpcf", "Hero_Meepo.Poof.End0%d"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Unit_Hero_Meepo
void __fastcall CDOTA_Ability_Meepo_Poof::OnSpellStart(CDOTA_Ability_Meepo_Poof *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r14
  __int64 v7; // rbx
  int i; // xmm0_4
  CHandle<CDOTA_BaseNPC_Hero> *v9; // rcx
  uint32 m_Index; // edx
  __int16 v11; // ax
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CEntityInstance *m_pInstance; // r15
  char v15; // al
  const Vector *v16; // rax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_Unit_Hero_Meepo *v19; // rbx
  CDOTA_Ability_Meepo_DividedWeStand *AbilityByName; // rax
  CDOTA_BaseNPC_Hero *PrimeHero; // rax
  int Slot; // eax
  int v23; // r13d
  int v24; // r14d
  CDOTA_BaseNPC *v25; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  int m_nFXIndex; // r15d
  const Vector *v30; // rbx
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // rax
  CDOTA_BaseNPC *v39; // rbx
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // r14
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // r14
  CDOTA_BaseNPC *v47; // rax
  float flTestDistance; // [rsp+4h] [rbp-18Ch]
  int flTestDistancea; // [rsp+4h] [rbp-18Ch]
  float y; // [rsp+8h] [rbp-188h]
  float x; // [rsp+Ch] [rbp-184h]
  float v52; // [rsp+Ch] [rbp-184h]
  const Vector vPosition; // [rsp+10h] [rbp-180h]
  double v54; // [rsp+30h] [rbp-160h]
  CFmtStrN<256,false> v55; // [rsp+40h] [rbp-150h] BYREF
  unsigned __int64 v56; // [rsp+158h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v56 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = *CBaseEntity::GetAbsOrigin(Caster);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  v5 = CDOTABaseAbility::GetCaster(this);
  if ( v5 != 0 && (v5->m_iUnitType & 1) != 0 )
    v6 = v5;
  else
    v6 = 0;
  v7 = 0;
  for ( i = 1232348144; v7 < g_HeroList.m_hHeroList.m_Size; ++v7 )
  {
    v9 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v7];
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
          if ( v13->m_pInstance != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && v6 != 0
            && HIBYTE(m_pInstance[7].m_CScriptComponent) == v6->m_iTeamNum.m_Value
            && LODWORD(m_pInstance[100].m_pEntity) == LODWORD(v6[1].m_pfnMoveDone.__pfn) )
          {
            flTestDistance = *&i;
            v15 = (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance);
            i = LODWORD(flTestDistance);
            if ( v15 != 0 )
            {
              v16 = CBaseEntity::GetAbsOrigin(m_pInstance);
              i = LODWORD(flTestDistance);
              v17 = fsqrt(((v16->x - x) * (v16->x - x)) + ((v16->y - y) * (v16->y - y)));
              if ( flTestDistance > v17 )
              {
                flTestDistancea = LODWORD(v17);
                vPosition = *CBaseEntity::GetAbsOrigin(m_pInstance);
                i = flTestDistancea;
              }
            }
          }
        }
      }
    }
  }
  if ( v6 != 0
    && (v18 = __dynamic_cast(v6, &`typeinfo for'CDOTA_BaseNPC_Hero, &`typeinfo for'CDOTA_Unit_Hero_Meepo, 0),
        v19 = v18,
        v18 != 0)
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v18, "meepo_divided_we_stand", 0)) != 0
    && (PrimeHero = CDOTA_Ability_Meepo_DividedWeStand::GetPrimeHero(AbilityByName)) != 0
    && CDOTA_BaseNPC::HasScepter(PrimeHero) )
  {
    Slot = CDOTA_Unit_Hero_Meepo::GetSlot(v19);
    v23 = Slot + 1;
    v24 = Slot;
  }
  else
  {
    v23 = 0;
    v24 = -1;
  }
  v25 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_meepo/meepo_poof_end.vpcf",
                       2,
                       0,
                       0,
                       v25);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  m_nFXIndex = this->m_nFXIndex;
  v30 = v28;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v31, m_nFXIndex, 0, *&v30->x, v30->z);
  LODWORD(v30) = this->m_nFXIndex;
  *&v54 = v24;
  *(&v54 + 1) = v24;
  v52 = v24;
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, v30, 1, v54, v24);
  LODWORD(v30) = this->m_nFXIndex;
  v33 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v33, v30);
  v34 = CDOTABaseAbility::GetCaster(this);
  v35 = CBaseEntity::GetAbsOrigin(v34);
  CDOTA_Ability_Meepo_Poof::DoPoofDamage(this, *&v35->x, v35->z);
  v36 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v36, vPosition, 1);
  v37 = CDOTABaseAbility::GetCaster(this);
  v38 = CBaseEntity::GetAbsOrigin(v37);
  CDOTA_Ability_Meepo_Poof::DoPoofDamage(this, *&v38->x, v38->z);
  v39 = CDOTABaseAbility::GetCaster(this);
  v40 = GetParticleManager();
  LODWORD(v39) = CDOTA_ParticleManager::CreateParticle(
                   v40,
                   "particles/units/heroes/hero_meepo/meepo_poof_end.vpcf",
                   2,
                   0,
                   0,
                   v39);
  v41 = CDOTABaseAbility::GetCaster(this);
  v42 = CBaseEntity::GetAbsOrigin(v41);
  v43 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v43, v39, 0, *&v42->x, v42->z);
  LODWORD(v42) = this->m_nFXIndex;
  *&v54 = v52;
  *(&v54 + 1) = v52;
  v44 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v44, v42, 1, v54, v52);
  v45 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v45, v39);
  v46 = CDOTABaseAbility::GetCaster(this);
  CFmtStrN<256,false>::CFmtStrN(&v55, "Hero_Meepo.Poof.End0%d", v23);
  DOTA_EmitSound(10, v55.m_szBuf, v46);
  v47 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v47, 1603, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Ability_Meepo_Poof::OnAbilityPhaseStart  (line 1503, @0x0000000002c20c40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_meepo/meepo_poof_start.vpcf", "Hero_Meepo.Poof.Channel"
bool __fastcall CDOTA_Ability_Meepo_Poof::OnAbilityPhaseStart(CDOTA_Ability_Meepo_Poof *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r13d
  const Vector *v7; // r12
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  int v11; // r13d
  const Vector *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_meepo/meepo_poof_start.vpcf",
                       2,
                       0,
                       0,
                       Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  m_nFXIndex = this->m_nFXIndex;
  v7 = AbsOrigin;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, m_nFXIndex, 0, *&v7->x, v7->z);
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = this->m_nFXIndex;
  v12 = v10;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v11, 1, *&v12->x, v12->z);
  v14 = CDOTABaseAbility::GetCaster(this);
  this->m_nPoofChannelSound = CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_Meepo.Poof.Channel", 0.0, 0, 0);
  return 1;
}


// CDOTA_Ability_Meepo_Poof::OnAbilityPhaseInterrupted  (line 1517, @0x0000000002c396a0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Ability_Meepo_Poof::OnAbilityPhaseInterrupted(CDOTA_Ability_Meepo_Poof *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nPoofChannelSound);
}


// CDOTA_Ability_Meepo_Poof::DoPoofDamage  (line 1528, @0x0000000002c6ed70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, FindUnitsInRadius, ApplyDamage, DOTA_EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Ability_Meepo_Poof::OnSpellStart
// strings: "Hero_Meepo.Poof.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Meepo_Poof::DoPoofDamage(CDOTA_Ability_Meepo_Poof *const this, double a2, vec_t a3)
{
  int LevelSpecialValue; // eax
  __m128i v5; // xmm3
  float v6; // ebx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  __m128i v13; // xmm2
  float v14; // r15d
  CDOTA_BaseNPC *v15; // rax
  Vector vPositiona; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  *&vPositiona.x = a2;
  vPositiona.z = a3;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  entities.m_Size = 0;
  *v5.m128i_i32 = LevelSpecialValue;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vPositiona, 0, v6, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v8];
        if ( v9->m_Index + 2 > 1 )
        {
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9->m_Index & 0x1FF];
            if ( v11 != 0 && v9->m_Index == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v8 )
          goto LABEL_11;
      }
      *v13.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
      v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
      v15 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v15, m_pInstance, this, v14, 2, 0);
      DOTA_EmitSound(10, "Hero_Meepo.Poof.Damage", m_pInstance);
      ++v8;
    }
    while ( entities.m_Size > v8 );
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Meepo_Poof::GetAbilityDamageToTargetOverInterval  (line 1553, @0x0000000002c25950, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Meepo_Poof::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Meepo_Poof *const this,
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


