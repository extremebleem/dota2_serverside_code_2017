// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:33
class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	bool m_bFinished;  // +0x39c
	bool m_bPlayedChargeAnimation;  // +0x39d

	EHANDLE m_hTarget;  // +0x3b8

	int nFXIndex;  // +0x3f0
	int m_iCurProjectileIndex;  // +0x3f4
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
	CDOTA_Ability_SpiritBreaker_ChargeOfDarkness(CDOTA_Ability_SpiritBreaker_ChargeOfDarkness &);
	CDOTA_Ability_SpiritBreaker_ChargeOfDarkness(CDOTA_Ability_SpiritBreaker_ChargeOfDarkness &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_SpiritBreaker_ChargeOfDarkness();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	void InterruptCharge();
	virtual void OnUnStolen();
	virtual ~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[308] OnUnStolen
	// sizeof = 1016
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:83
class CDOTA_Unit_Hero_SpiritBreaker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_SpiritBreaker(CDOTA_Unit_Hero_SpiritBreaker &);
	CDOTA_Unit_Hero_SpiritBreaker(CDOTA_Unit_Hero_SpiritBreaker &);
	CDOTA_Unit_Hero_SpiritBreaker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetDeathEffectName();
	virtual void OnDying();
	virtual ~CDOTA_Unit_Hero_SpiritBreaker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[502] GetDeathEffectName
	// vtable[469] OnDying
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:95
class C_CDOTA_Unit_Hero_SpiritBreaker_MapInstall {
	C_CDOTA_Unit_Hero_SpiritBreaker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:125
class CDOTA_Ability_SpiritBreaker_GreaterBash : public CDOTABaseAbility {
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
	CDOTA_Ability_SpiritBreaker_GreaterBash(CDOTA_Ability_SpiritBreaker_GreaterBash &);
	CDOTA_Ability_SpiritBreaker_GreaterBash(CDOTA_Ability_SpiritBreaker_GreaterBash &);
	CDOTA_Ability_SpiritBreaker_GreaterBash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsHiddenWhenStolen();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_SpiritBreaker_GreaterBash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[306] IsHiddenWhenStolen
	// vtable[307] OnStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:158
class CDOTA_Modifier_SpiritBreaker_GreaterBash : public CDOTA_Buff {
public:

private:

	int chance_pct;  // +0xba8
	float damage;  // +0xbac
	float movespeed_duration;  // +0xbb0
	CDOTA_Modifier_SpiritBreaker_GreaterBash();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	void DoBash(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_SpiritBreaker_GreaterBash();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:293
class CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed : public CDOTA_Buff {
public:

private:

	int bonus_movespeed_pct;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed();

	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:665
class CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:814
class CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:859
class CDOTA_Modifier_SpiritBreaker_SpecialAttack : public CDOTA_Buff {
public:

	EHANDLE m_hTarget;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_SpecialAttack();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_SpiritBreaker_SpecialAttack();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:940
class CDOTA_Ability_SpiritBreaker_EmpoweringHaste : public CDOTABaseAbility {
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
	CDOTA_Ability_SpiritBreaker_EmpoweringHaste(CDOTA_Ability_SpiritBreaker_EmpoweringHaste &);
	CDOTA_Ability_SpiritBreaker_EmpoweringHaste(CDOTA_Ability_SpiritBreaker_EmpoweringHaste &);
	CDOTA_Ability_SpiritBreaker_EmpoweringHaste();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_SpiritBreaker_EmpoweringHaste();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:958
class C_CDOTA_Ability_SpiritBreaker_EmpoweringHaste_MapInstall {
	C_CDOTA_Ability_SpiritBreaker_EmpoweringHaste_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:978
class CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:1021
class CDOTA_Modifier_SpiritBreaker_EmpoweringHaste : public CDOTA_Buff {
public:

private:

	int bonus_movespeed_pct;  // +0xba8
	int bonus_movespeed_pct_extra;  // +0xbac
	int duration;  // +0xbb0
	CDOTA_Modifier_SpiritBreaker_EmpoweringHaste();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierUnitStatsNeedsRefresh(const CModifierParams &);
	virtual ~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:1102
class CDOTA_Ability_SpiritBreaker_NetherStrike : public CDOTABaseAbility {
public:

private:

	int cooldown_scepter;  // +0x390
	int cast_range_scepter;  // +0x394
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
	CDOTA_Ability_SpiritBreaker_NetherStrike(CDOTA_Ability_SpiritBreaker_NetherStrike &);
	CDOTA_Ability_SpiritBreaker_NetherStrike(CDOTA_Ability_SpiritBreaker_NetherStrike &);
	CDOTA_Ability_SpiritBreaker_NetherStrike();
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
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_SpiritBreaker_NetherStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[242] GetCooldown
	// vtable[226] GetCastRange
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:1127
class C_CDOTA_Ability_SpiritBreaker_NetherStrike_MapInstall {
	C_CDOTA_Ability_SpiritBreaker_NetherStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:1230
class CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision : public CDOTA_Buff {
public:

private:

	int invis_threshold_pct;  // +0xba8
	CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_spirit_breaker.cpp:1267
class CDOTA_Modifier_SpiritBreaker_NetherStrike : public CDOTA_Buff {
public:

private:

	int bash_radius_scepter;  // +0xba8
	int damage;  // +0xbac
	EHANDLE m_hTarget;  // +0xbbc
	CDOTA_Modifier_SpiritBreaker_NetherStrike();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_SpiritBreaker_NetherStrike();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[67] GetEffectName
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness  (line 33, @0x0000000002c19f10, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Tree*, int>::Purge
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4568990;
  this->_vptr_CHorizontalMotionController = &off_4569418;
  this->m_hTrackingProjectileTrees.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTrackingProjectileTrees.m_Memory;
    CUtlMemory<CDOTA_Tree *,int>::Purge(&this->m_hTrackingProjectileTrees.m_Memory);
    if ( (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
  if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory),
        (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness  (line 33, @0x0000000002c19fd0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_Tree*, int>::Purge
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::~CDOTA_Ability_SpiritBreaker_ChargeOfDarkness(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Tree*,CUtlMemory<CDOTA_Tree*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4568990;
  this->_vptr_CHorizontalMotionController = &off_4569418;
  this->m_hTrackingProjectileTrees.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hTrackingProjectileTrees.m_Memory;
    CUtlMemory<CDOTA_Tree *,int>::Purge(&this->m_hTrackingProjectileTrees.m_Memory);
    if ( (this->m_hTrackingProjectileTrees.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Tree *,int>::Purge(p_m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
  if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
    if ( (this->m_hTrackingProjectileHits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTrackingProjectileHits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::Schema_DynamicBinding  (line 35, @0x0000000002c001d0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  return CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002c001f0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002c00200, libserver.so)  // inlines: Destruct<CDOTA_Ability_SpiritBreaker_ChargeOfDarkness>
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002c00220, libserver.so)
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002c00240, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002c00250, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002c02a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1016);
  memset(v1, 0, 0x3F8u);
  return v1;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002c0b180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002c0b1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal  (line 35, @0x0000000002c17ac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spirit_breaker_charge_of_darkness", "CDOTA_Ability_SpiritBreaker_ChargeOfDarkness"
// globals: `guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass, __dso_handle, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo
CEntityClass *__cdecl CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass);
    CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass._vptr_CEntityClass = off_45663F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass);
    __cxa_atexit(
      CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass != 0 )
    return &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass;
  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo,
      "CDOTA_Ability_SpiritBreaker_ChargeOfDarkness",
      "spirit_breaker_charge_of_darkness",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo);
  }
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass.m_pClassInfo = &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo;
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass.m_pBaseClassInfo = CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass = &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass;
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClassInfo.m_pClass = &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass;
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_ChargeOfDarknessClass;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002c19270, libserver.so)  // inlines: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness, CEntityHandle, CHandle, CHorizontalMotionController, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_SpiritBreaker_ChargeOfDarkness>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_4568990;
    *(p + 114) = &off_4569418;
    *(p + 238) = -1;
    *(p + 240) = 0;
    *(p + 121) = 0;
    *(p + 244) = 0;
    *(p + 245) = 0;
    *(p + 246) = 0;
    *(p + 124) = 0;
    *(p + 250) = 0;
    *(p + 251) = 0;
    *(p + 253) = 0;
  }
  return p;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::PlaysDefaultAnimWhenStolen  (line 53, @0x0000000002c00260, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::PlaysDefaultAnimWhenStolen(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  return 0;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetStolenActivityModifier  (line 54, @0x0000000002c00270, libserver.so)
// strings: "stolen_charge"
const char *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetStolenActivityModifier(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  return "stolen_charge";
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetAssociatedSecondaryAbilities  (line 55, @0x0000000002c00280, libserver.so)
// strings: "spirit_breaker_greater_bash"
const char *__fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  return "spirit_breaker_greater_bash";
}


// CDOTA_Unit_Hero_SpiritBreaker::~CDOTA_Unit_Hero_SpiritBreaker  (line 83, @0x0000000002c07370, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::~CDOTA_Unit_Hero_SpiritBreaker(
        CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  this->_vptr_IHandleEntity = &off_45664F0;
  this->_vptr_INextBotEventResponder = &off_45674D0;
  this->_vptr_CObstructionObject = &off_4567800;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_SpiritBreaker::~CDOTA_Unit_Hero_SpiritBreaker  (line 83, @0x0000000002c073b0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_SpiritBreaker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::~CDOTA_Unit_Hero_SpiritBreaker(
        CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  this->_vptr_IHandleEntity = &off_45664F0;
  this->_vptr_INextBotEventResponder = &off_45674D0;
  this->_vptr_CObstructionObject = &off_4567800;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_SpiritBreaker::Schema_DynamicBinding  (line 85, @0x0000000002c00290, libserver.so)
// globals: CDOTA_Unit_Hero_SpiritBreaker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SpiritBreaker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  return CDOTA_Unit_Hero_SpiritBreaker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 85, @0x0000000002c002c0, libserver.so)
// globals: CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::DestructInstance  (line 85, @0x0000000002c002d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_SpiritBreaker>
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::FreeInstance  (line 85, @0x0000000002c002f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::CanAllocate  (line 85, @0x0000000002c00310, libserver.so)
bool __fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 85, @0x0000000002c00320, libserver.so)
// globals: CDOTA_Unit_Hero_SpiritBreaker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SpiritBreaker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::AllocateInstance  (line 85, @0x0000000002c02ab0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::ConstructInstance  (line 85, @0x0000000002c046e0, libserver.so)  // inlines: CDOTA_Unit_Hero_SpiritBreaker, Construct<CDOTA_Unit_Hero_SpiritBreaker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45664F0;
    *(p + 236) = &off_45674D0;
    *(p + 257) = &off_4567800;
  }
  return p;
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 85, @0x0000000002c0b520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 85, @0x0000000002c0b790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal  (line 85, @0x0000000002c17c10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_spirit_breaker", "CDOTA_Unit_Hero_SpiritBreaker"
// globals: `guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass, CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass, __dso_handle, CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo, CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass);
    CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass._vptr_CEntityClass = off_4566470;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_SpiritBreaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SpiritBreakerClass != 0 )
    return &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo,
      "CDOTA_Unit_Hero_SpiritBreaker",
      "npc_dota_hero_spirit_breaker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo);
  }
  CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass.m_pClassInfo = &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo;
  CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SpiritBreakerClass = &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass;
  CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClassInfo.m_pClass = &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass;
  CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SpiritBreakerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_SpiritBreaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SpiritBreakerClass;
}


// CDOTA_Unit_Hero_SpiritBreaker::GetDeathEffectName  (line 89, @0x0000000002c00330, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_SpiritBreaker::GetDeathEffectName(CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_death.vpcf";
}


// CDOTA_Unit_Hero_SpiritBreaker::YouForgotToImplementOrDeclareServerClass  (line 95, @0x0000000002bd3bd0, libserver.so)
int __fastcall CDOTA_Unit_Hero_SpiritBreaker::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_SpiritBreaker::GetServerClass  (line 95, @0x0000000002bdc4f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_SpiritBreaker::GetServerClass(CDOTA_Unit_Hero_SpiritBreaker *const this)
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


// CDOTA_Unit_Hero_SpiritBreaker::OnDying  (line 106, @0x0000000002be3220, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge
// strings: "spirit_breaker_charge_of_darkness"
void __fastcall CDOTA_Unit_Hero_SpiritBreaker::OnDying(CDOTA_Unit_Hero_SpiritBreaker *const this)
{
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *AbilityByName; // rax

  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "spirit_breaker_charge_of_darkness", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(AbilityByName);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::~CDOTA_Ability_SpiritBreaker_GreaterBash  (line 125, @0x0000000002c05ad0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::~CDOTA_Ability_SpiritBreaker_GreaterBash(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this)
{
  this->_vptr_IHandleEntity = &off_45678D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::~CDOTA_Ability_SpiritBreaker_GreaterBash  (line 125, @0x0000000002c05af0, libserver.so)  // inlines: ~CDOTA_Ability_SpiritBreaker_GreaterBash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::~CDOTA_Ability_SpiritBreaker_GreaterBash(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this)
{
  this->_vptr_IHandleEntity = &off_45678D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::Schema_DynamicBinding  (line 127, @0x0000000002c00340, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_GreaterBash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_GreaterBash *const this)
{
  return CDOTA_Ability_SpiritBreaker_GreaterBash::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 127, @0x0000000002c00350, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::DestructInstance  (line 127, @0x0000000002c00360, libserver.so)  // inlines: Destruct<CDOTA_Ability_SpiritBreaker_GreaterBash>
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::FreeInstance  (line 127, @0x0000000002c00380, libserver.so)
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::CanAllocate  (line 127, @0x0000000002c003a0, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 127, @0x0000000002c003b0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_GreaterBash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_GreaterBash::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::AllocateInstance  (line 127, @0x0000000002c02af0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::ConstructInstance  (line 127, @0x0000000002c04e50, libserver.so)  // inlines: CDOTA_Ability_SpiritBreaker_GreaterBash, Construct<CDOTA_Ability_SpiritBreaker_GreaterBash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45678D0;
  }
  return p;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x0000000002c0b1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x0000000002c0b1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal  (line 127, @0x0000000002c17d60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spirit_breaker_greater_bash", "CDOTA_Ability_SpiritBreaker_GreaterBash"
// globals: `guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass, CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass, __dso_handle, CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo, CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo
CEntityClass *__cdecl CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass);
    CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass._vptr_CEntityClass = off_4567850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass);
    __cxa_atexit(
      CDOTA_Ability_SpiritBreaker_GreaterBash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SpiritBreaker_GreaterBashClass != 0 )
    return &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass;
  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo,
      "CDOTA_Ability_SpiritBreaker_GreaterBash",
      "spirit_breaker_greater_bash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo);
  }
  CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass.m_pClassInfo = &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo;
  CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass.m_pBaseClassInfo = CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SpiritBreaker_GreaterBashClass = &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass;
  CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClassInfo.m_pClass = &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass;
  CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SpiritBreaker_GreaterBashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SpiritBreaker_GreaterBash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_GreaterBashClass;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::GetIntrinsicModifierName  (line 130, @0x0000000002c003c0, libserver.so)
// strings: "modifier_spirit_breaker_greater_bash"
const char *__fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::GetIntrinsicModifierName(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this)
{
  const char *result; // rax

  result = 0;
  if ( this->m_bActivated.m_Value )
    return "modifier_spirit_breaker_greater_bash";
  return result;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::IsHiddenWhenStolen  (line 132, @0x0000000002c003e0, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::IsHiddenWhenStolen(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this)
{
  return 1;
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::OnStolen  (line 134, @0x0000000002c06db0, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::OnStolen(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, !this->m_bHidden.m_Value);
}


// CDOTA_Ability_SpiritBreaker_GreaterBash::GetAbilityDamageToTargetOverInterval  (line 143, @0x0000000002befe80, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_SpiritBreaker_GreaterBash::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_SpiritBreaker_GreaterBash *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", -1, 0) * fNumAttacksa;
    fNumAttacksc = fNumAttacksb * (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "chance_pct", -1, 0) / 100.0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fNumAttacksc);
  }
  return result;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::~CDOTA_Modifier_SpiritBreaker_GreaterBash  (line 158, @0x0000000002c031d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::~CDOTA_Modifier_SpiritBreaker_GreaterBash(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4568390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::~CDOTA_Modifier_SpiritBreaker_GreaterBash  (line 158, @0x0000000002c031f0, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_GreaterBash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::~CDOTA_Modifier_SpiritBreaker_GreaterBash(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4568390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::IsHidden  (line 166, @0x0000000002c003f0, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::IsHidden(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::OnCreated  (line 184, @0x0000000002bf2e70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "movespeed_duration"
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::OnCreated(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->chance_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movespeed_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "movespeed_duration", -1, 0);
    return;
  }
LABEL_7:
  this->movespeed_duration = 0.0;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::OnRefresh  (line 193, @0x0000000002bf2f40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "movespeed_duration"
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::OnRefresh(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->chance_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->movespeed_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "movespeed_duration", -1, 0);
    return;
  }
LABEL_7:
  this->movespeed_duration = 0.0;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::DeclareFunctions  (line 202, @0x0000000002bd3be0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded  (line 209, @0x0000000002bf46f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, RollPseudoRandomPercentage, CDOTA_BaseNPC::MoveToTargetToAttack, CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash
// strings: "special_bonus_unique_spirit_breaker_1"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v6; // r12
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  CDOTABaseAbility *Ability; // rax
  uint32 m_iUnitType; // eax
  unsigned int chance_pct; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v20; // rax
  ModifierVariant_t result; // 0:rax.16

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
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  if ( m_pInstance != 0
    && m_pInstance->m_bIsDOTANPC
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && v12 != 0
    && v6 != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 && !v6->m_bIsIllusion.m_Value )
    {
      m_iUnitType = v12->m_iUnitType;
      if ( (m_iUnitType & 0x10) == 0 && (m_iUnitType & 0x193) != 0 && v12->m_iTeamNum.m_Value != v6->m_iTeamNum.m_Value )
      {
        *&result.m_eType = 1;
        if ( (v6->m_nUnitState64.m_Value & 0x10000000) != 0 )
          goto LABEL_13;
        chance_pct = this->chance_pct;
        Caster = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_spirit_breaker_1", 0);
        if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          chance_pct += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
        Parent = CDOTA_Buff::GetParent(this);
        if ( RollPseudoRandomPercentage(
               chance_pct,
               DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SPIRITBREAKER_GREATERBASH,
               Parent) )
        {
          CDOTA_BaseNPC::MoveToTargetToAttack(v6, v12);
          CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(this, v12);
          v20 = CDOTA_Buff::GetAbility(this);
          (*(v20->_vptr_IHandleEntity + 241))(v20, -1.0);
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_13:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash  (line 244, @0x0000000002bf4390, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, VectorAdd, VectorSubtract, operator+, operator-
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle (18 total)
// callers: CDOTA_Modifier_SpiritBreaker_GreaterBash::OnAttackLanded, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileHit_ExtraData, CDOTA_Modifier_SpiritBreaker_NetherStrike::OnDestroy, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileThink_ExtraData
// strings: "modifier_knockback", "center_x", "center_y", "Hero_Spirit_Breaker.GreaterBash.Creep", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_greater_bash.vpcf", "attach_hitloc" (8 total)
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(
        CDOTA_Modifier_SpiritBreaker_GreaterBash *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  float v21; // xmm1_4
  CDOTABaseAbility *v22; // r15
  CDOTA_BaseNPC *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  KeyValues kv; // [rsp+8h] [rbp-78h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::GetAbsOrigin(Caster);
    CBaseEntity::GetAbsOrigin(pTarget);
    CDOTA_BaseNPC::RemoveModifierByName(pTarget, "modifier_knockback");
    KeyValues::KeyValues((&kv.CKeyValues_Data + 8), "modifier_knockback");
    KeyValues::SetFloat((&kv.CKeyValues_Data + 8), "center_x", v6);
    KeyValues::SetFloat((&kv.CKeyValues_Data + 8), "center_y", v7);
    KeyValues::SetFloat((&kv.CKeyValues_Data + 8), "duration", v8);
    v9 = CDOTA_Buff::GetAbility(this);
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v10, v9, "modifier_knockback", (&kv.CKeyValues_Data + 8), 0);
    v11 = CDOTA_Buff::GetCaster(this);
    *&kv.m_Color[4] = (this->damage * (*(v11->_vptr_IHandleEntity + 386))(v11)) / 100.0;
    v12 = CDOTA_Buff::GetAbility(this);
    v13 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v13, pTarget, v12, *&kv.m_Color[4], 2, 0);
    if ( (pTarget->m_iUnitType & 1) != 0 )
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Spirit_Breaker.GreaterBash", 0.0, 0, 0);
    else
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Spirit_Breaker.GreaterBash.Creep", 0.0, 0, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_spirit_breaker/spirit_breaker_greater_bash.vpcf",
                 2,
                 0,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 0, pTarget, 5, "attach_hitloc", *AbsOrigin, 1);
    Parent = CDOTA_Buff::GetParent(this);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 1, Parent, 1, 0, vec3_invalid, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
    KeyValues::KeyValues(&kv2, "modifier_spirit_breaker_greater_bash_speed");
    KeyValues::SetFloat(&kv2, "duration", v21);
    v22 = CDOTA_Buff::GetAbility(this);
    v23 = CDOTA_Buff::GetCaster(this);
    v24 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v24, v23, v22, "modifier_spirit_breaker_greater_bash_speed", &kv2, 0);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues((&kv.CKeyValues_Data + 8));
  }
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed  (line 293, @0x0000000002c03180, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_45686B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed  (line 293, @0x0000000002c031a0, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::~CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_45686B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetEffectName  (line 299, @0x0000000002c00400, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetEffectName(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf";
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::OnCreated  (line 313, @0x0000000002beb0a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed_pct"
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::OnCreated(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed_pct", -1, 0);
  else
    this->bonus_movespeed_pct = 0;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::DeclareFunctions  (line 320, @0x0000000002bd3c00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage  (line 327, @0x0000000002bd3c20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SpiritBreaker_GreaterBash_Speed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnSpellStart  (line 342, @0x0000000002bf7f60, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Color, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GrowMemory, InState, IsInvulnerable, IsMagicImmune, NetworkStateChanged, RemoveAll, Set, SetInIndefiniteCooldown, ToDOTABaseNPC, operator=, operator=<bool>, operator[], sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTALocomotor::ApplyHorizontalMotionController, DOTA_EmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetInt (21 total)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_start.vpcf", "Hero_Spirit_Breaker.ChargeOfDarkness", "Hero_Spirit_Breaker.ChargeOfDarkness.FP", "special_bonus_unique_spirit_breaker_2", "charge_of_darkness_projectile", "modifier_spirit_breaker_charge_of_darkness" (7 total)
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnSpellStart(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTALocomotor *v9; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v11; // eax
  __int16 v12; // cx
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *AbilityByName; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *v21; // rax
  int v22; // edx
  __int16 v23; // cx
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // r15
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  __int64 m_Size; // r12
  int v29; // eax
  CHandle<CBaseEntity> *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  KeyValues kv_projectile; // [rsp+0h] [rbp-100h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-E0h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+C8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( CDOTABaseAbility::GetCaster(this) == 0 || (CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value & 1) == 0 )
  {
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
        Caster = CDOTABaseAbility::GetCaster(this);
        ParticleManager = GetParticleManager();
        LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                            ParticleManager,
                            "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_start.vpcf",
                            1,
                            Caster,
                            0,
                            0);
        v7 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v7, Caster);
        v8 = CDOTABaseAbility::GetCaster(this);
        v9 = (*(v8->_vptr_IHandleEntity + 376))(v8);
        if ( CDOTALocomotor::ApplyHorizontalMotionController(v9, &this->CHorizontalMotionController, 0) )
        {
          m_pEntity = v3->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v11 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v12 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hTarget.m_Index) = v12 | this->m_hTarget.m_Index & 0x8000;
            this->m_hTarget.m_Index = (v11 << 15) | this->m_hTarget.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hTarget.m_Index = -1;
          }
          v13 = CDOTABaseAbility::GetCaster(this);
          DOTA_EmitSound(8, "Hero_Spirit_Breaker.ChargeOfDarkness", v13);
          v14 = CDOTABaseAbility::GetCaster(this);
          DOTA_EmitSound(1, "Hero_Spirit_Breaker.ChargeOfDarkness.FP", v14);
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
          v16 = CDOTABaseAbility::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v16, "special_bonus_unique_spirit_breaker_2", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
            LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
          ++this->m_iCurProjectileIndex;
          KeyValues::KeyValues(&kv_projectile, "charge_of_darkness_projectile");
          KeyValues::SetInt(&kv_projectile, "id", this->m_iCurProjectileIndex);
          info.bProvidesVision = 0;
          info.hSource.m_Index = -1;
          info.hTarget.m_Index = -1;
          info.colorGemColor = 0;
          info.bDrawsOnMinimap = 0;
          info.pszEffectName = 0;
          info.vSourceLoc.x = vec3_origin.x;
          y = vec3_origin.y;
          info.pAttackRecord = 0;
          info.vSourceLoc.y = y;
          z = vec3_origin.z;
          info.iSourceAttachment = 1;
          info.vSourceLoc.z = z;
          info.iVisionTeamNumber = -1;
          info.iVisionRadius = 0;
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
          v20 = CDOTABaseAbility::GetCaster(this);
          info.vSourceLoc = *CBaseEntity::GetAbsOrigin(v20);
          v21 = v3->m_pEntity;
          if ( v21 != 0 )
          {
            v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
            v23 = 0x7FFF;
            if ( v21->m_EHandle.m_Index != -1 )
              v23 = v21->m_EHandle.m_Index & 0x7FFF;
            LOWORD(info.hTarget.m_Index) = v23 | info.hTarget.m_Index & 0x8000;
            info.hTarget.m_Index = (v22 << 15) | info.hTarget.m_Index & 0x7FFF;
          }
          else
          {
            info.hTarget.m_Index = -1;
          }
          info.bDodgeable = 0;
          info.pKVExtraData = &kv_projectile;
          v24 = CDOTABaseAbility::GetCaster(this);
          this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v24);
          CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
          KeyValues::KeyValues(&kv, "modifier_spirit_breaker_charge_of_darkness");
          v25 = CDOTABaseAbility::GetCaster(this);
          v26 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v26, v25, this, "modifier_spirit_breaker_charge_of_darkness", &kv, 0);
          KeyValues::KeyValues(&kv2, "modifier_spirit_breaker_charge_of_darkness_vision");
          v27 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v3, v27, this, "modifier_spirit_breaker_charge_of_darkness_vision", &kv2, 0);
          this->m_hTrackingProjectileTrees.m_Size = 0;
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTrackingProjectileHits);
          m_Size = this->m_hTrackingProjectileHits.m_Size;
          v29 = this->m_hTrackingProjectileHits.m_Size;
          if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
            v29 = this->m_hTrackingProjectileHits.m_Size;
          }
          this->m_hTrackingProjectileHits.m_Size = v29 + 1;
          v30 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
          if ( v30 != 0 )
            v30->m_Index = this->m_hTarget;
          this->m_bFinished = 0;
          this->m_bPlayedChargeAnimation = 0;
          v31 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::ClearPseudoQueuedOrder(v31);
          if ( !this->m_bInIndefiniteCooldown.m_Value )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 844, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            this->m_bInIndefiniteCooldown.m_Value = 1;
          }
          KeyValues::~KeyValues(&kv2);
          KeyValues::~KeyValues(&kv);
          KeyValues::~KeyValues(&kv_projectile);
        }
      }
    }
  }
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileHit_ExtraData  (line 411, @0x0000000002bfaf20, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, Get, GetInstance, GetLevelSpecialValueFor<float>, GrowMemory, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTALocomotor::RemoveHorizontalMotionController, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash, CDOTA_BaseNPC::UnitEmitSound (22 total)
// strings: "modifier_stunned", "modifier_spirit_breaker_greater_bash", "Hero_Spirit_Breaker.Charge.Impact", "modifier_spirit_breaker_charge_of_darkness", "modifier_spirit_breaker_charge_of_darkness_vision", "modifier_spirit_breaker_special_attack"
__int64 __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileHit_ExtraData(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v8; // rax
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // r12
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_Modifier_SpiritBreaker_GreaterBash *ModifierByName; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v19; // rax
  CEntityIndex v20; // eax
  __int64 m_Size; // r14
  int32 m_Data; // r15d
  int v23; // eax
  CEntityIndex *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  CUnitOrders attackOrder; // [rsp+10h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  if ( !this->m_bFinished && KeyValues::GetInt(pExtraData, "id", 0) == this->m_iCurProjectileIndex )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v8 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
    CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
    v9 = CEntityHandle::operator CEntityInstance *(hTarget);
    v10 = v9;
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v11);
      if ( (BYTE1(v10[58]._vptr_IHandleEntity) & 2) == 0 )
      {
        v12 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v10, v12, this, "modifier_stunned", &kv, 0);
      }
      KeyValues::~KeyValues(&kv);
      v13 = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v13, "modifier_spirit_breaker_greater_bash", 0);
      if ( ModifierByName != 0 )
        CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(ModifierByName, v10);
      CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Spirit_Breaker.Charge.Impact", 0.0, 0, 0);
      (*(this->_vptr_IHandleEntity + 241))(this, -1.0);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v15, "modifier_spirit_breaker_charge_of_darkness");
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveGesture(v16, 1502);
      CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_spirit_breaker_charge_of_darkness_vision");
      if ( CDOTABaseAbility::GetCaster(this)->m_PseudoQueuedOrders.m_nOrderType == 0
        && (*(v10->_vptr_IHandleEntity + 408))(v10) != 0 )
      {
        v17 = CDOTABaseAbility::GetCaster(this);
        if ( (*(v17->_vptr_IHandleEntity + 408))(v17) != 0 )
        {
          CUnitOrders::CUnitOrders(&attackOrder);
          attackOrder.m_nUnits.m_Size = 0;
          attackOrder.m_nOrderType = 0;
          attackOrder.m_nTargetIndex.m_Data = 0;
          attackOrder.m_nAbilityIndex.m_Data = 0;
          attackOrder.m_bQueue = 0;
          attackOrder.m_vPosition.x = vec3_origin.x;
          y = vec3_origin.y;
          attackOrder.m_nIssuerPlayerIndex = -1;
          attackOrder.m_vPosition.y = y;
          attackOrder.m_vPosition.z = vec3_origin.z;
          v19 = CDOTABaseAbility::GetCaster(this);
          v20.m_Data = CEntityInstance::GetEntityIndex(v19).m_Data;
          m_Size = attackOrder.m_nUnits.m_Size;
          m_Data = v20.m_Data;
          v23 = attackOrder.m_nUnits.m_Size;
          if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
            v23 = attackOrder.m_nUnits.m_Size;
          }
          attackOrder.m_nUnits.m_Size = v23 + 1;
          v24 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
          if ( v24 != 0 )
            v24->m_Data = m_Data;
          attackOrder.m_nOrderType = 4;
          attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(v10);
          DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
          KeyValues::KeyValues(&kv, "modifier_spirit_breaker_special_attack");
          KeyValues::SetFloat(&kv, "duration", v25);
          KeyValues::SetPtr(&kv, "target", v10);
          v26 = CDOTABaseAbility::GetCaster(this);
          v27 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v27, v26, this, "modifier_spirit_breaker_special_attack", &kv, 0);
          KeyValues::~KeyValues(&kv);
          CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&attackOrder.m_nUnits);
        }
      }
      this->m_bFinished = 1;
    }
  }
  return 1;
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileThink_ExtraData  (line 482, @0x0000000002bfcdf0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, CopyConstruct<CDOTA_Tree*>, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Find, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, Length2D, LookupEntity, Purge, RemoveAll, Set, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: KeyValues::GetInt, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash, KeyValues::KeyValues (29 total)
// strings: "modifier_spirit_breaker_greater_bash", "bash_radius", "modifier_spirit_breaker_charge_of_darkness_vision", "special_bonus_unique_spirit_breaker_2", "charge_of_darkness_projectile", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_tree.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnProjectileThink_ExtraData(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  __m128i v11; // xmm3
  float v12; // r13d
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  __int64 i; // r12
  CHandle<CBaseEntity> *v16; // rax
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  CEntityInstance *m_pInstance; // r13
  __int64 v20; // r13
  CHandle<CBaseEntity> *v21; // r14
  int v22; // eax
  CHandle<CBaseEntity> *v23; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v25; // rax
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *AbilityByName; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v33; // eax
  __int16 v34; // cx
  CDOTA_BaseNPC *v35; // rax
  __int64 m_Size; // r14
  int v37; // eax
  CHandle<CBaseEntity> *v38; // rax
  __int64 v39; // r12
  int v40; // r13d
  const CBaseEntity *v41; // r14
  int v42; // ecx
  CHandle<CBaseEntity> *v43; // rax
  CDOTA_Tree **m_pMemory; // rdx
  CDOTA_Tree *v45; // rsi
  CDOTA_Tree **v46; // rdx
  int v47; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  const Vector *v50; // r14
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  __int64 v53; // r14
  CHandle<CBaseEntity> *v54; // r15
  int v55; // eax
  CDOTA_Tree **v56; // rax
  CDOTA_BaseNPC *v57; // rax
  const Vector *v58; // r12
  const Vector *v59; // rax
  float v60; // xmm1_4
  float v61; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v63; // rax
  CDOTA_Modifier_SpiritBreaker_GreaterBash *pBashBuff; // [rsp+28h] [rbp-158h]
  CDOTA_BaseNPC *pPrimaryTarget; // [rsp+30h] [rbp-150h]
  uint32 v68[4]; // [rsp+50h] [rbp-130h] BYREF
  Vector vToTarget; // [rsp+60h] [rbp-120h] BYREF
  QAngle faceTargetAngles; // [rsp+70h] [rbp-110h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+80h] [rbp-100h] BYREF
  KeyValues kv2; // [rsp+A0h] [rbp-E0h] BYREF
  KeyValues kv_projectile; // [rsp+C0h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+E0h] [rbp-A0h] BYREF
  unsigned __int64 v75; // [rsp+148h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  if ( !this->m_bFinished && KeyValues::GetInt(pExtraData, "id", 0) == this->m_iCurProjectileIndex )
  {
    this->m_vProjectileLocation.x = vLocation->x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
    pPrimaryTarget = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
    if ( pPrimaryTarget == 0
      || !pPrimaryTarget->m_bIsDOTANPC
      || (*(pPrimaryTarget->_vptr_IHandleEntity + 408))(pPrimaryTarget) == 0 )
    {
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      Caster = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &this->m_vTargetLocation, 0, 4000.0, &hEntities, 2, 19, 384, 1, 0);
      if ( hEntities.m_Size == 0 )
      {
        (*(this->_vptr_IHandleEntity + 334))(this);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
        return;
      }
      this->m_hTarget.m_Index = hEntities.m_Memory.m_pMemory->m_Index;
      pPrimaryTarget = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      if ( pPrimaryTarget == 0 || !pPrimaryTarget->m_bIsDOTANPC )
        pPrimaryTarget = 0;
      KeyValues::KeyValues(&kv2, "modifier_spirit_breaker_charge_of_darkness_vision");
      v25 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(
        pPrimaryTarget,
        v25,
        this,
        "modifier_spirit_breaker_charge_of_darkness_vision",
        &kv2,
        0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
      v27 = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "special_bonus_unique_spirit_breaker_2", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      ++this->m_iCurProjectileIndex;
      KeyValues::KeyValues(&kv_projectile, "charge_of_darkness_projectile");
      KeyValues::SetInt(&kv_projectile, "id", this->m_iCurProjectileIndex);
      info.bProvidesVision = 0;
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.bDrawsOnMinimap = 0;
      info.pszEffectName = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.pAttackRecord = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.iSourceAttachment = 1;
      info.vSourceLoc.z = z;
      info.iVisionTeamNumber = -1;
      info.iVisionRadius = 0;
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
      v31 = CDOTABaseAbility::GetCaster(this);
      info.vSourceLoc = *CBaseEntity::GetAbsOrigin(v31);
      if ( pPrimaryTarget != 0 && (m_pEntity = pPrimaryTarget->m_pEntity) != 0 )
      {
        v33 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v34 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v34 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v34 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v33 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.bDodgeable = 0;
      info.bReplaceExisting = 1;
      info.pKVExtraData = &kv_projectile;
      v35 = CDOTABaseAbility::GetCaster(this);
      this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v35);
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      m_Size = this->m_hTrackingProjectileHits.m_Size;
      v37 = this->m_hTrackingProjectileHits.m_Size;
      if ( m_Size == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
        v37 = this->m_hTrackingProjectileHits.m_Size;
      }
      this->m_hTrackingProjectileHits.m_Size = v37 + 1;
      v38 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[m_Size];
      if ( v38 != 0 )
        v38->m_Index = this->m_hTarget;
      KeyValues::~KeyValues(&kv_projectile);
      KeyValues::~KeyValues(&kv2);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    this->m_vTargetLocation = *CBaseEntity::GetAbsOrigin(pPrimaryTarget);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = this->m_vTargetLocation.y - AbsOrigin->y;
    v7 = this->m_vTargetLocation.x - AbsOrigin->x;
    vToTarget.z = 0.0;
    vToTarget.y = v6;
    vToTarget.x = v7;
    VectorAngles(&vToTarget, &faceTargetAngles);
    v8 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::SetAbsAngles(v8, &faceTargetAngles);
    v9 = CDOTABaseAbility::GetCaster(this);
    pBashBuff = CDOTA_BaseNPC::FindModifierByName(v9, "modifier_spirit_breaker_greater_bash", 0);
    if ( pBashBuff != 0 )
    {
      v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bash_radius", -1, 0);
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      *v11.m128i_i32 = v10;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v14->m_iTeamNum.m_Value, vLocation, v13, v12, &hEntities, 2, 3, 16, 0, 0);
      for ( i = 0; hEntities.m_Size > i; ++i )
      {
        v16 = &hEntities.m_Memory.m_pMemory[i];
        if ( v16->m_Index + 2 > 1 )
        {
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v16->m_Index & 0x1FF];
            if ( v18 != 0 && v16->m_Index == v18->m_EHandle.m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( v18->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hTrackingProjectileHits,
                     v16) < 0
                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
              {
                CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(pBashBuff, m_pInstance);
                v20 = this->m_hTrackingProjectileHits.m_Size;
                v21 = &hEntities.m_Memory.m_pMemory[i];
                v22 = this->m_hTrackingProjectileHits.m_Size;
                if ( v20 == this->m_hTrackingProjectileHits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hTrackingProjectileHits.m_Memory, 1);
                  v22 = this->m_hTrackingProjectileHits.m_Size;
                }
                this->m_hTrackingProjectileHits.m_Size = v22 + 1;
                v23 = &this->m_hTrackingProjectileHits.m_Memory.m_pMemory[v20];
                if ( v23 != 0 )
                  v23->m_Index = v21->m_Index;
              }
            }
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    CGridNav::GetStandingTreesAroundPoint(&g_GridNav, *vLocation, 200.0, 0, &hEntities);
    if ( hEntities.m_Size > 0 )
    {
      v39 = 0;
      v40 = 0;
      while ( 1 )
      {
        v41 = (*(**&hEntities.m_Memory.m_pMemory[v39].m_Index + 64LL))(*&hEntities.m_Memory.m_pMemory[v39].m_Index);
        if ( v41 != 0 )
        {
          v42 = this->m_hTrackingProjectileTrees.m_Size;
          v43 = &hEntities.m_Memory.m_pMemory[v39];
          if ( v42 <= 0 )
            goto LABEL_51;
          m_pMemory = this->m_hTrackingProjectileTrees.m_Memory.m_pMemory;
          v45 = *&v43->m_Index;
          if ( *m_pMemory != *&v43->m_Index )
            break;
        }
LABEL_55:
        ++v40;
        v39 += 2;
        if ( hEntities.m_Size <= v40 )
          goto LABEL_56;
      }
      v46 = m_pMemory + 1;
      v47 = 0;
      while ( ++v47 != v42 )
      {
        if ( v45 == *v46++ )
        {
          if ( v47 >= 0 )
            goto LABEL_55;
          break;
        }
      }
LABEL_51:
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge_tree.vpcf",
                   8,
                   0,
                   0,
                   0);
      v50 = CBaseEntity::GetAbsOrigin(v41);
      v51 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v51, Particle, 0, *&v50->x, v50->z);
      v52 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v52, Particle);
      v53 = this->m_hTrackingProjectileTrees.m_Size;
      v54 = &hEntities.m_Memory.m_pMemory[v39];
      v55 = this->m_hTrackingProjectileTrees.m_Size;
      if ( v53 == this->m_hTrackingProjectileTrees.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Tree *,int>::Grow(&this->m_hTrackingProjectileTrees.m_Memory, 1);
        v55 = this->m_hTrackingProjectileTrees.m_Size;
      }
      this->m_hTrackingProjectileTrees.m_Size = v55 + 1;
      v56 = &this->m_hTrackingProjectileTrees.m_Memory.m_pMemory[v53];
      if ( v56 != 0 )
        *v56 = *&v54->m_Index;
      goto LABEL_55;
    }
LABEL_56:
    v57 = CDOTABaseAbility::GetCaster(this);
    v58 = CBaseEntity::GetAbsOrigin(v57);
    v59 = CBaseEntity::GetAbsOrigin(pPrimaryTarget);
    v60 = v59->y - v58->y;
    v61 = fsqrt(((v59->x - v58->x) * (v59->x - v58->x)) + (v60 * v60));
    if ( v61 < 200.0 )
    {
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v68[0] = this->m_hTarget.m_Index;
      vptr_IHandleEntity[290](this, v68, vLocation, pExtraData);
    }
    else if ( !this->m_bPlayedChargeAnimation && v61 < 350.0 )
    {
      this->m_bPlayedChargeAnimation = 1;
      v63 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v63, 1593, 0.1, 0.0, 9, 0, 1.0);
    }
    hEntities.m_Size = 0;
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_Tree *,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_Tree *,int>::Purge(&hEntities.m_Memory);
    }
  }
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::UpdateHorizontalMotion  (line 608, @0x0000000002bd5a20, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::UpdateHorizontalMotion(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnHorizontalMotionInterrupted  (line 618, @0x0000000002be3250, libserver.so)
// calls: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnHorizontalMotionInterrupted(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(this);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnUnStolen  (line 627, @0x0000000002be3270, libserver.so)
// calls: CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge, CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnUnStolen(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(this);
  CDOTABaseAbility::OnUnStolen(this);
}


// CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge  (line 638, @0x0000000002be30e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::FindModifierByName
// callers: CDOTA_Unit_Hero_SpiritBreaker::OnDying, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnHorizontalMotionInterrupted, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::OnUnStolen, CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnDestroy, CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnStateChanged, CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnOrder
// strings: "modifier_spirit_breaker_charge_of_darkness", "modifier_spirit_breaker_charge_of_darkness_vision"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(
        CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_BaseNPC *v12; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0
    || (v12 = CDOTABaseAbility::GetCaster(this),
        CDOTA_BaseNPC::FindModifierByName(v12, "modifier_spirit_breaker_charge_of_darkness", 0) != 0) )
  {
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bFinished = 1;
    vptr_IHandleEntity[241](this, -1.0);
    v4 = CDOTABaseAbility::GetCaster(this);
    v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
    CDOTALocomotor::RemoveHorizontalMotionController(v5, &this->CHorizontalMotionController);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_spirit_breaker_charge_of_darkness");
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(v7, 1502);
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hTarget.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_spirit_breaker_charge_of_darkness_vision");
        }
      }
    }
  }
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness  (line 665, @0x0000000002c03130, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  this->_vptr_CDOTA_Buff = &off_45694B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness  (line 665, @0x0000000002c03150, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  this->_vptr_CDOTA_Buff = &off_45694B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::IsPurgable  (line 678, @0x0000000002c00410, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::IsPurgable(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  return 0;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetEffectName  (line 679, @0x0000000002c00420, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetEffectName(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_charge.vpcf";
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetStatusEffectName  (line 680, @0x0000000002c05d30, libserver.so)
// calls: GetParticleManager, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::GetParticleReplacement
// strings: "particles/status_fx/status_effect_charge_of_darkness.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetStatusEffectName(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  GetParticleManager();
  Caster = CDOTA_Buff::GetCaster(this);
  return CDOTA_ParticleManager::GetParticleReplacement(
           "particles/status_fx/status_effect_charge_of_darkness.vpcf",
           Caster);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::StatusEffectPriority  (line 681, @0x0000000002c00430, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::StatusEffectPriority(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  return 50;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnCreated  (line 694, @0x0000000002bd4830, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnCreated(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.1, v2);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnIntervalThink  (line 702, @0x0000000002bd5360, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnIntervalThink(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v3; // xmm1_4

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1502, 0.0, 0.0, 9, 0, 1.0);
  CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnDestroy  (line 715, @0x0000000002be3290, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::GetAbility, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnDestroy(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *Ability; // rax
  Vector v7; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v7 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v7, 150.0, v5);
  Ability = CDOTA_Buff::GetAbility(this);
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(Ability);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::DeclareFunctions  (line 727, @0x0000000002bd3c40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnOrder(CModifierParams const&), CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnStateChanged(CModifierParams const&), CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[135].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnStateChanged;
  this->m_Functions[155].__pfn = CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetActivityTranslationModifiers  (line 736, @0x0000000002bd6710, libserver.so)
// strings: "charge_attack"
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::GetActivityTranslationModifiers(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this,
        const CModifierParams *const params)
{
  Activity nActivity; // ecx
  ModifierVariant_t result; // 0:rax.16

  nActivity = params->nActivity;
  *&result.m_eType = 2;
  result.m_szVal = "charge";
  if ( nActivity != 1502 )
  {
    result.m_szVal = &loc_2;
    *&result.m_eType = 2;
    if ( nActivity != 1503 )
      *&result.m_eType = 2;
    LOBYTE(result.m_szVal) = 0;
    if ( nActivity == 1503 )
      result.m_szVal = "charge_attack";
  }
  return result;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnOrder  (line 754, @0x0000000002be33e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Target, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnOrder(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rcx
  CConcreteEntityList *v7; // r8
  CEntityIdentity *v8; // rcx
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r13
  unsigned int v14; // ecx
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *Ability; // rax
  CEntityInstance *m_pInstance; // rsi
  uint32 v17; // edx
  CEntityIdentity *v18; // rax
  CEntityIdentity *v19; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->ability.m_Index;
  if ( params->ability.m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->ability.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0) )
  {
    v7 = CEntityHandle::gm_pEntityList;
    goto LABEL_5;
  }
  v7 = CEntityHandle::gm_pEntityList;
  v8 = &v6[m_Index_low & 0x1FF];
  if ( v8 == 0 || m_Index != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
    goto LABEL_5;
  m_pInstance = 0;
  v17 = params->htarget.m_Index;
  if ( v17 + 2 > 1 )
  {
    v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v18 != 0 )
    {
      v19 = &v18[params->htarget.m_Index & 0x1FF];
      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
        m_pInstance = v19->m_pInstance;
    }
  }
  LOBYTE(result.m_szVal) = (*(v8->m_pInstance->_vptr_IHandleEntity + 219))(v8->m_pInstance, m_pInstance);
  *&result.m_eType = 1;
  if ( LOBYTE(result.m_szVal) == 0 )
  {
    v7 = CEntityHandle::gm_pEntityList;
LABEL_5:
    v9 = params->hunit.m_Index;
    if ( v9 + 2 > 1 )
    {
      v10 = v7->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[params->hunit.m_Index & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          v13 = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == v13 )
          {
            v14 = params->nOrdertype - 1;
            if ( v14 <= 0x1B && ((1LL << v14) & 0x8107A3F) != 0 )
            {
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(Ability);
            }
          }
        }
      }
    }
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnStateChanged  (line 791, @0x0000000002be3300, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::OnStateChanged(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness *Ability; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) == 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) == 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 1) == 0 )
  {
    return 1uLL;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  CDOTA_Ability_SpiritBreaker_ChargeOfDarkness::InterruptCharge(Ability);
  return 1uLL;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::CheckState  (line 804, @0x0000000002bd3ca0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness::CheckState(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarkness *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision  (line 814, @0x0000000002c030e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_45697D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision  (line 814, @0x0000000002c03100, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::~CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_45697D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsDebuff  (line 819, @0x0000000002c00440, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsDebuff(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsHidden  (line 820, @0x0000000002c00450, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsHidden(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsPurgable  (line 825, @0x0000000002c00460, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::IsPurgable(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this)
{
  return 0;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::CheckState  (line 833, @0x0000000002bd3cc0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::CheckState(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400uLL;
  buffState->m_nDisabledStateMask &= ~0x400uLL;
}


// CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::OnCreated  (line 841, @0x0000000002bd3ce0, libserver.so)
void __fastcall CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision::OnCreated(
        CDOTA_Modifier_SpiritBreaker_ChargeOfDarknessVision *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::~CDOTA_Modifier_SpiritBreaker_SpecialAttack  (line 859, @0x0000000002c03090, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::~CDOTA_Modifier_SpiritBreaker_SpecialAttack(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4569AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::~CDOTA_Modifier_SpiritBreaker_SpecialAttack  (line 859, @0x0000000002c030b0, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_SpecialAttack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::~CDOTA_Modifier_SpiritBreaker_SpecialAttack(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4569AF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::IsPurgable  (line 865, @0x0000000002c00470, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::IsPurgable(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  return 0;
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::IsHidden  (line 867, @0x0000000002c00480, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::IsHidden(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnCreated  (line 880, @0x0000000002bd4050, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr
void __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnCreated(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx

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
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnDestroy  (line 887, @0x0000000002bd59c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnDestroy(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1593);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v3, 1594, 0.0, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::DeclareFunctions  (line 897, @0x0000000002bd3cf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_SpecialAttack::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_SpiritBreaker_SpecialAttack::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnAttack;
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::GetActivityTranslationModifiers  (line 905, @0x0000000002bda750, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// strings: "charge_attack"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::GetActivityTranslationModifiers(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityInstance *v10; // rsi
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  uint32 v13; // eax
  CEntityInstance *v14; // rcx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_5;
  v9 = params->htarget.m_Index;
  v10 = 0;
  if ( v9 + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v10 = 0;
      v12 = &v11[params->htarget.m_Index & 0x1FF];
      if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
        v10 = v12->m_pInstance;
    }
  }
  v13 = this->m_hTarget.m_Index;
  v14 = 0;
  if ( v13 + 2 > 1 )
  {
    v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v15 != 0 )
    {
      v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
      if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
        v14 = v16->m_pInstance;
    }
  }
  result = 2uLL;
  if ( v10 == v14 )
  {
LABEL_5:
    result.m_szVal = &loc_2;
    *&result.m_eType = 2;
    if ( params->nActivity == 1503 )
      *&result.m_eType = 2;
    LOBYTE(result.m_szVal) = 0;
    if ( params->nActivity == 1503 )
      result.m_szVal = "charge_attack";
  }
  return result;
}


// CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnAttack  (line 922, @0x0000000002bdaa80, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_SpecialAttack::OnAttack(
        CDOTA_Modifier_SpiritBreaker_SpecialAttack *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityInstance *v10; // rsi
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  uint32 v13; // eax
  CEntityInstance *v14; // rcx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx

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
          v9 = params->htarget.m_Index;
          v10 = 0;
          if ( v9 + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v10 = 0;
              v12 = &v11[params->htarget.m_Index & 0x1FF];
              if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
                v10 = v12->m_pInstance;
            }
          }
          v13 = this->m_hTarget.m_Index;
          v14 = 0;
          if ( v13 + 2 > 1 )
          {
            v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
            if ( v15 != 0 )
            {
              v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
              if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
                v14 = v16->m_pInstance;
            }
          }
          if ( v10 != v14 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::~CDOTA_Ability_SpiritBreaker_EmpoweringHaste  (line 940, @0x0000000002c05b20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::~CDOTA_Ability_SpiritBreaker_EmpoweringHaste(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  this->_vptr_IHandleEntity = &off_4569E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::~CDOTA_Ability_SpiritBreaker_EmpoweringHaste  (line 940, @0x0000000002c05b40, libserver.so)  // inlines: ~CDOTA_Ability_SpiritBreaker_EmpoweringHaste
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::~CDOTA_Ability_SpiritBreaker_EmpoweringHaste(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  this->_vptr_IHandleEntity = &off_4569E50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::Schema_DynamicBinding  (line 942, @0x0000000002c00490, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_EmpoweringHaste::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  return CDOTA_Ability_SpiritBreaker_EmpoweringHaste::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 942, @0x0000000002c004a0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::DestructInstance  (line 942, @0x0000000002c004b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_SpiritBreaker_EmpoweringHaste>
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::FreeInstance  (line 942, @0x0000000002c004d0, libserver.so)
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::CanAllocate  (line 942, @0x0000000002c004f0, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 942, @0x0000000002c00500, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_EmpoweringHaste::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_EmpoweringHaste::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::AllocateInstance  (line 942, @0x0000000002c02b30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::ConstructInstance  (line 942, @0x0000000002c04e80, libserver.so)  // inlines: CDOTA_Ability_SpiritBreaker_EmpoweringHaste, Construct<CDOTA_Ability_SpiritBreaker_EmpoweringHaste>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4569E50;
  }
  return p;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 942, @0x0000000002c0b220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 942, @0x0000000002c0b240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal  (line 942, @0x0000000002c17eb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spirit_breaker_empowering_haste", "CDOTA_Ability_SpiritBreaker_EmpoweringHaste"
// globals: `guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass, CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass, __dso_handle, CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo, CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo
CEntityClass *__cdecl CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass);
    CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass._vptr_CEntityClass = off_4569DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass);
    __cxa_atexit(
      CDOTA_Ability_SpiritBreaker_EmpoweringHaste::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass != 0 )
    return &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass;
  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo,
      "CDOTA_Ability_SpiritBreaker_EmpoweringHaste",
      "spirit_breaker_empowering_haste",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo);
  }
  CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass.m_pClassInfo = &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo;
  CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass.m_pBaseClassInfo = CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass = &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass;
  CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClassInfo.m_pClass = &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass;
  CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_EmpoweringHasteClass;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetIntrinsicModifierName  (line 948, @0x0000000002c00510, libserver.so)
// strings: "modifier_spirit_breaker_empowering_haste_aura"
const char *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetIntrinsicModifierName(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  return "modifier_spirit_breaker_empowering_haste_aura";
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetConceptRecipientType  (line 950, @0x0000000002c00520, libserver.so)
int __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetConceptRecipientType(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  return 3;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::YouForgotToImplementOrDeclareServerClass  (line 958, @0x0000000002bd3d30, libserver.so)
int __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  return 0;
}


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetServerClass  (line 958, @0x0000000002bdc8b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::GetServerClass(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
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


// CDOTA_Ability_SpiritBreaker_EmpoweringHaste::OnSpellStart  (line 967, @0x0000000002bd4fd0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound
// strings: "Hero_Spirit_Breaker.EmpoweringHaste.Cast"
void __fastcall CDOTA_Ability_SpiritBreaker_EmpoweringHaste::OnSpellStart(
        CDOTA_Ability_SpiritBreaker_EmpoweringHaste *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(6, "Hero_Spirit_Breaker.EmpoweringHaste.Cast", Caster);
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura  (line 978, @0x0000000002c03040, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_456A910;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura  (line 978, @0x0000000002c03060, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::~CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_456A910;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::IsHidden  (line 986, @0x0000000002c00530, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::IsHidden(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::IsAura  (line 988, @0x0000000002c00540, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::IsAura(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetModifierAura  (line 989, @0x0000000002c00550, libserver.so)
// strings: "modifier_spirit_breaker_empowering_haste"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetModifierAura(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return "modifier_spirit_breaker_empowering_haste";
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchTeam  (line 991, @0x0000000002c00560, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchTeam(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchType  (line 992, @0x0000000002c00570, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchType(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return 3;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchFlags  (line 993, @0x0000000002c00580, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraSearchFlags(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return 16;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraRadius  (line 994, @0x0000000002c00590, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::GetAuraRadius(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::OnCreated  (line 1005, @0x0000000002beb220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::OnCreated(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::OnRefresh  (line 1012, @0x0000000002beb460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura::OnRefresh(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHasteAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste  (line 1021, @0x0000000002c02ff0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this)
{
  this->_vptr_CDOTA_Buff = &off_456AC30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste  (line 1021, @0x0000000002c03010, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::~CDOTA_Modifier_SpiritBreaker_EmpoweringHaste(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this)
{
  this->_vptr_CDOTA_Buff = &off_456AC30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetEffectName  (line 1028, @0x0000000002c05e20, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetEffectName(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = 0;
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_haste_owner.vpcf";
  return v2;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::OnCreated  (line 1045, @0x0000000002bebf60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed_pct", "bonus_movespeed_pct_extra"
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::OnCreated(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movespeed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_movespeed_pct_extra = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_movespeed_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_movespeed_pct_extra = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v4,
                                      "bonus_movespeed_pct_extra",
                                      -1,
                                      0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "duration", -1, 0);
    return;
  }
LABEL_7:
  this->duration = 0;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::OnRefresh  (line 1054, @0x0000000002bebb50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed_pct", "bonus_movespeed_pct_extra"
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::OnRefresh(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movespeed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_movespeed_pct_extra = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_movespeed_pct = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_movespeed_pct_extra = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v4,
                                      "bonus_movespeed_pct_extra",
                                      -1,
                                      0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "duration", -1, 0);
    return;
  }
LABEL_7:
  this->duration = 0;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::DeclareFunctions  (line 1063, @0x0000000002bd3d40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierUnitStatsNeedsRefresh(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[114].__delta = 0;
  this->m_Functions[114].__pfn = CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierUnitStatsNeedsRefresh;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierUnitStatsNeedsRefresh  (line 1071, @0x0000000002bd3d80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierUnitStatsNeedsRefresh(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierMoveSpeedBonus_Percentage  (line 1078, @0x0000000002bd5e70, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTABaseAbility::GetCooldownTimeRemaining
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_EmpoweringHaste::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SpiritBreaker_EmpoweringHaste *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // r12
  __m128i v5; // xmm3
  __m128i v6; // xmm4
  __m128i v7; // xmm5
  unsigned int v8; // eax
  float v9; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  Ability = CDOTA_Buff::GetAbility(this);
  *&result.m_eType = 1;
  if ( Ability == 0
    || CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
LABEL_4:
    result.m_szVal = 0;
    return result;
  }
  v9 = (*(Ability->_vptr_IHandleEntity + 242))(Ability, 0xFFFFFFFFLL);
  if ( this->duration <= (v9 - CDOTABaseAbility::GetCooldownTimeRemaining(Ability)) )
  {
    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
    {
      *v6.m128i_i32 = this->bonus_movespeed_pct;
      v8 = _mm_cvtsi128_si32(v6);
    }
    else
    {
      *v7.m128i_i32 = (this->bonus_movespeed_pct - this->bonus_movespeed_pct_extra);
      v8 = _mm_cvtsi128_si32(v7);
    }
    *&result.m_eType = (v8 << 32) | 1;
    goto LABEL_4;
  }
  result.m_szVal = 0;
  *v5.m128i_i32 = (this->bonus_movespeed_pct_extra + this->bonus_movespeed_pct);
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::~CDOTA_Ability_SpiritBreaker_NetherStrike  (line 1102, @0x0000000002c05b70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::~CDOTA_Ability_SpiritBreaker_NetherStrike(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  this->_vptr_IHandleEntity = &off_456AF90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::~CDOTA_Ability_SpiritBreaker_NetherStrike  (line 1102, @0x0000000002c05b90, libserver.so)  // inlines: ~CDOTA_Ability_SpiritBreaker_NetherStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::~CDOTA_Ability_SpiritBreaker_NetherStrike(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  this->_vptr_IHandleEntity = &off_456AF90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::Schema_DynamicBinding  (line 1104, @0x0000000002c005a0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_NetherStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  return CDOTA_Ability_SpiritBreaker_NetherStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1104, @0x0000000002c005b0, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::DestructInstance  (line 1104, @0x0000000002c005c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_SpiritBreaker_NetherStrike>
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::FreeInstance  (line 1104, @0x0000000002c005e0, libserver.so)
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::CanAllocate  (line 1104, @0x0000000002c00600, libserver.so)
bool __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1104, @0x0000000002c00610, libserver.so)
// globals: CDOTA_Ability_SpiritBreaker_NetherStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SpiritBreaker_NetherStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::AllocateInstance  (line 1104, @0x0000000002c02b70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::ConstructInstance  (line 1104, @0x0000000002c04eb0, libserver.so)  // inlines: CDOTA_Ability_SpiritBreaker_NetherStrike, Construct<CDOTA_Ability_SpiritBreaker_NetherStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_456AF90;
  }
  return p;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1104, @0x0000000002c0b270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1104, @0x0000000002c0b290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal  (line 1104, @0x0000000002c18000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "spirit_breaker_nether_strike", "CDOTA_Ability_SpiritBreaker_NetherStrike"
// globals: `guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass, CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass, __dso_handle, CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo, CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass);
    CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass._vptr_CEntityClass = off_456AF10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_SpiritBreaker_NetherStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass != 0 )
    return &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass;
  if ( `guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo,
      "CDOTA_Ability_SpiritBreaker_NetherStrike",
      "spirit_breaker_nether_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo);
  }
  CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass.m_pClassInfo = &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo;
  CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass.m_pBaseClassInfo = CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass = &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass;
  CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClassInfo.m_pClass = &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass;
  CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SpiritBreaker_NetherStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SpiritBreaker_NetherStrikeClass;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetStolenActivityModifier  (line 1115, @0x0000000002c00620, libserver.so)
const char *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetStolenActivityModifier(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  return "strike";
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetAssociatedSecondaryAbilities  (line 1117, @0x0000000002c00630, libserver.so)
// strings: "spirit_breaker_greater_bash"
const char *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  return "spirit_breaker_greater_bash";
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::YouForgotToImplementOrDeclareServerClass  (line 1127, @0x0000000002bd3da0, libserver.so)
int __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  return 0;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetServerClass  (line 1127, @0x0000000002bdc6f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetServerClass(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
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


// CDOTA_Ability_SpiritBreaker_NetherStrike::OnSpellStart  (line 1136, @0x0000000002beee60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_spirit_breaker_nether_strike"
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::OnSpellStart(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv_invis; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_spirit_breaker_nether_strike");
    KeyValues::SetFloat(&kv, "duration", v4);
    KeyValues::SetPtr(&kv, "target", v3);
    KeyValues::KeyValues(&kv_invis, "modifier_spirit_breaker_nether_strike");
    KeyValues::SetFloat(&kv_invis, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, Caster, this, "modifier_spirit_breaker_nether_strike", &kv, 0);
    KeyValues::~KeyValues(&kv_invis);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::OnAbilityPhaseStart  (line 1159, @0x0000000002bd4ff0, libserver.so)  // inlines: GetAbilityData, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound, CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail, _Unwind_Resume
// strings: "Hero_Spirit_Breaker.NetherStrike.Begin", "modifier_spirit_breaker_nether_strike_vision"
bool __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::OnAbilityPhaseStart(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Spirit_Breaker.NetherStrike.Begin", Caster);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_spirit_breaker_nether_strike_vision");
    (*(this->_vptr_IHandleEntity + 232))(this);
    KeyValues::SetFloat(&kv, "duration", v5);
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v6, this, "modifier_spirit_breaker_nether_strike_vision", &kv, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v9 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v11,
      1,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      -1.0,
      v12);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::OnAbilityPhaseInterrupted  (line 1180, @0x0000000002bd56b0, libserver.so)  // inlines: GetAbilityData, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, CDOTABaseAbility::GetCursorTarget, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTA_BaseNPC::RemoveModifierByName, CDOTABaseAbility::LoadAbilityData
// strings: "Hero_Spirit_Breaker.NetherStrike.Begin", "modifier_spirit_breaker_nether_strike_vision"
void __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::OnAbilityPhaseInterrupted(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *CursorTarget; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Spirit_Breaker.NetherStrike.Begin");
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::RemoveModifierByName(CursorTarget, "modifier_spirit_breaker_nether_strike_vision");
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0 )
      goto LABEL_4;
LABEL_6:
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    goto LABEL_4;
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
    goto LABEL_6;
LABEL_4:
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v6, m_iAbilityID);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetCooldown  (line 1198, @0x0000000002beff40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetCooldown(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetCastRange  (line 1208, @0x0000000002be97e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetCastRange(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_SpiritBreaker_NetherStrike::GetAbilityDamageToTargetOverInterval  (line 1218, @0x0000000002be9840, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_SpiritBreaker_NetherStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_SpiritBreaker_NetherStrike *const this,
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


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision  (line 1230, @0x0000000002c02fa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_456BA50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision  (line 1230, @0x0000000002c02fc0, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::~CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  this->_vptr_CDOTA_Buff = &off_456BA50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::IsDebuff  (line 1234, @0x0000000002c00640, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::IsDebuff(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::IsHidden  (line 1235, @0x0000000002c00650, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::IsHidden(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  return 1;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetPriority  (line 1236, @0x0000000002c00660, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetPriority(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  return 2;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::DeclareFunctions  (line 1248, @0x0000000002bd3db0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::DeclareFunctions(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetModifierProvidesFOWVision  (line 1255, @0x0000000002bd9d80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision::GetModifierProvidesFOWVision(
        CDOTA_Modifier_SpiritBreaker_NetherStrike_Vision *const this,
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


// CDOTA_Modifier_SpiritBreaker_NetherStrike::~CDOTA_Modifier_SpiritBreaker_NetherStrike  (line 1267, @0x0000000002c02f50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::~CDOTA_Modifier_SpiritBreaker_NetherStrike(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_456BD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::~CDOTA_Modifier_SpiritBreaker_NetherStrike  (line 1267, @0x0000000002c02f70, libserver.so)  // inlines: ~CDOTA_Modifier_SpiritBreaker_NetherStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::~CDOTA_Modifier_SpiritBreaker_NetherStrike(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_456BD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::IsPurgable  (line 1272, @0x0000000002c00670, libserver.so)
bool __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::IsPurgable(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  return 0;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::GetHeroEffectName  (line 1277, @0x0000000002c00680, libserver.so)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::GetHeroEffectName(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  return "particles/units/heroes/hero_spirit_breaker/spirit_breaker_hero_effect.vpcf";
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::HeroEffectPriority  (line 1278, @0x0000000002c00690, libserver.so)
int __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::HeroEffectPriority(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  return 100;
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::GetEffectName  (line 1280, @0x0000000002c006a0, libserver.so)
// strings: "particles/generic_hero_status/status_invisibility_start.vpcf"
const char *__fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::GetEffectName(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  return "particles/generic_hero_status/status_invisibility_start.vpcf";
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::OnCreated  (line 1297, @0x0000000002be6ad0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, KeyValues::GetPtr, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "bash_radius_scepter", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_begin.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::OnCreated(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  _QWORD *Ptr; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  const Vector *v17; // r13
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  uint32 m_Index; // eax
  const CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  const CBaseAnimating *v24; // r14
  const Vector *v25; // r13
  uint32 v26; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bash_radius_scepter, "bash_radius_scepter");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage, "damage");
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vCastLocation = *CBaseEntity::GetAbsOrigin(Caster);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v8 = Ptr[1]) != 0 )
  {
    v9 = (*(v8 + 16) >> 15) - (*(v8 + 48) & 1);
    if ( *(v8 + 16) == -1 )
      v10 = 0x7FFF;
    else
      v10 = *(v8 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v10 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v9 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_begin.vpcf",
               2,
               0,
               0,
               0);
  v13 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = CBaseEntity::GetAbsOrigin(v16);
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Particle, 1, v18, 5, "attach_hitloc", *v17, 1);
  m_Index = this->m_hTarget.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v22 != 0 )
    {
      v23 = &v22[this->m_hTarget.m_Index & 0x1FF];
      if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
        m_pInstance = v23->m_pInstance;
    }
  }
  v24 = 0;
  v25 = CBaseEntity::GetAbsOrigin(m_pInstance);
  v26 = this->m_hTarget.m_Index;
  if ( v26 + 2 > 1 )
  {
    v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v27 != 0 )
    {
      v28 = &v27[this->m_hTarget.m_Index & 0x1FF];
      if ( v28 != 0 && v26 == v28->m_EHandle.m_Index )
        v24 = v28->m_pInstance;
    }
  }
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, Particle, 2, v24, 1, 0, *v25, 1);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v30, Particle);
}


// CDOTA_Modifier_SpiritBreaker_NetherStrike::OnDestroy  (line 1316, @0x0000000002bfbdb0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Reset, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, VectorAngles, FindClearSpaceForUnit, CDOTA_BaseNPC::FindModifierByName (30 total)
// strings: "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_start.vpcf", "attach_hitloc", "modifier_spirit_breaker_greater_bash", "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_end.vpcf", "Hero_Spirit_Breaker.NetherStrike.End", "modifier_spirit_breaker_special_attack"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_SpiritBreaker_NetherStrike::OnDestroy(
        CDOTA_Modifier_SpiritBreaker_NetherStrike *const this)
{
  const CBaseEntity *v2; // rax
  const Vector *AbsOrigin; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v6; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  float v10; // xmm0_4
  float v11; // ebx
  float v12; // r12d
  const Vector *v13; // rax
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rbx
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rbx
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  __m128i v29; // xmm6
  float v30; // ebx
  CDOTA_BaseNPC *v31; // rax
  __int64 v32; // r12
  int v33; // ebx
  CHandle<CBaseEntity> *v34; // rdx
  uint32 m_Index; // eax
  __int16 v36; // cx
  CEntityIdentity *v37; // rdx
  CEntityIdentity *v38; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v40; // r15
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  const Vector *v43; // r15
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTABaseAbility *v46; // rbx
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rbx
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  vec_t v53; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v55; // rax
  CEntityIndex v56; // eax
  __int64 m_pMemory_low; // rbx
  int32 m_Data; // r13d
  int m_pMemory; // eax
  int32 *v60; // rax
  float v61; // xmm1_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v63; // r15
  CDOTA_BaseNPC *v64; // rax
  int nFXIndex; // [rsp+2Ch] [rbp-D4h]
  float pBashBuffa; // [rsp+30h] [rbp-D0h]
  float pBashBuffb; // [rsp+30h] [rbp-D0h]
  CDOTA_Modifier_SpiritBreaker_GreaterBash *pBashBuff; // [rsp+30h] [rbp-D0h]
  float pBashBuffc; // [rsp+30h] [rbp-D0h]
  CBaseEntity *v70; // [rsp+38h] [rbp-C8h]
  Vector vToTarget; // [rsp+40h] [rbp-C0h] BYREF
  Vector vTeleportTarget; // [rsp+50h] [rbp-B0h] BYREF
  QAngle faceTargetAngles; // [rsp+60h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+70h] [rbp-90h] BYREF
  int v75; // [rsp+88h] [rbp-78h]
  int v76; // [rsp+8Ch] [rbp-74h]
  int v77; // [rsp+90h] [rbp-70h]
  CEntityIndex v78; // [rsp+94h] [rbp-6Ch]
  int v79; // [rsp+98h] [rbp-68h]
  vec_t v80; // [rsp+9Ch] [rbp-64h]
  vec_t v81; // [rsp+A0h] [rbp-60h]
  vec_t v82; // [rsp+A4h] [rbp-5Ch]
  char v83; // [rsp+A8h] [rbp-58h]
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v85; // [rsp+C8h] [rbp-38h]

  v85 = __readfsqword(0x28u);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v70 = v2;
  if ( v2 != 0 && v2->m_bIsDOTANPC )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    vToTarget.z = 0.0;
    v6 = y - this->m_vCastLocation.y;
    vToTarget.x = x - this->m_vCastLocation.x;
    vToTarget.y = v6;
    VectorNormalize(&vToTarget);
    pBashBuffa = *&v70[2].m_bNetworkQuantizeOriginAndAngles + v70[2].m_flOverriddenFriction;
    Caster = CDOTA_Buff::GetCaster(this);
    x_low = LODWORD(vToTarget.x);
    y_low = LODWORD(vToTarget.y);
    v10 = (Caster->m_flHullRadius + Caster->m_flCollisionPadding) + pBashBuffa;
    *x_low.m128i_i32 = vToTarget.x * v10;
    *y_low.m128i_i32 = vToTarget.y * v10;
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    pBashBuffb = v10 * vToTarget.z;
    v13 = CBaseEntity::GetAbsOrigin(v70);
    v14 = v12 + v13->y;
    v15 = pBashBuffb + v13->z;
    vTeleportTarget.x = v11 + v13->x;
    vTeleportTarget.y = v14;
    vTeleportTarget.z = v15;
    ParticleManager = GetParticleManager();
    nFXIndex = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_start.vpcf",
                 2,
                 0,
                 0,
                 0);
    v17 = CDOTA_Buff::GetCaster(this);
    v18 = CBaseEntity::GetAbsOrigin(v17);
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v19, nFXIndex, 0, *&v18->x, v18->z);
    v20 = CDOTA_Buff::GetCaster(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    v22 = CDOTA_Buff::GetCaster(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, nFXIndex, 1, v22, 5, "attach_hitloc", *v21, 1);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, nFXIndex);
    *&hUnits.m_Memory.m_pMemory = -vToTarget.z;
    *(&hUnits.m_Size + 1) = -vToTarget.y;
    *&hUnits.m_Size = -vToTarget.x;
    VectorAngles(&hUnits, &faceTargetAngles);
    v25 = CDOTA_Buff::GetCaster(this);
    (*(v25->_vptr_IHandleEntity + 128))(v25, &vTeleportTarget, &faceTargetAngles, 0);
    v26 = CDOTA_Buff::GetCaster(this);
    FindClearSpaceForUnit(v26, vTeleportTarget, 0);
    if ( LOBYTE(v70[4].m_pfnMoveDone.__pfn) == 0 && (BYTE1(v70[3].m_vecVelocity.m_Value.x) & 1) == 0 )
    {
      v27 = CDOTA_Buff::GetCaster(this);
      pBashBuff = CDOTA_BaseNPC::FindModifierByName(v27, "modifier_spirit_breaker_greater_bash", 0);
      if ( CDOTA_Buff::GetCaster(this)->m_PseudoQueuedOrders.m_nOrderType == 0
        && (*(v70->_vptr_IHandleEntity + 408))(v70) != 0 )
      {
        v52 = CDOTA_Buff::GetCaster(this);
        if ( (*(v52->_vptr_IHandleEntity + 408))(v52) != 0 )
        {
          v83 = 0;
          LODWORD(hUnits.m_Memory.m_pMemory) = 0;
          *&hUnits.m_Memory.m_nAllocationCount = 0;
          v75 = 0;
          v76 = 0;
          *(&hUnits.m_Size + 1) = 0;
          v80 = vec3_origin.x;
          v53 = vec3_origin.y;
          hUnits.m_Size = -1;
          v81 = v53;
          z = vec3_origin.z;
          v77 = 0;
          v78.m_Data = 0;
          v82 = z;
          v79 = 0;
          v55 = CDOTA_Buff::GetCaster(this);
          v56.m_Data = CEntityInstance::GetEntityIndex(v55).m_Data;
          m_pMemory_low = SLODWORD(hUnits.m_Memory.m_pMemory);
          m_Data = v56.m_Data;
          m_pMemory = hUnits.m_Memory.m_pMemory;
          if ( LODWORD(hUnits.m_Memory.m_pMemory) == v75 )
          {
            CUtlMemory<CEntityIndex,int>::Grow(&hUnits.m_Memory.m_nAllocationCount, 1);
            m_pMemory = hUnits.m_Memory.m_pMemory;
          }
          LODWORD(hUnits.m_Memory.m_pMemory) = m_pMemory + 1;
          v60 = (*&hUnits.m_Memory.m_nAllocationCount + 4 * m_pMemory_low);
          if ( v60 != 0 )
            *v60 = m_Data;
          v77 = 4;
          v78.m_Data = CEntityInstance::GetEntityIndex(v70).m_Data;
          DOTA_ExecuteOrders(&hUnits, 0, 0, 0);
          KeyValues::KeyValues(&kv, "modifier_spirit_breaker_special_attack");
          KeyValues::SetFloat(&kv, "duration", v61);
          KeyValues::SetPtr(&kv, "target", v70);
          Ability = CDOTA_Buff::GetAbility(this);
          v63 = CDOTA_Buff::GetCaster(this);
          v64 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v64, v63, Ability, "modifier_spirit_breaker_special_attack", &kv, 0);
          KeyValues::~KeyValues(&kv);
          CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&hUnits.m_Memory);
        }
      }
      if ( pBashBuff != 0 )
      {
        v28 = CDOTA_Buff::GetCaster(this);
        if ( CDOTA_BaseNPC::HasScepter(v28) )
        {
          *v29.m128i_i32 = this->bash_radius_scepter;
          hUnits.m_Size = 0;
          hUnits.m_Memory.m_pMemory = 0;
          hUnits.m_Memory.m_nAllocationCount = 0;
          hUnits.m_Memory.m_nGrowSize = 0;
          v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
          v31 = CDOTA_Buff::GetCaster(this);
          FindUnitsInRadius(v31->m_iTeamNum.m_Value, &vTeleportTarget, v70, v30, &hUnits, 2, 19, 16, 0, 0);
          if ( hUnits.m_Size > 0 )
          {
            v32 = 0;
            v33 = 0;
            do
            {
              while ( 1 )
              {
                v34 = &hUnits.m_Memory.m_pMemory[v32];
                m_Index = hUnits.m_Memory.m_pMemory[v32].m_Index;
                if ( m_Index + 2 > 1 )
                {
                  v36 = v34->m_Index;
                  v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v34->m_Index) >> 9) & 0x3F];
                  if ( v37 != 0 )
                  {
                    v38 = &v37[v36 & 0x1FF];
                    if ( v38 != 0 && m_Index == v38->m_EHandle.m_Index )
                    {
                      m_pInstance = v38->m_pInstance;
                      if ( v38->m_pInstance != 0
                        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                        && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                        && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
                      {
                        break;
                      }
                    }
                  }
                }
                ++v33;
                ++v32;
                if ( hUnits.m_Size <= v33 )
                  goto LABEL_20;
              }
              v40 = CDOTA_Buff::GetCaster(this);
              v41 = GetParticleManager();
              LODWORD(v40) = CDOTA_ParticleManager::CreateParticle(
                               v41,
                               "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_end.vpcf",
                               1,
                               v40,
                               0,
                               0);
              v42 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v42, v40);
              v43 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v44 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v44, nFXIndex, 2, *&v43->x, v43->z);
              CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(pBashBuff, m_pInstance);
              v45 = CDOTA_Buff::GetCaster(this);
              DOTA_EmitSound(2, "Hero_Spirit_Breaker.NetherStrike.End", v45);
              ++v33;
              ++v32;
            }
            while ( hUnits.m_Size > v33 );
          }
LABEL_20:
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
        }
        else
        {
          v48 = CDOTA_Buff::GetCaster(this);
          v49 = GetParticleManager();
          LODWORD(v48) = CDOTA_ParticleManager::CreateParticle(
                           v49,
                           "particles/units/heroes/hero_spirit_breaker/spirit_breaker_nether_strike_end.vpcf",
                           1,
                           v48,
                           0,
                           0);
          v50 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v50, v48);
          CDOTA_Modifier_SpiritBreaker_GreaterBash::DoBash(pBashBuff, v70);
          v51 = CDOTA_Buff::GetCaster(this);
          DOTA_EmitSound(10, "Hero_Spirit_Breaker.NetherStrike.End", v51);
        }
      }
      pBashBuffc = this->damage;
      v46 = CDOTA_Buff::GetAbility(this);
      v47 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v47, v70, v46, pBashBuffc, 2, 0);
    }
  }
}


