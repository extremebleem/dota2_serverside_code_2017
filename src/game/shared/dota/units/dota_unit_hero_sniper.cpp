// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:43
class CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:123
class CDOTA_Unit_Hero_Sniper : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Sniper(CDOTA_Unit_Hero_Sniper &);
	CDOTA_Unit_Hero_Sniper(CDOTA_Unit_Hero_Sniper &);
	CDOTA_Unit_Hero_Sniper();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void CalculateActivityModifiers(Activity);
	virtual void UpgradeAbility(CDOTABaseAbility *);
	virtual ~CDOTA_Unit_Hero_Sniper();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[442] CalculateActivityModifiers
	// vtable[495] UpgradeAbility
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:170
class C_CDOTA_Unit_Hero_Sniper_MapInstall {
	C_CDOTA_Unit_Hero_Sniper_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:185
class CDOTA_Ability_Sniper_Shrapnel : public CDOTABaseAbility {
public:

private:

	float charge_restore_time;  // +0x390
	int max_charges;  // +0x394
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
	CDOTA_Ability_Sniper_Shrapnel(CDOTA_Ability_Sniper_Shrapnel &);
	CDOTA_Ability_Sniper_Shrapnel(CDOTA_Ability_Sniper_Shrapnel &);
	CDOTA_Ability_Sniper_Shrapnel();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool IsRefreshable();
	virtual void RefreshCharges();
	virtual const char * GetStolenActivityModifier();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual void OnUnStolen();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Sniper_Shrapnel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[258] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[217] IsRefreshable
	// vtable[318] RefreshCharges
	// vtable[310] GetStolenActivityModifier
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[308] OnUnStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:227
class C_CDOTA_Ability_Sniper_Shrapnel_MapInstall {
	C_CDOTA_Ability_Sniper_Shrapnel_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:425
class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	bool m_bExploded;  // +0xbac
	CDOTA_Modifier_Sniper_Shrapnel_Thinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Sniper_Shrapnel_Thinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:513
class CDOTA_Modifier_Sniper_Shrapnel_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	int shrapnel_damage;  // +0xbac
	CDOTA_Modifier_Sniper_Shrapnel_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sniper_Shrapnel_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:585
class CDOTA_Ability_Sniper_Headshot : public CDOTABaseAbility {
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
	CDOTA_Ability_Sniper_Headshot(CDOTA_Ability_Sniper_Headshot &);
	CDOTA_Ability_Sniper_Headshot(CDOTA_Ability_Sniper_Headshot &);
	CDOTA_Ability_Sniper_Headshot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool HasMinistunOnAttack();
	virtual ~CDOTA_Ability_Sniper_Headshot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[324] HasMinistunOnAttack
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:601
class CDOTA_Modifier_Sniper_Headshot : public CDOTA_Buff {
public:

private:

	int proc_chance;  // +0xba8
	float slow_duration;  // +0xbac
	CDOTA_Modifier_Sniper_Headshot();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sniper_Headshot();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttack
	// vtable[90] OnAttackFail
	// vtable[91] GetModifierProcAttack_BonusDamage_Physical
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:738
class CDOTA_Modifier_Sniper_Headshot_Slow : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Sniper_Headshot_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sniper_Headshot_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:792
class CDOTA_Ability_Sniper_TakeAim : public CDOTABaseAbility {
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
	CDOTA_Ability_Sniper_TakeAim(CDOTA_Ability_Sniper_TakeAim &);
	CDOTA_Ability_Sniper_TakeAim(CDOTA_Ability_Sniper_TakeAim &);
	CDOTA_Ability_Sniper_TakeAim();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Sniper_TakeAim();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:806
class CDOTA_Modifier_Sniper_TakeAim : public CDOTA_Buff {
public:

private:

	int bonus_attack_range;  // +0xba8
	CDOTA_Modifier_Sniper_TakeAim();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sniper_TakeAim();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierAttackRangeBonus
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:863
class CDOTA_Ability_Sniper_Assassinate : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hTarget;  // +0x398
	int m_iIndex;  // +0x39c
	int scepter_radius;  // +0x3a0
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
	CDOTA_Ability_Sniper_Assassinate(CDOTA_Ability_Sniper_Assassinate &);
	CDOTA_Ability_Sniper_Assassinate(CDOTA_Ability_Sniper_Assassinate &);
	CDOTA_Ability_Sniper_Assassinate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual const char * GetStolenActivityModifier();
	virtual int GetBehavior();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual int GetCurrentAbilityDamageType();
	virtual ~CDOTA_Ability_Sniper_Assassinate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[300] SpeakTrigger
	// vtable[310] GetStolenActivityModifier
	// vtable[251] GetBehavior
	// vtable[256] CastFilterResult
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[253] GetCurrentAbilityDamageType
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:903
class C_CDOTA_Ability_Sniper_Assassinate_MapInstall {
	C_CDOTA_Ability_Sniper_Assassinate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:1187
class CDOTA_Modifier_Sniper_Assassinate_Caster : public CDOTA_Buff {
public:

private:

	int scepter_crit_bonus;  // +0xba8
	CDOTA_Modifier_Sniper_Assassinate_Caster();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sniper_Assassinate_Caster();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sniper.cpp:1234
class CDOTA_Modifier_Sniper_Assassinate : public CDOTA_Buff {
public:

	CDOTA_Modifier_Sniper_Assassinate();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Sniper_Assassinate();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[68] GetEffectAttachType
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter  (line 43, @0x0000000002ac0c40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4424410;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter  (line 43, @0x0000000002ac0c60, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::~CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4424410;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsHidden  (line 48, @0x0000000002abafa0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsHidden(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsPurgable  (line 49, @0x0000000002abafb0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsPermanent  (line 50, @0x0000000002abafc0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::DestroyOnExpire  (line 51, @0x0000000002abafd0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::OnCreated  (line 72, @0x0000000002aaad40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::OnCreated(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this,
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


// CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::OnIntervalThink  (line 83, @0x0000000002aac800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "max_charges", "special_bonus_unique_sniper_2"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const this)
{
  CDOTABaseAbility *Ability; // rax
  int LevelSpecialValue; // eax
  int v4; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm1_4
  void (__fastcall *v8)(CDOTA_Modifier_Sniper_Shrapnel_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *v9; // rax
  float v10; // xmm0_4
  CDOTABaseAbility *v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v15; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
    this->max_charges = LevelSpecialValue;
    v4 = LevelSpecialValue;
  }
  else
  {
    this->max_charges = 0;
    v4 = 0;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sniper_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v4 += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  if ( v4 <= (*(this->_vptr_CDOTA_Buff + 27))(this)
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), v4 == (*(this->_vptr_CDOTA_Buff + 27))(this)) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v7);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v8 = *(this->_vptr_CDOTA_Buff + 63);
    v9 = CDOTA_Buff::GetAbility(this);
    v10 = (*(v9->_vptr_IHandleEntity + 243))(v9, 0xFFFFFFFFLL);
    v8(this, 1, v10 * charge_restore_time);
    v15 = this->charge_restore_time;
    v11 = CDOTA_Buff::GetAbility(this);
    v12 = (*(v11->_vptr_IHandleEntity + 243))(v11, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v12 * v15, v13);
  }
}


// CDOTA_Unit_Hero_Sniper::~CDOTA_Unit_Hero_Sniper  (line 123, @0x0000000002ac6c10, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Sniper::~CDOTA_Unit_Hero_Sniper(CDOTA_Unit_Hero_Sniper *const this)
{
  this->_vptr_IHandleEntity = &off_4424770;
  this->_vptr_INextBotEventResponder = &off_4425750;
  this->_vptr_CObstructionObject = &off_4425A80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Sniper::~CDOTA_Unit_Hero_Sniper  (line 123, @0x0000000002ac6c50, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Sniper
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Sniper::~CDOTA_Unit_Hero_Sniper(CDOTA_Unit_Hero_Sniper *const this)
{
  this->_vptr_IHandleEntity = &off_4424770;
  this->_vptr_INextBotEventResponder = &off_4425750;
  this->_vptr_CObstructionObject = &off_4425A80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Sniper::Schema_DynamicBinding  (line 125, @0x0000000002abafe0, libserver.so)
// globals: CDOTA_Unit_Hero_Sniper::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Sniper::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Sniper *const this)
{
  return CDOTA_Unit_Hero_Sniper::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 125, @0x0000000002abb010, libserver.so)
// globals: CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::DestructInstance  (line 125, @0x0000000002abb020, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Sniper>
void __fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::FreeInstance  (line 125, @0x0000000002abb040, libserver.so)
void __fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::CanAllocate  (line 125, @0x0000000002abb060, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 125, @0x0000000002abb070, libserver.so)
// globals: CDOTA_Unit_Hero_Sniper::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Sniper::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::AllocateInstance  (line 125, @0x0000000002abf800, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::ConstructInstance  (line 125, @0x0000000002ac4b30, libserver.so)  // inlines: CDOTA_Unit_Hero_Sniper, Construct<CDOTA_Unit_Hero_Sniper>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4424770;
    *(p + 236) = &off_4425750;
    *(p + 257) = &off_4425A80;
  }
  return p;
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x0000000002acd0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x0000000002acd320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Sniper::GetEntityClassInternal  (line 125, @0x0000000002ae2630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_sniper", "CDOTA_Unit_Hero_Sniper"
// globals: `guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass, CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass, __dso_handle, CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo, CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Sniper::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass);
    CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass._vptr_CEntityClass = off_44246F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Sniper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SniperClass != 0 )
    return &CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo,
      "CDOTA_Unit_Hero_Sniper",
      "npc_dota_hero_sniper",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo);
  }
  CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass.m_pClassInfo = &CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo;
  CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SniperClass = &CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass;
  CDOTA_Unit_Hero_Sniper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SniperClassInfo.m_pClass = &CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass;
  CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SniperClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Sniper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SniperClass;
}


// CDOTA_Unit_Hero_Sniper::CalculateActivityModifiers  (line 129, @0x0000000002ac6f40, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_Sniper::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Sniper *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 486.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 376.0 && v3 <= 486.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 266.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
}


// CDOTA_Unit_Hero_Sniper::UpgradeAbility  (line 150, @0x0000000002ae6730, libserver.so)  // inlines: FStrEq, GetAbilityName, _V_strcmp
// calls: CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_sniper_2", "modifier_sniper_shrapnel_charge_counter"
void __fastcall CDOTA_Unit_Hero_Sniper::UpgradeAbility(CDOTA_Unit_Hero_Sniper *const this, CDOTABaseAbility *pAbility)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  CDOTA_Buff *ModifierByName; // r12
  int LevelSpecialValue; // ebx
  void (__fastcall *v8)(CDOTA_Buff *, _QWORD); // r13
  int v9; // eax

  CDOTA_BaseNPC_Hero::UpgradeAbility(this, pAbility);
  m_pAbilityData = pAbility->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pAbilityData->m_pszAbilityName != 0
      && (m_pszAbilityName == "special_bonus_unique_sniper_2"
       || strcmp(m_pszAbilityName, "special_bonus_unique_sniper_2") == 0) )
    {
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_sniper_shrapnel_charge_counter", 0);
      if ( ModifierByName != 0 )
      {
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(pAbility, "value", 1, 1);
        v8 = *(ModifierByName->_vptr_CDOTA_Buff + 28);
        v9 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
        v8(ModifierByName, (LevelSpecialValue + v9));
      }
    }
  }
}


// CDOTA_Unit_Hero_Sniper::YouForgotToImplementOrDeclareServerClass  (line 170, @0x0000000002a78be0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Sniper::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Sniper *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Sniper::GetServerClass  (line 170, @0x0000000002a89c30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Sniper::GetServerClass(CDOTA_Unit_Hero_Sniper *const this)
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


// CDOTA_Ability_Sniper_Shrapnel::~CDOTA_Ability_Sniper_Shrapnel  (line 185, @0x0000000002ac5f70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sniper_Shrapnel::~CDOTA_Ability_Sniper_Shrapnel(
        CDOTA_Ability_Sniper_Shrapnel *const this)
{
  this->_vptr_IHandleEntity = &off_4425B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sniper_Shrapnel::~CDOTA_Ability_Sniper_Shrapnel  (line 185, @0x0000000002ac5f90, libserver.so)  // inlines: ~CDOTA_Ability_Sniper_Shrapnel
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sniper_Shrapnel::~CDOTA_Ability_Sniper_Shrapnel(
        CDOTA_Ability_Sniper_Shrapnel *const this)
{
  this->_vptr_IHandleEntity = &off_4425B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sniper_Shrapnel::Schema_DynamicBinding  (line 187, @0x0000000002abb080, libserver.so)
// globals: CDOTA_Ability_Sniper_Shrapnel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Shrapnel::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return CDOTA_Ability_Sniper_Shrapnel::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 187, @0x0000000002abb090, libserver.so)
// globals: CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::DestructInstance  (line 187, @0x0000000002abb0a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sniper_Shrapnel>
void __fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::FreeInstance  (line 187, @0x0000000002abb0c0, libserver.so)
void __fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::CanAllocate  (line 187, @0x0000000002abb0e0, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 187, @0x0000000002abb0f0, libserver.so)
// globals: CDOTA_Ability_Sniper_Shrapnel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Shrapnel::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::AllocateInstance  (line 187, @0x0000000002abf840, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::ConstructInstance  (line 187, @0x0000000002ac3090, libserver.so)  // inlines: CDOTA_Ability_Sniper_Shrapnel, Construct<CDOTA_Ability_Sniper_Shrapnel>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4425B50;
  }
  return p;
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 187, @0x0000000002acc970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 187, @0x0000000002acc990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal  (line 187, @0x0000000002ae2780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "sniper_shrapnel", "CDOTA_Ability_Sniper_Shrapnel"
// globals: `guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass, CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass, __dso_handle, CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo, CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass);
    CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass._vptr_CEntityClass = off_4425AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass);
    __cxa_atexit(
      CDOTA_Ability_Sniper_Shrapnel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sniper_ShrapnelClass != 0 )
    return &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass;
  if ( `guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo,
      "CDOTA_Ability_Sniper_Shrapnel",
      "sniper_shrapnel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo);
  }
  CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass.m_pClassInfo = &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo;
  CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass.m_pBaseClassInfo = CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sniper_ShrapnelClass = &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass;
  CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClassInfo.m_pClass = &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass;
  CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sniper_ShrapnelClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sniper_Shrapnel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_ShrapnelClass;
}


// CDOTA_Ability_Sniper_Shrapnel::IsRefreshable  (line 204, @0x0000000002abb100, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Shrapnel::IsRefreshable(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return 0;
}


// CDOTA_Ability_Sniper_Shrapnel::GetStolenActivityModifier  (line 209, @0x0000000002abb110, libserver.so)
const char *__fastcall CDOTA_Ability_Sniper_Shrapnel::GetStolenActivityModifier(
        CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return "shrapnel";
}


// CDOTA_Ability_Sniper_Shrapnel::ShouldSpeakAbilityConcept  (line 213, @0x0000000002abb120, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Shrapnel::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Sniper_Shrapnel *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Sniper_Shrapnel::GetAssociatedSecondaryAbilities  (line 219, @0x0000000002abb130, libserver.so)
// strings: "special_bonus_unique_sniper_2"
const char *__fastcall CDOTA_Ability_Sniper_Shrapnel::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return "special_bonus_unique_sniper_2";
}


// CDOTA_Ability_Sniper_Shrapnel::YouForgotToImplementOrDeclareServerClass  (line 227, @0x0000000002a78bf0, libserver.so)
int __fastcall CDOTA_Ability_Sniper_Shrapnel::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return 0;
}


// CDOTA_Ability_Sniper_Shrapnel::GetServerClass  (line 227, @0x0000000002a89a30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Sniper_Shrapnel::GetServerClass(CDOTA_Ability_Sniper_Shrapnel *const this)
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


// CDOTA_Ability_Sniper_Shrapnel::CastFilterResult  (line 237, @0x0000000002a79850, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_sniper_shrapnel_charge_counter"
int __fastcall CDOTA_Ability_Sniper_Shrapnel::CastFilterResult(
        CDOTA_Ability_Sniper_Shrapnel *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rdi
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_sniper_shrapnel_charge_counter", 0);
  result = 0;
  if ( ModifierByName != 0 )
    return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 ? 0x17 : 0;
  return result;
}


// CDOTA_Ability_Sniper_Shrapnel::OnUnStolen  (line 254, @0x0000000002a7ade0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_sniper_shrapnel_charge_counter"
void __fastcall CDOTA_Ability_Sniper_Shrapnel::OnUnStolen(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_sniper_shrapnel_charge_counter");
}


// CDOTA_Ability_Sniper_Shrapnel::GetCustomCastError  (line 265, @0x0000000002a78c00, libserver.so)
// strings: "dota_hud_error_shrapnel_no_charges"
const char *__fastcall CDOTA_Ability_Sniper_Shrapnel::GetCustomCastError(
        CDOTA_Ability_Sniper_Shrapnel *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "dota_hud_error_shrapnel_no_charges";
}


// CDOTA_Ability_Sniper_Shrapnel::RefreshCharges  (line 273, @0x0000000002aa26a0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName
// strings: "max_charges", "special_bonus_unique_sniper_2", "modifier_sniper_shrapnel_charge_counter"
void __fastcall CDOTA_Ability_Sniper_Shrapnel::RefreshCharges(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  int LevelSpecialValue; // eax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // rax

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  this->max_charges = LevelSpecialValue;
  v3 = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sniper_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v3 += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_sniper_shrapnel_charge_counter", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, v3);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Ability_Sniper_Shrapnel::OnSpellStart  (line 295, @0x0000000002aa6d50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, GetInt, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, Purge, QueueConcept, SetThinking, VectorAdd, operator+, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::UnitEmitSound, DOTA_EmitSoundLocationWithCaster, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager (29 total)
// strings: "charge_restore_time", "modifier_sniper_shrapnel_thinker", "Hero_Sniper.ShrapnelShoot", "Hero_Sniper.ShrapnelShatter", "particles/units/heroes/hero_sniper/sniper_shrapnel_launch.vpcf", "attach_attack1" (10 total)
void __fastcall CDOTA_Ability_Sniper_Shrapnel::OnSpellStart(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  float v2; // xmm1_4
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v17; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v19; // r14
  float v20; // xmm0_4
  float v21; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v23; // xmm0_4
  int radius; // [rsp+24h] [rbp-DCh]
  int radiusa; // [rsp+24h] [rbp-DCh]
  CDOTA_BaseNPC *duration; // [rsp+28h] [rbp-D8h]
  float durationa; // [rsp+28h] [rbp-D8h]
  int (*durationb)(...); // [rsp+28h] [rbp-D8h]
  void (__fastcall *durationc)(CDOTA_Ability_Sniper_Shrapnel *const); // [rsp+28h] [rbp-D8h]
  double v30; // [rsp+40h] [rbp-C0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+70h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+C8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v36; // 0:kr20_12.12

  v34 = __readfsqword(0x28u);
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_delay", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_sniper_shrapnel_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_sniper_shrapnel_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Sniper.ShrapnelShoot", 0.0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocationWithCaster(&criteria, "Hero_Sniper.ShrapnelShatter", v6);
  LODWORD(v6) = CDOTABaseAbility::CreateAbilityParticleEffect(
                  this,
                  "particles/units/heroes/hero_sniper/sniper_shrapnel_launch.vpcf",
                  2,
                  0,
                  0);
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  duration = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, v6, 0, duration, 5, "attach_attack1", *AbsOrigin, 1);
  v36 = CDOTABaseAbility::GetCursorPosition(this);
  *&criteria._vptr_CResponseCriteriaSet = v36;
  *(&v30 + 1) = v36.y + 0.0;
  *&v30 = v36.x + 0.0;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, v6, 1, v30, v36.z + 2048.0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleAlwaysSimulate(v11, v6);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, v6);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v13 = CDOTABaseAbility::GetCaster(this);
  *&criteria._vptr_CResponseCriteriaSet = CDOTABaseAbility::GetCursorPosition(this);
  v14 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, &criteria, v13, radius, &hEntities, 2, 1, 0, 0, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(
    &criteria,
    "abilityname",
    "particles/units/heroes/hero_sniper/sniper_shrapnel.vpcf",
    1.0);
  CResponseCriteriaSet::AppendCriteria(&criteria, "shrapneltargets", 1.0, v15);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.1, &criteria, 4, 1, 0, 0, 0);
  }
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
  {
    v17 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v17, "modifier_sniper_shrapnel_charge_counter", 0);
    v19 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
      if ( LOBYTE(v19[1].m_References.m_pHead) == 0 )
      {
        durationa = this->charge_restore_time;
        v20 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        CDOTA_Buff::StartIntervalThink(v19, v20 * durationa, v21);
        vptr_CDOTA_Buff = v19->_vptr_CDOTA_Buff;
        LOBYTE(v19[1].m_References.m_pHead) = 1;
        radiusa = SLODWORD(this->charge_restore_time);
        durationb = vptr_CDOTA_Buff[63];
        v23 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        durationb(v19, 1, v23 * *&radiusa);
      }
      if ( (*(v19->_vptr_CDOTA_Buff + 27))(v19) == 0 )
      {
        durationc = *(this->_vptr_IHandleEntity + 241);
        (*(v19->_vptr_CDOTA_Buff + 33))(v19);
        durationc(this);
      }
    }
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Sniper_Shrapnel::OnUpgrade  (line 362, @0x0000000002aa3890, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, SetThinking
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::OnUpgrade, CDOTA_Buff::StartIntervalThink, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "charge_restore_time", "max_charges", "special_bonus_unique_sniper_2", "modifier_sniper_shrapnel_charge_counter"
void __fastcall CDOTA_Ability_Sniper_Shrapnel::OnUpgrade(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  int LevelSpecialValue; // eax
  int v3; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v8; // xmm0_4
  float v9; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v11)(...); // r13
  float v12; // xmm0_4
  CDOTA_BaseNPC *v13; // r12
  CDOTA_BaseNPC *v14; // rax
  float charge_restore_time; // [rsp+Ch] [rbp-44h]
  float v16; // [rsp+Ch] [rbp-44h]
  KeyValues kv_counter; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  this->max_charges = LevelSpecialValue;
  v3 = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sniper_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v3 += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_sniper_shrapnel_charge_counter", 0);
  if ( ModifierByName != 0
    || (KeyValues::KeyValues(&kv_counter, "modifier_sniper_shrapnel_charge_counter"),
        v13 = CDOTABaseAbility::GetCaster(this),
        v14 = CDOTABaseAbility::GetCaster(this),
        ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                           v14,
                           v13,
                           this,
                           "modifier_sniper_shrapnel_charge_counter",
                           &kv_counter,
                           0),
        KeyValues::~KeyValues(&kv_counter),
        ModifierByName != 0) )
  {
    if ( LOBYTE(ModifierByName[1].m_References.m_pHead) == 0
      && v3 > (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) )
    {
      charge_restore_time = this->charge_restore_time;
      v8 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      CDOTA_Buff::StartIntervalThink(ModifierByName, v8 * charge_restore_time, v9);
      vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
      LOBYTE(ModifierByName[1].m_References.m_pHead) = 1;
      v11 = vptr_CDOTA_Buff[63];
      v16 = this->charge_restore_time;
      v12 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      v11(ModifierByName, 1, v12 * v16);
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Sniper_Shrapnel::GetAbilityDamageToTargetOverInterval  (line 399, @0x0000000002aa43d0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Sniper_Shrapnel::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Sniper_Shrapnel *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float fDuration; // [rsp+0h] [rbp-2Ch]
  float fDurationa; // [rsp+0h] [rbp-2Ch]
  float fDurationb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fDuration = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    fDurationa = fminf(fDuration, LevelSpecialValue / (*(pTarget->_vptr_IHandleEntity + 386))(pTarget));
    fDurationb = (*(this->_vptr_IHandleEntity + 247))(this) * fDurationa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fDurationb);
  }
  return result;
}


// CDOTA_Ability_Sniper_Shrapnel::GetSlowDuration  (line 416, @0x0000000002aa2750, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Sniper_Shrapnel::GetSlowDuration(CDOTA_Ability_Sniper_Shrapnel *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::~CDOTA_Modifier_Sniper_Shrapnel_Thinker  (line 425, @0x0000000002ac0bf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::~CDOTA_Modifier_Sniper_Shrapnel_Thinker(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4426610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::~CDOTA_Modifier_Sniper_Shrapnel_Thinker  (line 425, @0x0000000002ac0c10, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Shrapnel_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::~CDOTA_Modifier_Sniper_Shrapnel_Thinker(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4426610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::IsHidden  (line 430, @0x0000000002abb140, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::IsHidden(CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::IsAura  (line 436, @0x0000000002abb150, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::IsAura(CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetModifierAura  (line 437, @0x0000000002abb160, libserver.so)
// strings: "modifier_sniper_shrapnel_slow"
const char *__fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetModifierAura(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  return "modifier_sniper_shrapnel_slow";
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraSearchTeam  (line 438, @0x0000000002abb170, libserver.so)
int __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraSearchType  (line 439, @0x0000000002abb180, libserver.so)
int __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraRadius  (line 440, @0x0000000002abb190, libserver.so)
int __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::GetAuraRadius(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  int result; // eax

  result = 0;
  if ( this->m_bExploded )
    return this->radius;
  return result;
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnCreated  (line 452, @0x0000000002aaab90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnCreated(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v4 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "damage_delay", -1, 0);
  this->m_bExploded = 0;
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v5);
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnIntervalThink  (line 467, @0x0000000002a9e7b0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber, Vector
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::SetParticleAlwaysSimulate, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink (16 total)
// strings: "particles/units/heroes/hero_sniper/sniper_shrapnel.vpcf"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnIntervalThink(
        CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const QAngle *AbsAngles; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int v8; // xmm0_4
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm1_4
  CDOTABaseAbility *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  float duration; // [rsp+8h] [rbp-68h]
  float flRadius; // [rsp+Ch] [rbp-64h]
  Vector vecFwd; // [rsp+10h] [rbp-60h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-50h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-40h] BYREF
  double radius; // [rsp+40h] [rbp-30h] BYREF
  float v28; // [rsp+48h] [rbp-28h]

  if ( !this->m_bExploded )
  {
    this->m_bExploded = 1;
    Caster = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(Caster);
    AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_sniper/sniper_shrapnel.vpcf",
                           2,
                           0,
                           0);
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
    *&v8 = this->radius;
    v28 = 0.0;
    *&radius = v8;
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v9, BuffParticleEffect, 1, radius, v28);
    v10 = CDOTA_Buff::GetCaster(this);
    v11 = CBaseEntity::GetAbsOrigin(v10);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v12, BuffParticleEffect, 2, *&v11->x, v11->z);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v13,
      BuffParticleEffect,
      2,
      *&vecFwd.x,
      vecFwd.z,
      *&vecRight.x,
      vecRight.z,
      *&vecUp.x,
      vecUp.z);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleAlwaysSimulate(v14, BuffParticleEffect);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
    CDOTA_Buff::StartIntervalThink(this, 1.0, v15);
    Ability = CDOTA_Buff::GetAbility(this);
    LevelSpecialValue = 0.0;
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    duration = LevelSpecialValue;
    v18 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v18, &radius, "radius");
    flRadius = SLODWORD(radius);
    v19 = CDOTA_Buff::GetParent(this);
    v20 = CBaseEntity::GetAbsOrigin(v19);
    v21 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_SHRAPNEL,
      v21->m_iTeamNum.m_Value,
      v20,
      flRadius,
      duration + 0.1,
      0);
  }
}


// CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnDestroy  (line 501, @0x0000000002a7b4f0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, CDOTA_Buff::GetParent, CBaseEntity::StopSound, UTIL_Remove
// strings: "Hero_Sniper.ShrapnelShatter"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Thinker::OnDestroy(CDOTA_Modifier_Sniper_Shrapnel_Thinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_Sniper.ShrapnelShatter");
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, ReplacementSound);
  v5 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v5);
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::~CDOTA_Modifier_Sniper_Shrapnel_Slow  (line 513, @0x0000000002ac0ba0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::~CDOTA_Modifier_Sniper_Shrapnel_Slow(
        CDOTA_Modifier_Sniper_Shrapnel_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4426930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::~CDOTA_Modifier_Sniper_Shrapnel_Slow  (line 513, @0x0000000002ac0bc0, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Shrapnel_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::~CDOTA_Modifier_Sniper_Shrapnel_Slow(
        CDOTA_Modifier_Sniper_Shrapnel_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4426930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::IsDebuff  (line 518, @0x0000000002abb1b0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::IsDebuff(CDOTA_Modifier_Sniper_Shrapnel_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::OnCreated  (line 537, @0x0000000002aab610, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "slow_movement_speed", "shrapnel_damage"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::OnCreated(
        CDOTA_Modifier_Sniper_Shrapnel_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->shrapnel_damage = 0;
    goto LABEL_4;
  }
  this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->shrapnel_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "shrapnel_damage", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::DeclareFunctions  (line 550, @0x0000000002a78c10, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::DeclareFunctions(CDOTA_Modifier_Sniper_Shrapnel_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::GetModifierMoveSpeedBonus_Percentage  (line 557, @0x0000000002a78c30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Sniper_Shrapnel_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sniper_Shrapnel_Slow::OnIntervalThink  (line 564, @0x0000000002aa2770, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage
// strings: "special_bonus_unique_sniper_1"
void __fastcall CDOTA_Modifier_Sniper_Shrapnel_Slow::OnIntervalThink(CDOTA_Modifier_Sniper_Shrapnel_Slow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v6; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->shrapnel_damage;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sniper_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v6, Parent, Ability, flDamage, 2, 0);
}


// CDOTA_Ability_Sniper_Headshot::~CDOTA_Ability_Sniper_Headshot  (line 585, @0x0000000002ac5fc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sniper_Headshot::~CDOTA_Ability_Sniper_Headshot(
        CDOTA_Ability_Sniper_Headshot *const this)
{
  this->_vptr_IHandleEntity = &off_4426C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sniper_Headshot::~CDOTA_Ability_Sniper_Headshot  (line 585, @0x0000000002ac5fe0, libserver.so)  // inlines: ~CDOTA_Ability_Sniper_Headshot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sniper_Headshot::~CDOTA_Ability_Sniper_Headshot(
        CDOTA_Ability_Sniper_Headshot *const this)
{
  this->_vptr_IHandleEntity = &off_4426C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sniper_Headshot::Schema_DynamicBinding  (line 587, @0x0000000002abb1c0, libserver.so)
// globals: CDOTA_Ability_Sniper_Headshot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Headshot::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Headshot *const this)
{
  return CDOTA_Ability_Sniper_Headshot::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 587, @0x0000000002abb1d0, libserver.so)
// globals: CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::DestructInstance  (line 587, @0x0000000002abb1e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sniper_Headshot>
void __fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::FreeInstance  (line 587, @0x0000000002abb200, libserver.so)
void __fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::CanAllocate  (line 587, @0x0000000002abb220, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 587, @0x0000000002abb230, libserver.so)
// globals: CDOTA_Ability_Sniper_Headshot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Headshot::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::AllocateInstance  (line 587, @0x0000000002abf880, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::ConstructInstance  (line 587, @0x0000000002ac30c0, libserver.so)  // inlines: CDOTA_Ability_Sniper_Headshot, Construct<CDOTA_Ability_Sniper_Headshot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4426C90;
  }
  return p;
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 587, @0x0000000002acc9c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 587, @0x0000000002acc9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal  (line 587, @0x0000000002ae28d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Sniper_Headshot"
// globals: `guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass, CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass, __dso_handle, CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo, CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass);
    CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass._vptr_CEntityClass = off_4426C10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass);
    __cxa_atexit(
      CDOTA_Ability_Sniper_Headshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sniper_HeadshotClass != 0 )
    return &CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass;
  if ( `guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo,
      "CDOTA_Ability_Sniper_Headshot",
      "sniper_headshot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo);
  }
  CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass.m_pClassInfo = &CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo;
  CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass.m_pBaseClassInfo = CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sniper_HeadshotClass = &CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass;
  CDOTA_Ability_Sniper_Headshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClassInfo.m_pClass = &CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass;
  CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sniper_HeadshotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sniper_Headshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_HeadshotClass;
}


// CDOTA_Ability_Sniper_Headshot::GetIntrinsicModifierName  (line 590, @0x0000000002abb240, libserver.so)
// strings: "modifier_sniper_headshot"
const char *__fastcall CDOTA_Ability_Sniper_Headshot::GetIntrinsicModifierName(
        CDOTA_Ability_Sniper_Headshot *const this)
{
  return "modifier_sniper_headshot";
}


// CDOTA_Ability_Sniper_Headshot::HasMinistunOnAttack  (line 592, @0x0000000002abb250, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Headshot::HasMinistunOnAttack(CDOTA_Ability_Sniper_Headshot *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Headshot::~CDOTA_Modifier_Sniper_Headshot  (line 601, @0x0000000002acad20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Sniper_Headshot::~CDOTA_Modifier_Sniper_Headshot(
        CDOTA_Modifier_Sniper_Headshot *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vHeadshotRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4427750;
  this->m_vHeadshotRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vHeadshotRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_vHeadshotRecords.m_Memory),
        (this->m_vHeadshotRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Sniper_Headshot::~CDOTA_Modifier_Sniper_Headshot  (line 601, @0x0000000002acae00, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Sniper_Headshot, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Sniper_Headshot::~CDOTA_Modifier_Sniper_Headshot(
        CDOTA_Modifier_Sniper_Headshot *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vHeadshotRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4427750;
  this->m_vHeadshotRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vHeadshotRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_vHeadshotRecords.m_Memory);
    if ( (this->m_vHeadshotRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Headshot::IsHidden  (line 606, @0x0000000002abb260, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Headshot::IsHidden(CDOTA_Modifier_Sniper_Headshot *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Headshot::OnCreated  (line 628, @0x0000000002aaa5e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "proc_chance"
void __fastcall CDOTA_Modifier_Sniper_Headshot::OnCreated(CDOTA_Modifier_Sniper_Headshot *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->proc_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "proc_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->proc_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_duration = 0.0;
}


// CDOTA_Modifier_Sniper_Headshot::OnRefresh  (line 636, @0x0000000002aaa4c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "proc_chance"
void __fastcall CDOTA_Modifier_Sniper_Headshot::OnRefresh(CDOTA_Modifier_Sniper_Headshot *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->proc_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "proc_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->proc_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_duration = 0.0;
}


// CDOTA_Modifier_Sniper_Headshot::DeclareFunctions  (line 644, @0x0000000002a78c50, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Sniper_Headshot::DeclareFunctions(CDOTA_Modifier_Sniper_Headshot *const this)
{
  this->m_Functions[120].__pfn = (&stru_10 + 697);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[4].__pfn = (&stru_10 + 713);
  this->m_Functions[4].__delta = 0;
  this->m_Functions[122].__pfn = (&stru_10 + 705);
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Sniper_Headshot::OnAttack  (line 654, @0x0000000002ab2b40, libserver.so)  // inlines: AddToTail, Attacker, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, RollPseudoRandomPercentage, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Headshot::OnAttack(
        CDOTA_Modifier_Sniper_Headshot *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_BaseNPC *v10; // r13
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v17; // edx
  __int16 *v18; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-28h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    v10 = CDOTA_Buff::GetParent(this);
    v11 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( v11 != 0
      && BYTE3(v11[7]._vptr_IHandleEntity) != 0
      && v10 != 0
      && (v11[58]._vptr_IHandleEntity & 4) == 0
      && (v10->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      v12 = CDOTA_Buff::GetParent(this);
      if ( RollPseudoRandomPercentage(this->proc_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SNIPER_HEADSHOT, v12) )
      {
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        if ( RecordByIndex != 0 )
        {
          m_Size = this->m_vHeadshotRecords.m_Size;
          v17 = this->m_vHeadshotRecords.m_Size;
          if ( m_Size == this->m_vHeadshotRecords.m_Memory.m_nAllocationCount )
          {
            pAttackRecord = RecordByIndex;
            CUtlMemory<short,int>::Grow(&this->m_vHeadshotRecords.m_Memory, 1);
            v17 = this->m_vHeadshotRecords.m_Size;
            RecordByIndex = pAttackRecord;
          }
          this->m_vHeadshotRecords.m_Size = v17 + 1;
          v18 = &this->m_vHeadshotRecords.m_Memory.m_pMemory[m_Size];
          if ( v18 != 0 )
            *v18 = RecordByIndex->m_iRecord;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Sniper_Headshot::GetModifierProcAttack_BonusDamage_Physical  (line 685, @0x0000000002a99780, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsConsideredHero, IsRealHero, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_sniper_assassinate_caster", "modifier_sniper_headshot_slow"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Headshot::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Sniper_Headshot *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v10; // r12
  int m_Id; // eax
  bool v12; // r14
  bool v13; // r15
  CDOTA_Buff *ModifierByName; // rax
  bool v15; // zf
  bool v16; // al
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  CDOTABaseAbility *v24; // rax
  __m128i v25; // xmm1
  unsigned __int64 v26; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v28 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->hattacker.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || !v10->m_bIsDOTANPC )
  {
    v10 = 0;
  }
  if ( m_pInstance == 0 )
    goto LABEL_26;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 1) == 0 )
  {
    v12 = 0;
    if ( (m_Id & 0x82) == 0 )
      goto LABEL_15;
  }
  if ( v10 != 0 )
    v12 = !v10->m_bIsIllusion.m_Value;
  else
LABEL_26:
    v12 = 0;
LABEL_15:
  v13 = CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_vHeadshotRecords, &params->iRecord);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v10, "modifier_sniper_assassinate_caster", 0);
  v15 = ModifierByName == 0;
  v16 = ModifierByName != 0;
  if ( (!v15 || v13) && (v16 || v12) && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_sniper_headshot_slow");
    KeyValues::SetFloat(&kv, "duration", v18);
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_sniper_headshot_slow", &kv, 0);
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
    {
      v21 = 0;
      if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        v21 = m_pInstance;
      v22 = CDOTA_Buff::GetCaster(this);
      if ( v22 != 0 && (v22->m_iUnitType & 1) != 0 )
        v23 = v22;
      else
        v23 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v23,
        v21,
        kill_eater_event_t::kKillEaterEvent_Sniper_HeadshotStuns,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v24 = CDOTA_Buff::GetAbility(this);
    *v25.m128i_i32 = (*(v24->_vptr_IHandleEntity + 247))(v24);
    v26 = (_mm_cvtsi128_si32(v25) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v26;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Sniper_Headshot::OnAttackFail  (line 721, @0x0000000002a99a60, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Headshot::OnAttackFail(
        CDOTA_Modifier_Sniper_Headshot *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_vHeadshotRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Sniper_Headshot_Slow::~CDOTA_Modifier_Sniper_Headshot_Slow  (line 738, @0x0000000002ac0b50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::~CDOTA_Modifier_Sniper_Headshot_Slow(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4427A90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Headshot_Slow::~CDOTA_Modifier_Sniper_Headshot_Slow  (line 738, @0x0000000002ac0b70, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Headshot_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::~CDOTA_Modifier_Sniper_Headshot_Slow(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4427A90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Headshot_Slow::IsDebuff  (line 743, @0x0000000002abb270, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::IsDebuff(CDOTA_Modifier_Sniper_Headshot_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_Headshot_Slow::GetEffectName  (line 747, @0x0000000002abb280, libserver.so)
// strings: "particles/units/heroes/hero_sniper/sniper_headshot_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Sniper_Headshot_Slow::GetEffectName(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this)
{
  return "particles/units/heroes/hero_sniper/sniper_headshot_slow.vpcf";
}


// CDOTA_Modifier_Sniper_Headshot_Slow::OnCreated  (line 761, @0x0000000002aa9a40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::OnCreated(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
}


// CDOTA_Modifier_Sniper_Headshot_Slow::DeclareFunctions  (line 768, @0x0000000002a78ca0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::DeclareFunctions(CDOTA_Modifier_Sniper_Headshot_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierMoveSpeedBonus_Percentage  (line 774, @0x0000000002a78ce0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierAttackSpeedBonus_Constant  (line 781, @0x0000000002a78d00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Headshot_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Sniper_Headshot_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Sniper_TakeAim::~CDOTA_Ability_Sniper_TakeAim  (line 792, @0x0000000002ac6010, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sniper_TakeAim::~CDOTA_Ability_Sniper_TakeAim(CDOTA_Ability_Sniper_TakeAim *const this)
{
  this->_vptr_IHandleEntity = &off_4427DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sniper_TakeAim::~CDOTA_Ability_Sniper_TakeAim  (line 792, @0x0000000002ac6030, libserver.so)  // inlines: ~CDOTA_Ability_Sniper_TakeAim
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sniper_TakeAim::~CDOTA_Ability_Sniper_TakeAim(CDOTA_Ability_Sniper_TakeAim *const this)
{
  this->_vptr_IHandleEntity = &off_4427DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sniper_TakeAim::Schema_DynamicBinding  (line 794, @0x0000000002abb290, libserver.so)
// globals: CDOTA_Ability_Sniper_TakeAim::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_TakeAim::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_TakeAim *const this)
{
  return CDOTA_Ability_Sniper_TakeAim::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 794, @0x0000000002abb2a0, libserver.so)
// globals: CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::DestructInstance  (line 794, @0x0000000002abb2b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sniper_TakeAim>
void __fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::FreeInstance  (line 794, @0x0000000002abb2d0, libserver.so)
void __fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::CanAllocate  (line 794, @0x0000000002abb2f0, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 794, @0x0000000002abb300, libserver.so)
// globals: CDOTA_Ability_Sniper_TakeAim::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_TakeAim::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::AllocateInstance  (line 794, @0x0000000002abf8c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::ConstructInstance  (line 794, @0x0000000002ac30f0, libserver.so)  // inlines: CDOTA_Ability_Sniper_TakeAim, Construct<CDOTA_Ability_Sniper_TakeAim>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4427DF0;
  }
  return p;
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 794, @0x0000000002acca10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 794, @0x0000000002acca30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal  (line 794, @0x0000000002ae2a20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Sniper_TakeAim"
// globals: `guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass, CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass, __dso_handle, CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo, CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass);
    CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass._vptr_CEntityClass = off_4427D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass);
    __cxa_atexit(
      CDOTA_Ability_Sniper_TakeAim::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sniper_TakeAimClass != 0 )
    return &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass;
  if ( `guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo,
      "CDOTA_Ability_Sniper_TakeAim",
      "sniper_take_aim",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo);
  }
  CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass.m_pClassInfo = &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo;
  CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass.m_pBaseClassInfo = CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sniper_TakeAimClass = &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass;
  CDOTA_Ability_Sniper_TakeAim::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClassInfo.m_pClass = &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass;
  CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sniper_TakeAimClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sniper_TakeAim::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_TakeAimClass;
}


// CDOTA_Ability_Sniper_TakeAim::GetIntrinsicModifierName  (line 797, @0x0000000002abb310, libserver.so)
// strings: "modifier_sniper_take_aim"
const char *__fastcall CDOTA_Ability_Sniper_TakeAim::GetIntrinsicModifierName(CDOTA_Ability_Sniper_TakeAim *const this)
{
  return "modifier_sniper_take_aim";
}


// CDOTA_Modifier_Sniper_TakeAim::~CDOTA_Modifier_Sniper_TakeAim  (line 806, @0x0000000002ac0b00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_TakeAim::~CDOTA_Modifier_Sniper_TakeAim(
        CDOTA_Modifier_Sniper_TakeAim *const this)
{
  this->_vptr_CDOTA_Buff = &off_44288B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_TakeAim::~CDOTA_Modifier_Sniper_TakeAim  (line 806, @0x0000000002ac0b20, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_TakeAim
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_TakeAim::~CDOTA_Modifier_Sniper_TakeAim(
        CDOTA_Modifier_Sniper_TakeAim *const this)
{
  this->_vptr_CDOTA_Buff = &off_44288B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_TakeAim::IsHidden  (line 811, @0x0000000002abb320, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_TakeAim::IsHidden(CDOTA_Modifier_Sniper_TakeAim *const this)
{
  return 1;
}


// CDOTA_Modifier_Sniper_TakeAim::OnCreated  (line 828, @0x0000000002aaa160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_range"
void __fastcall CDOTA_Modifier_Sniper_TakeAim::OnCreated(CDOTA_Modifier_Sniper_TakeAim *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_range", -1, 0);
  else
    this->bonus_attack_range = 0;
}


// CDOTA_Modifier_Sniper_TakeAim::OnRefresh  (line 835, @0x0000000002aa9860, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_range"
void __fastcall CDOTA_Modifier_Sniper_TakeAim::OnRefresh(CDOTA_Modifier_Sniper_TakeAim *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_range", -1, 0);
  else
    this->bonus_attack_range = 0;
}


// CDOTA_Modifier_Sniper_TakeAim::DeclareFunctions  (line 842, @0x0000000002a78d20, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Sniper_TakeAim::DeclareFunctions(CDOTA_Modifier_Sniper_TakeAim *const this)
{
  this->m_Functions[69].__pfn = (&stru_10 + 697);
  this->m_Functions[69].__delta = 0;
}


// CDOTA_Modifier_Sniper_TakeAim::GetModifierAttackRangeBonus  (line 849, @0x0000000002a7d3e0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_TakeAim::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Sniper_TakeAim *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_attack_range;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Sniper_Assassinate::~CDOTA_Ability_Sniper_Assassinate  (line 863, @0x0000000002ac6060, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sniper_Assassinate::~CDOTA_Ability_Sniper_Assassinate(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  this->_vptr_IHandleEntity = &off_4428C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sniper_Assassinate::~CDOTA_Ability_Sniper_Assassinate  (line 863, @0x0000000002ac6080, libserver.so)  // inlines: ~CDOTA_Ability_Sniper_Assassinate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sniper_Assassinate::~CDOTA_Ability_Sniper_Assassinate(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  this->_vptr_IHandleEntity = &off_4428C10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sniper_Assassinate::Schema_DynamicBinding  (line 865, @0x0000000002abb330, libserver.so)
// globals: CDOTA_Ability_Sniper_Assassinate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Assassinate::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Assassinate *const this)
{
  return CDOTA_Ability_Sniper_Assassinate::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 865, @0x0000000002abb340, libserver.so)
// globals: CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::DestructInstance  (line 865, @0x0000000002abb350, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sniper_Assassinate>
void __fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::FreeInstance  (line 865, @0x0000000002abb370, libserver.so)
void __fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::CanAllocate  (line 865, @0x0000000002abb390, libserver.so)
bool __fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 865, @0x0000000002abb3a0, libserver.so)
// globals: CDOTA_Ability_Sniper_Assassinate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sniper_Assassinate::s_pSchemaBinding;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::AllocateInstance  (line 865, @0x0000000002abf900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::ConstructInstance  (line 865, @0x0000000002ac3120, libserver.so)  // inlines: CDOTA_Ability_Sniper_Assassinate, CEntityHandle, CHandle, Construct<CDOTA_Ability_Sniper_Assassinate>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4428C10;
    *(p + 229) = -1;
    *(p + 230) = -1;
  }
  return p;
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 865, @0x0000000002acca60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 865, @0x0000000002acca80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal  (line 865, @0x0000000002ae2b70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Sniper_Assassinate"
// globals: `guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass, CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass, __dso_handle, CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo, CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass);
    CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass._vptr_CEntityClass = off_4428B90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass);
    __cxa_atexit(
      CDOTA_Ability_Sniper_Assassinate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sniper_AssassinateClass != 0 )
    return &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass;
  if ( `guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo,
      "CDOTA_Ability_Sniper_Assassinate",
      "sniper_assassinate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo);
  }
  CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass.m_pClassInfo = &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo;
  CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass.m_pBaseClassInfo = CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sniper_AssassinateClass = &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass;
  CDOTA_Ability_Sniper_Assassinate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClassInfo.m_pClass = &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass;
  CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sniper_AssassinateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sniper_Assassinate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sniper_AssassinateClass;
}


// CDOTA_Ability_Sniper_Assassinate::SpeakTrigger  (line 883, @0x0000000002abb3b0, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Sniper_Assassinate::SpeakTrigger(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_Sniper_Assassinate::GetStolenActivityModifier  (line 885, @0x0000000002abb3c0, libserver.so)
// strings: "snipe"
const char *__fastcall CDOTA_Ability_Sniper_Assassinate::GetStolenActivityModifier(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  return "snipe";
}


// CDOTA_Ability_Sniper_Assassinate::GetCurrentAbilityDamageType  (line 895, @0x0000000002ac4cd0, libserver.so)  // inlines: GetAbilityDamageType, GetAbilityData
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Sniper_Assassinate::GetCurrentAbilityDamageType(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int v4; // edx
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = 1;
  if ( !HasScepter )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return m_pAbilityData->m_iAbilityDamageType;
  }
  return v4;
}


// CDOTA_Ability_Sniper_Assassinate::YouForgotToImplementOrDeclareServerClass  (line 903, @0x0000000002a78d40, libserver.so)
int __fastcall CDOTA_Ability_Sniper_Assassinate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  return 0;
}


// CDOTA_Ability_Sniper_Assassinate::GetServerClass  (line 903, @0x0000000002a89e30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Sniper_Assassinate::GetServerClass(CDOTA_Ability_Sniper_Assassinate *const this)
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


// CDOTA_Ability_Sniper_Assassinate::GetBehavior  (line 911, @0x0000000002a7ae80, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Sniper_Assassinate::GetBehavior(CDOTA_Ability_Sniper_Assassinate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 48;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Sniper_Assassinate::CastFilterResult  (line 923, @0x0000000002a7ad90, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Sniper_Assassinate::CastFilterResult(
        CDOTA_Ability_Sniper_Assassinate *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 19 || result == 0 )
    return 0;
  return result;
}


// CDOTA_Ability_Sniper_Assassinate::OnAbilityPhaseStart  (line 935, @0x0000000002aa8960, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseModelEntity::CanBeSeenByTeam, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, DOTA_EmitSound, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int> (18 total)
// strings: "modifier_sniper_assassinate", "Ability.AssassinateLoad", "scepter_radius"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Sniper_Assassinate::OnAbilityPhaseStart(CDOTA_Ability_Sniper_Assassinate *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm3_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v14; // rax
  int LevelSpecialValue; // eax
  __m128i v16; // xmm3
  float v17; // r13d
  CDOTA_BaseNPC *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  __int64 v20; // r13
  int v21; // r12d
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  Vector vPosition; // [rsp+20h] [rbp-180h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v33; // [rsp+168h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&hEntities, "modifier_sniper_assassinate");
    KeyValues::SetFloat(&hEntities, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_sniper_assassinate", &hEntities, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(v3, (v6->m_iTeamNum.m_Value == 2) + 2) )
    {
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v10 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v10,
        0,
        m_iAbilityID,
        0,
        v3,
        *&AbsOrigin->x,
        AbsOrigin->z,
        -1.0,
        v11);
    }
    KeyValues::~KeyValues(&hEntities);
  }
  else
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v14) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
      *v16.m128i_i32 = LevelSpecialValue;
      this->scepter_radius = LevelSpecialValue;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_nAllocationCount = 64;
      hEntities.m_Memory.m_nGrowSize = 0x80000000;
      v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
      hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
      v18 = CDOTABaseAbility::GetCaster(this);
      vPosition = CDOTABaseAbility::GetCursorPosition(this);
      v19 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v19->m_iTeamNum.m_Value, &vPosition, v18, v17, &hEntities, 2, 19, 1424, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v20 = 0;
        v21 = 0;
        do
        {
          v22 = &hEntities.m_Memory.m_pMemory[v20];
          m_Index = hEntities.m_Memory.m_pMemory[v20].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v24 = v22->m_Index;
            v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
            if ( v25 != 0 )
            {
              v26 = &v25[v24 & 0x1FF];
              if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
              {
                m_pInstance = v26->m_pInstance;
                if ( v26->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  KeyValues::KeyValues(&kv, "modifier_sniper_assassinate");
                  KeyValues::SetFloat(&kv, "duration", v28);
                  v29 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v29, this, "modifier_sniper_assassinate", &kv, 0);
                  KeyValues::~KeyValues(&kv);
                }
              }
            }
          }
          ++v21;
          ++v20;
        }
        while ( hEntities.m_Size > v21 );
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
  }
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Ability.AssassinateLoad", v12);
  return 1;
}


// CDOTA_Ability_Sniper_Assassinate::OnAbilityPhaseInterrupted  (line 997, @0x0000000002a98990, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::RemoveModifierByName, CDOTABaseAbility::LoadAbilityData, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (14 total)
// strings: "modifier_sniper_assassinate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Sniper_Assassinate::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Sniper_Assassinate *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v6; // rax
  int m_iIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // r13
  int i; // r12d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 v22; // [rsp+138h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::RemoveModifierByName(CursorTarget, "modifier_sniper_assassinate");
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0 )
      goto LABEL_5;
LABEL_7:
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    goto LABEL_5;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_nAllocationCount = 64;
    hEntities.m_Memory.m_nGrowSize = 0x80000000;
    hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, v9, -1.0, &hEntities, 2, 1, 0, 0, 0);
    v13 = 0;
    for ( i = 0; hEntities.m_Size > i; ++v13 )
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
            if ( v19->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_sniper_assassinate", 0) != 0 )
            {
              CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_sniper_assassinate");
            }
          }
        }
      }
      ++i;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
    goto LABEL_7;
LABEL_5:
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v6, m_iAbilityID);
  m_iIndex = this->m_iIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_iIndex);
}


// CDOTA_Ability_Sniper_Assassinate::OnSpellStart  (line 1028, @0x0000000002aa8d20, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, InValidate, IndexToIdentity, IsValid, LookupEntity, Set, StopSoundEvent, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CDOTAPASFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::GetTeam, CRecipientFilter::AddRecipientsByTeam, CBaseEntity::EmitSound, CDOTAPASFilter::CDOTAPASFilter, CGameSceneNode::GetOwnerEntity, CRecipientFilter::~CRecipientFilter (21 total)
// strings: "particles/units/heroes/hero_sniper/sniper_assassinate.vpcf", "Ability.Assassinate", "Hero_Sniper.AssassinateProjectile", "scepter_radius", "modifier_sniper_assassinate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Sniper_Assassinate::OnSpellStart(CDOTA_Ability_Sniper_Assassinate *const this)
{
  CBaseEntity *CursorTarget; // rax
  const CBaseEntity *v3; // r13
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CEntityIdentity *v9; // rax
  __int16 v10; // cx
  CDOTA_BaseNPC *v11; // rax
  CTeam *Team; // rax
  CTeam *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  CEntityIdentity *v18; // rax
  int v19; // edx
  __int16 v20; // cx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // r12
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  vec_t v31; // xmm0_4
  vec_t v32; // xmm0_4
  CDOTA_BaseNPC *v33; // rax
  CEntityIdentity *v34; // rdx
  int v35; // eax
  __int16 v36; // cx
  CEntityIdentity *v37; // rax
  int v38; // edx
  __int16 v39; // cx
  CDOTA_BaseNPC *v40; // rax
  CTeam *v41; // rax
  CTeam *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CGameSceneNode *m_pGameSceneNode; // rax
  CSoundOpGameSystem *v46; // [rsp+30h] [rbp-590h]
  CSoundOpGameSystem *v47; // [rsp+38h] [rbp-588h]
  Vector vPosition; // [rsp+40h] [rbp-580h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-570h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> hEntities; // [rsp+B0h] [rbp-510h] BYREF
  CBroadcastRecipientFilter assassinatefilter; // [rsp+1D0h] [rbp-3F0h] BYREF
  CDOTAPASFilter filter; // [rsp+310h] [rbp-2B0h] BYREF
  CRecipientFilter v53; // [rsp+450h] [rbp-170h] BYREF
  unsigned __int64 v54; // [rsp+588h] [rbp-38h]

  v54 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    *&hEntities.m_FixedMemory.m_Data[4] = -1;
    *&hEntities.m_FixedMemory.m_Data[8] = -1;
    *&hEntities.m_FixedMemory.m_Data[46] = 0;
    *&hEntities.m_Memory.m_nAllocationCount = 0;
    *hEntities.m_FixedMemory.m_Data = 0;
    *&hEntities.m_FixedMemory.m_Data[12] = vec3_origin.x;
    y = vec3_origin.y;
    *&hEntities.m_FixedMemory.m_Data[24] = 1;
    *&hEntities.m_FixedMemory.m_Data[16] = y;
    z = vec3_origin.z;
    hEntities.m_FixedMemory.m_Data[28] = 0;
    *&hEntities.m_FixedMemory.m_Data[20] = z;
    *&hEntities.m_FixedMemory.m_Data[32] = -1;
    *&hEntities.m_FixedMemory.m_Data[36] = 0;
    hEntities.m_FixedMemory.m_Data[40] = 0;
    hEntities.m_FixedMemory.m_Data[41] = 1;
    hEntities.m_FixedMemory.m_Data[42] = 0;
    hEntities.m_FixedMemory.m_Data[43] = 1;
    *&hEntities.m_FixedMemory.m_Data[64] = 0;
    hEntities.m_FixedMemory.m_Data[44] = 0;
    *&hEntities.m_FixedMemory.m_Data[52] = 0;
    *&hEntities.m_FixedMemory.m_Data[56] = 0;
    hEntities.m_FixedMemory.m_Data[45] = 0;
    *&hEntities.m_Size = "particles/units/heroes/hero_sniper/sniper_assassinate.vpcf";
    hEntities.m_Memory.m_pMemory = this;
    *hEntities.m_FixedMemory.m_Data = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v8 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      *&hEntities.m_FixedMemory.m_Data[4] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                          | v8 & 0x7FFF;
    }
    else
    {
      *&hEntities.m_FixedMemory.m_Data[4] = -1;
    }
    v9 = v3->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = 0x7FFF;
      if ( v9->m_EHandle.m_Index != -1 )
        v10 = v9->m_EHandle.m_Index & 0x7FFF;
      *&hEntities.m_FixedMemory.m_Data[8] = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
    }
    else
    {
      *&hEntities.m_FixedMemory.m_Data[8] = -1;
    }
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &hEntities);
    CRecipientFilter::CRecipientFilter(&assassinatefilter);
    assassinatefilter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&assassinatefilter);
    v11 = CDOTABaseAbility::GetCaster(this);
    Team = CBaseEntity::GetTeam(v11);
    CRecipientFilter::AddRecipientsByTeam(&assassinatefilter, Team);
    v13 = CBaseEntity::GetTeam(v3);
    CRecipientFilter::AddRecipientsByTeam(&assassinatefilter, v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::EmitSound(v14, &assassinatefilter, "Ability.Assassinate", 0.0, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTAPASFilter::CDOTAPASFilter(&filter, v15);
    v47 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&v53);
      v53._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v53);
      v53._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v53);
      CSoundOpGameSystem::StopSoundEvent(v47, &v53, this->m_SoundEventGuid);
      v53._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v53);
      m_pGameSceneNode = this->m_pGameSceneNode;
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
      m_pParent = m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        goto LABEL_14;
    }
    else
    {
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
      {
LABEL_14:
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
LABEL_15:
        this->m_SoundEventGuid = CBaseEntity::EmitSound(
                                   OwnerEntity,
                                   &filter,
                                   "Hero_Sniper.AssassinateProjectile",
                                   0.0,
                                   0);
        v18 = v3->m_pEntity;
        if ( v18 != 0 )
        {
          v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
          v20 = 0x7FFF;
          if ( v18->m_EHandle.m_Index != -1 )
            v20 = v18->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget.m_Index) = v20 | this->m_hTarget.m_Index & 0x8000;
          this->m_hTarget.m_Index = (v19 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hTarget.m_Index = -1;
        }
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
        assassinatefilter._vptr_IRecipientFilter = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&assassinatefilter);
        return;
      }
    }
    OwnerEntity = 0;
    goto LABEL_15;
  }
  v21 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v21) )
  {
    hEntities.m_Size = 0;
    this->scepter_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_radius", -1, 0);
    hEntities.m_Memory.m_nAllocationCount = 64;
    hEntities.m_Memory.m_nGrowSize = 0x80000000;
    hEntities.m_Memory.m_pMemory = &hEntities.m_FixedMemory;
    v22 = CDOTABaseAbility::GetCaster(this);
    vPosition = CDOTABaseAbility::GetCursorPosition(this);
    v23 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v23->m_iTeamNum.m_Value, &vPosition, v22, -1.0, &hEntities, 2, 1, 16, 0, 0);
    if ( hEntities.m_Size > 0 )
    {
      v24 = 0;
      do
      {
        v25 = &hEntities.m_Memory.m_pMemory[v24];
        m_Index = v25->m_Index;
        if ( v25->m_Index + 2 > 1 )
        {
          v27 = v25->m_Index;
          v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = &v28[v27 & 0x1FF];
            if ( v29 != 0 && m_Index == v29->m_EHandle.m_Index )
            {
              m_pInstance = v29->m_pInstance;
              if ( v29->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_sniper_assassinate", 0) != 0 )
              {
                info.hSource.m_Index = -1;
                info.hTarget.m_Index = -1;
                info.colorGemColor = 0;
                info.pAttackRecord = 0;
                info.iMoveSpeed = 0;
                info.vSourceLoc.x = vec3_origin.x;
                v31 = vec3_origin.y;
                info.iSourceAttachment = 1;
                info.vSourceLoc.y = v31;
                v32 = vec3_origin.z;
                info.bProvidesVision = 0;
                info.vSourceLoc.z = v32;
                info.iVisionTeamNumber = -1;
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
                info.pszEffectName = "particles/units/heroes/hero_sniper/sniper_assassinate.vpcf";
                info.pAbility = this;
                info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
                v33 = CDOTABaseAbility::GetCaster(this);
                if ( v33 != 0 && (v34 = v33->m_pEntity) != 0 )
                {
                  v35 = (v34->m_EHandle.m_Index >> 15) - (v34->m_flags & 1);
                  v36 = 0x7FFF;
                  if ( v34->m_EHandle.m_Index != -1 )
                    v36 = v34->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(info.hSource.m_Index) = v36 | info.hSource.m_Index & 0x8000;
                  info.hSource.m_Index = (v35 << 15) | info.hSource.m_Index & 0x7FFF;
                }
                else
                {
                  info.hSource.m_Index = -1;
                }
                v37 = m_pInstance->m_pEntity;
                if ( v37 != 0 )
                {
                  v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
                  v39 = 0x7FFF;
                  if ( v37->m_EHandle.m_Index != -1 )
                    v39 = v37->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(info.hTarget.m_Index) = v39 | info.hTarget.m_Index & 0x8000;
                  info.hTarget.m_Index = (v38 << 15) | info.hTarget.m_Index & 0x7FFF;
                }
                else
                {
                  info.hTarget.m_Index = -1;
                }
                CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
                CRecipientFilter::CRecipientFilter(&assassinatefilter);
                assassinatefilter._vptr_IRecipientFilter = &off_3FB63F0;
                CRecipientFilter::AddAllPlayers(&assassinatefilter);
                v40 = CDOTABaseAbility::GetCaster(this);
                v41 = CBaseEntity::GetTeam(v40);
                CRecipientFilter::AddRecipientsByTeam(&assassinatefilter, v41);
                v42 = CBaseEntity::GetTeam(m_pInstance);
                CRecipientFilter::AddRecipientsByTeam(&assassinatefilter, v42);
                v43 = CDOTABaseAbility::GetCaster(this);
                CBaseEntity::EmitSound(v43, &assassinatefilter, "Ability.Assassinate", 0.0, 0);
                v44 = CDOTABaseAbility::GetCaster(this);
                CDOTAPASFilter::CDOTAPASFilter(&filter, v44);
                v46 = g_pSoundOpGameSystem;
                if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
                {
                  CRecipientFilter::CRecipientFilter(&v53);
                  v53._vptr_IRecipientFilter = &off_3FB63F0;
                  CRecipientFilter::AddAllPlayers(&v53);
                  v53._vptr_IRecipientFilter = &off_3FCB130;
                  CRecipientFilter::MakeReliable(&v53);
                  CSoundOpGameSystem::StopSoundEvent(v46, &v53, this->m_SoundEventGuid);
                  v53._vptr_IRecipientFilter = &off_3FB63F0;
                  CRecipientFilter::~CRecipientFilter(&v53);
                  this->m_SoundEventGuid.m_nGuid.m_Data = 0;
                  this->m_SoundEventGuid.m_hStackHash = -1;
                }
                this->m_SoundEventGuid = CBaseEntity::EmitSound(
                                           m_pInstance,
                                           &filter,
                                           "Hero_Sniper.AssassinateProjectile",
                                           0.0,
                                           0);
                filter._vptr_IRecipientFilter = &off_3FCB190;
                CRecipientFilter::~CRecipientFilter(&filter);
                assassinatefilter._vptr_IRecipientFilter = &off_3FB63F0;
                CRecipientFilter::~CRecipientFilter(&assassinatefilter);
              }
            }
          }
        }
        ++v24;
      }
      while ( hEntities.m_Size > v24 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
  }
}


// CDOTA_Ability_Sniper_Assassinate::OnProjectileHit  (line 1095, @0x0000000002a85e70, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, InValidate, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, QueueConcept, Set, StopSoundEvent, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: __stack_chk_fail, CDOTA_BaseNPC::RemoveModifierByName, CEntityInstance::GetEntityIndex, CDOTABaseAbility::GetCaster, CreateUnitEvent, CDOTA_BaseNPC::HasScepter, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, KeyValues::~KeyValues, EconEntity_OnOwnerKillEaterEvent (29 total)
// strings: "modifier_sniper_assassinate", "modifier_sniper_assassinate_caster", "Hero_Sniper.AssassinateDamage", "assassinatefail_healthfraction", "modifier_stunned"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Sniper_Assassinate::OnProjectileHit(
        CDOTA_Ability_Sniper_Assassinate *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityIndex v8; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v10; // eax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // r13
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi
  CSoundOpGameSystem *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  CTeam *Team; // rax
  CTeam *v25; // rax
  int v26; // r13d
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-1A0h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-160h] BYREF
  unsigned __int64 v34; // [rsp+188h] [rbp-28h]

  this->m_hTarget.m_Index = -1;
  v34 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::RemoveModifierByName(v5->m_pInstance, "modifier_sniper_assassinate");
          if ( m_pInstance->m_bIsWaitingToSpawn.m_Value
            || (m_pInstance->m_nUnitState64.m_Value & 0x100) != 0
            || (v11 = CDOTABaseAbility::GetCaster(this), !CDOTA_BaseNPC::HasScepter(v11))
            && CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
            {
              v8.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
              Caster = CDOTABaseAbility::GetCaster(this);
              v10.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
              CreateUnitEvent(v10, v8, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
            }
          }
          else
          {
            v12 = CDOTABaseAbility::GetCaster(this);
            if ( CDOTA_BaseNPC::HasScepter(v12) )
            {
              KeyValues::KeyValues(&kv, "modifier_sniper_assassinate_caster");
              v13 = CDOTABaseAbility::GetCaster(this);
              v14 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v14, v13, this, "modifier_sniper_assassinate_caster", &kv, 0);
              v15 = CDOTABaseAbility::GetCaster(this);
              AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v15, m_pInstance, 0, 1, 0, 1, 1);
              v17 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::PerformAttack(v17, AttackRecord, m_pInstance, 1, 0, 0, 1);
              v18 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::RemoveModifierByName(v18, "modifier_sniper_assassinate_caster");
              KeyValues::~KeyValues(&kv);
            }
            else
            {
              v26 = (*(this->_vptr_IHandleEntity + 247))(this);
              v27 = CDOTABaseAbility::GetCaster(this);
              ApplyDamage(v27, m_pInstance, this, v26, 2, 0);
            }
            if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
            {
              CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
              CDOTA_BaseNPC::HealthFraction(m_pInstance);
              CResponseCriteriaSet::AppendCriteria(&criteria, "assassinatefail_healthfraction", 1.0, v28);
              if ( CDOTABaseAbility::GetCaster(this) != 0 )
              {
                m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
                if ( m_pSpeech != 0 )
                  CDOTA_Speech::QueueConcept(m_pSpeech, 18, 1.0, &criteria, 1, 0, 0, 0, 0);
              }
              KeyValues::KeyValues(&kv, "modifier_stunned");
              KeyValues::SetFloat(&kv, "duration", v30);
              v31 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v31, this, "modifier_stunned", &kv, 0);
              KeyValues::~KeyValues(&kv);
              CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
            }
            else if ( (m_pInstance->m_iUnitType & 1) != 0 && !m_pInstance->m_bIsIllusion.m_Value )
            {
              v19 = 0;
              if ( m_pInstance->m_bIsDOTANPC )
                v19 = m_pInstance;
              v20 = CDOTABaseAbility::GetCaster(this);
              if ( v20 != 0 && (v20->m_iUnitType & 1) != 0 )
                v21 = v20;
              else
                v21 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v21,
                v19,
                kill_eater_event_t::kKillEaterEvent_Sniper_AssassinationKills,
                1,
                INVALID_ITEM_DEF_INDEX);
            }
            v22 = g_pSoundOpGameSystem;
            if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
            {
              CRecipientFilter::CRecipientFilter(&kv);
              kv.m_uValue = &off_3FB63F0;
              CRecipientFilter::AddAllPlayers(&kv);
              kv.m_uValue = &off_3FCB130;
              CRecipientFilter::MakeReliable(&kv);
              CSoundOpGameSystem::StopSoundEvent(v22, &kv, this->m_SoundEventGuid);
              kv.m_uValue = &off_3FB63F0;
              CRecipientFilter::~CRecipientFilter(&kv);
              this->m_SoundEventGuid.m_nGuid.m_Data = 0;
              this->m_SoundEventGuid.m_hStackHash = -1;
            }
            CRecipientFilter::CRecipientFilter(&kv);
            kv.m_uValue = &off_3FB63F0;
            CRecipientFilter::AddAllPlayers(&kv);
            v23 = CDOTABaseAbility::GetCaster(this);
            Team = CBaseEntity::GetTeam(v23);
            CRecipientFilter::AddRecipientsByTeam(&kv, Team);
            v25 = CBaseEntity::GetTeam(m_pInstance);
            CRecipientFilter::AddRecipientsByTeam(&kv, v25);
            CBaseEntity::EmitSound(m_pInstance, &kv, "Hero_Sniper.AssassinateDamage", 0.0, 0);
            kv.m_uValue = &off_3FB63F0;
            CRecipientFilter::~CRecipientFilter(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Sniper_Assassinate::OnProjectileThink  (line 1162, @0x0000000002a89570, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CDOTAPASFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CDOTABaseAbility::GetCaster, CDOTAPASFilter::CDOTAPASFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Sniper_Assassinate::OnProjectileThink(
        CDOTA_Ability_Sniper_Assassinate *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v7; // r14d
  int v8; // r15d
  SosFieldValueMem_t *v9; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CDOTAPASFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAPASFilter::CDOTAPASFilter(&filter, Caster);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v7 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v8 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v9 = operator new[](0xCu);
  fieldData.m_pData = v9;
  fieldData.m_nAllocSize = 12;
  *v9 = vLocation;
  *(v9 + 1) = v8;
  *(v9 + 2) = v7;
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    this->m_SoundEventGuid,
    "position",
    &fieldData,
    0,
    0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Sniper_Assassinate::GetAbilityDamageToTargetOverInterval  (line 1172, @0x0000000002a7c9e0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Sniper_Assassinate::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Sniper_Assassinate *const this,
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


// CDOTA_Modifier_Sniper_Assassinate_Caster::~CDOTA_Modifier_Sniper_Assassinate_Caster  (line 1187, @0x0000000002ac0ab0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::~CDOTA_Modifier_Sniper_Assassinate_Caster(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_44296D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Assassinate_Caster::~CDOTA_Modifier_Sniper_Assassinate_Caster  (line 1187, @0x0000000002ac0ad0, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Assassinate_Caster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::~CDOTA_Modifier_Sniper_Assassinate_Caster(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_44296D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Assassinate_Caster::IsPurgable  (line 1194, @0x0000000002abb3d0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::IsPurgable(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Assassinate_Caster::OnCreated  (line 1207, @0x0000000002aa9da0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "scepter_crit_bonus"
void __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::OnCreated(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->scepter_crit_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "scepter_crit_bonus", -1, 0);
  else
    this->scepter_crit_bonus = 0;
}


// CDOTA_Modifier_Sniper_Assassinate_Caster::DeclareFunctions  (line 1216, @0x0000000002a78d50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sniper_Assassinate_Caster::GetModifierPreAttack_CriticalStrike(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::DeclareFunctions(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_Sniper_Assassinate_Caster::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
}


// CDOTA_Modifier_Sniper_Assassinate_Caster::GetModifierPreAttack_CriticalStrike  (line 1224, @0x0000000002a78d70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sniper_Assassinate_Caster::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Sniper_Assassinate_Caster *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->scepter_crit_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sniper_Assassinate::~CDOTA_Modifier_Sniper_Assassinate  (line 1234, @0x0000000002ac0a60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sniper_Assassinate::~CDOTA_Modifier_Sniper_Assassinate(
        CDOTA_Modifier_Sniper_Assassinate *const this)
{
  this->_vptr_CDOTA_Buff = &off_44299F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sniper_Assassinate::~CDOTA_Modifier_Sniper_Assassinate  (line 1234, @0x0000000002ac0a80, libserver.so)  // inlines: ~CDOTA_Modifier_Sniper_Assassinate
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sniper_Assassinate::~CDOTA_Modifier_Sniper_Assassinate(
        CDOTA_Modifier_Sniper_Assassinate *const this)
{
  this->_vptr_CDOTA_Buff = &off_44299F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sniper_Assassinate::IsHidden  (line 1239, @0x0000000002abb3e0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Assassinate::IsHidden(CDOTA_Modifier_Sniper_Assassinate *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Assassinate::IsPurgable  (line 1240, @0x0000000002abb3f0, libserver.so)
bool __fastcall CDOTA_Modifier_Sniper_Assassinate::IsPurgable(CDOTA_Modifier_Sniper_Assassinate *const this)
{
  return 0;
}


// CDOTA_Modifier_Sniper_Assassinate::GetEffectAttachType  (line 1254, @0x0000000002abb400, libserver.so)
int __fastcall CDOTA_Modifier_Sniper_Assassinate::GetEffectAttachType(CDOTA_Modifier_Sniper_Assassinate *const this)
{
  return 7;
}


// CDOTA_Modifier_Sniper_Assassinate::CheckState  (line 1261, @0x0000000002a78d90, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Sniper_Assassinate::CheckState(
        CDOTA_Modifier_Sniper_Assassinate *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 m_nDisabledStateMask; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  BYTE1(m_nDisabledStateMask) &= ~4u;
  BYTE1(m_nEnabledStateMask) = BYTE1(buffState->m_nEnabledStateMask) | 4;
  LOBYTE(m_nDisabledStateMask) = m_nDisabledStateMask | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask;
}


// CDOTA_Modifier_Sniper_Assassinate::GetPriority  (line 1272, @0x0000000002a78db0, libserver.so)
int __fastcall CDOTA_Modifier_Sniper_Assassinate::GetPriority(CDOTA_Modifier_Sniper_Assassinate *const this)
{
  return 2;
}


