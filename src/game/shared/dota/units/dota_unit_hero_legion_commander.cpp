// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:42
class CDOTA_Unit_Hero_Legion_Commander : public CDOTA_BaseNPC_Hero {
public:

private:

	uint32 m_unDuelsWon;  // +0x16ec
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
	CDOTA_Unit_Hero_Legion_Commander(CDOTA_Unit_Hero_Legion_Commander &);
	CDOTA_Unit_Hero_Legion_Commander(CDOTA_Unit_Hero_Legion_Commander &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Legion_Commander();
	virtual bool IsDemon();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	CEconWearable * GetImmortalItem();
	virtual ~CDOTA_Unit_Hero_Legion_Commander();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[402] IsDemon
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:246
class C_CDOTA_Unit_Hero_Legion_Commander_MapInstall {
	C_CDOTA_Unit_Hero_Legion_Commander_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:263
class CDOTA_Ability_Legion_Commander_OverwhelmingOdds : public CDOTABaseAbility {
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
	CDOTA_Ability_Legion_Commander_OverwhelmingOdds(CDOTA_Ability_Legion_Commander_OverwhelmingOdds &);
	CDOTA_Ability_Legion_Commander_OverwhelmingOdds(CDOTA_Ability_Legion_Commander_OverwhelmingOdds &);
	CDOTA_Ability_Legion_Commander_OverwhelmingOdds();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Legion_Commander_OverwhelmingOdds();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:277
class C_CDOTA_Ability_Legion_Commander_OverwhelmingOdds_MapInstall {
	C_CDOTA_Ability_Legion_Commander_OverwhelmingOdds_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:455
class CDOTA_Modifier_Legion_Commander_OverwhelmingOdds : public CDOTA_Buff {
public:

private:

	int bonus_speed_creeps;  // +0xba8
	int bonus_speed_heroes;  // +0xbac
	int m_nTotalBonus;  // +0xbb0
	CDOTA_Modifier_Legion_Commander_OverwhelmingOdds();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:568
class CDOTA_Ability_Legion_Commander_PressTheAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_Legion_Commander_PressTheAttack(CDOTA_Ability_Legion_Commander_PressTheAttack &);
	CDOTA_Ability_Legion_Commander_PressTheAttack(CDOTA_Ability_Legion_Commander_PressTheAttack &);
	CDOTA_Ability_Legion_Commander_PressTheAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual ~CDOTA_Ability_Legion_Commander_PressTheAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:647
class CDOTA_Modifier_Legion_Commander_PressTheAttack : public CDOTA_Buff {
public:

private:

	int attack_speed;  // +0xba8
	int hp_regen;  // +0xbac
	CDOTA_Modifier_Legion_Commander_PressTheAttack();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierActivityModifier(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Legion_Commander_PressTheAttack();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:771
class CDOTA_Ability_Legion_Commander_MomentOfCourage : public CDOTABaseAbility {
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
	CDOTA_Ability_Legion_Commander_MomentOfCourage(CDOTA_Ability_Legion_Commander_MomentOfCourage &);
	CDOTA_Ability_Legion_Commander_MomentOfCourage(CDOTA_Ability_Legion_Commander_MomentOfCourage &);
	CDOTA_Ability_Legion_Commander_MomentOfCourage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Legion_Commander_MomentOfCourage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:780
class C_CDOTA_Ability_Legion_Commander_MomentOfCourage_MapInstall {
	C_CDOTA_Ability_Legion_Commander_MomentOfCourage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:790
class CDOTA_Modifier_Legion_Commander_MomentOfCourage : public CDOTA_Buff {
public:

private:

	int trigger_chance;  // +0xba8
	float buff_duration;  // +0xbac
	CDOTA_Modifier_Legion_Commander_MomentOfCourage();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual ~CDOTA_Modifier_Legion_Commander_MomentOfCourage();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:865
class CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal : public CDOTA_Buff {
public:

private:

	int hp_leech_percent;  // +0xba8
	CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:975
class CDOTA_Ability_Legion_Commander_Duel : public CDOTABaseAbility {
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
	CDOTA_Ability_Legion_Commander_Duel(CDOTA_Ability_Legion_Commander_Duel &);
	CDOTA_Ability_Legion_Commander_Duel(CDOTA_Ability_Legion_Commander_Duel &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Legion_Commander_Duel();
	virtual void OnSpellStart();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Legion_Commander_Duel();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[307] OnStolen
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:1063
class CDOTA_Modifier_Legion_Commander_Duel_DamageBoost : public CDOTA_Buff {
public:

private:

	int m_nTotalDamage;  // +0xba8
	CDOTA_Modifier_Legion_Commander_Duel_DamageBoost();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnStackCountChanged(int);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual EMatchPermanentBuff GetMatchPermanentBuff();
	void AddBonusDamage(int);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[29] OnStackCountChanged
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[12] IsDebuff
	// vtable[53] GetMatchPermanentBuff
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:1507
class CDOTA_Ability_Holdout_GladiatorsUnite : public CDOTABaseAbility {
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
	CDOTA_Ability_Holdout_GladiatorsUnite(CDOTA_Ability_Holdout_GladiatorsUnite &);
	CDOTA_Ability_Holdout_GladiatorsUnite(CDOTA_Ability_Holdout_GladiatorsUnite &);
	CDOTA_Ability_Holdout_GladiatorsUnite();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Holdout_GladiatorsUnite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:1526
class C_CDOTA_Ability_Holdout_GladiatorsUnite_MapInstall {
	C_CDOTA_Ability_Holdout_GladiatorsUnite_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:1554
class CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_legion_commander.cpp:1640
class CDOTA_Modifier_Holdout_GladiatorsUnite : public CDOTA_Buff {
public:

private:

	int bonus_armor_per_hero;  // +0xba8
	int bonus_damage_per_hero;  // +0xbac
	int lifesteal_per_hero;  // +0xbb0
	CDOTA_Modifier_Holdout_GladiatorsUnite();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Holdout_GladiatorsUnite();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Legion_Commander::~CDOTA_Unit_Hero_Legion_Commander  (line 42, @0x0000000002c9a090, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Legion_Commander::~CDOTA_Unit_Hero_Legion_Commander(
        CDOTA_Unit_Hero_Legion_Commander *const this)
{
  this->_vptr_IHandleEntity = &off_45C4FF0;
  this->_vptr_INextBotEventResponder = &off_45C5FD0;
  this->_vptr_CObstructionObject = &off_45C6300;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Legion_Commander::~CDOTA_Unit_Hero_Legion_Commander  (line 42, @0x0000000002c9a0d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Legion_Commander
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Legion_Commander::~CDOTA_Unit_Hero_Legion_Commander(
        CDOTA_Unit_Hero_Legion_Commander *const this)
{
  this->_vptr_IHandleEntity = &off_45C4FF0;
  this->_vptr_INextBotEventResponder = &off_45C5FD0;
  this->_vptr_CObstructionObject = &off_45C6300;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Legion_Commander::Schema_DynamicBinding  (line 44, @0x0000000002c89a30, libserver.so)
// globals: CDOTA_Unit_Hero_Legion_Commander::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Legion_Commander::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Legion_Commander *const this)
{
  return CDOTA_Unit_Hero_Legion_Commander::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002c89a60, libserver.so)
// globals: CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002c89a70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Legion_Commander>
void __fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002c89a90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002c89ab0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002c89ac0, libserver.so)
// globals: CDOTA_Unit_Hero_Legion_Commander::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Legion_Commander::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002c8ffa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002c94090, libserver.so)  // inlines: CDOTA_Unit_Hero_Legion_Commander, Construct<CDOTA_Unit_Hero_Legion_Commander>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = 0;
    *p = &off_45C4FF0;
    *(p + 236) = &off_45C5FD0;
    *(p + 257) = &off_45C6300;
  }
  return p;
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002ca3670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002ca3840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal  (line 44, @0x0000000002cbe010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_legion_commander", "CDOTA_Unit_Hero_Legion_Commander"
// globals: `guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass, CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass, __dso_handle, CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo, CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass);
    CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass._vptr_CEntityClass = off_45C4F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Legion_Commander::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Legion_CommanderClass != 0 )
    return &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo,
      "CDOTA_Unit_Hero_Legion_Commander",
      "npc_dota_hero_legion_commander",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo);
  }
  CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass.m_pClassInfo = &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo;
  CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Legion_CommanderClass = &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass;
  CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClassInfo.m_pClass = &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass;
  CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Legion_CommanderClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Legion_Commander::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Legion_CommanderClass;
}


// CDOTA_Unit_Hero_Legion_Commander::CDOTA_Unit_Hero_Legion_Commander  (line 65, @0x0000000002c43200, libserver.so)
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Legion_Commander::CDOTA_Unit_Hero_Legion_Commander(
        CDOTA_Unit_Hero_Legion_Commander *const this)
{
  CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(this);
  this->m_unDuelsWon = 0;
  this->_vptr_IHandleEntity = &off_45C4FF0;
  this->_vptr_INextBotEventResponder = &off_45C5FD0;
  this->_vptr_CObstructionObject = &off_45C6300;
}


// CDOTA_Unit_Hero_Legion_Commander::GetImmortalItem  (line 73, @0x0000000002c43250, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWearable, IndexToIdentity, IsValid, LookupEntity, operator CEconWearable*, operator CEntityInstance*, operator[]
// callers: CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseStart
// globals: CEntityHandle::gm_pEntityList
CEconWearable *__fastcall CDOTA_Unit_Hero_Legion_Commander::GetImmortalItem(
        CDOTA_Unit_Hero_Legion_Commander *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CHandle<CEconWearable> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEconWearable *m_pInstance; // r14
  __int64 v10; // rax
  unsigned __int16 (__fastcall ***v11)(_QWORD); // rax

  v2 = 0;
  v3 = 0;
  if ( this->m_hMyWearables.m_Vector.m_Size <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v2];
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
          if ( v8->m_pInstance != 0 )
          {
            v10 = (*(m_pInstance->_vptr_IHandleEntity + 265))(v8->m_pInstance);
            if ( v10 != -104 )
            {
              v11 = (*(*(v10 + 104) + 96LL))(v10 + 104);
              if ( (**v11)(v11) == 7930 )
                break;
            }
          }
        }
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= this->m_hMyWearables.m_Vector.m_Size )
      return 0;
  }
  return m_pInstance;
}


// CDOTA_Unit_Hero_Legion_Commander::IsDemon  (line 154, @0x0000000002c31140, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetWearable, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CEconItemView::GetStaticData
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Legion_Commander::IsDemon(const CDOTA_Unit_Hero_Legion_Commander *const this)
{
  unsigned __int16 v1; // dx
  int v2; // esi
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  char v8; // r14
  __int64 v9; // r12
  int v10; // ebx
  unsigned __int16 *v11; // rax
  int v12; // edx
  __int16 v13; // cx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  __int64 v16; // rax
  const GameItemDefinition_t *StaticData; // rax

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v1 = 0x7FFF;
    v2 = 0x7FFF;
  }
  else
  {
    v1 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v2 = v1;
  }
  v3 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v1 & 0x7FFF;
  if ( v3 + 2 <= 1 )
    return 0;
  v4 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v2 >> 9];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[v2 & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( v3 != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    return 0;
  v8 = BYTE3(m_pInstance[7]._vptr_IHandleEntity);
  if ( v8 == 0 || SLODWORD(m_pInstance[38].m_CScriptComponent) <= 0 )
    return 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = (m_pInstance[39]._vptr_IHandleEntity + v9);
    v12 = *v11;
    if ( (*v11 + 2) > 1 )
    {
      v13 = *v11;
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v11 >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[v13 & 0x1FF];
        if ( v15 != 0 && v12 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
        {
          v16 = (*(v15->m_pInstance->_vptr_IHandleEntity + 265))(v15->m_pInstance);
          if ( v16 != -104 )
          {
            StaticData = CEconItemView::GetStaticData((v16 + 104));
            if ( (*StaticData->_vptr_IEconItemDefinition)(StaticData) == 5810 )
              break;
          }
        }
      }
    }
    ++v10;
    v9 += 4;
    if ( v10 >= SLODWORD(m_pInstance[38].m_CScriptComponent) )
      return 0;
  }
  return v8;
}


// CDOTA_Unit_Hero_Legion_Commander::OnSaveState  (line 178, @0x0000000002c2d620, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::FindModifierByName, KeyValues::CreateNewKey, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::SetName, KeyValues::SetInt, CDOTA_BaseNPC_Hero::OnSaveState
// strings: "legion_commander_duel", "modifier_legion_commander_duel_damage_boost", "damage_boost", "duels"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Legion_Commander::OnSaveState(
        CDOTA_Unit_Hero_Legion_Commander *const this,
        KeyValues *pKV)
{
  int v2; // ebx
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // r15
  KeyValues *NewKey; // rax
  int v8; // esi
  KeyValues *v9; // r13
  const char *SelectedHeroName; // rax
  int v11; // eax
  KeyValues *pModifierDuelKey; // [rsp+18h] [rbp-48h]
  int v16[16]; // [rsp+20h] [rbp-40h] BYREF

  if ( CDOTA_BaseNPC::FindAbilityByName(this, "legion_commander_duel", 0) != 0 )
  {
    pModifierDuelKey = 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v16, g_pDOTAPlayerResource, v2);
        if ( (v16[0] + 2) > 1 )
        {
          v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16[0]) >> 9) & 0x3F];
          if ( v3 != 0 )
          {
            v4 = &v3[v16[0] & 0x1FF];
            if ( v4 != 0 && v16[0] == v4->m_EHandle.m_Index )
            {
              m_pInstance = v4->m_pInstance;
              if ( v4->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                   m_pInstance,
                                   "modifier_legion_commander_duel_damage_boost",
                                   0);
                if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) != 0 )
                  break;
              }
            }
          }
        }
        if ( ++v2 == 24 )
          return CDOTA_BaseNPC_Hero::OnSaveState(this, pKV);
      }
      if ( pModifierDuelKey == 0 )
      {
        pModifierDuelKey = KeyValues::CreateNewKey(pKV);
        KeyValues::SetName(pModifierDuelKey, "duels");
      }
      NewKey = KeyValues::CreateNewKey(pModifierDuelKey);
      v8 = v2;
      v9 = NewKey;
      ++v2;
      SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, v8);
      KeyValues::SetName(v9, SelectedHeroName);
      v11 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
      KeyValues::SetInt(v9, "damage_boost", v11);
    }
    while ( v2 != 24 );
  }
  return CDOTA_BaseNPC_Hero::OnSaveState(this, pKV);
}


// CDOTA_Unit_Hero_Legion_Commander::OnLoadState  (line 212, @0x0000000002c2ce60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::FindKey, CDOTA_BaseNPC::FindAbilityByName, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_PlayerResource::GetSelectedHeroName, KeyValues::GetInt, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC_Hero::OnLoadState, _Unwind_Resume, __stack_chk_fail
// strings: "duels", "legion_commander_duel", "damage_boost", "modifier_legion_commander_duel_damage_boost"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Legion_Commander::OnLoadState(
        CDOTA_Unit_Hero_Legion_Commander *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax
  int i; // ebx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r14
  const char *SelectedHeroName; // rax
  KeyValues *Key; // rax
  KeyValues *v10; // r13
  CDOTA_Buff *v11; // rax
  CDOTA_Buff *v12; // r14
  __int64 Int; // rsi
  CDOTABaseAbility *pAbilityLegionCommanderDuel; // [rsp+8h] [rbp-88h]
  void (__fastcall *v17)(CDOTA_Buff *, __int64); // [rsp+10h] [rbp-80h]
  KeyValues *pModifierDuelKey; // [rsp+28h] [rbp-68h]
  int v20[4]; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  pModifierDuelKey = KeyValues::FindKey(pKV, "duels", 0);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "legion_commander_duel", 0);
  pAbilityLegionCommanderDuel = AbilityByName;
  if ( pModifierDuelKey != 0 && AbilityByName != 0 )
  {
    for ( i = 0; i != 24; ++i )
    {
      while ( 1 )
      {
        CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v20, g_pDOTAPlayerResource, i);
        if ( (v20[0] + 2) > 1 )
        {
          v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20[0]) >> 9) & 0x3F];
          if ( v5 != 0 )
          {
            v6 = &v5[v20[0] & 0x1FF];
            if ( v6 != 0 && v20[0] == v6->m_EHandle.m_Index )
            {
              m_pInstance = v6->m_pInstance;
              if ( v6->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                SelectedHeroName = CDOTA_PlayerResource::GetSelectedHeroName(g_pDOTAPlayerResource, i);
                Key = KeyValues::FindKey(pModifierDuelKey, SelectedHeroName, 0);
                v10 = Key;
                if ( Key != 0 && KeyValues::GetInt(Key, "damage_boost", 0) != 0 )
                  break;
              }
            }
          }
        }
        if ( ++i == 24 )
          return CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
      }
      KeyValues::KeyValues(&kv, "modifier_legion_commander_duel_damage_boost");
      v11 = CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              this,
              pAbilityLegionCommanderDuel,
              "modifier_legion_commander_duel_damage_boost",
              &kv,
              0);
      v12 = v11;
      if ( v11 != 0 )
      {
        v17 = *(v11->_vptr_CDOTA_Buff + 28);
        Int = KeyValues::GetInt(v10, "damage_boost", 0);
        v17(v12, Int);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  return CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
}


// CDOTA_Unit_Hero_Legion_Commander::YouForgotToImplementOrDeclareServerClass  (line 246, @0x0000000002c1c920, libserver.so)
int __fastcall CDOTA_Unit_Hero_Legion_Commander::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Legion_Commander *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Legion_Commander::GetServerClass  (line 246, @0x0000000002c34f30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Legion_Commander::GetServerClass(CDOTA_Unit_Hero_Legion_Commander *const this)
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


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::~CDOTA_Ability_Legion_Commander_OverwhelmingOdds  (line 263, @0x0000000002c98960, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::~CDOTA_Ability_Legion_Commander_OverwhelmingOdds(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  this->_vptr_IHandleEntity = &off_45C63D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::~CDOTA_Ability_Legion_Commander_OverwhelmingOdds  (line 263, @0x0000000002c98980, libserver.so)  // inlines: ~CDOTA_Ability_Legion_Commander_OverwhelmingOdds
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::~CDOTA_Ability_Legion_Commander_OverwhelmingOdds(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  this->_vptr_IHandleEntity = &off_45C63D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::Schema_DynamicBinding  (line 265, @0x0000000002c89ad0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_OverwhelmingOdds::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  return CDOTA_Ability_Legion_Commander_OverwhelmingOdds::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 265, @0x0000000002c89ae0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::DestructInstance  (line 265, @0x0000000002c89af0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Legion_Commander_OverwhelmingOdds>
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::FreeInstance  (line 265, @0x0000000002c89b10, libserver.so)
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::CanAllocate  (line 265, @0x0000000002c89b30, libserver.so)
bool __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 265, @0x0000000002c89b40, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_OverwhelmingOdds::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_OverwhelmingOdds::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::AllocateInstance  (line 265, @0x0000000002c8ffe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::ConstructInstance  (line 265, @0x0000000002c94d80, libserver.so)  // inlines: CDOTA_Ability_Legion_Commander_OverwhelmingOdds, Construct<CDOTA_Ability_Legion_Commander_OverwhelmingOdds>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C63D0;
  }
  return p;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 265, @0x0000000002ca25c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 265, @0x0000000002ca25e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal  (line 265, @0x0000000002cc0080, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "legion_commander_overwhelming_odds", "CDOTA_Ability_Legion_Commander_OverwhelmingOdds"
// globals: `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass, CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo, CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass) != 0 )
  {
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pClassInfo = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_flags = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pInputs = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_nInputCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pOutputs = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_nOutputCount = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pGameClass = 0;
    CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass._vptr_CEntityClass = off_45C6350;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass);
    __cxa_atexit(
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass != 0 )
    return &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass;
  if ( `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo,
      "CDOTA_Ability_Legion_Commander_OverwhelmingOdds",
      "legion_commander_overwhelming_odds",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo);
  }
  CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pClassInfo = &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo;
  CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pBaseClassInfo = CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass = &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass;
  CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClassInfo.m_pClass = &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass;
  CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_OverwhelmingOddsClass;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAOERadius  (line 269, @0x0000000002cb7860, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAOERadius(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::YouForgotToImplementOrDeclareServerClass  (line 277, @0x0000000002c1c930, libserver.so)
int __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  return 0;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetServerClass  (line 277, @0x0000000002c35730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetServerClass(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
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


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::OnAbilityPhaseStart  (line 286, @0x0000000002c1ffb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound
// strings: "particles/units/heroes/hero_legion_commander/legion_commander_odds_cast.vpcf", "attach_attack1", "Hero_LegionCommander.Overwhelming.Cast"
bool __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::OnAbilityPhaseStart(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v4; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_legion_commander/legion_commander_odds_cast.vpcf",
                            1,
                            Caster,
                            0);
  v4 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    AbilityParticleEffect,
    1,
    v4,
    5,
    "attach_attack1",
    vec3_invalid,
    1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, AbilityParticleEffect);
  v7 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_LegionCommander.Overwhelming.Cast", v7);
  return 1;
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::OnSpellStart  (line 301, @0x0000000002c6d990, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, ApplyDamage, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier (27 total)
// strings: "damage_per_unit", "illusion_dmg_pct", "modifier_legion_commander_overwhelming_odds", "creepcount", "herocount", "particles/units/heroes/hero_legion_commander/legion_commander_odds.vpcf" (13 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::OnSpellStart(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v4; // rax
  int v5; // edi
  __int64 v6; // r15
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 m_iUnitType; // eax
  __int64 v14; // r13
  int v15; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // r13
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  int v29; // ebx
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // r13
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r13
  CDOTA_BaseNPC *v35; // r14
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC_Hero *v43; // rax
  int AbilityParticleEffect; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v47; // r14
  CDOTA_ParticleManager *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  const Vector *v50; // r14
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  __m128i v53; // xmm2
  float v54; // r13d
  CDOTA_BaseNPC *v55; // rax
  int v56; // r14d
  const Vector *v57; // r13
  CDOTA_ParticleManager *v58; // rax
  CDOTA_BaseNPC *v59; // r14
  CDOTA_ParticleManager *v60; // rax
  CDOTA_BaseNPC *v61; // rax
  const Vector *v62; // r14
  CDOTA_ParticleManager *v63; // rax
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_ParticleManager *v66; // rax
  CDOTA_BaseNPC *v67; // rax
  const Vector *v68; // r13
  CDOTA_ParticleManager *v69; // rax
  CDOTA_ParticleManager *v70; // rax
  int damage_per_hero; // [rsp+20h] [rbp-D0h]
  int damage_per_unit; // [rsp+24h] [rbp-CCh]
  int damage; // [rsp+28h] [rbp-C8h]
  int m_Size; // [rsp+2Ch] [rbp-C4h]
  float duration; // [rsp+30h] [rbp-C0h]
  float flRadius; // [rsp+34h] [rbp-BCh]
  int nHeroes; // [rsp+40h] [rbp-B0h]
  int nCreeps; // [rsp+44h] [rbp-ACh]
  CDOTA_BaseNPC *pEnt; // [rsp+48h] [rbp-A8h]
  CDOTA_BaseNPC *nFXIndexBc; // [rsp+50h] [rbp-A0h]
  int nFXIndexB; // [rsp+50h] [rbp-A0h]
  CDOTA_BaseNPC *nFXIndexBa; // [rsp+50h] [rbp-A0h]
  CDOTA_BaseNPC *nFXIndexBb; // [rsp+50h] [rbp-A0h]
  int illusion_dmg_pct; // [rsp+58h] [rbp-98h]
  int i; // [rsp+5Ch] [rbp-94h]
  Vector vCursor; // [rsp+60h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+B8h] [rbp-38h]

  v90 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  damage_per_unit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_unit", -1, 0);
  damage_per_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_hero", -1, 0);
  illusion_dmg_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "illusion_dmg_pct", -1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v4->m_iTeamNum.m_Value, &vPosition, Caster, flRadius, &entities, 2, 3, 16, 0, 0);
  m_Size = entities.m_Size;
  v5 = entities.m_Size;
  if ( entities.m_Size <= 0 )
  {
    nHeroes = 0;
  }
  else
  {
    i = 0;
    v6 = 0;
    nHeroes = 0;
    nCreeps = 0;
    do
    {
      v7 = &entities.m_Memory.m_pMemory[v6];
      m_Index = entities.m_Memory.m_pMemory[v6].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v9 = v7->m_Index;
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v9 & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          {
            m_pInstance = v11->m_pInstance;
            if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              if ( m_pInstance->m_bIsIllusion.m_Value || m_pInstance->m_bIsSummoned.m_Value )
              {
                *v53.m128i_i32 = (CBaseEntity::GetHealth(v11->m_pInstance) * illusion_dmg_pct / 100);
                v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
                v55 = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(v55, m_pInstance, this, v54, 2, 0);
              }
              m_iUnitType = m_pInstance->m_iUnitType;
              if ( (m_iUnitType & 0x82) != 0 || m_pInstance->m_bIsIllusion.m_Value )
              {
                AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                          this,
                                          "particles/units/heroes/hero_legion_commander/legion_commander_odds_dmga.vpcf",
                                          1,
                                          m_pInstance,
                                          0);
                AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  ParticleManager,
                  AbilityParticleEffect,
                  1,
                  m_pInstance,
                  5,
                  "attach_hitloc",
                  *AbsOrigin,
                  1);
                v47 = CDOTABaseAbility::GetCaster(this);
                v48 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v48, AbilityParticleEffect, 2, v47, 1, 0, vec3_invalid, 1);
                v49 = CDOTABaseAbility::GetCaster(this);
                v50 = CBaseEntity::GetAbsOrigin(v49);
                nFXIndexBc = CDOTABaseAbility::GetCaster(this);
                v51 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(
                  v51,
                  AbilityParticleEffect,
                  3,
                  nFXIndexBc,
                  5,
                  "attach_hitloc",
                  *v50,
                  1);
                v52 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v52, AbilityParticleEffect);
                ++nCreeps;
                DOTA_EmitSound(10, "Hero_LegionCommander.Overwhelming.Creep", m_pInstance);
              }
              else if ( (m_iUnitType & 1) != 0 )
              {
                v56 = CDOTABaseAbility::CreateAbilityParticleEffect(
                        this,
                        "particles/units/heroes/hero_legion_commander/legion_commander_odds_dmgb.vpcf",
                        1,
                        m_pInstance,
                        0);
                v57 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v58 = GetParticleManager();
                nFXIndexB = v56;
                CDOTA_ParticleManager::SetParticleControlEnt(v58, v56, 1, m_pInstance, 5, "attach_hitloc", *v57, 1);
                v59 = CDOTABaseAbility::GetCaster(this);
                v60 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v60, nFXIndexB, 2, v59, 1, 0, vec3_invalid, 1);
                v61 = CDOTABaseAbility::GetCaster(this);
                v62 = CBaseEntity::GetAbsOrigin(v61);
                pEnt = CDOTABaseAbility::GetCaster(this);
                v63 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v63, nFXIndexB, 3, pEnt, 5, "attach_hitloc", *v62, 1);
                v64 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v64, nFXIndexB);
                LODWORD(v62) = CDOTABaseAbility::CreateAbilityParticleEffect(
                                 this,
                                 "particles/units/heroes/hero_legion_commander/legion_commander_odds_hero_arrow_group.vpcf",
                                 2,
                                 0,
                                 0);
                v65 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v65, v62, 0, m_pInstance, 1, 0, vec3_invalid, 1);
                nFXIndexBa = CDOTABaseAbility::GetCaster(this);
                v66 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v66, v62, 1, nFXIndexBa, 1, 0, vec3_invalid, 1);
                v67 = CDOTABaseAbility::GetCaster(this);
                v68 = CBaseEntity::GetAbsOrigin(v67);
                nFXIndexBb = CDOTABaseAbility::GetCaster(this);
                v69 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v69, v62, 2, nFXIndexBb, 5, "attach_hitloc", *v68, 1);
                v70 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v70, v62);
                ++nHeroes;
                DOTA_EmitSound(10, "Hero_LegionCommander.Overwhelming.Hero", m_pInstance);
              }
              v5 = entities.m_Size;
            }
          }
        }
      }
      ++i;
      ++v6;
    }
    while ( v5 > i );
    if ( v5 > 0 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        while ( 1 )
        {
          v16 = &entities.m_Memory.m_pMemory[v14];
          v17 = entities.m_Memory.m_pMemory[v14].m_Index;
          if ( v17 + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
              {
                v21 = v20->m_pInstance;
                if ( v20->m_pInstance != 0
                  && BYTE3(v21[7]._vptr_IHandleEntity) != 0
                  && (BYTE1(v21[58]._vptr_IHandleEntity) & 2) == 0 )
                {
                  break;
                }
              }
            }
          }
          ++v15;
          ++v14;
          if ( entities.m_Size <= v15 )
            goto LABEL_28;
        }
        v22 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v22, v21, this, (damage + nHeroes * damage_per_hero + nCreeps * damage_per_unit), 2, 0);
        ++v15;
        ++v14;
      }
      while ( entities.m_Size > v15 );
    }
LABEL_28:
    v23 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v23, "modifier_legion_commander_overwhelming_odds", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_legion_commander_overwhelming_odds");
    KeyValues::SetFloat(&kv, "duration", v25);
    KeyValues::SetInt(&kv, "creepcount", nCreeps);
    KeyValues::SetInt(&kv, "herocount", nHeroes);
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v27, v26, this, "modifier_legion_commander_overwhelming_odds", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v28 = CDOTABaseAbility::GetCaster(this);
  if ( (v28->m_iUnitType & 1) != 0 && !v28->m_bIsIllusion.m_Value && nHeroes > 2 )
  {
    v42 = CDOTABaseAbility::GetCaster(this);
    v43 = ToDOTABaseNPCRealHero(v42);
    EconEntity_OnOwnerKillEaterEvent(
      v43,
      0,
      kill_eater_event_t::kKillEaterEvent_LegionCommander_TripleHeroOdds,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  vCursor = CDOTABaseAbility::GetCursorPosition(this);
  v29 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_legion_commander/legion_commander_odds.vpcf",
          2,
          0,
          0);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, v29, 0, *&vCursor.x, vCursor.z);
  v31 = CDOTABaseAbility::GetCaster(this);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v32, v29, 1, v31, 1, 0, vec3_invalid, 1);
  v33 = CDOTABaseAbility::GetCaster(this);
  v34 = CBaseEntity::GetAbsOrigin(v33);
  v35 = CDOTABaseAbility::GetCaster(this);
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v36, v29, 2, v35, 5, "attach_hitloc", *v34, 1);
  vPosition.x = duration;
  vPosition.y = duration;
  vPosition.z = duration;
  v37 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v37, v29, 3, *&vPosition.x, vPosition.z);
  vPosition.x = flRadius;
  vPosition.y = flRadius;
  vPosition.z = flRadius;
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v29, 4, *&vPosition.x, vPosition.z);
  vPosition.x = m_Size;
  vPosition.y = m_Size;
  vPosition.z = m_Size;
  v39 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v39, v29, 5, *&vPosition.x, vPosition.z);
  v40 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v40, v29);
  v41 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vCursor, "Hero_LegionCommander.Overwhelming.Location", v41);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval  (line 425, @0x0000000002c6e400, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "damage_per_unit"
// globals: `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps, CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps, `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes, CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Legion_Commander_OverwhelmingOdds *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // r13d
  int v11; // r13d
  float v12; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps) != 0 )
    {
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps.m_Size = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps);
    if ( `guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes) != 0 )
    {
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes.m_Size = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_Bot::GetNearbyCreeps(
      Caster->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps,
      LevelSpecialValue);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Bot::GetNearbyHeroes(
      v9->m_pBot,
      DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
      &CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes,
      LevelSpecialValue);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    v11 = CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecCreeps.m_Size
        * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_unit", -1, 0)
        + v10;
    v12 = (v11
         + CDOTA_Ability_Legion_Commander_OverwhelmingOdds::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::vecHeroes.m_Size
         * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_hero", -1, 0));
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v12);
  }
  return result;
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds  (line 455, @0x0000000002c923c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C6E90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds  (line 455, @0x0000000002c923e0, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::~CDOTA_Modifier_Legion_Commander_OverwhelmingOdds(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C6E90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::OnCreated  (line 486, @0x0000000002c75e70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "bonus_speed_creeps", "bonus_speed_heroes", "creepcount", "herocount", "particles/units/heroes/hero_legion_commander/legion_commander_odds_buff.vpcf", "attach_hitloc" (7 total)
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::OnCreated(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  int Int; // r13d
  int v7; // r14d
  CDOTA_BaseNPC *Caster; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+8h] [rbp-48h]
  double v18; // [rsp+10h] [rbp-40h]
  float m_nTotalBonus; // [rsp+18h] [rbp-38h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_speed_creeps = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_speed_heroes = 0;
    goto LABEL_4;
  }
  this->bonus_speed_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed_creeps", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_speed_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_speed_heroes", -1, 0);
LABEL_4:
  Int = KeyValues::GetInt(pKV, "creepcount", 0);
  v7 = KeyValues::GetInt(pKV, "herocount", 0);
  this->m_nTotalBonus = Int * this->bonus_speed_creeps + v7 * this->bonus_speed_heroes;
  Caster = CDOTA_Buff::GetCaster(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_legion_commander/legion_commander_odds_buff.vpcf",
                         2,
                         Caster,
                         0);
  v10 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v10, 1, 0, vec3_invalid, 1);
  v12 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  pEnt = CDOTA_Buff::GetCaster(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, pEnt, 5, "attach_hitloc", *AbsOrigin, 1);
  *&v18 = v7;
  m_nTotalBonus = this->m_nTotalBonus;
  *(&v18 + 1) = Int;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, BuffParticleEffect, 2, v18, m_nTotalBonus);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  v16 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_LegionCommander.Overwhelming.Buff", v16);
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::OnRefresh  (line 510, @0x0000000002c71ef0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetInt
// strings: "bonus_speed_creeps", "bonus_speed_heroes", "creepcount", "herocount"
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::OnRefresh(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  int Int; // r13d

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_speed_creeps = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_speed_heroes = 0;
    goto LABEL_4;
  }
  this->bonus_speed_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_speed_creeps", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_speed_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_speed_heroes", -1, 0);
LABEL_4:
  Int = KeyValues::GetInt(pKV, "creepcount", 0);
  this->m_nTotalBonus = this->bonus_speed_creeps * Int
                      + this->bonus_speed_heroes * KeyValues::GetInt(pKV, "herocount", 0);
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::AddCustomTransmiterData  (line 526, @0x0000000002c21e50, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::AddCustomTransmiterData(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_nTotalBonus; // eax

  m_nTotalBonus = this->m_nTotalBonus;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = m_nTotalBonus;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::DeclareFunctions  (line 542, @0x0000000002c1c940, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetModifierMoveSpeedBonus_Percentage  (line 550, @0x0000000002c1c980, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nTotalBonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetActivityTranslationModifiers  (line 557, @0x0000000002c1c9a0, libserver.so)
// strings: "overwhelmingodds"
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_OverwhelmingOdds::GetActivityTranslationModifiers(
        CDOTA_Modifier_Legion_Commander_OverwhelmingOdds *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "overwhelmingodds";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::~CDOTA_Ability_Legion_Commander_PressTheAttack  (line 568, @0x0000000002c989b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::~CDOTA_Ability_Legion_Commander_PressTheAttack(
        CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  this->_vptr_IHandleEntity = &off_45C71F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::~CDOTA_Ability_Legion_Commander_PressTheAttack  (line 568, @0x0000000002c989d0, libserver.so)  // inlines: ~CDOTA_Ability_Legion_Commander_PressTheAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::~CDOTA_Ability_Legion_Commander_PressTheAttack(
        CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  this->_vptr_IHandleEntity = &off_45C71F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::Schema_DynamicBinding  (line 570, @0x0000000002c89b50, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_PressTheAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  return CDOTA_Ability_Legion_Commander_PressTheAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 570, @0x0000000002c89b60, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::DestructInstance  (line 570, @0x0000000002c89b70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Legion_Commander_PressTheAttack>
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::FreeInstance  (line 570, @0x0000000002c89b90, libserver.so)
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::CanAllocate  (line 570, @0x0000000002c89bb0, libserver.so)
bool __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 570, @0x0000000002c89bc0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_PressTheAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_PressTheAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::AllocateInstance  (line 570, @0x0000000002c90020, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::ConstructInstance  (line 570, @0x0000000002c94db0, libserver.so)  // inlines: CDOTA_Ability_Legion_Commander_PressTheAttack, Construct<CDOTA_Ability_Legion_Commander_PressTheAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C71F0;
  }
  return p;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 570, @0x0000000002ca2610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 570, @0x0000000002ca2630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal  (line 570, @0x0000000002cba7a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "legion_commander_press_the_attack", "CDOTA_Ability_Legion_Commander_PressTheAttack"
// globals: `guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass, CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass, __dso_handle, CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo, CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass);
    CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass._vptr_CEntityClass = off_45C7170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass);
    __cxa_atexit(
      CDOTA_Ability_Legion_Commander_PressTheAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Legion_Commander_PressTheAttackClass != 0 )
    return &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass;
  if ( `guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo,
      "CDOTA_Ability_Legion_Commander_PressTheAttack",
      "legion_commander_press_the_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo);
  }
  CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass.m_pClassInfo = &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo;
  CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass.m_pBaseClassInfo = CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Legion_Commander_PressTheAttackClass = &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass;
  CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClassInfo.m_pClass = &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass;
  CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Legion_Commander_PressTheAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Legion_Commander_PressTheAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_PressTheAttackClass;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseStart  (line 584, @0x0000000002c43340, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseStart, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, __dynamic_cast, CDOTA_Unit_Hero_Legion_Commander::GetImmortalItem, CDOTA_BaseNPC::StartGesture
// globals: `typeinfo for'CDOTA_Unit_Hero_Legion_Commander
bool __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseStart(
        CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  bool v2; // bl
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rdi
  CDOTA_Unit_Hero_Legion_Commander *v6; // rax
  CDOTA_BaseNPC *v7; // r12

  v2 = CDOTABaseAbility::OnAbilityPhaseStart(this);
  if ( v2 && CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster == CDOTABaseAbility::GetCursorTarget(this) )
    {
      v5 = CDOTABaseAbility::GetCaster(this);
      if ( v5 != 0 )
      {
        v6 = __dynamic_cast(v5, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Legion_Commander, 0);
        v7 = v6;
        if ( v6 != 0 && CDOTA_Unit_Hero_Legion_Commander::GetImmortalItem(v6) != 0 )
          CDOTA_BaseNPC::StartGesture(v7, 911, 0.1, 0.1, 9, 0, 1.0);
      }
    }
  }
  return v2;
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseInterrupted  (line 604, @0x0000000002c22690, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  CDOTA_BaseNPC *Caster; // r12

  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && Caster == CDOTABaseAbility::GetCursorTarget(this) )
    CDOTA_BaseNPC::RemoveGesture(Caster, 911);
}


// CDOTA_Ability_Legion_Commander_PressTheAttack::OnSpellStart  (line 617, @0x0000000002c54d30, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC, Vector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, Purge, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl (17 total)
// strings: "modifier_legion_commander_press_the_attack", "particles/units/heroes/hero_legion_commander/legion_commander_press_hero.vpcf", "attach_hitloc", "Hero_LegionCommander.PressTheAttack"
void __fastcall CDOTA_Ability_Legion_Commander_PressTheAttack::OnSpellStart(
        CDOTA_Ability_Legion_Commander_PressTheAttack *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  float duration; // [rsp+Ch] [rbp-64h]
  double v17; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_legion_commander_press_the_attack");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_legion_commander_press_the_attack", &kv, 0);
    Purge(v3, this, 28);
    v6 = CDOTABaseAbility::GetCaster(this);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_legion_commander/legion_commander_press_hero.vpcf",
                              2,
                              v6,
                              0);
    v8 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 0, v8, 1, 0, vec3_invalid, 1);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, AbilityParticleEffect, 1, v12, 5, "attach_hitloc", *AbsOrigin, 1);
    *&v17 = duration;
    *(&v17 + 1) = duration;
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v14, AbilityParticleEffect, 2, v17, duration);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, AbilityParticleEffect);
    DOTA_EmitSound(10, "Hero_LegionCommander.PressTheAttack", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::~CDOTA_Modifier_Legion_Commander_PressTheAttack  (line 647, @0x0000000002c92370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::~CDOTA_Modifier_Legion_Commander_PressTheAttack(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C7CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::~CDOTA_Modifier_Legion_Commander_PressTheAttack  (line 647, @0x0000000002c92390, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_PressTheAttack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::~CDOTA_Modifier_Legion_Commander_PressTheAttack(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C7CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::OnCreated  (line 674, @0x0000000002c760a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_legion_commander/legion_commander_press.vpcf", "attach_hitloc", "attach_attack1", "particles/units/heroes/hero_legion_commander/legion_commander_press_owner.vpcf"
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::OnCreated(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v7; // rax
  const char *v8; // rsi
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v12; // r13
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v20; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "hp_regen", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->hp_regen = 0;
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == CDOTA_Buff::GetCaster(this) )
  {
    v7 = CDOTA_Buff::GetParent(this);
    v8 = "particles/units/heroes/hero_legion_commander/legion_commander_press_owner.vpcf";
  }
  else
  {
    v7 = CDOTA_Buff::GetParent(this);
    v8 = "particles/units/heroes/hero_legion_commander/legion_commander_press.vpcf";
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, v8, 2, v7, 0);
  v10 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v12 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v10, 1, 0, vec3_invalid, 1);
  v13 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, BuffParticleEffect, 1, v15, 5, "attach_hitloc", *AbsOrigin, 1);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  *&v20.x = v12;
  v20.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, BuffParticleEffect, 2, v17, 5, "attach_attack1", v20, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::OnRefresh  (line 707, @0x0000000002c71570, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::OnRefresh(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "hp_regen", -1, 0);
      return;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->hp_regen = 0;
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::OnDestroy  (line 715, @0x0000000002c1c9c0, libserver.so)
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::OnDestroy(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this)
{
  ;
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::DeclareFunctions  (line 729, @0x0000000002c1c9d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierConstantHealthRegen;
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierAttackSpeedBonus_Constant  (line 737, @0x0000000002c1ca10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierConstantHealthRegen  (line 745, @0x0000000002c1ca30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->hp_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Legion_Commander_PressTheAttack::OnIntervalThink  (line 753, @0x0000000002c23d10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddHealthEvent
void __fastcall CDOTA_Modifier_Legion_Commander_PressTheAttack::OnIntervalThink(
        CDOTA_Modifier_Legion_Commander_PressTheAttack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // r12d
  CDOTA_BaseNPC *v4; // rax
  int Health; // eax
  int hp_regen; // edx
  int v7; // r12d
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v10; // rax
  float flActualHeal; // [rsp+1Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(v4);
  hp_regen = this->hp_regen;
  v7 = v3 - Health;
  if ( v7 <= hp_regen )
    hp_regen = v7;
  if ( hp_regen != 0.0 )
  {
    flActualHeal = hp_regen;
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v10 = CDOTA_Buff::GetParent(this);
    CDOTA_CombatLog::AddHealthEvent(&g_DOTACombatLog, 1, v10, Caster, Ability, flActualHeal, 0, 0, 0);
  }
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::~CDOTA_Ability_Legion_Commander_MomentOfCourage  (line 771, @0x0000000002c98a00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::~CDOTA_Ability_Legion_Commander_MomentOfCourage(
        CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
{
  this->_vptr_IHandleEntity = &off_45C8010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::~CDOTA_Ability_Legion_Commander_MomentOfCourage  (line 771, @0x0000000002c98a20, libserver.so)  // inlines: ~CDOTA_Ability_Legion_Commander_MomentOfCourage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::~CDOTA_Ability_Legion_Commander_MomentOfCourage(
        CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
{
  this->_vptr_IHandleEntity = &off_45C8010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::Schema_DynamicBinding  (line 773, @0x0000000002c89bd0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_MomentOfCourage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
{
  return CDOTA_Ability_Legion_Commander_MomentOfCourage::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 773, @0x0000000002c89be0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::DestructInstance  (line 773, @0x0000000002c89bf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Legion_Commander_MomentOfCourage>
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::FreeInstance  (line 773, @0x0000000002c89c10, libserver.so)
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::CanAllocate  (line 773, @0x0000000002c89c30, libserver.so)
bool __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 773, @0x0000000002c89c40, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_MomentOfCourage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_MomentOfCourage::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::AllocateInstance  (line 773, @0x0000000002c90060, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::ConstructInstance  (line 773, @0x0000000002c94de0, libserver.so)  // inlines: CDOTA_Ability_Legion_Commander_MomentOfCourage, Construct<CDOTA_Ability_Legion_Commander_MomentOfCourage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45C8010;
  }
  return p;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 773, @0x0000000002ca2660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 773, @0x0000000002ca2680, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal  (line 773, @0x0000000002cba8f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "legion_commander_moment_of_courage", "CDOTA_Ability_Legion_Commander_MomentOfCourage"
// globals: `guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass, CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass, __dso_handle, CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo, CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass);
    CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass._vptr_CEntityClass = off_45C7F90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass);
    __cxa_atexit(
      CDOTA_Ability_Legion_Commander_MomentOfCourage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass != 0 )
    return &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass;
  if ( `guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo,
      "CDOTA_Ability_Legion_Commander_MomentOfCourage",
      "legion_commander_moment_of_courage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo);
  }
  CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass.m_pClassInfo = &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo;
  CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass.m_pBaseClassInfo = CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass = &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass;
  CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClassInfo.m_pClass = &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass;
  CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Legion_Commander_MomentOfCourage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_MomentOfCourageClass;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::GetIntrinsicModifierName  (line 777, @0x0000000002c89c50, libserver.so)
// strings: "modifier_legion_commander_moment_of_courage"
const char *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::GetIntrinsicModifierName(
        CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
{
  return "modifier_legion_commander_moment_of_courage";
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::YouForgotToImplementOrDeclareServerClass  (line 780, @0x0000000002c1ca50, libserver.so)
int __fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
{
  return 0;
}


// CDOTA_Ability_Legion_Commander_MomentOfCourage::GetServerClass  (line 780, @0x0000000002c35330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Legion_Commander_MomentOfCourage::GetServerClass(
        CDOTA_Ability_Legion_Commander_MomentOfCourage *const this)
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


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::~CDOTA_Modifier_Legion_Commander_MomentOfCourage  (line 790, @0x0000000002c92320, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::~CDOTA_Modifier_Legion_Commander_MomentOfCourage(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C8AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::~CDOTA_Modifier_Legion_Commander_MomentOfCourage  (line 790, @0x0000000002c92340, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_MomentOfCourage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::~CDOTA_Modifier_Legion_Commander_MomentOfCourage(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C8AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::IsHidden  (line 795, @0x0000000002c89c60, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::IsHidden(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this)
{
  return 1;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnCreated  (line 812, @0x0000000002c713c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "trigger_chance"
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnCreated(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->trigger_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "trigger_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "buff_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->trigger_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->buff_duration = 0.0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::DeclareFunctions  (line 820, @0x0000000002c1ca60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnAttackStart(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnAttackStart;
  this->m_Functions[119].__delta = 0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnAttackStart  (line 827, @0x0000000002c363a0, libserver.so)  // inlines: AttackerNPC, Get, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAttacking, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, DOTA_EmitSound (15 total)
// strings: "modifier_legion_commander_moment_of_courage_lifesteal", "Hero_LegionCommander.Courage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage::OnAttackStart(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *Ability; // rax
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v15; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // r15
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CBaseEntity *v26; // r15
  CDOTA_BaseNPC *v27; // rax
  CBaseEntity *v28; // r14
  CDOTA_BaseNPC *v29; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  CDOTA_BaseNPC *v31; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-38h]

  v33 = __readfsqword(0x28u);
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
  Ability = CDOTA_Buff::GetAbility(this);
  if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
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
          v13 = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && v13->m_bIsDOTANPC
            && CDOTA_Buff::GetParent(this) == v13
            && (CDOTA_Buff::GetCaster(this) == 0
             || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0) )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( RollPseudoRandomPercentage(
                   this->trigger_chance,
                   DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_LEGION_MOMENT,
                   Parent) )
            {
              v15 = CDOTA_Buff::GetAbility(this);
              (*(v15->_vptr_IHandleEntity + 241))(v15, -1.0);
              KeyValues::KeyValues(&kv, "modifier_legion_commander_moment_of_courage_lifesteal");
              KeyValues::SetFloat(&kv, "duration", v16);
              v17 = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              v19 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(
                v19,
                Caster,
                v17,
                "modifier_legion_commander_moment_of_courage_lifesteal",
                &kv,
                0);
              v20 = CDOTA_Buff::GetParent(this);
              if ( CEntityHandle::operator CEntityInstance *(&v20->m_hAttackTarget) != 0 )
              {
                v21 = CDOTA_Buff::GetParent(this);
                if ( CEntityHandle::operator CEntityInstance *(&v21->m_hAttackTarget) != 0 )
                {
                  v22 = CDOTA_Buff::GetParent(this);
                  v23 = CEntityHandle::operator CEntityInstance *(&v22->m_hAttackTarget);
                  if ( (*(v23->_vptr_IHandleEntity + 139))(v23) != 0 )
                  {
                    v24 = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::StartGesture(v24, 1503, 0.0, 0.0, 1, 0, 1.0);
                    v25 = CDOTA_Buff::GetParent(this);
                    v26 = CEntityHandle::operator CEntityInstance *(&v25->m_hAttackTarget);
                    v27 = CDOTA_Buff::GetParent(this);
                    v28 = CEntityHandle::operator CEntityInstance *(&v27->m_hAttackTarget);
                    v29 = CDOTA_Buff::GetCaster(this);
                    AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v29, v28, 1, 1, 0, 0, 0);
                    v31 = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::PerformAttack(v31, AttackRecord, v26, 1, 1, 1, 0);
                    DOTA_EmitSound(10, "Hero_LegionCommander.Courage", m_pInstance);
                  }
                }
              }
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal  (line 865, @0x0000000002c922d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C8DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal  (line 865, @0x0000000002c922f0, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::~CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C8DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::IsPurgable  (line 872, @0x0000000002c89c70, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::IsPurgable(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnCreated  (line 889, @0x0000000002c70950, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hp_leech_percent"
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnCreated(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_leech_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "hp_leech_percent", -1, 0);
  else
    this->hp_leech_percent = 0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnRefresh  (line 896, @0x0000000002c70dd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hp_leech_percent"
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnRefresh(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_leech_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "hp_leech_percent", -1, 0);
  else
    this->hp_leech_percent = 0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::DeclareFunctions  (line 903, @0x0000000002c1ca80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnAttacked(CModifierParams const&), CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnAttacked;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnAttacked  (line 912, @0x0000000002c2ff50, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetSequence, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, EconEntity_OnOwnerKillEaterEvent, SendOverheadEventMessage, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControlEnt, CBaseAnimating::GetModelScale (14 total)
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf", "particles/units/heroes/hero_legion_commander/legion_commander_courage_hit.vpcf", "attach_attack1", "particles/units/heroes/hero_legion_commander/legion_commander_courage_tgt.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::OnAttacked(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r14
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v15; // r12
  int m_Id; // eax
  float Health; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  int v20; // ebx
  CDOTAPlayer *v21; // rax
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int v24; // ebx
  CDOTA_ParticleManager *v25; // rax
  __int64 v26; // r15
  const CBaseAnimatingController *BaseAnimatingController; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  int v31; // ebx
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  vec_t vecFallbackPosition; // [rsp+8h] [rbp-48h]
  float flLifesteal; // [rsp+Ch] [rbp-44h]
  float flLifesteala; // [rsp+Ch] [rbp-44h]
  float flLifestealb; // [rsp+Ch] [rbp-44h]
  double v38; // [rsp+10h] [rbp-40h]
  Vector v40; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v41; // 0:xmm0_8.8,8:xmm1_4.4

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
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          v15 = Parent;
          if ( Parent == v13
            && m_pInstance != 0
            && HIBYTE(m_pInstance[7].m_CScriptComponent) != Parent->m_iTeamNum.m_Value )
          {
            CDOTA_Buff::Destroy(this, 0, 0, 0);
            m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              flLifesteal = params->fDamage;
              if ( CBaseEntity::GetHealth(m_pInstance) <= flLifesteal )
                Health = CBaseEntity::GetHealth(m_pInstance);
              else
                Health = params->fDamage;
              flLifesteala = (this->hp_leech_percent * Health) / 100.0;
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_BaseNPC::Heal(v15, flLifesteala, Ability, 1, 1);
              v19 = 0;
              v20 = flLifesteala;
              if ( v15->m_bIsDOTANPC && (v15->m_iUnitType & 1) != 0 && !v15->m_bIsIllusion.m_Value )
                v19 = v15;
              EconEntity_OnOwnerKillEaterEvent(
                v19,
                0,
                kill_eater_event_t::kKillEaterEvent_LegionCommander_MomentOfCourageLifeStolen,
                v20,
                INVALID_ITEM_DEF_INDEX);
              v21 = (*(v15->_vptr_IHandleEntity + 413))(v15);
              SendOverheadEventMessage(v21, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v15, v20, 0);
              BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                     this,
                                     "particles/generic_gameplay/generic_lifesteal.vpcf",
                                     1,
                                     v15,
                                     0);
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
              v24 = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/units/heroes/hero_legion_commander/legion_commander_courage_hit.vpcf",
                      0,
                      v15,
                      0);
              v25 = GetParticleManager();
              v26 = *&vec3_invalid.x;
              vecFallbackPosition = vec3_invalid.z;
              CDOTA_ParticleManager::SetParticleControlEnt(v25, v24, 1, v15, 1, 0, vec3_invalid, 1);
              flLifestealb = CBaseAnimating::GetModelScale(v15);
              BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v15);
              *(&v38 + 1) = flLifestealb;
              *&v38 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
              v28 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v28, v24, 2, v38, 0.0);
              v29 = GetParticleManager();
              *&v40.x = v26;
              v40.z = vecFallbackPosition;
              CDOTA_ParticleManager::SetParticleControlEnt(v29, v24, 3, v15, 5, "attach_attack1", v40, 1);
              v30 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v30, v24);
              v31 = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/units/heroes/hero_legion_commander/legion_commander_courage_tgt.vpcf",
                      0,
                      m_pInstance,
                      0);
              v32 = GetParticleManager();
              *&v41.x = v26;
              v41.z = vecFallbackPosition;
              CDOTA_ParticleManager::SetParticleControlEnt(v32, v31, 1, m_pInstance, 1, 0, v41, 1);
              v33 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v33, v31);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetModifierAttackSpeedBonus_Constant  (line 957, @0x0000000002c1cae0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this,
        const CModifierParams *const params)
{
  return 0x447A000000000001uLL;
}


// CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetActivityTranslationModifiers  (line 964, @0x0000000002c1cb00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal::GetActivityTranslationModifiers(
        CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "courage";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Legion_Commander_Duel::~CDOTA_Ability_Legion_Commander_Duel  (line 975, @0x0000000002c98a50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Legion_Commander_Duel::~CDOTA_Ability_Legion_Commander_Duel(
        CDOTA_Ability_Legion_Commander_Duel *const this)
{
  this->_vptr_IHandleEntity = &off_45C9150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Legion_Commander_Duel::~CDOTA_Ability_Legion_Commander_Duel  (line 975, @0x0000000002c98a70, libserver.so)  // inlines: ~CDOTA_Ability_Legion_Commander_Duel
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Legion_Commander_Duel::~CDOTA_Ability_Legion_Commander_Duel(
        CDOTA_Ability_Legion_Commander_Duel *const this)
{
  this->_vptr_IHandleEntity = &off_45C9150;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Legion_Commander_Duel::Schema_DynamicBinding  (line 977, @0x0000000002c89c80, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_Duel::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_Duel::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_Duel *const this)
{
  return CDOTA_Ability_Legion_Commander_Duel::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 977, @0x0000000002c89c90, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::DestructInstance  (line 977, @0x0000000002c89ca0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Legion_Commander_Duel>
void __fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::FreeInstance  (line 977, @0x0000000002c89cc0, libserver.so)
void __fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::CanAllocate  (line 977, @0x0000000002c89ce0, libserver.so)
bool __fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 977, @0x0000000002c89cf0, libserver.so)
// globals: CDOTA_Ability_Legion_Commander_Duel::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Legion_Commander_Duel::s_pSchemaBinding;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::AllocateInstance  (line 977, @0x0000000002c900a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::ConstructInstance  (line 977, @0x0000000002c94e10, libserver.so)  // inlines: CDOTA_Ability_Legion_Commander_Duel, Construct<CDOTA_Ability_Legion_Commander_Duel>, SetRefCountsModifiers
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 790) = 0;
    *p = &off_45C9150;
  }
  return p;
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 977, @0x0000000002ca26b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 977, @0x0000000002ca26d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal  (line 977, @0x0000000002cc2b90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "legion_commander_duel", "CDOTA_Ability_Legion_Commander_Duel"
// globals: `guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass, CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo, CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo
CEntityClass *__cdecl CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass) != 0 )
  {
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pClassInfo = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_flags = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pInputs = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_nInputCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pOutputs = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_nOutputCount = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pGameClass = 0;
    CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass._vptr_CEntityClass = off_45C90D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass);
    __cxa_atexit(
      CDOTA_Ability_Legion_Commander_Duel::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Legion_Commander_DuelClass != 0 )
    return &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass;
  if ( `guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo,
      "CDOTA_Ability_Legion_Commander_Duel",
      "legion_commander_duel",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo);
  }
  CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pClassInfo = &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo;
  CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pBaseClassInfo = CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Legion_Commander_DuelClass = &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass;
  CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClassInfo.m_pClass = &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass;
  CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Legion_Commander_DuelClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Legion_Commander_Duel::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Legion_Commander_DuelClass;
}


// CDOTA_Ability_Legion_Commander_Duel::OnStolen  (line 990, @0x0000000002c89d00, libserver.so)  // inlines: SetRefCountsModifiers
void __fastcall CDOTA_Ability_Legion_Commander_Duel::OnStolen(
        CDOTA_Ability_Legion_Commander_Duel *const this,
        CDOTABaseAbility *pSourceAbility)
{
  this->m_bRefCountsModifiers = 0;
}


// CDOTA_Ability_Legion_Commander_Duel::OnSpellStart  (line 1004, @0x0000000002c82120, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetAbilityData, GetLevelSpecialValueFor<float>, GrowMemory, Purge, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound (21 total)
// strings: "modifier_legion_commander_duel", "partner", "Hero_LegionCommander.Duel.FP", "Hero_LegionCommander.Duel", "Hero_LegionCommander.Duel.Cast"
void __fastcall CDOTA_Ability_Legion_Commander_Duel::OnSpellStart(CDOTA_Ability_Legion_Commander_Duel *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // r15
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm3_4
  CEntityIndex v19; // [rsp+8h] [rbp-98h]
  float duration; // [rsp+Ch] [rbp-94h]
  CUnitOrders attackOrder; // [rsp+10h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_scepter", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_legion_commander_duel");
    KeyValues::SetPtr(&kv, "partner", v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::HasScepter(Caster);
    KeyValues::SetFloat(&kv, "duration", v5);
    attackOrder.m_bQueue = 0;
    memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
    attackOrder.m_nUnits.m_Size = 0;
    attackOrder.m_nOrderSequenceNumber = 0;
    attackOrder.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    attackOrder.m_nIssuerPlayerIndex = -1;
    attackOrder.m_vPosition.y = y;
    attackOrder.m_vPosition.z = vec3_origin.z;
    v7 = CDOTABaseAbility::GetCaster(this);
    v19.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
    attackOrder.m_nUnits.m_Size = 1;
    if ( attackOrder.m_nUnits.m_Memory.m_pMemory != 0 )
      attackOrder.m_nUnits.m_Memory.m_pMemory->m_Data = v19.m_Data;
    attackOrder.m_nOrderType = 4;
    attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(v3);
    DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_legion_commander_duel", &kv, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v10, v9, this, "modifier_legion_commander_duel", &kv, 0);
    v11 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(1, "Hero_LegionCommander.Duel.FP", v11);
    DOTA_EmitSound(1, "Hero_LegionCommander.Duel.FP", v3);
    v12 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(24, "Hero_LegionCommander.Duel", v12);
    v13 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_LegionCommander.Duel.Cast", v13);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v17,
      0,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      duration,
      v18);
    attackOrder.m_nUnits.m_Size = 0;
    if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Legion_Commander_Duel::GetStunDuration  (line 1054, @0x0000000002c56820, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Legion_Commander_Duel::GetStunDuration(CDOTA_Ability_Legion_Commander_Duel *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost  (line 1063, @0x0000000002c92280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C9C10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost  (line 1063, @0x0000000002c922a0, libserver.so)  // inlines: ~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::~CDOTA_Modifier_Legion_Commander_Duel_DamageBoost(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  this->_vptr_CDOTA_Buff = &off_45C9C10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsHidden  (line 1073, @0x0000000002c89d10, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsHidden(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsPurgable  (line 1074, @0x0000000002c89d20, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsPurgable(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsPermanent  (line 1075, @0x0000000002c89d30, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsPermanent(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  return 1;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsDebuff  (line 1076, @0x0000000002c89d40, libserver.so)
bool __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::IsDebuff(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  return 0;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetMatchPermanentBuff  (line 1080, @0x0000000002c89d50, libserver.so)
EMatchPermanentBuff __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetMatchPermanentBuff(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  return EMatchPermanentBuff::MATCH_PERMANENT_BUFF_LEGION_COMMANDER_DUEL_DAMAGE;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnCreated  (line 1100, @0x0000000002c1cb20, libserver.so)
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnCreated(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this,
        KeyValues *pKV)
{
  this->m_nTotalDamage = 0;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::DeclareFunctions  (line 1109, @0x0000000002c1cb30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnStackCountChanged  (line 1115, @0x0000000002c23de0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_CombatLog::AddModifierEvent, CDOTA_Buff::ForceRefresh
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::OnStackCountChanged(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this,
        int iOldCount)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax

  if ( g_pDOTACombatLog != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_CombatLog::AddModifierEvent(g_pDOTACombatLog, 19, Parent, Caster, this, 0, 0, 0);
  }
  CDOTA_Buff::ForceRefresh(this);
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetModifierPreAttack_BonusDamage  (line 1129, @0x0000000002c1cb50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::AddCustomTransmiterData  (line 1137, @0x0000000002c21ed0, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Legion_Commander_Duel_DamageBoost::AddCustomTransmiterData(
        CDOTA_Modifier_Legion_Commander_Duel_DamageBoost *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_nTotalDamage; // eax

  m_nTotalDamage = this->m_nTotalDamage;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_nTotalDamage;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Legion_Commander_Duel::OnCreated  (line 1162, @0x0000000002c62bd0, libserver.so)  // inlines: DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, Set, SetForceAttackTarget, SetIdleAcquire, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "reward_damage", "special_bonus_unique_legion_commander", "particles/units/heroes/hero_legion_commander/legion_duel_ring.vpcf", "attach_hitloc", "partner", "particles/units/heroes/hero_legion_commander/legion_duel.vpcf" (7 total)
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::OnCreated(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v14; // eax
  __int16 v15; // cx
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // r12
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityIdentity *v20; // rdx
  int v21; // eax
  __int16 v22; // cx
  int BuffParticleEffect; // r14d
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v28; // rax
  _QWORD *Ptr; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int16 v32; // cx
  CDOTA_BaseNPC *v33; // rax
  int v34; // r13d
  CDOTA_BaseNPC *v35; // r15
  CDOTA_ParticleManager *v36; // rax
  __int64 v37; // r14
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // r12
  CDOTA_BaseNPC *v40; // r15
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // r13
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  const Vector *v46; // r13
  CDOTA_BaseNPC *v47; // r14
  CDOTA_ParticleManager *v48; // rax
  float v49; // xmm0_4
  CDOTA_BaseNPC *pEnt; // [rsp+8h] [rbp-38h]
  vec_t pEnta; // [rsp+8h] [rbp-38h]
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->reward_damage, "reward_damage");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_legion_commander", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->reward_damage += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != CDOTA_Buff::GetCaster(this) )
  {
    v9 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Interrupt(v9);
    CDOTA_Buff::GetParent(this)->m_bIdleAcquire = 1;
    v10 = CDOTA_Buff::GetCaster(this);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = v11;
    if ( v10 != 0 && (m_pEntity = v10->m_pEntity) != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v15 = 0x7FFF;
      else
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v12->m_hForceAttackTarget.m_Index) = v15 | v12->m_hForceAttackTarget.m_Index & 0x8000;
      v12->m_hForceAttackTarget.m_Index = (v14 << 15) | v12->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v11->m_hForceAttackTarget.m_Index = -1;
    }
    v12->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v12, 1);
    v16 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Interrupt(v16);
    CDOTA_Buff::GetCaster(this)->m_bIdleAcquire = 1;
    v17 = CDOTA_Buff::GetParent(this);
    v18 = CDOTA_Buff::GetCaster(this);
    v19 = v18;
    if ( v17 != 0 && (v20 = v17->m_pEntity) != 0 )
    {
      v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
      if ( v20->m_EHandle.m_Index == -1 )
        v22 = 0x7FFF;
      else
        v22 = v20->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v19->m_hForceAttackTarget.m_Index) = v22 | v19->m_hForceAttackTarget.m_Index & 0x8000;
      v19->m_hForceAttackTarget.m_Index = (v21 << 15) | v19->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v18->m_hForceAttackTarget.m_Index = -1;
    }
    v19->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v19, 1);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_legion_commander/legion_duel_ring.vpcf",
                           2,
                           0,
                           0);
    v24 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v24, 1, 0, vec3_invalid, 1);
    v26 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v26);
    pEnt = CDOTA_Buff::GetCaster(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, BuffParticleEffect, 1, pEnt, 5, "attach_hitloc", *AbsOrigin, 1);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  }
  Ptr = KeyValues::GetPtr(pKV, "partner", 0);
  if ( Ptr != 0 && (v30 = Ptr[1]) != 0 )
  {
    v31 = (*(v30 + 16) >> 15) - (*(v30 + 48) & 1);
    v32 = 0x7FFF;
    if ( *(v30 + 16) != -1 )
      v32 = *(v30 + 16) & 0x7FFF;
    LOWORD(this->m_hPartner.m_Index) = v32 | this->m_hPartner.m_Index & 0x8000;
    this->m_hPartner.m_Index = (v31 << 15) | this->m_hPartner.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPartner.m_Index = -1;
  }
  v33 = CDOTA_Buff::GetParent(this);
  v34 = CDOTA_Buff::CreateBuffParticleEffect(
          this,
          "particles/units/heroes/hero_legion_commander/legion_duel.vpcf",
          2,
          v33,
          0);
  v35 = CDOTA_Buff::GetParent(this);
  v36 = GetParticleManager();
  v37 = *&vec3_invalid.x;
  pEnta = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v36, v34, 0, v35, 1, 0, vec3_invalid, 1);
  v38 = CDOTA_Buff::GetParent(this);
  v39 = CBaseEntity::GetAbsOrigin(v38);
  v40 = CDOTA_Buff::GetParent(this);
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v41, v34, 1, v40, 5, "attach_hitloc", *v39, 1);
  v42 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v42, v34);
  LODWORD(v39) = CDOTA_Buff::CreateBuffParticleEffect(
                   this,
                   "particles/units/heroes/hero_legion_commander/legion_commander_duel_buff.vpcf",
                   2,
                   0,
                   0);
  v43 = CDOTA_Buff::GetParent(this);
  v44 = GetParticleManager();
  *&v52.x = v37;
  v52.z = pEnta;
  CDOTA_ParticleManager::SetParticleControlEnt(v44, v39, 0, v43, 1, 0, v52, 1);
  v45 = CDOTA_Buff::GetParent(this);
  v46 = CBaseEntity::GetAbsOrigin(v45);
  v47 = CDOTA_Buff::GetParent(this);
  v48 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v48, v39, 1, v47, 5, "attach_hitloc", *v46, 1);
  CDOTA_Buff::AddParticle(this, v39, 0, 0, -1, 0, 0);
  v49 = 0.0;
  this->m_bAttacked = 0;
  this->m_bHadAVictor = 0;
  if ( g_pGameRules != 0 )
    v49 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flTimeDuelStart = v49;
}


// CDOTA_Modifier_Legion_Commander_Duel::OnDestroy  (line 1212, @0x0000000002c2f5b0, libserver.so)  // inlines: DOTAGameRules, GetAbilityData, GetGameTime, Set, SetForceAttackTarget, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_Buff::GetAbility, CDOTAGamerules::SendProjectionAbilityEndChannelMessage (15 total)
// strings: "Hero_LegionCommander.Duel", "Hero_LegionCommander.Duel.FP", "no_victor"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::OnDestroy(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v10; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // r13
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  float nDuelLengthRounded; // [rsp+18h] [rbp-68h]
  CDOTABaseAbility *nDuelLengthRoundeda; // [rsp+18h] [rbp-68h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  Caster->m_bAllowAllyForceAttack = 0;
  Caster->m_hForceAttackTarget.m_Index = -1;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(Caster, 1);
  Parent = CDOTA_Buff::GetParent(this);
  Parent->m_bAllowAllyForceAttack = 0;
  Parent->m_hForceAttackTarget.m_Index = -1;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(Parent, 1);
  v4 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v4, "Hero_LegionCommander.Duel");
  v5 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v5, "Hero_LegionCommander.Duel.FP");
  v6 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v6, "Hero_LegionCommander.Duel.FP");
  v7 = CDOTA_Buff::GetParent(this);
  if ( v7 != CDOTA_Buff::GetCaster(this) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    if ( (*(v8->_vptr_IHandleEntity + 408))(v8) != 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "no_victor", "yes", 1.0);
      m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
  v10 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v12, *AbsOrigin, 0);
  if ( g_pGameRules != 0 )
    v13 = *&g_pGameRules[18].m_szQuestName[20];
  else
    v13 = 0.0;
  nDuelLengthRounded = v13 - this->m_flTimeDuelStart;
  if ( nDuelLengthRounded > 0.0 )
  {
    v14 = CDOTA_Buff::GetCaster(this);
    if ( v14 == CDOTA_Buff::GetParent(this) )
    {
      v19 = CDOTA_Buff::GetCaster(this);
      if ( v19 == 0 || !v19->m_bIsDOTANPC || (v19->m_iUnitType & 1) == 0 || (v20 = v19, v19->m_bIsIllusion.m_Value) )
        v20 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v20,
        0,
        kill_eater_event_t::kKillEaterEvent_LegionCommander_SecondsSpentDueling,
        (nDuelLengthRounded + 0.5),
        INVALID_ITEM_DEF_INDEX);
    }
  }
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      nDuelLengthRoundeda = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = nDuelLengthRoundeda->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v18 = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v18, m_iAbilityID);
  }
}


// CDOTA_Modifier_Legion_Commander_Duel::DeclareFunctions  (line 1249, @0x0000000002c1cb80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Legion_Commander_Duel::OnDeath(CModifierParams const&), CDOTA_Modifier_Legion_Commander_Duel::OnAttack(CModifierParams const&), CDOTA_Modifier_Legion_Commander_Duel::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Legion_Commander_Duel::GetModifierIncomingDamage_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::DeclareFunctions(
        CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Legion_Commander_Duel::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Legion_Commander_Duel::OnAttack;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Legion_Commander_Duel::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[36].__pfn = CDOTA_Modifier_Legion_Commander_Duel::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_Legion_Commander_Duel::GetModifierIncomingDamage_Percentage  (line 1259, @0x0000000002c2f870, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_Duel::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r13
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    return 1uLL;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = this->m_hPartner.m_Index;
  if ( v9 + 2 <= 1 )
    return 1uLL;
  v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPartner.m_Index) >> 9) & 0x3F];
  if ( v10 == 0 )
    return 1uLL;
  v11 = &v10[this->m_hPartner.m_Index & 0x1FF];
  if ( v11 == 0 )
    return 1uLL;
  if ( v9 != v11->m_EHandle.m_Index )
    return 1uLL;
  v13 = v11->m_pInstance;
  if ( v11->m_pInstance == 0 )
    return 1uLL;
  if ( !v13->m_bIsDOTANPC )
    return 1uLL;
  if ( m_pInstance == 0 )
    return 1uLL;
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    return 1uLL;
  *&result.m_eType = 0xC2C8000000000001LL;
  if ( m_pInstance == v13 )
    return 1uLL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Legion_Commander_Duel::OnIntervalThink  (line 1280, @0x0000000002c31520, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::OnIntervalThink(CDOTA_Modifier_Legion_Commander_Duel *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CEntityInstance *m_pInstance; // rax
  CDOTA_BaseNPC *Caster; // rax
  uint32 v9; // edx
  unsigned __int16 v10; // cx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // r12
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  CDOTA_BaseNPC *v23; // r12
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = Parent->m_hForceAttackTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = Parent->m_hForceAttackTarget.m_Index;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
  if ( v5 == 0 )
    goto LABEL_5;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 )
    goto LABEL_5;
  if ( m_Index != v6->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v6->m_pInstance;
  if ( m_pInstance == 0 )
    goto LABEL_5;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  Caster = CDOTA_Buff::GetCaster(this);
  v9 = Caster->m_hForceAttackTarget.m_Index;
  if ( v9 + 2 <= 1 )
    goto LABEL_5;
  v10 = Caster->m_hForceAttackTarget.m_Index;
  v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_5;
  v12 = &v11[v10 & 0x1FF];
  if ( v12 == 0 )
    goto LABEL_5;
  if ( v9 != v12->m_EHandle.m_Index )
    goto LABEL_5;
  v13 = v12->m_pInstance;
  if ( v13 == 0 || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
    goto LABEL_5;
  v14 = CDOTA_Buff::GetCaster(this);
  if ( v14 == CDOTA_Buff::GetParent(this) )
    return;
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::GetRangeToUnit(v16, v15) > 2000.0 )
  {
LABEL_5:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v17 = CDOTA_Buff::GetParent(this);
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = v18;
  if ( v17 != 0 && (m_pEntity = v17->m_pEntity) != 0 )
  {
    v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v22 = 0x7FFF;
    else
      v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v19->m_hForceAttackTarget.m_Index) = v22 | v19->m_hForceAttackTarget.m_Index & 0x8000;
    v19->m_hForceAttackTarget.m_Index = (v21 << 15) | v19->m_hForceAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    v18->m_hForceAttackTarget.m_Index = -1;
  }
  v19->m_bAllowAllyForceAttack = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v19, 1);
  v23 = CDOTA_Buff::GetCaster(this);
  v24 = CDOTA_Buff::GetParent(this);
  v25 = v24;
  if ( v23 != 0 && (v26 = v23->m_pEntity) != 0 )
  {
    v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
    if ( v26->m_EHandle.m_Index == -1 )
      v28 = 0x7FFF;
    else
      v28 = v26->m_EHandle.m_Index & 0x7FFF;
    LOWORD(v25->m_hForceAttackTarget.m_Index) = v28 | v25->m_hForceAttackTarget.m_Index & 0x8000;
    v25->m_hForceAttackTarget.m_Index = (v27 << 15) | v25->m_hForceAttackTarget.m_Index & 0x7FFF;
  }
  else
  {
    v24->m_hForceAttackTarget.m_Index = -1;
  }
  v25->m_bAllowAllyForceAttack = 0;
  CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v25, 1);
}


// CDOTA_Modifier_Legion_Commander_Duel::OnDeath  (line 1307, @0x0000000002c380c0, libserver.so)  // inlines: AddBonusDamage, CEntityHandle, CHandle, CModifierParams, CSocketIterator, CSocketPair, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_First, GetSocket, GetWearable, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, TSocketIterator, ToDOTABaseNPC, UnitNPC, Vector, operator CBaseEntity*, operator CEconWearable*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, __stack_chk_fail, KeyValues::KeyValues, KeyValues::~KeyValues, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControlEnt (23 total)
// callers: CDOTA_Modifier_SkeletonKing_Reincarnation_Scepter::OnTakeDamageKillCredit
// strings: "modifier_legion_commander_duel_damage_boost", "particles/units/heroes/hero_legion_commander/legion_commander_duel_victory.vpcf", "particles/units/heroes/hero_legion_commander/legion_commander_duel_body.vpcf", "attach_hitloc", "particles/econ/items/legion/legion_weapon_voth_domosh/legion_commander_duel_arcana.vpcf", "modifier_legion_commander_duel" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX, `typeinfo for'CDOTA_Unit_Hero_Legion_Commander
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_Duel::OnDeath(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Parent; // r14
  __int64 v14; // rax
  CDOTA_Buff *ModifierByName; // r12
  void (__fastcall *v16)(CDOTA_Buff *, _QWORD); // r14
  int v17; // eax
  int BuffParticleEffect; // eax
  float reward_damage; // xmm0_4
  int v20; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int v25; // r12d
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // r12
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC_Hero *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_Buff *v36; // r13
  void (__fastcall *v37)(CDOTA_Buff *, _QWORD); // r14
  int v38; // eax
  CDOTA_BaseNPC *v39; // rax
  int v40; // eax
  float v41; // xmm0_4
  int v42; // r13d
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  int v47; // r13d
  CDOTA_BaseNPC *v48; // r14
  CDOTA_ParticleManager *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // r14
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  CDOTA_Unit_Hero_Legion_Commander *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  CEntityInstance *v57; // rax
  __int64 v58; // rax
  TSocketIterator<CItemSocket_Strange> *m_Sockets; // rdx
  int v60; // r13d
  IItemSocket *Socket; // rax
  IItemSocket *v62; // r14
  unsigned int v63; // eax
  CDOTA_BaseNPC *v64; // rax
  int v65; // eax
  int v66; // r13d
  CDOTA_ParticleManager *v67; // rax
  CDOTA_ParticleManager *v68; // rax
  CDOTA_ParticleManager *v69; // rax
  CDOTA_BaseNPC *v70; // rax
  CDOTA_BaseNPC_Hero *v71; // r12
  CDOTA_BaseNPC *v72; // rax
  CDOTA_BaseNPC_Hero *v73; // rax
  CDOTA_BaseNPC *v74; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v77; // r14
  CDOTA_BaseNPC *v78; // r13
  CDOTA_BaseNPC *v79; // rax
  CDOTA_Unit_Hero_Legion_Commander *pCommander; // [rsp+8h] [rbp-1C8h]
  __int64 i; // [rsp+10h] [rbp-1C0h]
  uint32 unArcanaKills; // [rsp+1Ch] [rbp-1B4h]
  CDOTA_BaseNPC *pEnt; // [rsp+28h] [rbp-1A8h]
  CDOTA_BaseNPC *pEnta; // [rsp+28h] [rbp-1A8h]
  CModifierParams newParams; // [rsp+30h] [rbp-1A0h] BYREF
  TSocketIterator<CItemSocket_Strange> socketIterator; // [rsp+C0h] [rbp-110h] BYREF
  KeyValues kv; // [rsp+180h] [rbp-50h] BYREF
  unsigned __int64 v88; // [rsp+198h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v88 = __readfsqword(0x28u);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->hunit.m_Index),
        (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v6 = &v5[m_Index_low & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v8 = this->m_hPartner.m_Index;
  if ( v8 + 2 > 1
    && (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPartner.m_Index) >> 9) & 0x3F]) != 0
    && (v10 = &v9[this->m_hPartner.m_Index & 0x1FF]) != 0
    && v8 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && v12->m_bIsDOTANPC )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == CDOTA_Buff::GetCaster(this) )
    {
      KeyValues::KeyValues(&kv, "modifier_legion_commander_duel_damage_boost");
      newParams.bTooltip = 0;
      v14 = m_pInstance->m_ModifierManager.m_buffsForModifiers[73];
      newParams.ability.m_Index = -1;
      newParams.fDamage = 0.0;
      newParams.fOriginalDamage = 0.0;
      newParams.nActivity = -1;
      newParams.nTooltipParam = 0;
      newParams.bIgnoreInvis = 0;
      newParams.bNoCooldown = 0;
      newParams.bReincarnate = 0;
      newParams.fDistance = 0.0;
      newParams.inflictor.m_Index = -1;
      newParams.nDamageflags = 0;
      newParams.nDamageCategory = 0;
      memset(&newParams.pOrb, 0, 24);
      newParams.bCraniumBasherTested = 0;
      newParams.bHeartRegenApplied = 0;
      newParams.bDiffusalApplied = 0;
      newParams.bChainLightningConsidered = 0;
      newParams.bSuppressDamage = 0;
      newParams.bRangedAttack = 0;
      newParams.nPlayerids_stick = 0;
      newParams.hattacker.m_Index = -1;
      newParams.htarget.m_Index = -1;
      newParams.hunit.m_Index = -1;
      newParams.bDoNotConsume = 1;
      if ( v14 != 0xFF
        && m_pInstance->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0
        && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
             &m_pInstance->m_ModifierManager,
             modifierfunction::MODIFIER_PROPERTY_REINCARNATION,
             &newParams) > 0.0
        || (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) != 0 )
      {
        KeyValues::~KeyValues(&kv);
        *&result.m_eType = 1;
        goto LABEL_12;
      }
      if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
      {
        this->m_bHadAVictor = 1;
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v12, "modifier_legion_commander_duel_damage_boost", 0);
        if ( ModifierByName != 0
          || (Ability = CDOTA_Buff::GetAbility(this),
              Caster = CDOTA_Buff::GetCaster(this),
              (ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                                  v12,
                                  Caster,
                                  Ability,
                                  "modifier_legion_commander_duel_damage_boost",
                                  &kv,
                                  0)) != 0) )
        {
          v16 = *(ModifierByName->_vptr_CDOTA_Buff + 28);
          v17 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
          v16(ModifierByName, (this->reward_damage + v17));
          LODWORD(ModifierByName[1]._vptr_CDOTA_Buff) += this->reward_damage;
          BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                 this,
                                 "particles/units/heroes/hero_legion_commander/legion_commander_duel_victory.vpcf",
                                 7,
                                 v12,
                                 0);
          reward_damage = this->reward_damage;
          v20 = BuffParticleEffect;
          LODWORD(socketIterator._vptr_IEconItemAttributeIterator) = 0;
          LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
          *(&socketIterator._vptr_IEconItemAttributeIterator + 1) = reward_damage;
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(
            ParticleManager,
            v20,
            1,
            *&socketIterator._vptr_IEconItemAttributeIterator,
            *&socketIterator.m_Sockets[0].m_pAttribute);
          socketIterator._vptr_IEconItemAttributeIterator = 0x40000000;
          LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
          v22 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(
            v22,
            v20,
            2,
            *&socketIterator._vptr_IEconItemAttributeIterator,
            *&socketIterator.m_Sockets[0].m_pAttribute);
          v23 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v23, v20);
          v24 = CDOTA_Buff::GetParent(this);
          v25 = CDOTA_Buff::CreateBuffParticleEffect(
                  this,
                  "particles/units/heroes/hero_legion_commander/legion_commander_duel_body.vpcf",
                  2,
                  v24,
                  0);
          v26 = CDOTA_Buff::GetParent(this);
          v27 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 0, v26, 1, 0, vec3_invalid, 1);
          v28 = CDOTA_Buff::GetParent(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
          pEnt = CDOTA_Buff::GetParent(this);
          v30 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v30, v25, 1, pEnt, 5, "attach_hitloc", *AbsOrigin, 1);
          v31 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v31, v25);
        }
        v32 = ToDOTABaseNPCRealHero(v12);
        v33 = CDOTA_Buff::GetCaster(this);
        v34 = ToDOTABaseNPCRealHero(v33);
        EconEntity_OnOwnerKillEaterEvent(
          v34,
          v32,
          kill_eater_event_t::kKillEaterEventType_LegionCommander_DuelsLost,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      else if ( m_pInstance == v12 )
      {
        this->m_bHadAVictor = 1;
        v35 = CDOTA_Buff::GetCaster(this);
        v36 = CDOTA_BaseNPC::FindModifierByName(v35, "modifier_legion_commander_duel_damage_boost", 0);
        if ( v36 != 0
          || (v77 = CDOTA_Buff::GetAbility(this),
              v78 = CDOTA_Buff::GetCaster(this),
              v79 = CDOTA_Buff::GetCaster(this),
              (v36 = CDOTA_BaseNPC::AddNewModifier(v79, v78, v77, "modifier_legion_commander_duel_damage_boost", &kv, 0)) != 0) )
        {
          v37 = *(v36->_vptr_CDOTA_Buff + 28);
          v38 = (*(v36->_vptr_CDOTA_Buff + 27))(v36);
          v37(v36, (this->reward_damage + v38));
          LODWORD(v36[1]._vptr_CDOTA_Buff) += this->reward_damage;
          v39 = CDOTA_Buff::GetCaster(this);
          v40 = CDOTA_Buff::CreateBuffParticleEffect(
                  this,
                  "particles/units/heroes/hero_legion_commander/legion_commander_duel_victory.vpcf",
                  7,
                  v39,
                  0);
          v41 = this->reward_damage;
          v42 = v40;
          LODWORD(socketIterator._vptr_IEconItemAttributeIterator) = 0;
          LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
          *(&socketIterator._vptr_IEconItemAttributeIterator + 1) = v41;
          v43 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(
            v43,
            v42,
            1,
            *&socketIterator._vptr_IEconItemAttributeIterator,
            *&socketIterator.m_Sockets[0].m_pAttribute);
          socketIterator._vptr_IEconItemAttributeIterator = 0x40000000;
          LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
          v44 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(
            v44,
            v42,
            2,
            *&socketIterator._vptr_IEconItemAttributeIterator,
            *&socketIterator.m_Sockets[0].m_pAttribute);
          v45 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v45, v42);
          v46 = CDOTA_Buff::GetParent(this);
          v47 = CDOTA_Buff::CreateBuffParticleEffect(
                  this,
                  "particles/units/heroes/hero_legion_commander/legion_commander_duel_body.vpcf",
                  2,
                  v46,
                  0);
          v48 = CDOTA_Buff::GetParent(this);
          v49 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v49, v47, 0, v48, 1, 0, vec3_invalid, 1);
          v50 = CDOTA_Buff::GetParent(this);
          v51 = CBaseEntity::GetAbsOrigin(v50);
          pEnta = CDOTA_Buff::GetParent(this);
          v52 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v52, v47, 1, pEnta, 5, "attach_hitloc", *v51, 1);
          v53 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v53, v47);
        }
        v54 = CDOTA_Buff::GetCaster(this);
        if ( v54 != 0 )
        {
          v55 = __dynamic_cast(v54, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Legion_Commander, 0);
          pCommander = v55;
          if ( v55 != 0 )
          {
            ++v55->m_unDuelsWon;
            i = 0;
            unArcanaKills = 0;
            while ( i < CDOTA_Buff::GetCaster(this)->m_hMyWearables.m_Vector.m_Size )
            {
              v56 = CDOTA_Buff::GetCaster(this);
              v57 = CEntityHandle::operator CEntityInstance *(&v56->m_hMyWearables.m_Vector.m_Memory.m_pMemory[i]);
              if ( v57 != 0 )
              {
                v58 = (*(v57->_vptr_IHandleEntity + 265))(v57);
                if ( v58 != -104 )
                {
                  m_Sockets = socketIterator.m_Sockets;
                  do
                  {
                    m_Sockets->_vptr_IEconItemAttributeIterator = 0;
                    m_Sockets = (m_Sockets + 16);
                    *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
                  }
                  while ( m_Sockets != &socketIterator.m_nSocketCount );
                  socketIterator.m_nSocketCount = 0;
                  socketIterator.m_nGemCount = 0;
                  socketIterator.m_unAttribStorageTypeFlags = 1;
                  socketIterator._vptr_IEconItemAttributeIterator = off_40FC710;
                  (*(*(v58 + 104) + 224LL))(v58 + 104, &socketIterator);
                  if ( socketIterator.m_nGemCount > 0 && socketIterator.m_nSocketCount > 0 )
                  {
                    v60 = 0;
                    do
                    {
                      Socket = CSocketIterator::GetSocket(&socketIterator, v60);
                      v62 = Socket;
                      if ( Socket != 0 && (*(Socket->_vptr_IItemSocket + 21))(Socket) == 3004 )
                      {
                        v63 = pCommander->m_unDuelsWon + HIDWORD(v62[5]._vptr_IItemSocket);
                        if ( unArcanaKills >= v63 )
                          v63 = unArcanaKills;
                        unArcanaKills = v63;
                      }
                      ++v60;
                    }
                    while ( socketIterator.m_nSocketCount > v60 );
                  }
                }
              }
              ++i;
            }
            if ( unArcanaKills > 1 )
            {
              v64 = CDOTA_Buff::GetCaster(this);
              v65 = CDOTA_Buff::CreateBuffParticleEffect(
                      this,
                      "particles/econ/items/legion/legion_weapon_voth_domosh/legion_commander_duel_arcana.vpcf",
                      7,
                      v64,
                      0);
              LODWORD(socketIterator._vptr_IEconItemAttributeIterator) = 0;
              v66 = v65;
              LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
              *(&socketIterator._vptr_IEconItemAttributeIterator + 1) = unArcanaKills;
              v67 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(
                v67,
                v66,
                1,
                *&socketIterator._vptr_IEconItemAttributeIterator,
                *&socketIterator.m_Sockets[0].m_pAttribute);
              socketIterator._vptr_IEconItemAttributeIterator = 1092616192;
              LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
              v68 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(
                v68,
                v66,
                2,
                *&socketIterator._vptr_IEconItemAttributeIterator,
                *&socketIterator.m_Sockets[0].m_pAttribute);
              v69 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v69, v66);
            }
          }
        }
        v70 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::RemoveModifierByName(v70, "modifier_legion_commander_duel");
        v71 = ToDOTABaseNPCRealHero(m_pInstance);
        v72 = CDOTA_Buff::GetCaster(this);
        v73 = ToDOTABaseNPCRealHero(v72);
        EconEntity_OnOwnerKillEaterEvent(
          v73,
          v71,
          kill_eater_event_t::kKillEaterEventType_LegionCommander_DuelsWon,
          1,
          INVALID_ITEM_DEF_INDEX);
        v74 = CDOTA_Buff::GetCaster(this);
        DOTA_EmitSound(4, "Hero_LegionCommander.Duel.Victory", v74);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    CDOTA_Buff::GetParent(this);
    CDOTA_Buff::GetCaster(this);
  }
  *&result.m_eType = 1;
LABEL_12:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Legion_Commander_Duel::GetActivityTranslationModifiers  (line 1456, @0x0000000002c25d70, libserver.so)
// strings: "duel_start", "duel_kill"
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_Duel::GetActivityTranslationModifiers(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 2;
  result.m_szVal = "duel_start";
  if ( this->m_bAttacked )
  {
    result = 2uLL;
    if ( this->m_bHadAVictor )
      result.m_szVal = "duel_kill";
  }
  return result;
}


// CDOTA_Modifier_Legion_Commander_Duel::OnAttack  (line 1469, @0x0000000002c2dc20, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Legion_Commander_Duel::OnAttack(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // r13

  if ( !this->m_bAttacked )
  {
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
          if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            Parent = CDOTA_Buff::GetParent(this);
            if ( Parent == m_pInstance && Parent == CDOTA_Buff::GetCaster(this) )
              this->m_bAttacked = 1;
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Legion_Commander_Duel::CheckState  (line 1487, @0x0000000002c1cbf0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Legion_Commander_Duel::CheckState(
        CDOTA_Modifier_Legion_Commander_Duel *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rdx
  uint64 m_nDisabledStateMask; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x202000018LL;
  m_nDisabledStateMask &= 0xFFFFFFFDFDFFFFE7LL;
  LOBYTE(m_nDisabledStateMask) = m_nDisabledStateMask | 0x80;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::~CDOTA_Ability_Holdout_GladiatorsUnite  (line 1507, @0x0000000002c98aa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::~CDOTA_Ability_Holdout_GladiatorsUnite(
        CDOTA_Ability_Holdout_GladiatorsUnite *const this)
{
  this->_vptr_IHandleEntity = &off_45CA290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::~CDOTA_Ability_Holdout_GladiatorsUnite  (line 1507, @0x0000000002c98ac0, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_GladiatorsUnite
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::~CDOTA_Ability_Holdout_GladiatorsUnite(
        CDOTA_Ability_Holdout_GladiatorsUnite *const this)
{
  this->_vptr_IHandleEntity = &off_45CA290;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::Schema_DynamicBinding  (line 1509, @0x0000000002c89d60, libserver.so)
// globals: CDOTA_Ability_Holdout_GladiatorsUnite::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_GladiatorsUnite *const this)
{
  return CDOTA_Ability_Holdout_GladiatorsUnite::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1509, @0x0000000002c89d70, libserver.so)
// globals: CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::DestructInstance  (line 1509, @0x0000000002c89d80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_GladiatorsUnite>
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::FreeInstance  (line 1509, @0x0000000002c89da0, libserver.so)
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::CanAllocate  (line 1509, @0x0000000002c89dc0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1509, @0x0000000002c89dd0, libserver.so)
// globals: CDOTA_Ability_Holdout_GladiatorsUnite::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_GladiatorsUnite::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::AllocateInstance  (line 1509, @0x0000000002c900e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::ConstructInstance  (line 1509, @0x0000000002c94e50, libserver.so)  // inlines: CDOTA_Ability_Holdout_GladiatorsUnite, Construct<CDOTA_Ability_Holdout_GladiatorsUnite>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45CA290;
  }
  return p;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1509, @0x0000000002ca2700, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1509, @0x0000000002ca2720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal  (line 1509, @0x0000000002cc1460, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "holdout_gladiators_unite", "CDOTA_Ability_Holdout_GladiatorsUnite"
// globals: `guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass, CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo, CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass) != 0 )
  {
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pClassInfo = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_flags = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pInputs = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_nInputCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pOutputs = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_nOutputCount = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pGameClass = 0;
    CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass._vptr_CEntityClass = off_45CA210;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_GladiatorsUnite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_GladiatorsUniteClass != 0 )
    return &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo,
      "CDOTA_Ability_Holdout_GladiatorsUnite",
      "holdout_gladiators_unite",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo);
  }
  CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pClassInfo = &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo;
  CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_GladiatorsUniteClass = &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass;
  CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClassInfo.m_pClass = &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass;
  CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_GladiatorsUniteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_GladiatorsUnite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GladiatorsUniteClass;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::YouForgotToImplementOrDeclareServerClass  (line 1526, @0x0000000002c1cc30, libserver.so)
int __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Holdout_GladiatorsUnite *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_GladiatorsUnite::GetServerClass  (line 1526, @0x0000000002c35b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Holdout_GladiatorsUnite::GetServerClass(
        CDOTA_Ability_Holdout_GladiatorsUnite *const this)
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


// CDOTA_Ability_Holdout_GladiatorsUnite::OnSpellStart  (line 1535, @0x0000000002c54f40, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_holdout_gladiators_unite_thinker", "Hero_LegionCommander.Duel.Cast"
void __fastcall CDOTA_Ability_Holdout_GladiatorsUnite::OnSpellStart(CDOTA_Ability_Holdout_GladiatorsUnite *const this)
{
  float v2; // xmm1_4
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_holdout_gladiators_unite_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v6, this, "modifier_holdout_gladiators_unite_thinker", &kv, *AbsOrigin, m_Value, 0, 1, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_LegionCommander.Duel.Cast", v7);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker  (line 1554, @0x0000000002c921e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CAD50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker  (line 1554, @0x0000000002c92200, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::~CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CAD50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::IsHidden  (line 1559, @0x0000000002c89de0, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::IsHidden(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::IsAura  (line 1561, @0x0000000002c89df0, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::IsAura(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetModifierAura  (line 1562, @0x0000000002c89e00, libserver.so)
// strings: "modifier_holdout_gladiators_unite"
const char *__fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetModifierAura(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return "modifier_holdout_gladiators_unite";
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraSearchTeam  (line 1564, @0x0000000002c89e10, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraSearchType  (line 1565, @0x0000000002c89e20, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return 3;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraRadius  (line 1566, @0x0000000002c89e30, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::GetAuraRadius(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnCreated  (line 1584, @0x0000000002c74910, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "legion_gladiators_ring", "attach_hitloc", "Hero_LegionCommander.Duel"
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnCreated(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  int m_nFXIndex; // r12d
  const CBaseAnimating *v7; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  const CBaseAnimating *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v4);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(this, "legion_gladiators_ring", 2, 0, 0);
  Parent = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v7 = Parent;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v7, 1, 0, vec3_invalid, 1);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTA_Buff::GetParent(this);
  LODWORD(v7) = this->m_nFXIndex;
  v12 = v11;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v7, 1, v12, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  v14 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(24, "Hero_LegionCommander.Duel", v14);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnDestroy  (line 1601, @0x0000000002c204f0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, UTIL_Remove
// strings: "Hero_LegionCommander.Duel"
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnDestroy(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_LegionCommander.Duel");
  v3 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v3);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnIntervalThink  (line 1611, @0x0000000002c51200, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_BaseNPC::FindModifierByName, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_holdout_gladiators_unite"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker::OnIntervalThink(
        CDOTA_Modifier_Holdout_GladiatorsUnite_Thinker *const this)
{
  int radius; // r12d
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *Caster; // rax
  __int64 v7; // r12
  int i; // ebx
  CEntityInstance *m_pInstance; // rdi
  CDOTA_Buff *ModifierByName; // rax
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+20h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    radius = this->radius;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    Parent = CDOTA_Buff::GetParent(this);
    v4 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, radius, &hUnits, 1, 1, 0x2000, 0, 0);
    v7 = 0;
    for ( i = 0; hUnits.m_Size > i; ++v7 )
    {
      v11 = &hUnits.m_Memory.m_pMemory[v7];
      m_Index = hUnits.m_Memory.m_pMemory[v7].m_Index;
      if ( m_Index + 2 > 1 )
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
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_holdout_gladiators_unite", 0);
              if ( ModifierByName != 0 )
                (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, hUnits.m_Size);
            }
          }
        }
      }
      ++i;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
      if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    }
  }
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::~CDOTA_Modifier_Holdout_GladiatorsUnite  (line 1640, @0x0000000002c92190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::~CDOTA_Modifier_Holdout_GladiatorsUnite(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CB070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::~CDOTA_Modifier_Holdout_GladiatorsUnite  (line 1640, @0x0000000002c921b0, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_GladiatorsUnite
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::~CDOTA_Modifier_Holdout_GladiatorsUnite(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this)
{
  this->_vptr_CDOTA_Buff = &off_45CB070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::IsPurgable  (line 1645, @0x0000000002c89e40, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::IsPurgable(CDOTA_Modifier_Holdout_GladiatorsUnite *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::OnCreated  (line 1670, @0x0000000002c5b440, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::AddParticle
// strings: "bonus_armor_per_hero", "bonus_damage_per_hero", "lifesteal_per_hero", "particles/units/heroes/hero_legion_commander/legion_duel.vpcf", "attach_hitloc", "particles/units/heroes/hero_legion_commander/legion_commander_duel_buff.vpcf"
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::OnCreated(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v10; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  int v16; // r12d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r13
  CDOTA_BaseNPC *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_armor_per_hero, "bonus_armor_per_hero");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_damage_per_hero, "bonus_damage_per_hero");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->lifesteal_per_hero, "lifesteal_per_hero");
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_legion_commander/legion_duel.vpcf",
                         2,
                         Parent,
                         0);
  v8 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v10 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v8, 1, 0, vec3_invalid, 1);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, BuffParticleEffect, 1, v13, 5, "attach_hitloc", *AbsOrigin, 1);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v15, BuffParticleEffect);
  v16 = CDOTA_Buff::CreateBuffParticleEffect(
          this,
          "particles/units/heroes/hero_legion_commander/legion_commander_duel_buff.vpcf",
          2,
          0,
          0);
  v17 = CDOTA_Buff::GetParent(this);
  v18 = GetParticleManager();
  *&v24.x = v10;
  v24.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v16, 0, v17, 1, 0, v24, 1);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v16, 1, v21, 5, "attach_hitloc", *v20, 1);
  CDOTA_Buff::AddParticle(this, v16, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::OnRefresh  (line 1691, @0x0000000002c71e20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_armor_per_hero", "bonus_damage_per_hero", "lifesteal_per_hero"
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::OnRefresh(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_armor_per_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor_per_hero", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_damage_per_hero = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_armor_per_hero = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_damage_per_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage_per_hero", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->lifesteal_per_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "lifesteal_per_hero", -1, 0);
    return;
  }
LABEL_7:
  this->lifesteal_per_hero = 0;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::DeclareFunctions  (line 1700, @0x0000000002c1cc40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Holdout_GladiatorsUnite::OnAttacked(CModifierParams const&), CDOTA_Modifier_Holdout_GladiatorsUnite::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::DeclareFunctions(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPreAttack_BonusDamage;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Holdout_GladiatorsUnite::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Holdout_GladiatorsUnite::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPhysicalArmorBonus  (line 1710, @0x0000000002c1ccb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        const CModifierParams *const params)
{
  int bonus_armor_per_hero; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_armor_per_hero = this->bonus_armor_per_hero;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_armor_per_hero);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPreAttack_BonusDamage  (line 1717, @0x0000000002c1ccf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        const CModifierParams *const params)
{
  int bonus_damage_per_hero; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_damage_per_hero = this->bonus_damage_per_hero;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_damage_per_hero);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::OnAttacked  (line 1724, @0x0000000002c2eeb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::OnAttacked(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v13; // r15
  CDOTA_BaseNPC *Parent; // r14
  uint32 v15; // eax
  int Health; // ebx
  int lifesteal_per_hero; // r13d
  int v18; // ebx
  CDOTABaseAbility *Ability; // rax
  CDOTAPlayer *v20; // rax
  int BuffParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  float fDamage; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && v13->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == v13 && m_pInstance != 0 )
          {
            v15 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
            if ( (v15 & 0x10) == 0
              && (v15 & 0x193) != 0
              && m_pInstance->m_iTeamNum.m_Value != Parent->m_iTeamNum.m_Value )
            {
              *&result.m_eType = 1;
              if ( Parent->m_bIsIllusion.m_Value )
                goto LABEL_11;
              fDamage = params->fDamage;
              if ( CBaseEntity::GetHealth(m_pInstance) <= fDamage )
                Health = CBaseEntity::GetHealth(m_pInstance);
              else
                Health = params->fDamage;
              lifesteal_per_hero = this->lifesteal_per_hero;
              v18 = (Health * (*(this->_vptr_CDOTA_Buff + 27))(this) * lifesteal_per_hero) / 100;
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_BaseNPC::Heal(Parent, v18, Ability, 0, 1);
              v20 = (*(Parent->_vptr_IHandleEntity + 413))(Parent);
              SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, Parent, v18, 0);
              BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                     this,
                                     "particles/generic_gameplay/generic_lifesteal.vpcf",
                                     1,
                                     Parent,
                                     0);
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_11:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Holdout_GladiatorsUnite::OnTooltip  (line 1752, @0x0000000002c1cd30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GladiatorsUnite::OnTooltip(
        CDOTA_Modifier_Holdout_GladiatorsUnite *const this,
        const CModifierParams *const params)
{
  int lifesteal_per_hero; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  lifesteal_per_hero = this->lifesteal_per_hero;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * lifesteal_per_hero);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


