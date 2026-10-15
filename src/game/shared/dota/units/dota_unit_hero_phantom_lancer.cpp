// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:39
class CDOTA_Unit_Hero_PhantomLancer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_PhantomLancer(CDOTA_Unit_Hero_PhantomLancer &);
	CDOTA_Unit_Hero_PhantomLancer(CDOTA_Unit_Hero_PhantomLancer &);
	CDOTA_Unit_Hero_PhantomLancer();
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
	virtual void OnDying();
	virtual bool ShouldDoFlyHeightVisual();
	virtual bool HasFlyingVision();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void HandleAnimEvent(animevent_t *);
	int CountIllusions(CDOTA_BaseNPC_Hero *);
	virtual ~CDOTA_Unit_Hero_PhantomLancer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[469] OnDying
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[445] HasFlyingVision
	// vtable[159] ModifyOrAppendCriteria
	// vtable[229] HandleAnimEvent
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:63
class C_CDOTA_Unit_Hero_PhantomLancer_MapInstall {
	C_CDOTA_Unit_Hero_PhantomLancer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:195
class CDOTA_Ability_PhantomLancer_SpiritLance : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomLancer_SpiritLance(CDOTA_Ability_PhantomLancer_SpiritLance &);
	CDOTA_Ability_PhantomLancer_SpiritLance(CDOTA_Ability_PhantomLancer_SpiritLance &);
	CDOTA_Ability_PhantomLancer_SpiritLance();
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
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	void CastSpiritLance(CDOTA_BaseNPC *, CDOTA_BaseNPC *, int, bool);
	virtual ~CDOTA_Ability_PhantomLancer_SpiritLance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:224
class C_CDOTA_Ability_PhantomLancer_SpiritLance_MapInstall {
	C_CDOTA_Ability_PhantomLancer_SpiritLance_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:449
class CDOTA_Modifier_PhantomLancer_SpiritLance : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	CDOTA_Modifier_PhantomLancer_SpiritLance();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_PhantomLancer_SpiritLance();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:506
class CDOTA_Ability_PhantomLancer_Doppelwalk : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomLancer_Doppelwalk(CDOTA_Ability_PhantomLancer_Doppelwalk &);
	CDOTA_Ability_PhantomLancer_Doppelwalk(CDOTA_Ability_PhantomLancer_Doppelwalk &);
	CDOTA_Ability_PhantomLancer_Doppelwalk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_PhantomLancer_Doppelwalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:525
class C_CDOTA_Ability_PhantomLancer_Doppelwalk_MapInstall {
	C_CDOTA_Ability_PhantomLancer_Doppelwalk_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:696
class CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:812
class CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion : public CDOTA_Buff {
public:

private:

	float flDamageTaken;  // +0xba8
	CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:869
class CDOTA_Ability_PhantomLancer_Juxtapose : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomLancer_Juxtapose(CDOTA_Ability_PhantomLancer_Juxtapose &);
	CDOTA_Ability_PhantomLancer_Juxtapose(CDOTA_Ability_PhantomLancer_Juxtapose &);
	CDOTA_Ability_PhantomLancer_Juxtapose();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_PhantomLancer_Juxtapose();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:883
class CDOTA_Modifier_PhantomLancer_Juxtapose : public CDOTA_Buff {
public:

private:

	int proc_chance_pct;  // +0xba8
	int illusion_proc_chance_pct;  // +0xbac
	int max_illusions;  // +0xbb0
	float illusion_duration;  // +0xbb4
	int illusion_damage_out_pct;  // +0xbb8
	int illusion_damage_in_pct;  // +0xbbc
	CDOTA_Modifier_PhantomLancer_Juxtapose();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	int GetIllusionCount();
	virtual ~CDOTA_Modifier_PhantomLancer_Juxtapose();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:1061
class CDOTA_Ability_PhantomLancer_PhantomEdge : public CDOTABaseAbility {
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
	CDOTA_Ability_PhantomLancer_PhantomEdge(CDOTA_Ability_PhantomLancer_PhantomEdge &);
	CDOTA_Ability_PhantomLancer_PhantomEdge(CDOTA_Ability_PhantomLancer_PhantomEdge &);
	CDOTA_Ability_PhantomLancer_PhantomEdge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_PhantomLancer_PhantomEdge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:1075
class CDOTA_Modifier_PhantomLancer_PhantomEdge : public CDOTA_Buff {
public:

private:

	int min_distance;  // +0xba8
	int max_distance;  // +0xbac
	EHANDLE m_hTarget;  // +0xbb0
	CDOTA_Modifier_PhantomLancer_PhantomEdge();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	virtual ~CDOTA_Modifier_PhantomLancer_PhantomEdge();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:1215
class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public CDOTA_Buff {
public:

	int bonus_speed;  // +0xba8
	float agility_duration;  // +0xbac
	EHANDLE m_hTarget;  // +0xbb0
	CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[89] GetModifierMoveSpeed_Max
	// vtable[90] GetModifierAttackRangeBonus
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:1392
class CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility : public CDOTA_Buff {
public:

private:

	int bonus_agility;  // +0xba8
	CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility();
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phantom_lancer.cpp:1428
class CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion : public CDOTA_Buff {
public:

private:

	bool m_bstrongIllusion;  // +0xba8
	CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual const char * GetTexture();
	virtual int StatusEffectPriority();
	virtual bool ShouldSendToTeam(int);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion();

	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[32] GetTexture
	// vtable[71] StatusEffectPriority
	// vtable[9] ShouldSendToTeam
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_PhantomLancer::~CDOTA_Unit_Hero_PhantomLancer  (line 39, @0x0000000002a18c50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_PhantomLancer::~CDOTA_Unit_Hero_PhantomLancer(
        CDOTA_Unit_Hero_PhantomLancer *const this)
{
  this->_vptr_IHandleEntity = &off_436EF50;
  this->_vptr_INextBotEventResponder = &off_436FF30;
  this->_vptr_CObstructionObject = &off_4370260;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_PhantomLancer::~CDOTA_Unit_Hero_PhantomLancer  (line 39, @0x0000000002a18c90, libserver.so)  // inlines: ~CDOTA_Unit_Hero_PhantomLancer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_PhantomLancer::~CDOTA_Unit_Hero_PhantomLancer(
        CDOTA_Unit_Hero_PhantomLancer *const this)
{
  this->_vptr_IHandleEntity = &off_436EF50;
  this->_vptr_INextBotEventResponder = &off_436FF30;
  this->_vptr_CObstructionObject = &off_4370260;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_PhantomLancer::Schema_DynamicBinding  (line 41, @0x0000000002a0b290, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomLancer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_PhantomLancer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_PhantomLancer *const this)
{
  return CDOTA_Unit_Hero_PhantomLancer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002a0b2c0, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002a0b2d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_PhantomLancer>
void __fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002a0b2f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002a0b310, libserver.so)
bool __fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002a0b320, libserver.so)
// globals: CDOTA_Unit_Hero_PhantomLancer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_PhantomLancer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002a101c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002a136d0, libserver.so)  // inlines: CDOTA_Unit_Hero_PhantomLancer, Construct<CDOTA_Unit_Hero_PhantomLancer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_436EF50;
    *(p + 236) = &off_436FF30;
    *(p + 257) = &off_4370260;
  }
  return p;
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002a20650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002a20bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal  (line 41, @0x0000000002a3c620, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_phantom_lancer", "CDOTA_Unit_Hero_PhantomLancer"
// globals: `guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass, CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass, __dso_handle, CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo, CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass);
    CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass._vptr_CEntityClass = off_436EED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_PhantomLancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PhantomLancerClass != 0 )
    return &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo,
      "CDOTA_Unit_Hero_PhantomLancer",
      "npc_dota_hero_phantom_lancer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo);
  }
  CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass.m_pClassInfo = &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo;
  CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PhantomLancerClass = &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass;
  CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClassInfo.m_pClass = &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass;
  CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PhantomLancerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_PhantomLancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhantomLancerClass;
}


// CDOTA_Unit_Hero_PhantomLancer::ShouldDoFlyHeightVisual  (line 50, @0x0000000002a0b330, libserver.so)
bool __fastcall CDOTA_Unit_Hero_PhantomLancer::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_PhantomLancer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_PhantomLancer::HasFlyingVision  (line 51, @0x0000000002a0b340, libserver.so)
bool __fastcall CDOTA_Unit_Hero_PhantomLancer::HasFlyingVision(CDOTA_Unit_Hero_PhantomLancer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_PhantomLancer::YouForgotToImplementOrDeclareServerClass  (line 63, @0x00000000029b5c40, libserver.so)
int __fastcall CDOTA_Unit_Hero_PhantomLancer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_PhantomLancer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_PhantomLancer::GetServerClass  (line 63, @0x00000000029c9830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_PhantomLancer::GetServerClass(CDOTA_Unit_Hero_PhantomLancer *const this)
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


// CDOTA_Unit_Hero_PhantomLancer::Spawn  (line 72, @0x00000000029c1260, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, IsEffectActive, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_BaseNPC_Hero::Spawn, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "particles/units/heroes/hero_phantom_lancer/phantom_lancer_spawn_illusion.vpcf", "attach_hitloc", "particles/units/heroes/hero_phantom_lancer/phantom_lancer_spawn.vpcf"
void __fastcall CDOTA_Unit_Hero_PhantomLancer::Spawn(
        CDOTA_Unit_Hero_PhantomLancer *const this,
        const CEntityKeyValues *pKeyValues)
{
  unsigned int m_Value; // r12d
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int v8; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  int Particle; // r12d
  const Vector *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CReliableBroadcastRecipientFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v20; // [rsp+148h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  m_Value = this->m_fEffects.m_Value;
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  if ( this->m_bIsIllusion.m_Value )
  {
    if ( (m_Value & 0x20) == 0 )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filter);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(this);
      GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
      v6 = GetGlobalTeam(1);
      CRecipientFilter::AddRecipientsByTeam(&filter, v6);
      ParticleManager = GetParticleManager();
      v8 = CDOTA_ParticleManager::CreateParticle(
             ParticleManager,
             "particles/units/heroes/hero_phantom_lancer/phantom_lancer_spawn_illusion.vpcf",
             2,
             this,
             &filter,
             0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v10 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v10, v8, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 1, this, 1, 0, vec3_invalid, 1);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v12, v8);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
  else
  {
    v13 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v13,
                 "particles/units/heroes/hero_phantom_lancer/phantom_lancer_spawn.vpcf",
                 2,
                 this,
                 0,
                 0);
    v15 = CBaseEntity::GetAbsOrigin(this);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 0, this, 5, "attach_hitloc", *v15, 1);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 1, this, 1, 0, vec3_invalid, 1);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
  }
}


// CDOTA_Unit_Hero_PhantomLancer::Precache  (line 102, @0x00000000029bb140, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, EventList_RegisterPrivateEvent
// strings: "AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES"
// globals: AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES
void __fastcall CDOTA_Unit_Hero_PhantomLancer::Precache(
        CDOTA_Unit_Hero_PhantomLancer *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES.m_Data = EventList_RegisterPrivateEvent("AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES", 1).m_Data;
}


// CDOTA_Unit_Hero_PhantomLancer::HandleAnimEvent  (line 126, @0x00000000029bbfa0, libserver.so)
// calls: CDOTA_BaseNPC::HandleAnimEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::AddEffects
// strings: "particles/units/heroes/hero_phantom_lancer/phantom_lancer_death.vpcf", "attach_hitloc"
// globals: AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES
void __fastcall CDOTA_Unit_Hero_PhantomLancer::HandleAnimEvent(
        CDOTA_Unit_Hero_PhantomLancer *const this,
        animevent_t *pEvent)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax

  if ( pEvent->event == AE_DOTA_DIE_PHANTOM_DEATH_PARTICLES.m_Data )
  {
    if ( !this->m_bIsIllusion.m_Value )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_phantom_lancer/phantom_lancer_death.vpcf",
                   2,
                   this,
                   0,
                   0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v6 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
      v7 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v7, Particle, 1, this, 1, 0, vec3_invalid, 1);
      v8 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
    }
    CBaseEntity::AddEffects(this, 32);
  }
  else
  {
    CDOTA_BaseNPC::HandleAnimEvent(this, pEvent);
  }
}


// CDOTA_Unit_Hero_PhantomLancer::OnDying  (line 165, @0x00000000029bc290, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_phantom_lancer/phantom_lancer_dying.vpcf", "attach_hitloc", "Hero_PhantomLancer.Death"
void __fastcall CDOTA_Unit_Hero_PhantomLancer::OnDying(CDOTA_Unit_Hero_PhantomLancer *const this)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax

  if ( !this->m_bIsIllusion.m_Value && !this->m_bCustomKillEffect.m_Value )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_phantom_lancer/phantom_lancer_dying.vpcf",
                 2,
                 this,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v5 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v5, Particle, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
    v6 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 1, this, 1, 0, vec3_invalid, 1);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v7, Particle);
    CDOTA_BaseNPC::UnitEmitSound(this, "Hero_PhantomLancer.Death", 0.0, 0, 0);
  }
}


// CDOTA_Unit_Hero_PhantomLancer::ModifyOrAppendCriteria  (line 181, @0x00000000029d66e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_Unit_Hero_PhantomLancer::CountIllusions, CResponseCriteriaSet::AppendCriteria
// strings: "illusioncount"
void __fastcall CDOTA_Unit_Hero_PhantomLancer::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_PhantomLancer *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_Unit_Hero_PhantomLancer::CountIllusions(this);
  CResponseCriteriaSet::AppendCriteria(set, "illusioncount", 1.0, v4);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::~CDOTA_Ability_PhantomLancer_SpiritLance  (line 195, @0x0000000002a333b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::~CDOTA_Ability_PhantomLancer_SpiritLance(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  this->_vptr_IHandleEntity = &off_4370330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_PhantomLancer_SpiritLance::~CDOTA_Ability_PhantomLancer_SpiritLance  (line 195, @0x0000000002a33420, libserver.so)  // inlines: Purge, ~CDOTA_Ability_PhantomLancer_SpiritLance, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::~CDOTA_Ability_PhantomLancer_SpiritLance(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  this->_vptr_IHandleEntity = &off_4370330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::Schema_DynamicBinding  (line 197, @0x0000000002a0b350, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_SpiritLance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  return CDOTA_Ability_PhantomLancer_SpiritLance::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 197, @0x0000000002a0b360, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::DestructInstance  (line 197, @0x0000000002a0b370, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomLancer_SpiritLance>
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::FreeInstance  (line 197, @0x0000000002a0b390, libserver.so)
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::CanAllocate  (line 197, @0x0000000002a0b3b0, libserver.so)
bool __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 197, @0x0000000002a0b3c0, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_SpiritLance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_SpiritLance::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::AllocateInstance  (line 197, @0x0000000002a10200, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::ConstructInstance  (line 197, @0x0000000002a1dfe0, libserver.so)  // inlines: CDOTA_Ability_PhantomLancer_SpiritLance, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_PhantomLancer_SpiritLance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4370330;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 197, @0x0000000002a1ff90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 197, @0x0000000002a1ffb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal  (line 197, @0x0000000002a39830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "phantom_lancer_spirit_lance", "CDOTA_Ability_PhantomLancer_SpiritLance"
// globals: `guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass, CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass, __dso_handle, CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo, CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass);
    CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass._vptr_CEntityClass = off_43702B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomLancer_SpiritLance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomLancer_SpiritLanceClass != 0 )
    return &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass;
  if ( `guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo,
      "CDOTA_Ability_PhantomLancer_SpiritLance",
      "phantom_lancer_spirit_lance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo);
  }
  CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass.m_pClassInfo = &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo;
  CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass.m_pBaseClassInfo = CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomLancer_SpiritLanceClass = &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass;
  CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClassInfo.m_pClass = &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass;
  CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomLancer_SpiritLanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomLancer_SpiritLance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_SpiritLanceClass;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::YouForgotToImplementOrDeclareServerClass  (line 224, @0x00000000029b5c50, libserver.so)
int __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  return 0;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::GetServerClass  (line 224, @0x00000000029c9d30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_PhantomLancer_SpiritLance::GetServerClass(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
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


// CDOTA_Ability_PhantomLancer_SpiritLance::OnAbilityPhaseStart  (line 233, @0x00000000029e6470, libserver.so)  // inlines: FastSqrt, Get, GetDistanceToEntity, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator[]
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::StartGesture
// strings: "fake_lance_distance"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::OnAbilityPhaseStart(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  CBaseEntity *CursorTarget; // rax
  __int64 v3; // r12
  int v4; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rdi
  const Vector *v13; // rax
  void (__fastcall *v14)(__int64, const Vector *); // r15
  const Vector *v15; // rax
  CBaseEntity *v17; // [rsp+0h] [rbp-40h]
  __int64 v18; // [rsp+8h] [rbp-38h]
  float v19; // [rsp+8h] [rbp-38h]
  const Vector *AbsOrigin; // [rsp+8h] [rbp-38h]
  __int64 v21; // [rsp+8h] [rbp-38h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v17 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v3];
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
              if ( v9->m_pInstance != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v9->m_pInstance) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) != 0
                && (this->m_fEffects.m_Value & 0x20) == 0 )
              {
                v18 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                Caster = CDOTABaseAbility::GetCaster(this);
                if ( v18 == (*(Caster->_vptr_IHandleEntity + 413))(Caster) )
                {
                  v19 = -1.0;
                  v12 = CDOTABaseAbility::GetCaster(this);
                  if ( v12 != 0 )
                  {
                    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
                    v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    v19 = fsqrt(
                            (((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x))
                           + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)))
                          + ((v13->z - AbsOrigin->z) * (v13->z - AbsOrigin->z)));
                  }
                  if ( CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fake_lance_distance", -1, 0) > v19 )
                    break;
                }
              }
            }
          }
        }
        ++v4;
        ++v3;
        if ( v4 >= g_HeroList.m_hHeroList.m_Size )
          return 1;
      }
      if ( !this->m_bStolen.m_Value )
        CDOTA_BaseNPC::StartGesture(m_pInstance, 1510, 0.1, 0.1, 9, 0, 1.0);
      ++v4;
      ++v3;
      v21 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
      v14 = *(*v21 + 744LL);
      v15 = CBaseEntity::GetAbsOrigin(v17);
      v14(v21, v15);
    }
    while ( v4 < g_HeroList.m_hHeroList.m_Size );
  }
  return 1;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance  (line 258, @0x0000000002a00140, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetDistanceToEntity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, Length, LookupEntity, Set, SetBool, ToDOTABaseNPCHero, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator=, operator[], sTrackingProjectileCreateInfo
// calls: CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, KeyValues::KeyValues, KeyValues::SetInt, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues (15 total)
// callers: CDOTA_Ability_PhantomLancer_SpiritLance::OnSpellStart, CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData
// strings: "Hero_PhantomLancer.SpiritLance.Throw", "particles/units/heroes/hero_phantom_lancer/phantomlancer_spiritlance_projectile.vpcf", "is_from_illusion", "fake_lance_distance", "particles/units/heroes/hero_phantom_lancer/phantomlancer_spiritlance_caster.vpcf", "attach_spear_end" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this,
        CDOTA_BaseNPC *pCaster,
        CDOTA_BaseNPC *pTarget,
        int iProjectileSpeed,
        bool bPlayFake)
{
  CEntityIdentity *m_pEntity; // rax
  __int16 v11; // cx
  __int64 m_Size; // rax
  int v13; // edx
  CHandle<CBaseEntity> *v14; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CEntityIdentity *v17; // rdx
  __int16 v18; // si
  CEntityIdentity *v19; // rax
  __int16 v20; // cx
  __int64 v21; // rbx
  CHandle<CDOTA_BaseNPC_Hero> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *m_pInstance; // r12
  __int64 v28; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v30; // rdi
  const Vector *AbsOrigin; // r14
  const Vector *v32; // rax
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CDOTA_BaseNPC *v36; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v39; // r13
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // r13
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // r13
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  float v46; // [rsp+1Ch] [rbp-D4h]
  int v47; // [rsp+1Ch] [rbp-D4h]
  int v48; // [rsp+20h] [rbp-D0h]
  KeyValues kv; // [rsp+30h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v51; // [rsp+B8h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    v48 = -1;
    if ( m_pEntity != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v48 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
    m_Size = this->m_hHitEntities.m_Size;
    v13 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      v47 = this->m_hHitEntities.m_Size;
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v13 = this->m_hHitEntities.m_Size;
      m_Size = v47;
    }
    this->m_hHitEntities.m_Size = v13 + 1;
    v14 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v14 != 0 )
      v14->m_Index = v48;
    CDOTA_BaseNPC::UnitEmitSound(pCaster, "Hero_PhantomLancer.SpiritLance.Throw", 0.0, 0, 0);
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.iSourceAttachment = 1;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.bProvidesVision = 0;
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
    info.pszEffectName = "particles/units/heroes/hero_phantom_lancer/phantomlancer_spiritlance_projectile.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = iProjectileSpeed;
    if ( pCaster != 0 )
    {
      v17 = pCaster->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v18 = v17->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15) | v18 & 0x7FFF;
      }
    }
    v19 = pTarget->m_pEntity;
    if ( v19 != 0 )
    {
      v20 = 0x7FFF;
      if ( v19->m_EHandle.m_Index != -1 )
        v20 = v19->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1)) << 15) | v20 & 0x7FFF;
    }
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    KeyValues::KeyValues(&kv, "spirit_lance");
    KeyValues::SetInt(&kv, "is_from_illusion", 1);
    info.pKVExtraData = &kv;
    if ( bPlayFake && g_HeroList.m_hHeroList.m_Size > 0 )
    {
      v21 = 0;
      do
      {
        while ( 1 )
        {
          v22 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v21];
          m_Index = v22->m_Index;
          if ( v22->m_Index + 2 > 1 )
          {
            v24 = v22->m_Index;
            v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
            if ( v25 != 0 )
            {
              v26 = &v25[v24 & 0x1FF];
              if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
              {
                m_pInstance = v26->m_pInstance;
                if ( v26->m_pInstance != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v26->m_pInstance) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) != 0
                  && (this->m_fEffects.m_Value & 0x20) == 0 )
                {
                  v28 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  Caster = CDOTABaseAbility::GetCaster(this);
                  if ( v28 == (*(Caster->_vptr_IHandleEntity + 413))(Caster) )
                  {
                    v30 = CDOTABaseAbility::GetCaster(this);
                    if ( v30 != 0 )
                    {
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v30);
                      v32 = CBaseEntity::GetAbsOrigin(m_pInstance);
                      v46 = fsqrt(
                              (((v32->x - AbsOrigin->x) * (v32->x - AbsOrigin->x))
                             + ((v32->y - AbsOrigin->y) * (v32->y - AbsOrigin->y)))
                            + ((v32->z - AbsOrigin->z) * (v32->z - AbsOrigin->z)));
                    }
                    else
                    {
                      v46 = -1.0;
                    }
                    if ( CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fake_lance_distance", -1, 0) > v46 )
                      break;
                  }
                }
              }
            }
          }
          if ( ++v21 >= g_HeroList.m_hHeroList.m_Size )
            goto LABEL_41;
        }
        v33 = m_pInstance->m_pEntity;
        if ( v33 != 0 )
        {
          v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
          v35 = 0x7FFF;
          if ( v33->m_EHandle.m_Index != -1 )
            v35 = v33->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hSource.m_Index) = v35 | info.hSource.m_Index & 0x8000;
          info.hSource.m_Index = (v34 << 15) | info.hSource.m_Index & 0x7FFF;
        }
        else
        {
          info.hSource.m_Index = -1;
        }
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
        ++v21;
      }
      while ( v21 < g_HeroList.m_hHeroList.m_Size );
    }
LABEL_41:
    v36 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_phantom_lancer/phantomlancer_spiritlance_caster.vpcf",
                 2,
                 v36,
                 0,
                 0);
    v39 = CDOTABaseAbility::GetCaster(this);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v40, Particle, 0, v39, 1, 0, vec3_invalid, 1);
    v41 = CDOTABaseAbility::GetCaster(this);
    v42 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v42, Particle, 2, v41, 5, "attach_spear_end", vec3_invalid, 1);
    v43 = CDOTABaseAbility::GetCaster(this);
    v44 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v44, Particle, 1, v43, 5, "attach_attack1", vec3_invalid, 1);
    v45 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v45, Particle);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_PhantomLancer_SpiritLance::OnSpellStart  (line 310, @0x0000000002a00780, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance
// strings: "lance_speed"
void __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::OnSpellStart(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *Caster; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hHitEntities; // rdi
  CDOTA_BaseNPC *v6; // r12
  int LevelSpecialValue; // eax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    v3 = CursorTarget;
  else
    v3 = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  p_m_hHitEntities = &this->m_hHitEntities;
  v6 = Caster;
  if ( Caster != 0 && Caster->m_bIsDOTANPC )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hHitEntities);
    if ( v3 != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lance_speed", -1, 0);
      CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance(this, v6, v3, LevelSpecialValue, 1);
    }
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hHitEntities);
  }
}


// CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData  (line 330, @0x0000000002a03070, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CHandle, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, RemoveAll, Reset, Set, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetInt, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance*, FindClearSpaceForUnitAroundEntity (32 total)
// strings: "is_from_illusion", "modifier_phantom_lancer_spirit_lance", "illusion_duration", "illusion_damage_out_pct", "illusion_damage_in_pct", "modifier_spirit_lance_illusion" (11 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::OnProjectileHit_ExtraData(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  int LevelSpecialValue; // r14d
  int v14; // r13d
  float v15; // xmm1_4
  CDOTA_BaseNPC *pCaster; // r14
  CDOTA_BaseNPC *v17; // rax
  int v18; // r13d
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r13
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CEntityIndex v24; // eax
  __int64 m_pMemory_low; // r14
  int m_pMemory; // eax
  int32 *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  __m128i v29; // xmm1
  float v30; // r13d
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  const char *ReplacementSound; // rax
  int v34; // r13d
  CDOTA_BaseNPC *v35; // rax
  int v36; // r13d
  CDOTA_BaseNPC *v37; // r14
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v39; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hHitEntities; // rdi
  CHandle<CBaseEntity> *v41; // r12
  CConcreteEntityList *v42; // r14
  CHandle<CBaseEntity> *v43; // rbx
  const CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v44; // r15
  CEntityIdentity *v45; // rcx
  CEntityIdentity *v46; // rcx
  CDOTA_BaseNPC *v47; // r13
  CEntityIdentity *m_pEntity; // rcx
  int v49; // eax
  __int16 v50; // si
  CDOTA_Ability_PhantomLancer_SpiritLance *thisa; // [rsp+20h] [rbp-140h]
  CDOTA_BaseNPC *v52; // [rsp+28h] [rbp-138h]
  int lance_speed_bounces; // [rsp+34h] [rbp-12Ch]
  int32 flRadius; // [rsp+50h] [rbp-110h]
  float flRadiusa; // [rsp+50h] [rbp-110h]
  CHandle<CBaseEntity> v56; // [rsp+60h] [rbp-100h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusion; // [rsp+70h] [rbp-F0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+90h] [rbp-D0h] BYREF
  int v59; // [rsp+A8h] [rbp-B8h]
  int v60; // [rsp+ACh] [rbp-B4h]
  int v61; // [rsp+B0h] [rbp-B0h]
  CEntityIndex v62; // [rsp+B4h] [rbp-ACh]
  int v63; // [rsp+B8h] [rbp-A8h]
  vec_t x; // [rsp+BCh] [rbp-A4h]
  vec_t v65; // [rsp+C0h] [rbp-A0h]
  vec_t v66; // [rsp+C4h] [rbp-9Ch]
  char v67; // [rsp+C8h] [rbp-98h]
  KeyValues kv; // [rsp+D0h] [rbp-90h] BYREF
  KeyValues kv_illusionOuter; // [rsp+F0h] [rbp-70h] BYREF
  KeyValues kv_illusionInner; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v71; // [rsp+128h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  if ( (pExtraData == 0 || KeyValues::GetInt(pExtraData, "is_from_illusion", 0) == 0) && (*hTarget + 2) > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[*hTarget & 0x1FF];
      if ( v8 != 0 && *hTarget == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_phantom_lancer_spirit_lance");
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_phantom_lancer_spirit_lance", &kv, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_duration", -1, 0);
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_damage_out_pct", -1, 0);
            v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_damage_in_pct", -1, 0);
            KeyValues::KeyValues(&kv_illusionOuter, "modifier_spirit_lance_illusion");
            KeyValues::SetFloat(&kv_illusionOuter, "duration", v15);
            KeyValues::SetInt(&kv_illusionOuter, "outgoing_damage", LevelSpecialValue);
            KeyValues::SetInt(&kv_illusionOuter, "incoming_damage", v14);
            hIllusion.m_Size = 0;
            hIllusion.m_Memory.m_pMemory = 0;
            hIllusion.m_Memory.m_nAllocationCount = 0;
            hIllusion.m_Memory.m_nGrowSize = 0;
            pCaster = CDOTABaseAbility::GetCaster(this);
            v17 = CDOTABaseAbility::GetCaster(this);
            v18 = ((v17->m_flHullRadius + v17->m_flCollisionPadding) + (v17->m_flHullRadius + v17->m_flCollisionPadding));
            v19 = CDOTABaseAbility::GetCaster(this);
            DOTA_CreateIllusions(v19, 1, v18, 0, &kv_illusionOuter, &hIllusion, pCaster, 0, 1);
            if ( hIllusion.m_Size > 0 )
            {
              v20 = CEntityHandle::operator CEntityInstance *(hIllusion.m_Memory.m_pMemory);
              v21 = v20;
              if ( v20 != 0 && v20->m_bIsDOTANPC )
              {
                FindClearSpaceForUnitAroundEntity(m_pInstance, v20);
                LODWORD(hEntities.m_Memory.m_pMemory) = 0;
                *&hEntities.m_Memory.m_nAllocationCount = 0;
                v59 = 0;
                v60 = 0;
                *(&hEntities.m_Size + 1) = 0;
                hEntities.m_Size = -1;
                x = vec3_origin.x;
                y = vec3_origin.y;
                v61 = 0;
                v65 = y;
                z = vec3_origin.z;
                v62.m_Data = 0;
                v66 = z;
                v63 = 0;
                v67 = 0;
                v24.m_Data = CEntityInstance::GetEntityIndex(v21).m_Data;
                m_pMemory_low = SLODWORD(hEntities.m_Memory.m_pMemory);
                flRadius = v24.m_Data;
                m_pMemory = hEntities.m_Memory.m_pMemory;
                if ( LODWORD(hEntities.m_Memory.m_pMemory) == v59 )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&hEntities.m_Memory.m_nAllocationCount, 1);
                  m_pMemory = hEntities.m_Memory.m_pMemory;
                }
                LODWORD(hEntities.m_Memory.m_pMemory) = m_pMemory + 1;
                v27 = (*&hEntities.m_Memory.m_nAllocationCount + 4 * m_pMemory_low);
                if ( v27 != 0 )
                  *v27 = flRadius;
                v61 = 4;
                v62.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
                DOTA_ExecuteOrders(&hEntities, 0, 0, 0);
                CDOTA_BaseNPC::SetPseudoQueuedOrder(v21, &hEntities);
                KeyValues::KeyValues(&kv_illusionInner, "modifier_phantom_lancer_juxtapose_illusion");
                v28 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  v21,
                  v28,
                  0,
                  "modifier_phantom_lancer_juxtapose_illusion",
                  &kv_illusionInner,
                  0);
                KeyValues::~KeyValues(&kv_illusionInner);
                LODWORD(hEntities.m_Memory.m_pMemory) = 0;
                if ( (v60 & 0xC0000000) == 0 )
                {
                  CUtlMemory<CEntityIndex,int>::Purge(&hEntities.m_Memory.m_nAllocationCount);
                  if ( (v60 & 0xC0000000) == 0 )
                    CUtlMemory<CEntityIndex,int>::Purge(&hEntities.m_Memory.m_nAllocationCount);
                }
              }
            }
            *v29.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
            v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
            v31 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v31, m_pInstance, this, v30, 2, 0);
            v32 = CDOTABaseAbility::GetCaster(this);
            ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v32, "Hero_PhantomLancer.SpiritLance.Impact");
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, ReplacementSound, 0.0, 0, 0);
            v34 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_jumps", -1, 0);
            v35 = CDOTABaseAbility::GetCaster(this);
            if ( CDOTA_BaseNPC::HasScepter(v35) && this->m_hHitEntities.m_Size < v34 )
            {
              v36 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
              lance_speed_bounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lance_speed_bounces", -1, 0);
              hEntities.m_Size = 0;
              hEntities.m_Memory.m_pMemory = 0;
              hEntities.m_Memory.m_nAllocationCount = 0;
              hEntities.m_Memory.m_nGrowSize = 0;
              flRadiusa = v36;
              v37 = CDOTABaseAbility::GetCaster(this);
              AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
              v39 = CDOTABaseAbility::GetCaster(this);
              FindUnitsInRadius(v39->m_iTeamNum.m_Value, AbsOrigin, v37, flRadiusa, &hEntities, 2, 19, 384, 1, 0);
              if ( hEntities.m_Size > 0 )
              {
                p_m_hHitEntities = &this->m_hHitEntities;
                v52 = m_pInstance;
                thisa = this;
                v41 = hEntities.m_Memory.m_pMemory;
                v42 = CEntityHandle::gm_pEntityList;
                v43 = &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1];
                v44 = p_m_hHitEntities;
                while ( 1 )
                {
                  if ( v41->m_Index + 2 > 1 )
                  {
                    v45 = v42->m_pIdentityChunks[(LOWORD(v41->m_Index) >> 9) & 0x3F];
                    if ( v45 != 0 )
                    {
                      v46 = &v45[v41->m_Index & 0x1FF];
                      if ( v46 != 0 && v41->m_Index == v46->m_EHandle.m_Index )
                      {
                        v47 = v46->m_pInstance;
                        if ( v46->m_pInstance != 0 && v47->m_bIsDOTANPC )
                        {
                          v56.m_Index = -1;
                          m_pEntity = v47->m_pEntity;
                          if ( m_pEntity != 0 )
                          {
                            v49 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                            v50 = 0x7FFF;
                            if ( m_pEntity->m_EHandle.m_Index != -1 )
                              v50 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                            LOWORD(v56.m_Index) = v50 | v56.m_Index & 0x8000;
                            v56.m_Index = (v49 << 15) | v56.m_Index & 0x7FFF;
                          }
                          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                                 v44,
                                 &v56) < 0 )
                            break;
                        }
                      }
                    }
                  }
                  if ( ++v41 == v43 )
                    goto LABEL_39;
                }
                CDOTA_Ability_PhantomLancer_SpiritLance::CastSpiritLance(thisa, v52, v47, lance_speed_bounces, 0);
              }
LABEL_39:
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
            }
            CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hIllusion);
            if ( (hIllusion.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hIllusion.m_Memory);
              if ( (hIllusion.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hIllusion.m_Memory);
            }
            KeyValues::~KeyValues(&kv_illusionOuter);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_PhantomLancer_SpiritLance::GetAbilityDamageToTargetOverInterval  (line 426, @0x00000000029e66c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "illusion_damage_out_pct"
int __fastcall CDOTA_Ability_PhantomLancer_SpiritLance::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_PhantomLancer_SpiritLance *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  int result; // eax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  float fIntervalb; // [rsp+Ch] [rbp-24h]
  float fIntervalc; // [rsp+Ch] [rbp-24h]

  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return (*(this->_vptr_IHandleEntity + 247))(this, pTarget, fInterval);
  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_damage_out_pct", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    fIntervalb = ((LevelSpecialValue + 100.0) / 100.0) * (CDOTA_BaseNPC::GetAttacksPerSecond(Caster) * fInterval);
    v9 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v9, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::~CDOTA_Modifier_PhantomLancer_SpiritLance  (line 449, @0x0000000002a11240, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::~CDOTA_Modifier_PhantomLancer_SpiritLance(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4370DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::~CDOTA_Modifier_PhantomLancer_SpiritLance  (line 449, @0x0000000002a11260, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_SpiritLance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::~CDOTA_Modifier_PhantomLancer_SpiritLance(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  this->_vptr_CDOTA_Buff = &off_4370DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::IsDebuff  (line 454, @0x0000000002a0b3d0, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::IsDebuff(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::GetStatusEffectName  (line 461, @0x0000000002a0b3e0, libserver.so)
// strings: "particles/status_fx/status_effect_phantoml_slowlance.vpcf"
const char *__fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::GetStatusEffectName(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  return "particles/status_fx/status_effect_phantoml_slowlance.vpcf";
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::StatusEffectPriority  (line 463, @0x0000000002a0b3f0, libserver.so)
int __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::StatusEffectPriority(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  return 14;
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::OnCreated  (line 474, @0x00000000029f71c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::OnCreated(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
  else
    this->movement_speed_pct = 0;
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::DeclareFunctions  (line 488, @0x00000000029b5c60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_SpiritLance::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_PhantomLancer_SpiritLance::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_SpiritLance::GetModifierMoveSpeedBonus_Percentage  (line 495, @0x00000000029b5c80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_SpiritLance::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_PhantomLancer_SpiritLance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::~CDOTA_Ability_PhantomLancer_Doppelwalk  (line 506, @0x0000000002a17b20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::~CDOTA_Ability_PhantomLancer_Doppelwalk(
        CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
{
  this->_vptr_IHandleEntity = &off_4371150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::~CDOTA_Ability_PhantomLancer_Doppelwalk  (line 506, @0x0000000002a17b40, libserver.so)  // inlines: ~CDOTA_Ability_PhantomLancer_Doppelwalk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::~CDOTA_Ability_PhantomLancer_Doppelwalk(
        CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
{
  this->_vptr_IHandleEntity = &off_4371150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::Schema_DynamicBinding  (line 508, @0x0000000002a0b400, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Doppelwalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
{
  return CDOTA_Ability_PhantomLancer_Doppelwalk::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 508, @0x0000000002a0b410, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::DestructInstance  (line 508, @0x0000000002a0b420, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomLancer_Doppelwalk>
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::FreeInstance  (line 508, @0x0000000002a0b440, libserver.so)
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::CanAllocate  (line 508, @0x0000000002a0b460, libserver.so)
bool __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 508, @0x0000000002a0b470, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Doppelwalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_Doppelwalk::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::AllocateInstance  (line 508, @0x0000000002a10240, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::ConstructInstance  (line 508, @0x0000000002a146f0, libserver.so)  // inlines: CDOTA_Ability_PhantomLancer_Doppelwalk, Construct<CDOTA_Ability_PhantomLancer_Doppelwalk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4371150;
  }
  return p;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 508, @0x0000000002a1ffe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 508, @0x0000000002a20000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal  (line 508, @0x0000000002a39980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "phantom_lancer_doppelwalk", "CDOTA_Ability_PhantomLancer_Doppelwalk"
// globals: `guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass, CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass, __dso_handle, CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo, CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass);
    CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass._vptr_CEntityClass = off_43710D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomLancer_Doppelwalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomLancer_DoppelwalkClass != 0 )
    return &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass;
  if ( `guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo,
      "CDOTA_Ability_PhantomLancer_Doppelwalk",
      "phantom_lancer_doppelwalk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo);
  }
  CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass.m_pClassInfo = &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo;
  CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass.m_pBaseClassInfo = CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomLancer_DoppelwalkClass = &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass;
  CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClassInfo.m_pClass = &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass;
  CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomLancer_DoppelwalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomLancer_Doppelwalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_DoppelwalkClass;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::YouForgotToImplementOrDeclareServerClass  (line 525, @0x00000000029b5ca0, libserver.so)
int __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
{
  return 0;
}


// CDOTA_Ability_PhantomLancer_Doppelwalk::GetServerClass  (line 525, @0x00000000029c9430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::GetServerClass(
        CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
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


// CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart  (line 534, @0x0000000002a00840, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, SetBool, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, KeyValues::~KeyValues (30 total)
// strings: "target_aoe", "illusion_duration", "illusion_1_damage_out_pct", "illusion_1_damage_in_pct", "illusion_2_damage_out_pct", "illusion_2_damage_in_pct" (17 total)
// globals: CEntityHandle::gm_pEntityList, CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart(void)::AnglePos
void __fastcall CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart(
        CDOTA_Ability_PhantomLancer_Doppelwalk *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r12d
  int v4; // ebx
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  __int64 v7; // rdx
  CDOTA_BaseNPC *v8; // r15
  CDOTA_BaseNPC *v9; // rax
  __m128i v10; // xmm0
  float v11; // xmm0_4
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm0_4
  int v16; // ebx
  CDOTA_BaseNPC *v17; // rax
  CEntityInstance *v18; // rax
  CDOTA_BaseNPC *v19; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  __int64 m_Size; // r12
  int v24; // eax
  CHandle<CBaseEntity> *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // r12
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm0_4
  int v32; // ebx
  CDOTA_BaseNPC *v33; // rax
  CEntityInstance *v34; // rax
  CDOTA_BaseNPC *v35; // rbx
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  __m128d v43; // xmm0
  float v44; // xmm2_4
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  __int64 v48; // rbx
  CHandle<CBaseEntity> *v49; // rdx
  uint32 m_Index; // eax
  __int16 v51; // cx
  CEntityIdentity *v52; // rdx
  CEntityIdentity *v53; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  __int64 v55; // r13
  CDOTA_BaseNPC *v56; // rax
  CDOTA_ParticleManager *v57; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v59; // rax
  vec_t z; // eax
  int v61; // r13d
  CDOTA_BaseNPC *v62; // r13
  CDOTA_ParticleManager *v63; // rax
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_ParticleManager *v66; // rax
  CDOTA_ParticleManager *v67; // rax
  CDOTA_ParticleManager *v68; // rax
  float v69; // xmm1_4
  float v70; // xmm1_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  CDOTA_BaseNPC *v73; // rax
  CEntityIdentity *v74; // rax
  int v75; // edx
  __int16 v76; // cx
  CEntityIdentity *v77; // rdx
  int v78; // eax
  __int16 v79; // cx
  __int64 v80; // r12
  int v81; // eax
  CHandle<CBaseEntity> *v82; // rax
  CDOTA_BaseNPC *v83; // rax
  CDOTA_BaseNPC *v84; // rax
  float v85; // [rsp+4Ch] [rbp-154h]
  int target_aoe; // [rsp+50h] [rbp-150h]
  int illusion_2_damage_in_pct; // [rsp+58h] [rbp-148h]
  const Vector *illusion_2_damage_in_pcta; // [rsp+58h] [rbp-148h]
  int vFinalPos; // [rsp+60h] [rbp-140h]
  float vFinalPosa; // [rsp+60h] [rbp-140h]
  unsigned int illusion_duration; // [rsp+64h] [rbp-13Ch]
  unsigned int flRadius; // [rsp+68h] [rbp-138h]
  float delay; // [rsp+6Ch] [rbp-134h]
  Vector vStartPos; // [rsp+70h] [rbp-130h] BYREF
  Vector vCastPos; // [rsp+80h] [rbp-120h] BYREF
  Vector vDirection; // [rsp+90h] [rbp-110h] BYREF
  QAngle angles; // [rsp+A0h] [rbp-100h] BYREF
  Vector vForward; // [rsp+B0h] [rbp-F0h] BYREF
  unsigned __int64 v99; // [rsp+C0h] [rbp-E0h]
  float v100; // [rsp+C8h] [rbp-D8h]
  double v101; // [rsp+D0h] [rbp-D0h] BYREF
  float v102; // [rsp+D8h] [rbp-C8h]
  double v103; // [rsp+E0h] [rbp-C0h]
  float v104; // [rsp+E8h] [rbp-B8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+F0h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusion1; // [rsp+110h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusion2; // [rsp+130h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+150h] [rbp-50h] BYREF
  unsigned __int64 v109; // [rsp+168h] [rbp-38h]

  v109 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "search_radius", -1, 0);
  target_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "target_aoe", -1, 0);
  delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_duration", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_1_damage_out_pct", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_1_damage_in_pct", -1, 0);
  vFinalPos = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_2_damage_out_pct", -1, 0);
  illusion_2_damage_in_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_2_damage_in_pct", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v7 = *&AbsOrigin->x;
  hUnits.m_Size = 0;
  *&vStartPos.x = v7;
  *&AbsOrigin = AbsOrigin->z;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  LODWORD(vStartPos.z) = AbsOrigin;
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vStartPos, v8, LevelSpecialValue, &hUnits, 1, 1, 0, 0, 0);
  vCastPos = CDOTABaseAbility::GetCursorPosition(this);
  vDirection.z = 0.0;
  vDirection.y = vCastPos.y - vStartPos.y;
  vDirection.x = vCastPos.x - vStartPos.x;
  *v10.m128i_i32 = VectorNormalize(&vDirection);
  LODWORD(v8) = _mm_cvtsi128_si32(v10);
  v11 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  if ( *&v8 > v11 )
  {
    vCastPos.y = (vDirection.y * v11) + vStartPos.y;
    vCastPos.z = (vDirection.z * v11) + vStartPos.z;
    vCastPos.x = (v11 * vDirection.x) + vStartPos.x;
  }
  hIllusion1.m_Memory.m_nAllocationCount = 0;
  hIllusion1.m_Memory.m_nGrowSize = 0;
  hIllusion1.m_Size = 0;
  hIllusion1.m_Memory.m_pMemory = 0;
  KeyValues::KeyValues(&kv, "modifier_doppelwalk_illusion");
  KeyValues::SetFloat(&kv, "duration", v12);
  KeyValues::SetInt(&kv, "outgoing_damage", v3);
  KeyValues::SetInt(&kv, "incoming_damage", v4);
  KeyValues::SetInt(&kv, "strong_illusion", 0);
  KeyValues::SetInt(&kv, "force_select", 1);
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = v14->m_flHullRadius + v14->m_flCollisionPadding;
  v16 = (v15 + v15);
  v17 = CDOTABaseAbility::GetCaster(this);
  DOTA_CreateIllusions(v17, 1, v16, 0, &kv, &hIllusion1, v13, "illusion1", 1);
  KeyValues::~KeyValues(&kv);
  if ( hIllusion1.m_Size > 0 )
  {
    v18 = CEntityHandle::operator CEntityInstance *(hIllusion1.m_Memory.m_pMemory);
    v19 = v18;
    if ( v18 != 0 && BYTE3(v18[7]._vptr_IHandleEntity) != 0 )
    {
      hIllusion2.m_Size = -1;
      m_pEntity = v18->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v22 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(hIllusion2.m_Size) = v22 | hIllusion2.m_Size & 0x8000;
        hIllusion2.m_Size = (v21 << 15) | hIllusion2.m_Size & 0x7FFF;
      }
      m_Size = hUnits.m_Size;
      v24 = hUnits.m_Size;
      if ( hUnits.m_Size == hUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hUnits.m_Memory, 1);
        v24 = hUnits.m_Size;
      }
      hUnits.m_Size = v24 + 1;
      v25 = &hUnits.m_Memory.m_pMemory[m_Size];
      if ( v25 != 0 )
        v25->m_Index = hIllusion2.m_Size;
      v26 = CDOTABaseAbility::GetCaster(this);
      FindClearSpaceForUnitAroundEntity(v26, v19);
      KeyValues::KeyValues(&kv, "modifier_phantom_lancer_juxtapose_illusion");
      KeyValues::SetInt(&kv, "strong_illusion", 1);
      v27 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v19, v27, 0, "modifier_phantom_lancer_juxtapose_illusion", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  hIllusion2.m_Size = 0;
  hIllusion2.m_Memory.m_pMemory = 0;
  hIllusion2.m_Memory.m_nAllocationCount = 0;
  hIllusion2.m_Memory.m_nGrowSize = 0;
  KeyValues::KeyValues(&kv, "modifier_doppelwalk_illusion");
  KeyValues::SetFloat(&kv, "duration", v28);
  KeyValues::SetInt(&kv, "outgoing_damage", vFinalPos);
  KeyValues::SetInt(&kv, "incoming_damage", illusion_2_damage_in_pct);
  KeyValues::SetInt(&kv, "force_select", 1);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30 = CDOTABaseAbility::GetCaster(this);
  v31 = v30->m_flHullRadius + v30->m_flCollisionPadding;
  v32 = (v31 + v31);
  v33 = CDOTABaseAbility::GetCaster(this);
  DOTA_CreateIllusions(v33, 1, v32, 0, &kv, &hIllusion2, v29, "illusion2", 1);
  KeyValues::~KeyValues(&kv);
  if ( hIllusion2.m_Size > 0 )
  {
    v34 = CEntityHandle::operator CEntityInstance *(hIllusion2.m_Memory.m_pMemory);
    v35 = v34;
    if ( v34 != 0 && BYTE3(v34[7]._vptr_IHandleEntity) != 0 )
    {
      LODWORD(v103) = -1;
      v77 = v34->m_pEntity;
      if ( v77 != 0 )
      {
        v78 = (v77->m_EHandle.m_Index >> 15) - (v77->m_flags & 1);
        v79 = 0x7FFF;
        if ( v77->m_EHandle.m_Index != -1 )
          v79 = v77->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v103) = v79 | LOWORD(v103) & 0x8000;
        LODWORD(v103) = (v78 << 15) | LOWORD(v103) & 0x7FFF;
      }
      v80 = hUnits.m_Size;
      v81 = hUnits.m_Size;
      if ( hUnits.m_Size == hUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hUnits.m_Memory, 1);
        v81 = hUnits.m_Size;
      }
      hUnits.m_Size = v81 + 1;
      v82 = &hUnits.m_Memory.m_pMemory[v80];
      if ( v82 != 0 )
        v82->m_Index = LODWORD(v103);
      v83 = CDOTABaseAbility::GetCaster(this);
      FindClearSpaceForUnitAroundEntity(v83, v35);
      KeyValues::KeyValues(&kv, "modifier_phantom_lancer_juxtapose_illusion");
      v84 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v35, v84, 0, "modifier_phantom_lancer_juxtapose_illusion", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v36 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_PhantomLancer.Doppelganger.Cast", v36);
  v37 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v37->m_iTeamNum.m_Value,
    &vStartPos,
    LevelSpecialValue,
    delay,
    1);
  v38 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v38->m_iTeamNum.m_Value,
    &vCastPos,
    target_aoe,
    delay,
    1);
  v39 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v39) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_phantom_lancer/phantom_lancer_doppleganger_aoe.vpcf",
                   2,
                   0,
                   0,
                   v39);
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, v39, 0, *&vStartPos.x, vStartPos.z);
  *(&v103 + 1) = vCastPos.y + 0.0;
  v104 = vCastPos.z + 128.0;
  *&v103 = vCastPos.x + 0.0;
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, v39, 1, v103, v104);
  *&v101 = target_aoe;
  v43.m128d_f64[0] = target_aoe * 0.5;
  v44 = _mm_movedup_pd(v43).m128d_f64[0];
  v85 = v44;
  *(&v101 + 1) = v44;
  v102 = v44;
  v45 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v45, v39, 2, v101, v102);
  *&v101 = delay;
  *(&v101 + 1) = delay;
  v102 = delay;
  v46 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v46, v39, 3, v101, v102);
  v47 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v47, v39);
  if ( hUnits.m_Size > 0 )
  {
    v48 = 0;
    do
    {
      while ( 1 )
      {
        v49 = &hUnits.m_Memory.m_pMemory[v48];
        m_Index = v49->m_Index;
        if ( v49->m_Index + 2 > 1 )
        {
          v51 = v49->m_Index;
          v52 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v49->m_Index) >> 9) & 0x3F];
          if ( v52 != 0 )
          {
            v53 = &v52[v51 & 0x1FF];
            if ( v53 != 0 && m_Index == v53->m_EHandle.m_Index )
            {
              m_pInstance = v53->m_pInstance;
              if ( v53->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
              {
                v55 = (*(m_pInstance->_vptr_IHandleEntity + 413))(v53->m_pInstance);
                v56 = CDOTABaseAbility::GetCaster(this);
                if ( v55 == (*(v56->_vptr_IHandleEntity + 413))(v56)
                  && (m_pInstance->m_bIsIllusion.m_Value || CDOTABaseAbility::GetCaster(this) == m_pInstance) )
                {
                  break;
                }
              }
            }
          }
        }
        if ( hUnits.m_Size <= ++v48 )
          goto LABEL_35;
      }
      v57 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v57,
                   "particles/units/heroes/hero_phantom_lancer/phantomlancer_illusion_destroy.vpcf",
                   0,
                   m_pInstance,
                   0,
                   0);
      v59 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v59, Particle);
      z = vec3_angle.z;
      angles.x = vec3_angle.x;
      angles.z = z;
      angles.y = (90 * CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart(void)::AnglePos);
      CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart(void)::AnglePos = (CDOTA_Ability_PhantomLancer_Doppelwalk::OnSpellStart(void)::AnglePos
                                                                            + 1)
                                                                           % 4;
      v61 = RandomInt(0, target_aoe);
      AngleVectors(&angles, &vForward, 0, 0);
      *&flRadius = (vForward.x * v61) + vCastPos.x;
      *&illusion_duration = (vForward.y * v61) + vCastPos.y;
      vFinalPosa = (v61 * vForward.z) + vCastPos.z;
      v62 = CDOTABaseAbility::GetCaster(this);
      v63 = GetParticleManager();
      LODWORD(v62) = CDOTA_ParticleManager::CreateParticle(
                       v63,
                       "particles/units/heroes/hero_phantom_lancer/phantom_lancer_doppleganger_illlmove.vpcf",
                       2,
                       0,
                       0,
                       v62);
      illusion_2_damage_in_pcta = CBaseEntity::GetAbsOrigin(m_pInstance);
      v64 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        v64,
        v62,
        0,
        *&illusion_2_damage_in_pcta->x,
        illusion_2_damage_in_pcta->z);
      v65 = GetParticleManager();
      v99 = __PAIR64__(illusion_duration, flRadius);
      v100 = vFinalPosa;
      CDOTA_ParticleManager::SetParticleControl(
        v65,
        v62,
        1,
        COERCE_DOUBLE(__PAIR64__(illusion_duration, flRadius)),
        vFinalPosa);
      v101 = COERCE_DOUBLE(__PAIR64__(LODWORD(v85), target_aoe));
      v102 = v85;
      v66 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v66, v62, 2, v101, v102);
      *&v101 = delay;
      *(&v101 + 1) = delay;
      v102 = delay;
      v67 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v67, v62, 3, v101, v102);
      v68 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v68, v62);
      KeyValues::KeyValues(&kv, "modifier_phantomlancer_dopplewalk_phase");
      KeyValues::SetFloat(&kv, "duration", v69);
      KeyValues::SetFloat(&kv, "x", v70);
      KeyValues::SetFloat(&kv, "y", v71);
      KeyValues::SetFloat(&kv, "z", v72);
      v73 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v73, this, "modifier_phantomlancer_dopplewalk_phase", &kv, 0);
      Purge(m_pInstance, this, 4);
      LODWORD(v101) = -1;
      v74 = m_pInstance->m_pEntity;
      if ( v74 != 0 )
      {
        v75 = (v74->m_EHandle.m_Index >> 15) - (v74->m_flags & 1);
        v76 = 0x7FFF;
        if ( v74->m_EHandle.m_Index != -1 )
          v76 = v74->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v101) = v76 | LOWORD(v101) & 0x8000;
        LODWORD(v101) = (v75 << 15) | LOWORD(v101) & 0x7FFF;
      }
      CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &v101, 0);
      DeAggroUnitsAggroedOn(m_pInstance, 1);
      KeyValues::~KeyValues(&kv);
      ++v48;
    }
    while ( hUnits.m_Size > v48 );
  }
LABEL_35:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hIllusion2);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hIllusion1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase  (line 696, @0x0000000002a111f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4371C10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase  (line 696, @0x0000000002a11210, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::~CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4371C10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::IsHidden  (line 706, @0x0000000002a0b480, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::IsHidden(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::IsPurgable  (line 710, @0x0000000002a0b490, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::IsPurgable(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  return 0;
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::OnCreated  (line 728, @0x00000000029ba7f0, libserver.so)  // inlines: operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, Purge, KeyValues::GetFloat
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::OnCreated(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  vec_t Float; // xmm0_4

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Purge(Caster, Ability, 36);
  this->vTargetPosition = vec3_origin;
  this->vTargetPosition.x = KeyValues::GetFloat(pKV, "x", v7);
  Float = KeyValues::GetFloat(pKV, "y", v8);
  this->vTargetPosition.z = 0.0;
  this->vTargetPosition.y = Float;
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::OnDestroy  (line 745, @0x00000000029fbfc0, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, FindClearSpaceForUnit, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CBaseEntity::DispatchUpdateTransmitState, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "target_aoe", "particles/units/heroes/hero_phantom_lancer/phantomlancer_illusion_destroy.vpcf", "Hero_PhantomLancer.Doppelganger.Appear"
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::OnDestroy(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r12d
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm3_4
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "target_aoe", -1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(Parent, this->vTargetPosition, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v6 = CDOTA_Buff::GetParent(this);
  v13 = *CBaseEntity::GetAbsOrigin(v6);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v5, v13, 225.0, v7);
  v8 = CDOTA_Buff::GetParent(this);
  (*(v8->_vptr_IHandleEntity + 188))(v8, v8->m_fEffects.m_Value & 0xFFFFFFDF);
  v8->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v8);
  v9 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_phantom_lancer/phantomlancer_illusion_destroy.vpcf",
                  0,
                  v9,
                  0,
                  0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, v9);
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_PhantomLancer.Doppelganger.Appear", 0.0, 0, 0);
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::DeclareFunctions  (line 782, @0x00000000029b5cb0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::GetModifierInvisibilityLevel  (line 789, @0x00000000029b5cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::GetModifierInvisibilityLevel(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::CheckState  (line 796, @0x00000000029b5cf0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase::CheckState(
        CDOTA_Modifier_PhantomLancer_Dopplewalk_Phase *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80804124uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7FBEDBLL;
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion  (line 812, @0x0000000002a111a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4371F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion  (line 812, @0x0000000002a111c0, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::~CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_4371F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::IsHidden  (line 817, @0x0000000002a0b4a0, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::IsHidden(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnCreated  (line 830, @0x00000000029b5d20, libserver.so)
void __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnCreated(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this,
        KeyValues *pKV)
{
  this->flDamageTaken = 0.0;
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::DeclareFunctions  (line 837, @0x00000000029b5d30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnTakeDamage  (line 844, @0x00000000029c2cc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion::OnTakeDamage(
        CDOTA_Modifier_PhantomLancer_Doppelwalk_Illusion *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // r14
  float v11; // xmm0_4

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          v10 = Parent;
          if ( Parent == m_pInstance )
          {
            v11 = this->flDamageTaken + params->fDamage;
            this->flDamageTaken = v11;
            if ( v11 > (*(Parent->_vptr_IHandleEntity + 156))(Parent) * 0.5 )
              CDOTA_BaseNPC::ForceKill(v10, 0);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::~CDOTA_Ability_PhantomLancer_Juxtapose  (line 869, @0x0000000002a17b70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::~CDOTA_Ability_PhantomLancer_Juxtapose(
        CDOTA_Ability_PhantomLancer_Juxtapose *const this)
{
  this->_vptr_IHandleEntity = &off_4372290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::~CDOTA_Ability_PhantomLancer_Juxtapose  (line 869, @0x0000000002a17b90, libserver.so)  // inlines: ~CDOTA_Ability_PhantomLancer_Juxtapose
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::~CDOTA_Ability_PhantomLancer_Juxtapose(
        CDOTA_Ability_PhantomLancer_Juxtapose *const this)
{
  this->_vptr_IHandleEntity = &off_4372290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::Schema_DynamicBinding  (line 871, @0x0000000002a0b4b0, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Juxtapose::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_Juxtapose *const this)
{
  return CDOTA_Ability_PhantomLancer_Juxtapose::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 871, @0x0000000002a0b4c0, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::DestructInstance  (line 871, @0x0000000002a0b4d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomLancer_Juxtapose>
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::FreeInstance  (line 871, @0x0000000002a0b4f0, libserver.so)
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::CanAllocate  (line 871, @0x0000000002a0b510, libserver.so)
bool __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 871, @0x0000000002a0b520, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_Juxtapose::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_Juxtapose::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::AllocateInstance  (line 871, @0x0000000002a10280, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::ConstructInstance  (line 871, @0x0000000002a14720, libserver.so)  // inlines: CDOTA_Ability_PhantomLancer_Juxtapose, Construct<CDOTA_Ability_PhantomLancer_Juxtapose>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4372290;
  }
  return p;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 871, @0x0000000002a20030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 871, @0x0000000002a20050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal  (line 871, @0x0000000002a39ad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "phantom_lancer_juxtapose", "CDOTA_Ability_PhantomLancer_Juxtapose"
// globals: `guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass, CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass, __dso_handle, CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo, CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass);
    CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass._vptr_CEntityClass = off_4372210;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomLancer_Juxtapose::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomLancer_JuxtaposeClass != 0 )
    return &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass;
  if ( `guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo,
      "CDOTA_Ability_PhantomLancer_Juxtapose",
      "phantom_lancer_juxtapose",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo);
  }
  CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass.m_pClassInfo = &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo;
  CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass.m_pBaseClassInfo = CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomLancer_JuxtaposeClass = &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass;
  CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClassInfo.m_pClass = &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass;
  CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomLancer_JuxtaposeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomLancer_Juxtapose::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_JuxtaposeClass;
}


// CDOTA_Ability_PhantomLancer_Juxtapose::GetIntrinsicModifierName  (line 874, @0x0000000002a0b530, libserver.so)
// strings: "modifier_phantom_lancer_juxtapose"
const char *__fastcall CDOTA_Ability_PhantomLancer_Juxtapose::GetIntrinsicModifierName(
        CDOTA_Ability_PhantomLancer_Juxtapose *const this)
{
  return "modifier_phantom_lancer_juxtapose";
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::~CDOTA_Modifier_PhantomLancer_Juxtapose  (line 883, @0x0000000002a11150, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::~CDOTA_Modifier_PhantomLancer_Juxtapose(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this)
{
  this->_vptr_CDOTA_Buff = &off_4372D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::~CDOTA_Modifier_PhantomLancer_Juxtapose  (line 883, @0x0000000002a11170, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_Juxtapose
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::~CDOTA_Modifier_PhantomLancer_Juxtapose(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this)
{
  this->_vptr_CDOTA_Buff = &off_4372D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::IsHidden  (line 888, @0x0000000002a0b540, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::IsHidden(CDOTA_Modifier_PhantomLancer_Juxtapose *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::OnCreated  (line 916, @0x00000000029fa770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "illusion_proc_chance_pct", "max_illusions", "illusion_duration", "illusion_damage_out_pct", "illusion_damage_in_pct"
void __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::OnCreated(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this,
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
    this->proc_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "proc_chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->proc_chance_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->illusion_proc_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "illusion_proc_chance_pct",
                                         -1,
                                         0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->illusion_proc_chance_pct = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_illusions = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_illusions", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->max_illusions = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->illusion_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "illusion_duration", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->illusion_damage_out_pct = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->illusion_duration = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->illusion_damage_out_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "illusion_damage_out_pct", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->illusion_damage_in_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "illusion_damage_in_pct", -1, 0);
    return;
  }
LABEL_13:
  this->illusion_damage_in_pct = 0;
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::OnRefresh  (line 928, @0x00000000029fa930, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "illusion_proc_chance_pct", "max_illusions", "illusion_duration", "illusion_damage_out_pct", "illusion_damage_in_pct"
void __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::OnRefresh(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this,
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
    this->proc_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "proc_chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->proc_chance_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->illusion_proc_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "illusion_proc_chance_pct",
                                         -1,
                                         0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->illusion_proc_chance_pct = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->max_illusions = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "max_illusions", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->max_illusions = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->illusion_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "illusion_duration", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->illusion_damage_out_pct = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->illusion_duration = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->illusion_damage_out_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "illusion_damage_out_pct", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->illusion_damage_in_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "illusion_damage_in_pct", -1, 0);
    return;
  }
LABEL_13:
  this->illusion_damage_in_pct = 0;
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::DeclareFunctions  (line 939, @0x00000000029b5d50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked  (line 946, @0x0000000002a02810, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetPaddedCollisionRadius, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, SetPlayerID, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=<int>, ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Modifier_PhantomLancer_Juxtapose::GetIllusionCount, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetCaster, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance*, CDOTAPlayer::GetPlayerByPlayerID, CDOTA_BaseNPC::SetControllableByPlayer (23 total)
// strings: "modifier_phantom_lancer_juxtapose_illusion", "bounty_base", "bounty_growth", "kv_juxtapose_illusion"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r12
  CDOTA_BaseNPC *Parent; // r13
  int IllusionCount; // eax
  unsigned int proc_chance_pct; // edi
  float v16; // xmm1_4
  CDOTA_BaseNPC *pCaster; // rax
  float v18; // xmm0_4
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // r15
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  int m_nControllingPlayerID; // r13d
  CDOTAPlayer *PlayerByPlayerID; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex src; // [rsp+40h] [rbp-E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hIllusion; // [rsp+50h] [rbp-D0h] BYREF
  CUnitOrders newOrders; // [rsp+70h] [rbp-B0h] BYREF
  KeyValues kv_illusion; // [rsp+B0h] [rbp-70h] BYREF
  KeyValues kv_juxtapose_illusion; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+E8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
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
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->htarget.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && m_pInstance != 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
            && HIBYTE(v12[7].m_CScriptComponent) != m_pInstance->m_iTeamNum.m_Value
            && (Parent->m_nUnitState64.m_Value & 0x10000000) == 0 )
          {
            IllusionCount = CDOTA_Modifier_PhantomLancer_Juxtapose::GetIllusionCount(this);
            proc_chance_pct = this->proc_chance_pct;
            if ( Parent->m_bIsIllusion.m_Value )
              proc_chance_pct = this->illusion_proc_chance_pct;
            if ( IllusionCount < this->max_illusions
              && RollPseudoRandomPercentage(
                   proc_chance_pct,
                   DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_PHANTOMLANCER_JUXTAPOSE,
                   Parent) )
            {
              KeyValues::KeyValues(&kv_illusion, "modifier_phantom_lancer_juxtapose_illusion");
              KeyValues::SetFloat(&kv_illusion, "duration", v16);
              KeyValues::SetInt(&kv_illusion, "outgoing_damage", this->illusion_damage_out_pct);
              KeyValues::SetInt(&kv_illusion, "incoming_damage", this->illusion_damage_in_pct);
              KeyValues::SetInt(&kv_illusion, "bounty_base", 5);
              KeyValues::SetInt(&kv_illusion, "bounty_growth", 0);
              hIllusion.m_Size = 0;
              hIllusion.m_Memory.m_pMemory = 0;
              hIllusion.m_Memory.m_nAllocationCount = 0;
              hIllusion.m_Memory.m_nGrowSize = 0;
              pCaster = CDOTA_Buff::GetCaster(this);
              v18 = Parent->m_flHullRadius + Parent->m_flCollisionPadding;
              DOTA_CreateIllusions(Parent, 1, (v18 + v18), 0, &kv_illusion, &hIllusion, pCaster, 0, 1);
              if ( hIllusion.m_Size > 0 )
              {
                v19 = CEntityHandle::operator CEntityInstance *(hIllusion.m_Memory.m_pMemory);
                v20 = v19;
                if ( v19 != 0
                  && BYTE3(v19[7]._vptr_IHandleEntity) != 0
                  && (v19[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  v21 = 0x7FFF;
                  v22 = HIDWORD(v19[11].m_pEntity) >> 15;
                  if ( HIDWORD(v19[11].m_pEntity) != -1 )
                    v21 = WORD2(v19[11].m_pEntity) & 0x7FFF;
                  LOWORD(newOrders.m_nIssuerPlayerIndex) = v21 | newOrders.m_nIssuerPlayerIndex & 0x8000;
                  v23 = (v22 << 15) | newOrders.m_nIssuerPlayerIndex & 0x7FFF;
                  newOrders.m_nIssuerPlayerIndex = v23;
                  if ( (v23 + 2) <= 1
                    || (v24 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v21 >> 9]) == 0
                    || (v25 = &v24[v21 & 0x1FF]) == 0
                    || v23 != v25->m_EHandle.m_Index
                    || v25->m_pInstance == 0 )
                  {
                    m_nControllingPlayerID = Parent->m_nControllingPlayerID;
                    PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(m_nControllingPlayerID);
                    (*(v20->_vptr_IHandleEntity + 40))(v20, PlayerByPlayerID);
                    if ( m_nControllingPlayerID != LODWORD(v20[1].m_pfnBlocked.__delta) )
                    {
                      (*(v20->_vptr_IHandleEntity + 22))(v20, 4800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                      LODWORD(v20[1].m_pfnBlocked.__delta) = m_nControllingPlayerID;
                    }
                    CDOTA_BaseNPC::SetControllableByPlayer(v20, m_nControllingPlayerID, 0);
                  }
                  CUnitOrders::CUnitOrders(&newOrders);
                  CUnitOrders::Reset(&newOrders);
                  newOrders.m_nIssuerPlayerIndex = -1;
                  src.m_Data = CEntityInstance::GetEntityIndex(v20).m_Data;
                  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::AddToTail(&newOrders.m_nUnits, &src);
                  newOrders.m_nOrderType = 4;
                  newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v12);
                  DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
                  CDOTA_BaseNPC::SetPseudoQueuedOrder(v20, &newOrders);
                  KeyValues::KeyValues(&kv_juxtapose_illusion, "kv_juxtapose_illusion");
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(
                    v20,
                    Caster,
                    0,
                    "modifier_phantom_lancer_juxtapose_illusion",
                    &kv_juxtapose_illusion,
                    0);
                  KeyValues::~KeyValues(&kv_juxtapose_illusion);
                  CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&newOrders.m_nUnits);
                }
              }
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hIllusion);
              KeyValues::~KeyValues(&kv_illusion);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Unit_Hero_PhantomLancer::CountIllusions  (line 1027, @0x00000000029d65b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, IndexToIdentity, IsEffectActive, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// callers: CDOTA_Unit_Hero_PhantomLancer::ModifyOrAppendCriteria, CDOTA_Modifier_PhantomLancer_Juxtapose::GetIllusionCount
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Unit_Hero_PhantomLancer::CountIllusions(CDOTA_BaseNPC_Hero *const pHero)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  int v3; // r13d
  CHandle<CDOTA_BaseNPC_Hero> *v4; // rax
  uint32 m_Index; // edx
  __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CEntityInstance *m_pInstance; // r12

  if ( pHero == 0 )
    return 0;
  v1 = (*(pHero->_vptr_IHandleEntity + 413))(pHero);
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
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
          if ( v8->m_pInstance != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
            && v1 == (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance) )
          {
            v3 += (m_pInstance[11].m_hPrivateScope.m_hScope & 0x20) == 0;
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 < g_HeroList.m_hHeroList.m_Size );
  return v3;
}


// CDOTA_Modifier_PhantomLancer_Juxtapose::GetIllusionCount  (line 1049, @0x00000000029d6720, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_Unit_Hero_PhantomLancer::CountIllusions
// callers: CDOTA_Modifier_PhantomLancer_Juxtapose::OnAttacked
int __fastcall CDOTA_Modifier_PhantomLancer_Juxtapose::GetIllusionCount(
        CDOTA_Modifier_PhantomLancer_Juxtapose *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    return CDOTA_Unit_Hero_PhantomLancer::CountIllusions(Caster);
  else
    return CDOTA_Unit_Hero_PhantomLancer::CountIllusions(0);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::~CDOTA_Ability_PhantomLancer_PhantomEdge  (line 1061, @0x0000000002a17bc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::~CDOTA_Ability_PhantomLancer_PhantomEdge(
        CDOTA_Ability_PhantomLancer_PhantomEdge *const this)
{
  this->_vptr_IHandleEntity = &off_43730B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::~CDOTA_Ability_PhantomLancer_PhantomEdge  (line 1061, @0x0000000002a17be0, libserver.so)  // inlines: ~CDOTA_Ability_PhantomLancer_PhantomEdge
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::~CDOTA_Ability_PhantomLancer_PhantomEdge(
        CDOTA_Ability_PhantomLancer_PhantomEdge *const this)
{
  this->_vptr_IHandleEntity = &off_43730B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::Schema_DynamicBinding  (line 1063, @0x0000000002a0b550, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_PhantomEdge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_PhantomEdge *const this)
{
  return CDOTA_Ability_PhantomLancer_PhantomEdge::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1063, @0x0000000002a0b560, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::DestructInstance  (line 1063, @0x0000000002a0b570, libserver.so)  // inlines: Destruct<CDOTA_Ability_PhantomLancer_PhantomEdge>
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::FreeInstance  (line 1063, @0x0000000002a0b590, libserver.so)
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::CanAllocate  (line 1063, @0x0000000002a0b5b0, libserver.so)
bool __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1063, @0x0000000002a0b5c0, libserver.so)
// globals: CDOTA_Ability_PhantomLancer_PhantomEdge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_PhantomLancer_PhantomEdge::s_pSchemaBinding;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::AllocateInstance  (line 1063, @0x0000000002a102c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::ConstructInstance  (line 1063, @0x0000000002a14750, libserver.so)  // inlines: CDOTA_Ability_PhantomLancer_PhantomEdge, Construct<CDOTA_Ability_PhantomLancer_PhantomEdge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43730B0;
  }
  return p;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1063, @0x0000000002a20080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1063, @0x0000000002a200a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal  (line 1063, @0x0000000002a39c20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "phantom_lancer_phantom_edge", "CDOTA_Ability_PhantomLancer_PhantomEdge"
// globals: `guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass, CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass, __dso_handle, CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo, CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo
CEntityClass *__cdecl CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass);
    CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass._vptr_CEntityClass = off_4373030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass);
    __cxa_atexit(
      CDOTA_Ability_PhantomLancer_PhantomEdge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass != 0 )
    return &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass;
  if ( `guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo,
      "CDOTA_Ability_PhantomLancer_PhantomEdge",
      "phantom_lancer_phantom_edge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo);
  }
  CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass.m_pClassInfo = &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo;
  CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass.m_pBaseClassInfo = CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass = &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass;
  CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClassInfo.m_pClass = &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass;
  CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_PhantomLancer_PhantomEdge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_PhantomLancer_PhantomEdgeClass;
}


// CDOTA_Ability_PhantomLancer_PhantomEdge::GetIntrinsicModifierName  (line 1066, @0x0000000002a0b5d0, libserver.so)
// strings: "modifier_phantom_lancer_phantom_edge"
const char *__fastcall CDOTA_Ability_PhantomLancer_PhantomEdge::GetIntrinsicModifierName(
        CDOTA_Ability_PhantomLancer_PhantomEdge *const this)
{
  return "modifier_phantom_lancer_phantom_edge";
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::~CDOTA_Modifier_PhantomLancer_PhantomEdge  (line 1075, @0x0000000002a11100, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::~CDOTA_Modifier_PhantomLancer_PhantomEdge(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4373B70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::~CDOTA_Modifier_PhantomLancer_PhantomEdge  (line 1075, @0x0000000002a11120, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_PhantomEdge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::~CDOTA_Modifier_PhantomLancer_PhantomEdge(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this)
{
  this->_vptr_CDOTA_Buff = &off_4373B70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::IsHidden  (line 1083, @0x0000000002a0b5e0, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::IsHidden(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::OnCreated  (line 1099, @0x00000000029f8270, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::OnCreated(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->min_distance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->max_distance = 0;
    goto LABEL_4;
  }
  this->min_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "min_distance", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_distance", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::OnRefresh  (line 1109, @0x00000000029f7a80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::OnRefresh(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->min_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "min_distance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->max_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_distance", -1, 0);
      return;
    }
  }
  else
  {
    this->min_distance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->max_distance = 0;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::OnIntervalThink  (line 1117, @0x00000000029e67c0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetNPCAttackTarget, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr (17 total)
// strings: "special_bonus_unique_phantom_lancer", "modifier_phantom_lancer_phantom_edge_boost", "Hero_PhantomLancer.PhantomEdge"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::OnIntervalThink(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  uint32 v12; // ecx
  unsigned __int16 v13; // dx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v21; // rax
  float v22; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v24; // rax
  float v25; // xmm1_4
  CDOTABaseAbility *v26; // r14
  CDOTA_BaseNPC *v27; // r12
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  float flEffectiveMax; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  flEffectiveMax = this->max_distance;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_phantom_lancer", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flEffectiveMax = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flEffectiveMax;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hTarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          goto LABEL_20;
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  v8 = CEntityHandle::operator CEntityInstance *(&Parent->m_hAttackTarget);
  if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
  {
    v9 = CDOTA_Buff::GetParent(this);
    v10 = CEntityHandle::operator CEntityInstance *(&v9->m_hAttackTarget);
    if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
      v10 = 0;
    if ( (v10[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    {
      v11 = CDOTA_Buff::GetParent(this);
      v12 = v11->m_hAttackTarget.m_Index;
      if ( v12 + 2 > 1 )
      {
        v13 = v11->m_hAttackTarget.m_Index;
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v13 >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v13 & 0x1FF];
          if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
          {
            m_pInstance = v15->m_pInstance;
            if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
LABEL_20:
              v17 = CDOTA_Buff::GetParent(this);
              if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v17, m_pInstance)
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
              {
                v18 = CDOTA_Buff::GetParent(this);
                if ( (*(v18->_vptr_IHandleEntity + 408))(v18) != 0 )
                {
                  v19 = CDOTA_Buff::GetParent(this);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
                  v21 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v22 = fsqrt(
                          ((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x))
                        + ((v21->y - AbsOrigin->y) * (v21->y - AbsOrigin->y)));
                  if ( v22 > this->min_distance && flEffectiveMax > v22 )
                  {
                    Ability = CDOTA_Buff::GetAbility(this);
                    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0
                      && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) == 0
                      && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
                      && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_phantom_lancer_phantom_edge_boost", 0) == 0 )
                    {
                      v24 = CDOTA_Buff::GetAbility(this);
                      (*(v24->_vptr_IHandleEntity + 241))(v24, -1.0);
                      KeyValues::KeyValues(&kv, "modifier_phantom_lancer_phantom_edge_boost");
                      KeyValues::SetFloat(&kv, "duration", v25);
                      KeyValues::SetPtr(&kv, "target", m_pInstance);
                      v26 = CDOTA_Buff::GetAbility(this);
                      v27 = CDOTA_Buff::GetCaster(this);
                      v28 = CDOTA_Buff::GetParent(this);
                      CDOTA_BaseNPC::AddNewModifier(v28, v27, v26, "modifier_phantom_lancer_phantom_edge_boost", &kv, 0);
                      v29 = CDOTA_Buff::GetParent(this);
                      CDOTA_BaseNPC::UnitEmitSound(v29, "Hero_PhantomLancer.PhantomEdge", 0.0, 0, 0);
                      KeyValues::~KeyValues(&kv);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::DeclareFunctions  (line 1162, @0x00000000029b5d70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_PhantomEdge::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_PhantomLancer_PhantomEdge::OnOrder;
  this->m_Functions[125].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge::OnOrder  (line 1169, @0x00000000029c7840, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, Target, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge::OnOrder(
        CDOTA_Modifier_PhantomLancer_PhantomEdge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // rbx
  char m_CScriptComponent_high; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->nOrdertype - 1;
          if ( v9 <= 0x1B )
          {
            if ( ((1LL << v9) & 0x8107A37) != 0 )
              goto LABEL_23;
            if ( ((1LL << v9) & 8) == 0 )
              return 1uLL;
            v10 = params->htarget.m_Index;
            if ( v10 + 2 <= 1 )
              return 1uLL;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v11 == 0 )
              return 1uLL;
            v12 = &v11[params->htarget.m_Index & 0x1FF];
            if ( v12 == 0 )
              return 1uLL;
            if ( v10 != v12->m_EHandle.m_Index )
              return 1uLL;
            v13 = v12->m_pInstance;
            if ( v12->m_pInstance == 0 )
              return 1uLL;
            if ( BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
              return 1uLL;
            m_CScriptComponent_high = HIBYTE(v13[7].m_CScriptComponent);
            if ( m_CScriptComponent_high == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
              return 1uLL;
            m_pEntity = v13->m_pEntity;
            if ( m_pEntity == 0 )
            {
LABEL_23:
              this->m_hTarget.m_Index = -1;
              return 1uLL;
            }
            v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index == -1 )
              v17 = 0x7FFF;
            else
              v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v17 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v16 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost  (line 1215, @0x0000000002a110b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this)
{
  this->_vptr_CDOTA_Buff = &off_4373E90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost  (line 1215, @0x0000000002a110d0, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this)
{
  this->_vptr_CDOTA_Buff = &off_4373E90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetEffectName  (line 1233, @0x0000000002a0b5f0, libserver.so)
// strings: "particles/units/heroes/hero_phantom_lancer/phantomlancer_edge_boost.vpcf"
const char *__fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetEffectName(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this)
{
  return "particles/units/heroes/hero_phantom_lancer/phantomlancer_edge_boost.vpcf";
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnCreated  (line 1248, @0x00000000029f8a30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "bonus_speed", "agility_duration"
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnCreated(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm1_4

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
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_speed = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_8;
LABEL_11:
    this->agility_duration = 0.0;
    goto LABEL_9;
  }
  this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_11;
LABEL_8:
  this->agility_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "agility_duration", -1, 0);
LABEL_9:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v9);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnRefresh  (line 1259, @0x00000000029f7340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnRefresh(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed", -1, 0);
  else
    this->bonus_speed = 0;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnIntervalThink  (line 1266, @0x00000000029c42d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_BaseNPC::IsInvisibleTo
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnIntervalThink(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) != 0
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC
    || (Parent = CDOTA_Buff::GetParent(this), CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, Parent))
    || (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::DeclareFunctions  (line 1285, @0x00000000029b5d90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Absolute(CModifierParams const&), CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnOrder(CModifierParams const&), CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this)
{
  this->m_Functions[18].__pfn = CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Absolute;
  this->m_Functions[69].__pfn = (&stru_10 + 705);
  this->m_Functions[69].__delta = 0;
  this->m_Functions[125].__pfn = CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnOrder;
  this->m_Functions[18].__delta = 0;
  this->m_Functions[21].__pfn = (&stru_10 + 697);
  this->m_Functions[21].__delta = 0;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnAttackLanded  (line 1296, @0x00000000029c5eb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::Destroy, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_phantom_lancer_phantom_edge_agility"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnAttackLanded(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v6; // r13
  CEntityIdentity *v7; // rcx
  uint32 v8; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityInstance *v12; // r15
  uint32 v13; // edx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityInstance *v16; // r14
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v6 = 0;
    v7 = &v4[params->hattacker.m_Index & 0x1FF];
    if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
    {
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        v6 = v7->m_pInstance;
    }
  }
  else
  {
    m_pInstance = 0;
    v6 = 0;
  }
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v11 = &v10[m_Index_low & 0x1FF]) == 0
    || v8 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    v12 = 0;
  }
  v13 = this->m_hTarget.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[this->m_hTarget.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
  {
    v16 = 0;
  }
  if ( m_pInstance != 0
    && m_pInstance->m_bIsDOTANPC
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && v6 != 0
    && v12 != 0
    && v16 != 0
    && v12 == v16 )
  {
    KeyValues::KeyValues(&kv, "modifier_phantom_lancer_phantom_edge_agility");
    KeyValues::SetFloat(&kv, "duration", v18);
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(Parent, Caster, Ability, "modifier_phantom_lancer_phantom_edge_agility", &kv, 0);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1uLL;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnOrder  (line 1317, @0x00000000029c7d50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Target, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::OnOrder(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // rax
  uint32 v14; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityInstance *v17; // rdx

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->nOrdertype - 1;
          if ( v9 <= 0x1B )
          {
            if ( ((1LL << v9) & 0x8107A37) != 0 )
              goto LABEL_25;
            if ( ((1LL << v9) & 8) != 0 )
            {
              v10 = params->htarget.m_Index;
              if ( v10 + 2 <= 1
                || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
                || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
                || v10 != v12->m_EHandle.m_Index
                || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
                || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
              {
                v13 = 0;
              }
              v14 = this->m_hTarget.m_Index;
              if ( v14 + 2 > 1 )
              {
                v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
                if ( v15 != 0 )
                {
                  v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
                  if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                  {
                    v17 = v16->m_pInstance;
                    if ( v16->m_pInstance != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 && v13 != 0 && v13 != v17 )
LABEL_25:
                      CDOTA_Buff::Destroy(this, 0, 0, 0);
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


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Absolute  (line 1360, @0x00000000029b5e10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Max  (line 1367, @0x00000000029b5e30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        const CModifierParams *const params)
{
  return 0x461C400000000001uLL;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierAttackRangeBonus  (line 1374, @0x00000000029b5e50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::GetModifierAttackRangeBonus(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        const CModifierParams *const params)
{
  return 0xC28C000000000001LL;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::CheckState  (line 1381, @0x00000000029b5e70, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost::CheckState(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility  (line 1392, @0x0000000002a11060, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility *const this)
{
  this->_vptr_CDOTA_Buff = &off_43741D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility  (line 1392, @0x0000000002a11080, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::~CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility *const this)
{
  this->_vptr_CDOTA_Buff = &off_43741D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::DeclareFunctions  (line 1407, @0x00000000029b5e90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::DeclareFunctions(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility *const this)
{
  this->m_Functions[65].__pfn = CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::GetModifierBonusStats_Agility  (line 1412, @0x00000000029b5eb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::GetModifierBonusStats_Agility(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::OnCreated  (line 1417, @0x00000000029f6da0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility"
void __fastcall CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility::OnCreated(
        CDOTA_Modifier_PhantomLancer_PhantomEdge_Agility *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_agility", -1, 0);
  else
    this->bonus_agility = 0;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion  (line 1428, @0x0000000002a11010, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_43744F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion  (line 1428, @0x0000000002a11030, libserver.so)  // inlines: ~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::~CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_43744F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::IsHidden  (line 1435, @0x0000000002a0b600, libserver.so)
bool __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::IsHidden(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  return 1;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::GetTexture  (line 1439, @0x0000000002a0b610, libserver.so)
// strings: "phantom_lancer_juxtapose"
const char *__fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::GetTexture(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  return "phantom_lancer_juxtapose";
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::StatusEffectPriority  (line 1440, @0x0000000002a0b620, libserver.so)
int __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::StatusEffectPriority(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  return 10001;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::OnDestroy  (line 1457, @0x00000000029bb170, libserver.so)
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_phantom_lancer/phantomlancer_illusion_destroy.vpcf"
void __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::OnDestroy(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyAllParticleEffectsInvolving(ParticleManager, Parent, 1);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = GetParticleManager();
  LODWORD(v4) = CDOTA_ParticleManager::CreateParticle(
                  v5,
                  "particles/units/heroes/hero_phantom_lancer/phantomlancer_illusion_destroy.vpcf",
                  0,
                  v4,
                  0,
                  0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, v4);
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::ShouldSendToTeam  (line 1465, @0x00000000029b7310, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::ShouldSendToTeam(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this,
        int nTeamNumber)
{
  return nTeamNumber == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::OnCreated  (line 1470, @0x00000000029b65e0, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt
// strings: "strong_illusion"
void __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::OnCreated(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this,
        KeyValues *pKV)
{
  this->m_bstrongIllusion = KeyValues::GetInt(pKV, "strong_illusion", 0) != 0;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::GetStatusEffectName  (line 1477, @0x00000000029b5ed0, libserver.so)
// strings: "particles/units/heroes/hero_phantom_lancer/status_effect_phantom_illstrong.vpcf", "particles/status_fx/status_effect_phantom_lancer_illusion.vpcf"
const char *__fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::GetStatusEffectName(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this)
{
  const char *result; // rax

  result = "particles/units/heroes/hero_phantom_lancer/status_effect_phantom_illstrong.vpcf";
  if ( !this->m_bstrongIllusion )
    return "particles/status_fx/status_effect_phantom_lancer_illusion.vpcf";
  return result;
}


// CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::AddCustomTransmiterData  (line 1488, @0x00000000029bb1e0, libserver.so)  // inlines: set_has_stack_count, set_stack_count
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion::AddCustomTransmiterData(
        CDOTA_Modifier_PhantomLancer_JuxtaposeIllusion *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  _BOOL4 m_bstrongIllusion; // eax

  m_bstrongIllusion = this->m_bstrongIllusion;
  *(entry + 4) |= 0x40u;
  *(entry + 12) = m_bstrongIllusion;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


