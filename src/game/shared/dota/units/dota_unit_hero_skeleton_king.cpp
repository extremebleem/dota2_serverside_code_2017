// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:35
class CDOTA_Unit_Hero_SkeletonKing : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_SkeletonKing(CDOTA_Unit_Hero_SkeletonKing &);
	CDOTA_Unit_Hero_SkeletonKing(CDOTA_Unit_Hero_SkeletonKing &);
	CDOTA_Unit_Hero_SkeletonKing();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnDying();
	virtual const char * GetDeathEffectName();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual ~CDOTA_Unit_Hero_SkeletonKing();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// vtable[159] ModifyOrAppendCriteria
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:48
class C_CDOTA_Unit_Hero_SkeletonKing_MapInstall {
	C_CDOTA_Unit_Hero_SkeletonKing_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:81
class CDOTA_Ability_SkeletonKing_HellfireBlast : public CDOTABaseAbility {
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
	CDOTA_Ability_SkeletonKing_HellfireBlast(CDOTA_Ability_SkeletonKing_HellfireBlast &);
	CDOTA_Ability_SkeletonKing_HellfireBlast(CDOTA_Ability_SkeletonKing_HellfireBlast &);
	CDOTA_Ability_SkeletonKing_HellfireBlast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_SkeletonKing_HellfireBlast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:171
class CDOTA_Modifier_SkeletonKing_HellfireBlast : public CDOTA_Buff {
public:

private:

	int blast_dot_damage;  // +0xba8
	int blast_slow;  // +0xbac
	CDOTA_Modifier_SkeletonKing_HellfireBlast();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_SkeletonKing_HellfireBlast();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:228
class CDOTA_Modifier_SkeletonKing_VampiricAura : public CDOTA_Buff {
public:

	bool m_bAppliesToCreeps;  // +0xba8
	CDOTA_Modifier_SkeletonKing_VampiricAura();

private:

	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_SkeletonKing_VampiricAura();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:261
class CDOTA_Modifier_SkeletonKing_VampiricAura_Buff : public CDOTA_Buff {
public:

private:

	int vampiric_aura;  // +0xba8
	CDOTA_Modifier_SkeletonKing_VampiricAura_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:365
class CDOTA_Ability_SkeletonKing_VampiricAura : public CDOTABaseAbility {
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
	CDOTA_Ability_SkeletonKing_VampiricAura(CDOTA_Ability_SkeletonKing_VampiricAura &);
	CDOTA_Ability_SkeletonKing_VampiricAura(CDOTA_Ability_SkeletonKing_VampiricAura &);
	CDOTA_Ability_SkeletonKing_VampiricAura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnToggle();
	virtual bool ResetToggleOnRespawn();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual ~CDOTA_Ability_SkeletonKing_VampiricAura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[270] OnToggle
	// vtable[281] ResetToggleOnRespawn
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:384
class C_CDOTA_Ability_SkeletonKing_VampiricAura_MapInstall {
	C_CDOTA_Ability_SkeletonKing_VampiricAura_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:436
class CDOTA_Ability_SkeletonKing_MortalStrike : public CDOTABaseAbility {
public:

private:

	float drain_duration;  // +0x390
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
	CDOTA_Ability_SkeletonKing_MortalStrike(CDOTA_Ability_SkeletonKing_MortalStrike &);
	CDOTA_Ability_SkeletonKing_MortalStrike(CDOTA_Ability_SkeletonKing_MortalStrike &);
	CDOTA_Ability_SkeletonKing_MortalStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_SkeletonKing_MortalStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:489
class CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff : public CDOTA_Buff {
public:

private:

	int hp_drain;  // +0xba8
	int m_nDamage;  // +0xbac
	int m_nActualHeal;  // +0xbb0
	CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:551
class CDOTA_Modifier_SkeletonKing_MortalStrike_Buff : public CDOTA_Buff {
public:

	CDOTA_Modifier_SkeletonKing_MortalStrike_Buff(CDOTA_Modifier_SkeletonKing_MortalStrike_Buff &);
	CDOTA_Modifier_SkeletonKing_MortalStrike_Buff(const CDOTA_Modifier_SkeletonKing_MortalStrike_Buff &);
	CDOTA_Modifier_SkeletonKing_MortalStrike_Buff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:567
class CDOTA_Modifier_SkeletonKing_MortalStrike : public CDOTA_Buff {
public:

private:

	int crit_mult;  // +0xba8
	int crit_mult_creeps;  // +0xbac
	int crit_chance;  // +0xbb0
	CDOTA_Modifier_SkeletonKing_MortalStrike();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_SkeletonKing_MortalStrike();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:674
class CDOTA_Ability_SkeletonKing_Reincarnation : public CDOTABaseAbility {
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
	CDOTA_Ability_SkeletonKing_Reincarnation(CDOTA_Ability_SkeletonKing_Reincarnation &);
	CDOTA_Ability_SkeletonKing_Reincarnation(CDOTA_Ability_SkeletonKing_Reincarnation &);
	CDOTA_Ability_SkeletonKing_Reincarnation();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetManaCost(int);
	virtual ~CDOTA_Ability_SkeletonKing_Reincarnation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[273] GetManaCost
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:689
class C_CDOTA_Ability_SkeletonKing_Reincarnation_MapInstall {
	C_CDOTA_Ability_SkeletonKing_Reincarnation_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:714
class CDOTA_Modifier_SkeletonKing_Reincarnation : public CDOTA_Buff {
public:

private:

	float reincarnate_time;  // +0xba8
	int aura_radius;  // +0xbac
	float m_fLastReincarnationTime;  // +0xbb0
	CDOTA_Modifier_SkeletonKing_Reincarnation();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void DeclareFunctions();
	ModifierVariant_t ReincarnateTime(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual int GetAttributes();
	virtual bool IsAura();
	virtual bool IsAuraActiveOnDeath();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_SkeletonKing_Reincarnation();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[7] GetAttributes
	// vtable[35] IsAura
	// vtable[36] IsAuraActiveOnDeath
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:926
class CDOTA_Modifier_SkeletonKing_Reincarnation_Slow : public CDOTA_Buff {
public:

private:

	int movespeed;  // +0xba8
	CDOTA_Modifier_SkeletonKing_Reincarnation_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_skeleton_king.cpp:999
class CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter : public CDOTA_Buff {
public:

private:

	float scepter_duration;  // +0xba8
	CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t OnTakeDamageKillCredit(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_SkeletonKing::~CDOTA_Unit_Hero_SkeletonKing  (line 35, @0x0000000002a67e20, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_SkeletonKing::~CDOTA_Unit_Hero_SkeletonKing(CDOTA_Unit_Hero_SkeletonKing *const this)
{
  this->_vptr_IHandleEntity = &off_4395130;
  this->_vptr_INextBotEventResponder = &off_4396110;
  this->_vptr_CObstructionObject = &off_4396440;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_SkeletonKing::~CDOTA_Unit_Hero_SkeletonKing  (line 35, @0x0000000002a67e60, libserver.so)  // inlines: ~CDOTA_Unit_Hero_SkeletonKing
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_SkeletonKing::~CDOTA_Unit_Hero_SkeletonKing(CDOTA_Unit_Hero_SkeletonKing *const this)
{
  this->_vptr_IHandleEntity = &off_4395130;
  this->_vptr_INextBotEventResponder = &off_4396110;
  this->_vptr_CObstructionObject = &off_4396440;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_SkeletonKing::Schema_DynamicBinding  (line 37, @0x0000000002a60780, libserver.so)
// globals: CDOTA_Unit_Hero_SkeletonKing::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SkeletonKing::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SkeletonKing *const this)
{
  return CDOTA_Unit_Hero_SkeletonKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002a607b0, libserver.so)
// globals: CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002a607c0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_SkeletonKing>
void __fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002a607e0, libserver.so)
void __fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002a60800, libserver.so)
bool __fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002a60810, libserver.so)
// globals: CDOTA_Unit_Hero_SkeletonKing::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_SkeletonKing::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002a63c70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002a65c30, libserver.so)  // inlines: CDOTA_Unit_Hero_SkeletonKing, Construct<CDOTA_Unit_Hero_SkeletonKing>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4395130;
    *(p + 236) = &off_4396110;
    *(p + 257) = &off_4396440;
  }
  return p;
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a6b500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002a6b7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal  (line 37, @0x0000000002a706d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_skeleton_king", "CDOTA_Unit_Hero_SkeletonKing"
// globals: `guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass, CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass, __dso_handle, CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo, CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass);
    CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass._vptr_CEntityClass = off_43950B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_SkeletonKing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SkeletonKingClass != 0 )
    return &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass;
  if ( `guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo,
      "CDOTA_Unit_Hero_SkeletonKing",
      "npc_dota_hero_skeleton_king",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo);
  }
  CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass.m_pClassInfo = &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo;
  CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass.m_pBaseClassInfo = CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SkeletonKingClass = &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass;
  CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClassInfo.m_pClass = &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass;
  CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SkeletonKingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_SkeletonKing::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SkeletonKingClass;
}


// CDOTA_Unit_Hero_SkeletonKing::GetDeathEffectName  (line 42, @0x0000000002a60820, libserver.so)
// strings: "particles/units/heroes/hero_skeletonking/wraith_king_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_SkeletonKing::GetDeathEffectName(CDOTA_Unit_Hero_SkeletonKing *const this)
{
  return "particles/units/heroes/hero_skeletonking/wraith_king_death.vpcf";
}


// CDOTA_Unit_Hero_SkeletonKing::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002a3eec0, libserver.so)
int __fastcall CDOTA_Unit_Hero_SkeletonKing::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_SkeletonKing *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_SkeletonKing::GetServerClass  (line 48, @0x0000000002a48430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_SkeletonKing::GetServerClass(CDOTA_Unit_Hero_SkeletonKing *const this)
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


// CDOTA_Unit_Hero_SkeletonKing::OnDying  (line 56, @0x0000000002a3ffb0, libserver.so)
// calls: CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_SkeletonKing.Death"
void __fastcall CDOTA_Unit_Hero_SkeletonKing::OnDying(CDOTA_Unit_Hero_SkeletonKing *const this)
{
  CDOTA_BaseNPC::UnitEmitSound(this, "Hero_SkeletonKing.Death", 0.0, 0, 0);
}


// CDOTA_Unit_Hero_SkeletonKing::ModifyOrAppendCriteria  (line 66, @0x0000000002a40770, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_item_refresherorb"
void __fastcall CDOTA_Unit_Hero_SkeletonKing::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_SkeletonKing *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_item_refresherorb", 0);
  CResponseCriteriaSet::AppendCriteria(set, "refresher", 1.0, v4);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::~CDOTA_Ability_SkeletonKing_HellfireBlast  (line 81, @0x0000000002a67210, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::~CDOTA_Ability_SkeletonKing_HellfireBlast(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4396510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::~CDOTA_Ability_SkeletonKing_HellfireBlast  (line 81, @0x0000000002a67230, libserver.so)  // inlines: ~CDOTA_Ability_SkeletonKing_HellfireBlast
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::~CDOTA_Ability_SkeletonKing_HellfireBlast(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4396510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::Schema_DynamicBinding  (line 83, @0x0000000002a60830, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_HellfireBlast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  return CDOTA_Ability_SkeletonKing_HellfireBlast::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 83, @0x0000000002a60840, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::DestructInstance  (line 83, @0x0000000002a60850, libserver.so)  // inlines: Destruct<CDOTA_Ability_SkeletonKing_HellfireBlast>
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::FreeInstance  (line 83, @0x0000000002a60870, libserver.so)
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::CanAllocate  (line 83, @0x0000000002a60890, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 83, @0x0000000002a608a0, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_HellfireBlast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_HellfireBlast::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::AllocateInstance  (line 83, @0x0000000002a63cb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::ConstructInstance  (line 83, @0x0000000002a65f40, libserver.so)  // inlines: CDOTA_Ability_SkeletonKing_HellfireBlast, Construct<CDOTA_Ability_SkeletonKing_HellfireBlast>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4396510;
  }
  return p;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002a6a980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 83, @0x0000000002a6a9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal  (line 83, @0x0000000002a70820, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "skeleton_king_hellfire_blast", "CDOTA_Ability_SkeletonKing_HellfireBlast"
// globals: `guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass, CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass, __dso_handle, CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo, CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo
CEntityClass *__cdecl CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass);
    CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass._vptr_CEntityClass = off_4396490;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass);
    __cxa_atexit(
      CDOTA_Ability_SkeletonKing_HellfireBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SkeletonKing_HellfireBlastClass != 0 )
    return &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass;
  if ( `guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo,
      "CDOTA_Ability_SkeletonKing_HellfireBlast",
      "skeleton_king_hellfire_blast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo);
  }
  CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass.m_pClassInfo = &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo;
  CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass.m_pBaseClassInfo = CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SkeletonKing_HellfireBlastClass = &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass;
  CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClassInfo.m_pClass = &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass;
  CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SkeletonKing_HellfireBlastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SkeletonKing_HellfireBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_HellfireBlastClass;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::OnAbilityPhaseStart  (line 98, @0x0000000002a40140, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast_warmup.vpcf", "attach_attack2"
bool __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::OnAbilityPhaseStart(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast_warmup.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, v4, 5, "attach_attack2", vec3_invalid, 1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Caster);
  return 1;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::OnSpellStart  (line 110, @0x0000000002a52e90, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "blast_speed", "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast.vpcf", "Hero_SkeletonKing.Hellfire_Blast"
void __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::OnSpellStart(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-18h]

  info.pAbility = this;
  v12 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
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
  info.pszEffectName = "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blast_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.iSourceAttachment = 2;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_SkeletonKing.Hellfire_Blast", 0.0, 0, 0);
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::OnProjectileHit  (line 129, @0x0000000002a59060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_skeleton_king_hellfire_blast", "blast_stun_duration", "modifier_stunned", "Hero_SkeletonKing.Hellfire_BlastImpact", "blast_dot_duration"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::OnProjectileHit(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  int v9; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            v9 = (*(this->_vptr_IHandleEntity + 247))(this);
            Caster = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(Caster, m_pInstance, this, v9, 2, 0);
            KeyValues::KeyValues(&kv, "modifier_skeleton_king_hellfire_blast");
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "blast_stun_duration", -1, 0);
            KeyValues::SetFloat(&kv, "duration", v11);
            v12 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, this, "modifier_stunned", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_SkeletonKing.Hellfire_BlastImpact", 0.0, 0, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "blast_dot_duration", -1, 0);
            KeyValues::SetFloat(&kv, "duration", v13);
            v14 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v14, this, "modifier_skeleton_king_hellfire_blast", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_SkeletonKing_HellfireBlast::GetAbilityDamageToTargetOverInterval  (line 153, @0x0000000002a41f90, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this,
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


// CDOTA_Ability_SkeletonKing_HellfireBlast::GetStunDuration  (line 163, @0x0000000002a530c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blast_stun_duration"
float __fastcall CDOTA_Ability_SkeletonKing_HellfireBlast::GetStunDuration(
        CDOTA_Ability_SkeletonKing_HellfireBlast *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "blast_stun_duration", -1, 1);
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::~CDOTA_Modifier_SkeletonKing_HellfireBlast  (line 171, @0x0000000002a65900, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::~CDOTA_Modifier_SkeletonKing_HellfireBlast(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_CDOTA_Buff = &off_4396FD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::~CDOTA_Modifier_SkeletonKing_HellfireBlast  (line 171, @0x0000000002a65920, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_HellfireBlast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::~CDOTA_Modifier_SkeletonKing_HellfireBlast(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this)
{
  this->_vptr_CDOTA_Buff = &off_4396FD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::GetEffectName  (line 181, @0x0000000002a608b0, libserver.so)
// strings: "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::GetEffectName(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this)
{
  return "particles/units/heroes/hero_skeletonking/skeletonking_hellfireblast_debuff.vpcf";
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::DeclareFunctions  (line 193, @0x0000000002a3eed0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_HellfireBlast::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_SkeletonKing_HellfireBlast::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::OnCreated  (line 200, @0x0000000002a55c50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blast_dot_damage", "blast_slow"
void __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::OnCreated(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  CDOTA_Buff::StartIntervalThink(this, 2.0, v2);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->blast_dot_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blast_dot_damage", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->blast_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "blast_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->blast_dot_damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->blast_slow = 0;
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::GetModifierMoveSpeedBonus_Percentage  (line 209, @0x0000000002a3eef0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->blast_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SkeletonKing_HellfireBlast::OnIntervalThink  (line 216, @0x0000000002a404d0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_SkeletonKing_HellfireBlast::OnIntervalThink(
        CDOTA_Modifier_SkeletonKing_HellfireBlast *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->blast_dot_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::~CDOTA_Modifier_SkeletonKing_VampiricAura  (line 228, @0x0000000002a658b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::~CDOTA_Modifier_SkeletonKing_VampiricAura(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43972F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::~CDOTA_Modifier_SkeletonKing_VampiricAura  (line 228, @0x0000000002a658d0, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_VampiricAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::~CDOTA_Modifier_SkeletonKing_VampiricAura(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_43972F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::IsAura  (line 232, @0x0000000002a66610, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::IsAura(CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return (*(Parent->_vptr_IHandleEntity + 408))(Parent);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::GetModifierAura  (line 233, @0x0000000002a608c0, libserver.so)
// strings: "modifier_skeleton_king_vampiric_aura_buff"
const char *__fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::GetModifierAura(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  return "modifier_skeleton_king_vampiric_aura_buff";
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchTeam  (line 234, @0x0000000002a608d0, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchTeam(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchType  (line 235, @0x0000000002a608e0, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchType(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  return !this->m_bAppliesToCreeps ? 1 : 19;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchFlags  (line 236, @0x0000000002a60900, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraSearchFlags(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  return 64;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraRadius  (line 237, @0x0000000002a770e0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "vampiric_aura_radius"
int __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::GetAuraRadius(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "vampiric_aura_radius", -1, 0);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::IsHidden  (line 239, @0x0000000002a60910, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::IsHidden(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura::OnCreated  (line 252, @0x0000000002a3ef10, libserver.so)
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura::OnCreated(
        CDOTA_Modifier_SkeletonKing_VampiricAura *const this,
        KeyValues *pKV)
{
  this->m_bAppliesToCreeps = 1;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff  (line 261, @0x0000000002a65860, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4397610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff  (line 261, @0x0000000002a65880, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::~CDOTA_Modifier_SkeletonKing_VampiricAura_Buff(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4397610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::IsHidden  (line 271, @0x0000000002a66630, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::IsHidden(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this)
{
  CDOTA_BaseNPC *Caster; // r12

  Caster = CDOTA_Buff::GetCaster(this);
  return Caster == CDOTA_Buff::GetParent(this);
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::GetAttributes  (line 273, @0x0000000002a65b80, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::GetAttributes(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnCreated  (line 284, @0x0000000002a55290, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnCreated(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->vampiric_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "vampiric_aura", -1, 0);
  else
    this->vampiric_aura = 0;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnRefresh  (line 291, @0x0000000002a54ff0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnRefresh(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->vampiric_aura = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "vampiric_aura", -1, 0);
  else
    this->vampiric_aura = 0;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::DeclareFunctions  (line 298, @0x0000000002a3ef20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnAttacked  (line 305, @0x0000000002a530e0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetHealth, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetAbility (14 total)
// strings: "special_bonus_unique_wraith_king_2", "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf", "particles/generic_gameplay/generic_lifesteal.vpcf", "particles/units/heroes/hero_skeletonking/wraith_king_vampiric_aura_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_VampiricAura_Buff::OnAttacked(
        CDOTA_Modifier_SkeletonKing_VampiricAura_Buff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *v10; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int vampiric_aura; // ebx
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v19; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v22; // rbx
  CDOTA_BaseNPC *v23; // rbx
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rbx
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  float flBonusVampiric; // [rsp+8h] [rbp-28h]
  float fDamage; // [rsp+Ch] [rbp-24h]
  float Health; // [rsp+Ch] [rbp-24h]

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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetCaster(this) != 0
          && CDOTA_Buff::GetParent(this) != 0
          && params->bProcessProcs
          && (m_pInstance->m_iUnitType & 0x10) == 0 )
        {
          m_Value = m_pInstance->m_iTeamNum.m_Value;
          if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
          {
            v10 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
            if ( CDOTA_Buff::GetParent(this) == v10
              && !m_pInstance->m_bIsIllusion.m_Value
              && (m_pInstance->m_iUnitType & 0x193) != 0
              && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
            {
              Caster = CDOTA_Buff::GetCaster(this);
              AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_wraith_king_2", 0);
              if ( AbilityByName != 0 )
              {
                if ( AbilityByName->m_iLevel.m_Value <= 0 )
                  flBonusVampiric = 0.0;
                else
                  flBonusVampiric = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
              }
              else
              {
                flBonusVampiric = 0.0;
              }
              fDamage = params->fDamage;
              if ( CBaseEntity::GetHealth(m_pInstance) <= fDamage )
                Health = CBaseEntity::GetHealth(m_pInstance);
              else
                Health = params->fDamage;
              vampiric_aura = this->vampiric_aura;
              if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
              {
                Ability = CDOTA_Buff::GetAbility(this);
                Parent = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::Heal(Parent, ((vampiric_aura + flBonusVampiric) * Health) / 100.0, Ability, 1, 1);
              }
              v14 = CDOTA_Buff::GetCaster(this);
              if ( !CDOTA_BaseNPC::IsInvisibleTo(v14, m_pInstance) )
              {
                v15 = CDOTA_Buff::GetCaster(this);
                if ( CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(m_pInstance, v15) )
                {
                  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x400) != 0 )
                  {
                    v16 = CDOTA_Buff::GetParent(this);
                    ParticleManager = GetParticleManager();
                    Particle = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/generic_gameplay/generic_lifesteal_lanecreeps.vpcf",
                                 1,
                                 v16,
                                 0,
                                 0);
                  }
                  else
                  {
                    v22 = CDOTA_Buff::GetParent(this);
                    if ( v22 == CDOTA_Buff::GetCaster(this) )
                    {
                      v25 = CDOTA_Buff::GetParent(this);
                      v26 = GetParticleManager();
                      Particle = CDOTA_ParticleManager::CreateParticle(
                                   v26,
                                   "particles/units/heroes/hero_skeletonking/wraith_king_vampiric_aura_lifesteal.vpcf",
                                   1,
                                   v25,
                                   0,
                                   0);
                      v27 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControlEnt(v27, Particle, 1, m_pInstance, 1, 0, vec3_invalid, 1);
                    }
                    else
                    {
                      v23 = CDOTA_Buff::GetParent(this);
                      v24 = GetParticleManager();
                      Particle = CDOTA_ParticleManager::CreateParticle(
                                   v24,
                                   "particles/generic_gameplay/generic_lifesteal.vpcf",
                                   1,
                                   v23,
                                   0,
                                   0);
                    }
                  }
                  v19 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
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


// CDOTA_Ability_SkeletonKing_VampiricAura::~CDOTA_Ability_SkeletonKing_VampiricAura  (line 365, @0x0000000002a67260, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::~CDOTA_Ability_SkeletonKing_VampiricAura(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  this->_vptr_IHandleEntity = &off_4397970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::~CDOTA_Ability_SkeletonKing_VampiricAura  (line 365, @0x0000000002a67280, libserver.so)  // inlines: ~CDOTA_Ability_SkeletonKing_VampiricAura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::~CDOTA_Ability_SkeletonKing_VampiricAura(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  this->_vptr_IHandleEntity = &off_4397970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::Schema_DynamicBinding  (line 367, @0x0000000002a60920, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_VampiricAura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return CDOTA_Ability_SkeletonKing_VampiricAura::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 367, @0x0000000002a60930, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::DestructInstance  (line 367, @0x0000000002a60940, libserver.so)  // inlines: Destruct<CDOTA_Ability_SkeletonKing_VampiricAura>
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::FreeInstance  (line 367, @0x0000000002a60960, libserver.so)
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::CanAllocate  (line 367, @0x0000000002a60980, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 367, @0x0000000002a60990, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_VampiricAura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_VampiricAura::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::AllocateInstance  (line 367, @0x0000000002a63cf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::ConstructInstance  (line 367, @0x0000000002a65f70, libserver.so)  // inlines: CDOTA_Ability_SkeletonKing_VampiricAura, Construct<CDOTA_Ability_SkeletonKing_VampiricAura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4397970;
  }
  return p;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 367, @0x0000000002a6a9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 367, @0x0000000002a6a9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal  (line 367, @0x0000000002a70970, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "skeleton_king_vampiric_aura", "CDOTA_Ability_SkeletonKing_VampiricAura"
// globals: `guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass, CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass, __dso_handle, CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo, CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass);
    CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass._vptr_CEntityClass = off_43978F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass);
    __cxa_atexit(
      CDOTA_Ability_SkeletonKing_VampiricAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SkeletonKing_VampiricAuraClass != 0 )
    return &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass;
  if ( `guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo,
      "CDOTA_Ability_SkeletonKing_VampiricAura",
      "skeleton_king_vampiric_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo);
  }
  CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass.m_pClassInfo = &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo;
  CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass.m_pBaseClassInfo = CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SkeletonKing_VampiricAuraClass = &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass;
  CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClassInfo.m_pClass = &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass;
  CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SkeletonKing_VampiricAuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SkeletonKing_VampiricAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_VampiricAuraClass;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::GetIntrinsicModifierName  (line 371, @0x0000000002a609a0, libserver.so)
// strings: "modifier_skeleton_king_vampiric_aura"
const char *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::GetIntrinsicModifierName(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return "modifier_skeleton_king_vampiric_aura";
}


// CDOTA_Ability_SkeletonKing_VampiricAura::ResetToggleOnRespawn  (line 374, @0x0000000002a609b0, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::ResetToggleOnRespawn(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return 0;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::ProcsMagicStick  (line 375, @0x0000000002a609c0, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::ProcsMagicStick(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return 0;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::IsStealable  (line 376, @0x0000000002a609d0, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::IsStealable(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return 0;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::YouForgotToImplementOrDeclareServerClass  (line 384, @0x0000000002a3ef40, libserver.so)
int __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  return 0;
}


// CDOTA_Ability_SkeletonKing_VampiricAura::GetServerClass  (line 384, @0x0000000002a48530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SkeletonKing_VampiricAura::GetServerClass(
        CDOTA_Ability_SkeletonKing_VampiricAura *const this)
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


// CDOTA_Ability_SkeletonKing_VampiricAura::OnToggle  (line 394, @0x0000000002a407c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::OnToggle, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_skeleton_king_vampiric_aura"
void __fastcall CDOTA_Ability_SkeletonKing_VampiricAura::OnToggle(CDOTA_Ability_SkeletonKing_VampiricAura *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( CDOTABaseAbility::GetCaster(this) == 0
    || (v2 = CDOTABaseAbility::GetCaster(this), (*(v2->_vptr_IHandleEntity + 408))(v2) != 0) )
  {
    CDOTABaseAbility::OnToggle(this);
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_skeleton_king_vampiric_aura", 0);
    if ( ModifierByName != 0 )
      LOBYTE(ModifierByName[1]._vptr_CDOTA_Buff) = !this->m_bToggleState.m_Value;
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Ability_SkeletonKing_MortalStrike::~CDOTA_Ability_SkeletonKing_MortalStrike  (line 436, @0x0000000002a672b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::~CDOTA_Ability_SkeletonKing_MortalStrike(
        CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4398470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::~CDOTA_Ability_SkeletonKing_MortalStrike  (line 436, @0x0000000002a672d0, libserver.so)  // inlines: ~CDOTA_Ability_SkeletonKing_MortalStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::~CDOTA_Ability_SkeletonKing_MortalStrike(
        CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  this->_vptr_IHandleEntity = &off_4398470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::Schema_DynamicBinding  (line 438, @0x0000000002a609e0, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_MortalStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  return CDOTA_Ability_SkeletonKing_MortalStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 438, @0x0000000002a609f0, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::DestructInstance  (line 438, @0x0000000002a60a00, libserver.so)  // inlines: Destruct<CDOTA_Ability_SkeletonKing_MortalStrike>
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::FreeInstance  (line 438, @0x0000000002a60a20, libserver.so)
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::CanAllocate  (line 438, @0x0000000002a60a40, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 438, @0x0000000002a60a50, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_MortalStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_MortalStrike::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::AllocateInstance  (line 438, @0x0000000002a63d30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::ConstructInstance  (line 438, @0x0000000002a65fa0, libserver.so)  // inlines: CDOTA_Ability_SkeletonKing_MortalStrike, Construct<CDOTA_Ability_SkeletonKing_MortalStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4398470;
  }
  return p;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 438, @0x0000000002a6aa20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 438, @0x0000000002a6aa40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal  (line 438, @0x0000000002a70ac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "skeleton_king_mortal_strike", "CDOTA_Ability_SkeletonKing_MortalStrike"
// globals: `guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass, CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass, __dso_handle, CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo, CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass);
    CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass._vptr_CEntityClass = off_43983F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_SkeletonKing_MortalStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SkeletonKing_MortalStrikeClass != 0 )
    return &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass;
  if ( `guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo,
      "CDOTA_Ability_SkeletonKing_MortalStrike",
      "skeleton_king_mortal_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo);
  }
  CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass.m_pClassInfo = &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo;
  CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass.m_pBaseClassInfo = CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SkeletonKing_MortalStrikeClass = &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass;
  CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClassInfo.m_pClass = &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass;
  CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SkeletonKing_MortalStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SkeletonKing_MortalStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_MortalStrikeClass;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::GetIntrinsicModifierName  (line 444, @0x0000000002a60a60, libserver.so)
// strings: "modifier_skeleton_king_mortal_strike"
const char *__fastcall CDOTA_Ability_SkeletonKing_MortalStrike::GetIntrinsicModifierName(
        CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  return "modifier_skeleton_king_mortal_strike";
}


// CDOTA_Ability_SkeletonKing_MortalStrike::OnAbilityPhaseStart  (line 454, @0x0000000002a40850, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound
// strings: "Hero_SkeletonKing.MortalStrike.Cast"
bool __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::OnAbilityPhaseStart(
        CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1510, 0.1, 0.1, 9, 0, 1.0);
  }
  v3 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_SkeletonKing.MortalStrike.Cast", v3);
  return 1;
}


// CDOTA_Ability_SkeletonKing_MortalStrike::OnSpellStart  (line 466, @0x0000000002a56f20, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "drain_duration", "modifier_skeleton_king_mortal_strike_drain", "modifier_skeleton_king_mortal_strike_drain_debuff", "modifier_skeleton_king_mortal_strike_drain_buff", "Hero_SkeletonKing.MortalStrike.Target"
void __fastcall CDOTA_Ability_SkeletonKing_MortalStrike::OnSpellStart(
        CDOTA_Ability_SkeletonKing_MortalStrike *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r14
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    this->drain_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "drain_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_skeleton_king_mortal_strike_drain");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_skeleton_king_mortal_strike_drain_debuff", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_skeleton_king_mortal_strike_drain_buff", &kv, 0);
    DOTA_EmitSound(10, "Hero_SkeletonKing.MortalStrike.Target", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff  (line 489, @0x0000000002a65810, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4398F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff  (line 489, @0x0000000002a65830, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4398F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::IsPurgable  (line 494, @0x0000000002a60a70, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::IsPurgable(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::OnCreated  (line 511, @0x0000000002a51370, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CBaseEntity::GetHealth, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "hp_drain", "particles/units/heroes/hero_skeletonking/skeletonking_mortalstrike.vpcf", "attach_left_eye", "attach_right_eye", "attach_hitloc"
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::OnCreated(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v5; // r12d
  CDOTABaseAbility *v6; // r14
  CDOTA_BaseNPC *v7; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // r12d
  CDOTA_BaseNPC *v11; // rax
  int Health; // eax
  int m_nDamage; // edx
  int v14; // r12d
  CDOTABaseAbility *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  int m_nActualHeal; // r13d
  CDOTA_BaseNPC *v18; // r12
  CDOTA_BaseNPC *v19; // rax
  CDOTAPlayer *v20; // rax
  CDOTA_BaseNPC *v21; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *v24; // rax
  __int64 v25; // r13
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  float flAmount; // [rsp+Ch] [rbp-24h]
  vec_t flAmounta; // [rsp+Ch] [rbp-24h]
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v33; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->hp_drain, "hp_drain");
  Parent = CDOTA_Buff::GetParent(this);
  v5 = ((*(Parent->_vptr_IHandleEntity + 156))(Parent) * this->hp_drain) / 100;
  this->m_nDamage = v5;
  v6 = CDOTA_Buff::GetAbility(this);
  v7 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v7, v6, v5, 4, 160);
  v9 = CDOTA_Buff::GetCaster(this);
  v10 = (*(v9->_vptr_IHandleEntity + 156))(v9);
  v11 = CDOTA_Buff::GetCaster(this);
  Health = CBaseEntity::GetHealth(v11);
  m_nDamage = this->m_nDamage;
  v14 = v10 - Health;
  if ( v14 <= m_nDamage )
    m_nDamage = v14;
  this->m_nActualHeal = m_nDamage;
  v15 = CDOTA_Buff::GetAbility(this);
  flAmount = this->m_nActualHeal;
  v16 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::Heal(v16, flAmount, v15, 0, 1);
  m_nActualHeal = this->m_nActualHeal;
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = (*(v19->_vptr_IHandleEntity + 413))(v19);
  SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v18, m_nActualHeal, 0);
  v21 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v21) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_skeletonking/skeletonking_mortalstrike.vpcf",
                   1,
                   v21,
                   0,
                   0);
  v23 = CDOTA_Buff::GetCaster(this);
  v24 = GetParticleManager();
  v25 = *&vec3_invalid.x;
  flAmounta = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v24, v21, 0, v23, 5, "attach_left_eye", vec3_invalid, 1);
  v26 = CDOTA_Buff::GetCaster(this);
  v27 = GetParticleManager();
  *&v32.x = v25;
  v32.z = flAmounta;
  CDOTA_ParticleManager::SetParticleControlEnt(v27, v21, 1, v26, 5, "attach_right_eye", v32, 1);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  *&v33.x = v25;
  v33.z = flAmounta;
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v21, 2, v28, 5, "attach_hitloc", v33, 1);
  CDOTA_Buff::AddParticle(this, v21, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::OnDestroy  (line 533, @0x0000000002a408c0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, DOTA_EmitSound
// strings: "Hero_SkeletonKing.MortalStrike.Destroy.Caster", "Hero_SkeletonKing.MortalStrike.Destroy.Target"
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff::OnDestroy(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTAPlayer *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    flDamage = this->m_nDamage;
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v5 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v5, Caster, Ability, flDamage, 4, 160);
    v6 = CDOTA_Buff::GetAbility(this);
    flDamagea = this->m_nDamage;
    v7 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v7, flDamagea, v6, 0, 1);
    LODWORD(Ability) = this->m_nDamage;
    v8 = CDOTA_Buff::GetParent(this);
    v9 = CDOTA_Buff::GetParent(this);
    v10 = (*(v9->_vptr_IHandleEntity + 413))(v9);
    SendOverheadEventMessage(v10, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v8, Ability, 0);
  }
  v11 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_SkeletonKing.MortalStrike.Destroy.Caster", v11);
  v12 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_SkeletonKing.MortalStrike.Destroy.Target", v12);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff  (line 551, @0x0000000002a65b30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4399210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff  (line 551, @0x0000000002a65b50, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::~CDOTA_Modifier_SkeletonKing_MortalStrike_Buff(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4399210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::IsPurgable  (line 556, @0x0000000002a60a80, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike_Buff::IsPurgable(
        CDOTA_Modifier_SkeletonKing_MortalStrike_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::~CDOTA_Modifier_SkeletonKing_MortalStrike  (line 567, @0x0000000002a657c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::~CDOTA_Modifier_SkeletonKing_MortalStrike(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4399570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::~CDOTA_Modifier_SkeletonKing_MortalStrike  (line 567, @0x0000000002a657e0, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_MortalStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::~CDOTA_Modifier_SkeletonKing_MortalStrike(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_4399570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::IsHidden  (line 574, @0x0000000002a60a90, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::IsHidden(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::DeclareFunctions  (line 591, @0x0000000002a3ef50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::OnCreated  (line 599, @0x0000000002a55e70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crit_mult_creeps"
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::OnCreated(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_mult = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_mult", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->crit_mult_creeps = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->crit_mult = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->crit_mult_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_mult_creeps", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_chance", -1, 0);
    return;
  }
LABEL_7:
  this->crit_chance = 0;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::OnRefresh  (line 608, @0x0000000002a55da0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crit_mult_creeps"
void __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::OnRefresh(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->crit_mult = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->crit_chance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->crit_mult = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_mult", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->crit_mult_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_mult_creeps", -1, 0);
    return;
  }
LABEL_7:
  this->crit_mult_creeps = 0;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike  (line 617, @0x0000000002a477b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ModifierVariant_t, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::PreventCritOrBashAnimations, RollPseudoRandomPercentage
// strings: "modifier_skeleton_king_mortal_strike_drain_buff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm1
  __m128i v6; // xmm0
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( params->bTooltip )
  {
    result.m_szVal = 0;
    *v2.m128i_i32 = this->crit_chance;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else
  {
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
      && (Parent = CDOTA_Buff::GetParent(this),
          CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_skeleton_king_mortal_strike_drain_buff", 0) == 0)
      && (m_Index = params->htarget.m_Index) + 2 > 1
      && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
      && (v10 = &v9[params->htarget.m_Index & 0x1FF]) != 0
      && m_Index == v10->m_EHandle.m_Index
      && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0)
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
      && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent)
      && (Caster = CDOTA_Buff::GetCaster(this), !CDOTA_BaseNPC::PreventCritOrBashAnimations(Caster))
      && (v13 = CDOTA_Buff::GetParent(this),
          RollPseudoRandomPercentage(this->crit_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SKELETONKING_CRIT, v13)) )
    {
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        *v6.m128i_i32 = this->crit_mult;
      else
        *v6.m128i_i32 = this->crit_mult_creeps;
    }
    else
    {
      v6 = 0;
    }
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded  (line 653, @0x0000000002a45e50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_SkeletonKing.CriticalStrike"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_MortalStrike::OnAttackLanded(
        CDOTA_Modifier_SkeletonKing_MortalStrike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  __int64 v10; // rbx
  CDOTA_AttackRecordManager *v11; // rax
  CDOTA_BaseNPC *v13; // r13
  __int64 iRecord; // r14
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r14
  CDOTA_BaseNPC *Parent; // rax

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
  if ( v7 + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[params->hattacker.m_Index & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (v13 = v9->m_pInstance, v9->m_pInstance != 0)
    && v13->m_bIsDOTANPC )
  {
    iRecord = params->iRecord;
    AttackRecordsManager = GetAttackRecordsManager();
    RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
    if ( CDOTA_Buff::GetParent(this) == v13
      && m_pInstance != 0
      && RecordByIndex != 0
      && RecordByIndex->m_flCriticalBonus > 1.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_SkeletonKing.CriticalStrike", 0.0, 0, 0);
    }
  }
  else
  {
    v10 = params->iRecord;
    v11 = GetAttackRecordsManager();
    CDOTA_AttackRecordManager::GetRecordByIndex(v11, v10);
  }
  return 1uLL;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::~CDOTA_Ability_SkeletonKing_Reincarnation  (line 674, @0x0000000002a67300, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::~CDOTA_Ability_SkeletonKing_Reincarnation(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this)
{
  this->_vptr_IHandleEntity = &off_43998D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::~CDOTA_Ability_SkeletonKing_Reincarnation  (line 674, @0x0000000002a67320, libserver.so)  // inlines: ~CDOTA_Ability_SkeletonKing_Reincarnation
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::~CDOTA_Ability_SkeletonKing_Reincarnation(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this)
{
  this->_vptr_IHandleEntity = &off_43998D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::Schema_DynamicBinding  (line 676, @0x0000000002a60aa0, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_Reincarnation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_Reincarnation *const this)
{
  return CDOTA_Ability_SkeletonKing_Reincarnation::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 676, @0x0000000002a60ab0, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::DestructInstance  (line 676, @0x0000000002a60ac0, libserver.so)  // inlines: Destruct<CDOTA_Ability_SkeletonKing_Reincarnation>
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::FreeInstance  (line 676, @0x0000000002a60ae0, libserver.so)
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::CanAllocate  (line 676, @0x0000000002a60b00, libserver.so)
bool __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 676, @0x0000000002a60b10, libserver.so)
// globals: CDOTA_Ability_SkeletonKing_Reincarnation::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_SkeletonKing_Reincarnation::s_pSchemaBinding;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::AllocateInstance  (line 676, @0x0000000002a63d70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::ConstructInstance  (line 676, @0x0000000002a65fd0, libserver.so)  // inlines: CDOTA_Ability_SkeletonKing_Reincarnation, Construct<CDOTA_Ability_SkeletonKing_Reincarnation>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43998D0;
  }
  return p;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 676, @0x0000000002a6aa70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 676, @0x0000000002a6aa90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal  (line 676, @0x0000000002a70c10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "skeleton_king_reincarnation", "CDOTA_Ability_SkeletonKing_Reincarnation"
// globals: `guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass, CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass, __dso_handle, CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo, CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo
CEntityClass *__cdecl CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass);
    CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass._vptr_CEntityClass = off_4399850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass);
    __cxa_atexit(
      CDOTA_Ability_SkeletonKing_Reincarnation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_SkeletonKing_ReincarnationClass != 0 )
    return &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass;
  if ( `guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo,
      "CDOTA_Ability_SkeletonKing_Reincarnation",
      "skeleton_king_reincarnation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo);
  }
  CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass.m_pClassInfo = &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo;
  CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass.m_pBaseClassInfo = CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_SkeletonKing_ReincarnationClass = &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass;
  CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClassInfo.m_pClass = &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass;
  CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_SkeletonKing_ReincarnationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_SkeletonKing_Reincarnation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_SkeletonKing_ReincarnationClass;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::GetIntrinsicModifierName  (line 680, @0x0000000002a60b20, libserver.so)
// strings: "modifier_skeleton_king_reincarnation"
const char *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::GetIntrinsicModifierName(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this)
{
  return "modifier_skeleton_king_reincarnation";
}


// CDOTA_Ability_SkeletonKing_Reincarnation::YouForgotToImplementOrDeclareServerClass  (line 689, @0x0000000002a3ef90, libserver.so)
int __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this)
{
  return 0;
}


// CDOTA_Ability_SkeletonKing_Reincarnation::GetServerClass  (line 689, @0x0000000002a48370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_SkeletonKing_Reincarnation::GetServerClass(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this)
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


// CDOTA_Ability_SkeletonKing_Reincarnation::GetManaCost  (line 699, @0x0000000002a40b10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetManaCost
// strings: "special_bonus_unique_wraith_king_1"
int __fastcall CDOTA_Ability_SkeletonKing_Reincarnation::GetManaCost(
        CDOTA_Ability_SkeletonKing_Reincarnation *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_wraith_king_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return 0;
  else
    return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::~CDOTA_Modifier_SkeletonKing_Reincarnation  (line 714, @0x0000000002a65770, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::~CDOTA_Modifier_SkeletonKing_Reincarnation(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::~CDOTA_Modifier_SkeletonKing_Reincarnation  (line 714, @0x0000000002a65790, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_Reincarnation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::~CDOTA_Modifier_SkeletonKing_Reincarnation(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::IsHidden  (line 728, @0x0000000002a60b30, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::IsHidden(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetAttributes  (line 732, @0x0000000002a65b90, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetAttributes(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::IsAura  (line 734, @0x0000000002a60b40, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::IsAura(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::IsAuraActiveOnDeath  (line 735, @0x0000000002a60b50, libserver.so)
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::IsAuraActiveOnDeath(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetModifierAura  (line 736, @0x0000000002a60b60, libserver.so)
// strings: "modifier_skeleton_king_reincarnation_scepter"
const char *__fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetModifierAura(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return "modifier_skeleton_king_reincarnation_scepter";
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraSearchTeam  (line 737, @0x0000000002a67090, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraSearchTeam(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int v4; // edx

  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = 0;
  if ( HasScepter )
    return !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value;
  return v4;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraSearchType  (line 738, @0x0000000002a60b70, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraSearchType(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraRadius  (line 739, @0x0000000002a60b80, libserver.so)
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraRadius(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraEntityReject  (line 740, @0x0000000002a665b0, libserver.so)
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetAuraEntityReject(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        CDOTA_BaseNPC *pNPC)
{
  CDOTA_BaseNPC *Caster; // rax
  bool result; // al
  CDOTA_BaseNPC *v5; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  result = 0;
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 )
  {
    v5 = CDOTA_Buff::GetCaster(this);
    if ( (*(v5->_vptr_IHandleEntity + 438))(v5) == 0 )
      return 1;
  }
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::DeclareFunctions  (line 766, @0x0000000002a3efa0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime(CModifierParams const&), CDOTA_Modifier_SkeletonKing_Reincarnation::OnDeath(CModifierParams const&), CDOTA_Modifier_SkeletonKing_Reincarnation::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  this->m_Functions[73].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime;
  this->m_Functions[73].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation::OnDeath;
  this->m_Functions[155].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetPriority  (line 775, @0x0000000002a44e10, libserver.so)  // inlines: IsFullyCastable, IsTrained
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetPriority(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this)
{
  CDOTABaseAbility *Ability; // rdx
  int result; // eax
  CDOTABaseAbility *v4; // rbx

  Ability = CDOTA_Buff::GetAbility(this);
  result = 2;
  if ( Ability != 0 )
  {
    v4 = CDOTA_Buff::GetAbility(this);
    if ( CDOTABaseAbility::GetEffectiveLevel(v4) >= 0
      && (*(v4->_vptr_IHandleEntity + 245))(v4) != 0
      && CDOTABaseAbility::IsOwnersManaEnough(v4) )
    {
      return CDOTABaseAbility::IsOwnersGoldEnough(v4, -1) ? 2 : 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::OnCreated  (line 792, @0x0000000002a5d010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "reincarnate_time"
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::OnCreated(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->reincarnate_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->aura_radius = 0;
    goto LABEL_4;
  }
  this->reincarnate_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "reincarnate_time", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "aura_radius", -1, 0);
LABEL_4:
  this->m_fLastReincarnationTime = 0.0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::GetActivityTranslationModifiers  (line 802, @0x0000000002a42a70, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTA_Buff::GetAbility
// strings: "reincarnate"
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::GetActivityTranslationModifiers(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        const CModifierParams *const params)
{
  float v3; // xmm1_4
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this) == 0 )
    return 2uLL;
  v3 = 0.0;
  if ( g_pGameRules != 0 )
    v3 = *&g_pGameRules[18].m_szQuestName[20];
  result.m_szVal = "reincarnate";
  *&result.m_eType = 2;
  if ( ((this->m_fLastReincarnationTime + this->reincarnate_time) + 2.0) <= v3 )
    return 2uLL;
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::OnDeath  (line 819, @0x0000000002a47930, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::OnDeath(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v9; // r14
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC_Hero *v13; // rax
  float v15; // xmm3_4
  float m_fLastReincarnationTime; // xmm0_4

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC
    || (m_pInstance->m_iUnitType & 1) == 0
    || m_pInstance->m_bIsIllusion.m_Value )
  {
    m_pInstance = 0;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    v9 = Caster;
  else
    v9 = 0;
  if ( m_pInstance == 0 || (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) != 0 )
    return 1uLL;
  v10 = params->hattacker.m_Index;
  if ( v10 + 2 <= 1
    || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v12 = &v11[params->hattacker.m_Index & 0x1FF]) == 0
    || v10 != v12->m_EHandle.m_Index
    || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
    || !v13->m_bIsDOTANPC )
  {
    v13 = 0;
  }
  if ( v9 != v13 )
    return 1uLL;
  v15 = 0.0;
  if ( g_pGameRules != 0 )
    v15 = *&g_pGameRules[18].m_szQuestName[20];
  m_fLastReincarnationTime = this->m_fLastReincarnationTime;
  if ( m_fLastReincarnationTime == 0.0 || ((m_fLastReincarnationTime + this->reincarnate_time) + 5.0) <= v15 )
    return 1uLL;
  EconEntity_OnOwnerKillEaterEvent(
    v9,
    m_pInstance,
    kill_eater_event_t::kKillEaterEventType_SkeletonKing_ReincarnationKills,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::OnRefresh  (line 843, @0x0000000002a5cfb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "reincarnate_time"
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::OnRefresh(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->reincarnate_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "reincarnate_time", -1, 0);
  else
    this->reincarnate_time = 0.0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime  (line 850, @0x0000000002a56480, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, GetTimeOfDay, IndexToIdentity, IsDaytime, IsFullyCastable, IsTrained, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, Vector, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_CombatLog::AddAbilityEvent, CDOTAFogOfWarSystem::AddTempViewer, CDOTABaseAbility::UseResources, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float> (30 total)
// strings: "Hero_SkeletonKing.Reincarnate", "slow_radius", "modifier_skeleton_king_reincarnate_slow", "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation::ReincarnateTime(
        CDOTA_Modifier_SkeletonKing_Reincarnation *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *v4; // rbx
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // rbx
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v9; // rax
  int v10; // xmm0_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rbx
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *v15; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v17; // rax
  CDOTABaseAbility *v18; // rax
  float v19; // xmm1_4
  __m128i v20; // xmm6
  float v21; // ebx
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r14
  CDOTA_BaseNPC *v25; // rax
  __int64 v26; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *v34; // r15
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm0_4
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm1_4
  __m128i v39; // xmm5
  float v40; // ebx
  CDOTABaseAbility *v41; // r12
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v44; // rax
  const Vector *v45; // r12
  CDOTA_BaseNPC *v46; // rax
  float v47; // xmm3_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // r12
  CDOTA_BaseNPC *v52; // r14
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  CDOTA_ParticleManager *v55; // rax
  float flRadius; // [rsp+28h] [rbp-88h]
  int slow_radius; // [rsp+3Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v60 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetAbility(this) == 0
    || (v4 = CDOTA_Buff::GetAbility(this), CDOTABaseAbility::GetEffectiveLevel(v4) >= 0)
    && (*(v4->_vptr_IHandleEntity + 245))(v4) != 0
    && CDOTABaseAbility::IsOwnersManaEnough(v4)
    && CDOTABaseAbility::IsOwnersGoldEnough(v4, -1) )
  {
    if ( params->bDoNotConsume )
    {
LABEL_9:
      *&result.m_eType = (LODWORD(this->reincarnate_time) << 32) | 1;
      goto LABEL_5;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    Ability = CDOTA_Buff::GetAbility(this);
    v9 = CDOTA_Buff::GetCaster(this);
    CDOTA_CombatLog::AddAbilityEvent(g_pDOTACombatLog, 13, 0, v9, Ability, 0, *AbsOrigin);
    v10 = 1145569280;
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) == 0 && BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
    {
      v11 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
      if ( v11 >= 0.0 )
      {
        if ( v11 <= 1.0 )
        {
          if ( (v11 + 0.0) < 0.25 || v11 >= 0.0 && (v11 > 1.0 || (v11 + 0.0) > 0.75) )
            goto LABEL_16;
          goto LABEL_15;
        }
        if ( v11 < 0.0 )
LABEL_15:
          v10 = 1155596288;
      }
    }
LABEL_16:
    flRadius = *&v10;
    v12 = CDOTA_Buff::GetCaster(this);
    v13 = CBaseEntity::GetAbsOrigin(v12);
    v14 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_REINCARNATION,
      v14->m_iTeamNum.m_Value,
      v13,
      flRadius,
      3.0,
      1);
    if ( CDOTA_Buff::GetAbility(this) != 0 )
    {
      v15 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::UseResources(v15, 1, 1, 1, 0);
    }
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_SkeletonKing.Reincarnate", 0.0, 0, 0);
    if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    {
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate.vpcf",
                   2,
                   0,
                   0,
                   0);
      v50 = CDOTA_Buff::GetParent(this);
      v51 = CBaseEntity::GetAbsOrigin(v50);
      v52 = CDOTA_Buff::GetParent(this);
      v53 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v53, Particle, 0, v52, 1, 0, *v51, 1);
      *(&hEntities.m_Size + 1) = 0;
      *&hEntities.m_Size = this->reincarnate_time - 0.2;
      v54 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v54, Particle, 1, COERCE_DOUBLE(hEntities.m_Size), 0.0);
      v55 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v55, Particle);
    }
    v17 = CDOTA_Buff::GetAbility(this);
    if ( v17 != 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v17, "slow_duration", -1, 0);
    v18 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v18, &slow_radius, "slow_radius");
    KeyValues::KeyValues(&kv, "modifier_skeleton_king_reincarnate_slow");
    KeyValues::SetFloat(&kv, "duration", v19);
    *v20.m128i_i32 = slow_radius;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    v22 = CDOTA_Buff::GetCaster(this);
    v23 = CDOTA_Buff::GetCaster(this);
    v24 = CBaseEntity::GetAbsOrigin(v23);
    v25 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v25->m_iTeamNum.m_Value, v24, v22, v21, &hEntities, 2, 3, 0, 0, 0);
    v26 = 0;
    for ( i = 0; hEntities.m_Size > i; ++v26 )
    {
      while ( 1 )
      {
        v28 = &hEntities.m_Memory.m_pMemory[v26];
        m_Index = hEntities.m_Memory.m_pMemory[v26].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v30 = v28->m_Index;
          v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
          if ( v31 != 0 )
          {
            v32 = &v31[v30 & 0x1FF];
            if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
            {
              m_pInstance = v32->m_pInstance;
              if ( v32->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++i;
        ++v26;
        if ( hEntities.m_Size <= i )
          goto LABEL_32;
      }
      v34 = CDOTA_Buff::GetAbility(this);
      v35 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v35, v34, "modifier_skeleton_king_reincarnate_slow", &kv, 0);
      ++i;
    }
LABEL_32:
    v36 = 0.0;
    if ( g_pGameRules != 0 )
      v36 = *&g_pGameRules[18].m_szQuestName[20];
    this->m_fLastReincarnationTime = v36;
    v37 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v37) )
      CDOTA_Buff::StartIntervalThink(this, this->reincarnate_time, v38);
    if ( CDOTA_Buff::GetAbility(this) != 0 )
    {
      v39 = _mm_cvtsi32_si128(0x40000000u);
      *v39.m128i_i32 = *v39.m128i_i32 + this->reincarnate_time;
      v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
      v41 = CDOTA_Buff::GetAbility(this);
      m_pAbilityData = v41->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(v41, 0);
        m_pAbilityData = v41->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v44 = CDOTA_Buff::GetCaster(this);
      v45 = CBaseEntity::GetAbsOrigin(v44);
      v46 = CDOTA_Buff::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v46, 0, m_iAbilityID, 0, 0, *&v45->x, v45->z, v40, v47);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    KeyValues::~KeyValues(&kv);
    goto LABEL_9;
  }
  *&result.m_eType = 1;
LABEL_5:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow  (line 926, @0x0000000002a65720, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow  (line 926, @0x0000000002a65740, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::~CDOTA_Modifier_SkeletonKing_Reincarnation_Slow(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A6B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetEffectName  (line 937, @0x0000000002a60b90, libserver.so)
// strings: "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate_slow_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetEffectName(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this)
{
  return "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate_slow_debuff.vpcf";
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::OnCreated  (line 948, @0x0000000002a55410, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::OnCreated(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed", -1, 0);
  else
    this->movespeed = 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::DeclareFunctions  (line 955, @0x0000000002a3f000, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetModifierMoveSpeedBonus_Percentage  (line 963, @0x0000000002a3f040, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetModifierAttackSpeedBonus_Constant  (line 970, @0x0000000002a3f060, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter  (line 999, @0x0000000002a656d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A9F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter  (line 999, @0x0000000002a656f0, libserver.so)  // inlines: ~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::~CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_439A9F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::GetAttributes  (line 1009, @0x0000000002a65ba0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::GetAttributes(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 1;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::DeclareFunctions  (line 1019, @0x0000000002a3f080, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this)
{
  this->m_Functions[146].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit;
  this->m_Functions[146].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnCreated  (line 1026, @0x0000000002a5cf50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnCreated(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->scepter_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "scepter_duration", -1, 0);
  else
    this->scepter_duration = 0.0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit  (line 1034, @0x0000000002a45fb0, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, CModifierParams, Ceil2Int, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, SetUnit, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, ceilf, CBaseEntity::GetHealth, CDOTA_BaseNPC_Hero::WillReincarnate, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_Modifier_Legion_Commander_Duel::OnDeath (15 total)
// strings: "modifier_dazzle_shallow_grave", "modifier_skeleton_king_reincarnation_scepter_active", "modifier_necrolyte_reapers_scythe", "modifier_legion_commander_duel", "modifier_winter_wyvern_winters_curse_aura"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // r14
  int v14; // r15d
  int Health; // ebx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v18; // rbx
  CDOTA_BaseNPC *Caster; // r15
  float v20; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v24; // cx
  CDOTA_Modifier_Legion_Commander_Duel *v25; // rax
  CDOTA_Modifier_Legion_Commander_Duel *v26; // rax
  CDOTA_Buff *v27; // rax
  CModifierParams duelParams; // [rsp+0h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v30 = __readfsqword(0x28u);
  *&result.m_eType = 1;
  if ( SLOBYTE(params->nDamageflags) >= 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 <= 1
      || (m_Index_low = LOWORD(params->htarget.m_Index),
          (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
      || (v8 = &v7[m_Index_low & 0x1FF]) == 0
      || m_Index != v8->m_EHandle.m_Index
      || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
      || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
    {
      m_pInstance = 0;
    }
    v10 = params->hattacker.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[params->hattacker.m_Index & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          v13 = v12->m_pInstance;
          if ( v12->m_pInstance != 0
            && v13->m_bIsDOTANPC
            && m_pInstance != 0
            && m_pInstance == CDOTA_Buff::GetParent(this)
            && LOBYTE(m_pInstance[71].m_pEntity) == 0
            && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_dazzle_shallow_grave", 0) == 0 )
          {
            v14 = ceilf(params->fDamage);
            Health = CBaseEntity::GetHealth(m_pInstance);
            if ( !CDOTA_BaseNPC_Hero::WillReincarnate(m_pInstance) && Health <= v14 && Health > 0 )
            {
              Parent = CDOTA_Buff::GetParent(this);
              if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_skeleton_king_reincarnation_scepter_active", 0) == 0 )
              {
                ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_necrolyte_reapers_scythe", 0);
                v18 = ModifierByName;
                if ( ModifierByName != 0 && CDOTA_Buff::GetCaster(ModifierByName) != 0
                  || (v27 = CDOTA_BaseNPC::FindModifierByName(
                              m_pInstance,
                              "modifier_winter_wyvern_winters_curse_aura",
                              0),
                      v18 = v27,
                      v27 != 0)
                  && CDOTA_Buff::GetCaster(v27) != 0
                  && CDOTA_Buff::GetCaster(v18)->m_iTeamNum.m_Value != v13->m_iTeamNum.m_Value )
                {
                  Caster = CDOTA_Buff::GetCaster(v18);
                }
                else
                {
                  Caster = v13;
                }
                KeyValues::KeyValues(&kv, "modifier_skeleton_king_reincarnation_scepter_active");
                KeyValues::SetFloat(&kv, "duration", v20);
                KeyValues::SetPtr(&kv, "attacker", Caster);
                Ability = CDOTA_Buff::GetAbility(this);
                v22 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  m_pInstance,
                  v22,
                  Ability,
                  "modifier_skeleton_king_reincarnation_scepter_active",
                  &kv,
                  0);
                duelParams.fOriginalDamage = 0.0;
                duelParams.nActivity = -1;
                duelParams.bTooltip = 0;
                duelParams.nTooltipParam = 0;
                duelParams.bIgnoreInvis = 0;
                duelParams.bNoCooldown = 0;
                duelParams.bReincarnate = 0;
                duelParams.bDoNotConsume = 0;
                duelParams.fDistance = 0.0;
                duelParams.inflictor.m_Index = -1;
                duelParams.nDamageflags = 0;
                duelParams.nDamageCategory = 0;
                memset(&duelParams.pOrb, 0, 24);
                duelParams.bCraniumBasherTested = 0;
                duelParams.bHeartRegenApplied = 0;
                duelParams.bDiffusalApplied = 0;
                duelParams.bChainLightningConsidered = 0;
                duelParams.bSuppressDamage = 0;
                duelParams.bRangedAttack = 0;
                duelParams.nPlayerids_stick = 0;
                duelParams.hattacker.m_Index = -1;
                duelParams.htarget.m_Index = -1;
                duelParams.hunit.m_Index = -1;
                duelParams.ability.m_Index = -1;
                m_pEntity = m_pInstance->m_pEntity;
                duelParams.fDamage = 0.0;
                if ( m_pEntity != 0 )
                {
                  v24 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  duelParams.hunit.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                           | v24 & 0x7FFF;
                }
                v25 = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_legion_commander_duel", 0);
                if ( v25 != 0 )
                  CDOTA_Modifier_Legion_Commander_Duel::OnDeath(v25, &duelParams);
                v26 = CDOTA_BaseNPC::FindModifierByName(v13, "modifier_legion_commander_duel", 0);
                if ( v26 != 0 )
                  CDOTA_Modifier_Legion_Commander_Duel::OnDeath(v26, &duelParams);
                KeyValues::~KeyValues(&kv);
              }
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


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::CheckState  (line 1102, @0x0000000002a3f0a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::CheckState(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202800000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFD7FFFFFLL;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::DeclareFunctions  (line 1111, @0x0000000002a3f0d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::ModelScale(CModifierParams const&), CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetMinHealth(CModifierParams const&)
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::DeclareFunctions(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  this->m_Functions[153].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::ModelScale;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[102].__pfn = CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetMinHealth;
  this->m_Functions[102].__delta = 0;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetMinHealth  (line 1119, @0x0000000002a3f120, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetMinHealth(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetModifierInvisibilityLevel  (line 1124, @0x0000000002a3f140, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::GetModifierInvisibilityLevel(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this,
        const CModifierParams *const params)
{
  return 0x3E8CCCCD00000001uLL;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::ModelScale  (line 1131, @0x0000000002a3f160, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::ModelScale(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this,
        const CModifierParams *const params)
{
  return 0x41C8000000000001uLL;
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::OnCreated  (line 1137, @0x0000000002a40c60, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, Vector, operator=
// calls: KeyValues::GetPtr, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate.vpcf", "Hero_SkeletonKing.Reincarnate.Ghost", "particles/units/heroes/hero_skeletonking/wraith_king_ghosts_ambient.vpcf"
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::OnCreated(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r12
  CDOTA_ParticleManager *v17; // rax
  int v18; // eax

  this->m_bPassive = 0;
  Ptr = KeyValues::GetPtr(pKV, "attacker", 0);
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
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_skeletonking/wraith_king_reincarnate.vpcf",
               2,
               0,
               0,
               0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v11, 1, 0, *AbsOrigin, 1);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, Particle, 1, COERCE_DOUBLE(1050253722), 0.0);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
  v15 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v15, "Hero_SkeletonKing.Reincarnate.Ghost", 0.0, 0, 0);
  v16 = CDOTA_Buff::GetParent(this);
  v17 = GetParticleManager();
  v18 = CDOTA_ParticleManager::CreateParticle(
          v17,
          "particles/units/heroes/hero_skeletonking/wraith_king_ghosts_ambient.vpcf",
          1,
          v16,
          0,
          0);
  CDOTA_Buff::AddParticle(this, v18, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::OnDestroy  (line 1155, @0x0000000002a45d30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Kill
// strings: "modifier_dazzle_shallow_grave"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active::OnDestroy(
        CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter_Active *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  bool v6; // r14
  CDOTA_BaseNPC *v7; // r13
  CDOTABaseAbility *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  bool m_bPassive; // r14
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v14; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_dazzle_shallow_grave");
    m_bPassive = this->m_bPassive;
    Ability = CDOTA_Buff::GetAbility(this);
    v14 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Kill(v14, Ability, m_pInstance, 0.0, m_bPassive);
  }
  else
  {
    v5 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_dazzle_shallow_grave");
    v6 = this->m_bPassive;
    v7 = CDOTA_Buff::GetParent(this);
    v8 = CDOTA_Buff::GetAbility(this);
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Kill(v9, v8, v7, 0.0, v6);
  }
}


