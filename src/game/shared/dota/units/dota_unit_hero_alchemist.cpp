// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:32
class CDOTA_Unit_Hero_Alchemist : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Alchemist(CDOTA_Unit_Hero_Alchemist &);
	CDOTA_Unit_Hero_Alchemist(CDOTA_Unit_Hero_Alchemist &);
	CDOTA_Unit_Hero_Alchemist();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual bool OnLoadState(KeyValues *);
	virtual const char * GetSoundSet();
	virtual ~CDOTA_Unit_Hero_Alchemist();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[479] OnItemEquipped
	// vtable[467] OnLoadState
	// vtable[460] GetSoundSet
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:47
class C_CDOTA_Unit_Hero_Alchemist_MapInstall {
	C_CDOTA_Unit_Hero_Alchemist_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:123
class CDOTA_Ability_Alchemist_AcidSpray : public CDOTABaseAbility {
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
	CDOTA_Ability_Alchemist_AcidSpray(CDOTA_Ability_Alchemist_AcidSpray &);
	CDOTA_Ability_Alchemist_AcidSpray(CDOTA_Ability_Alchemist_AcidSpray &);
	CDOTA_Ability_Alchemist_AcidSpray();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Alchemist_AcidSpray();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:144
class C_CDOTA_Ability_Alchemist_AcidSpray_MapInstall {
	C_CDOTA_Ability_Alchemist_AcidSpray_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:190
class CDOTA_Modifier_Alchemist_AcidSpray_Thinker : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int radius;  // +0xbac
	int m_nFXIndex;  // +0xbb0
	CDOTA_Modifier_Alchemist_AcidSpray_Thinker();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Alchemist_AcidSpray_Thinker();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:281
class CDOTA_Modifier_Alchemist_AcidSpray : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	CDOTA_Modifier_Alchemist_AcidSpray();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Alchemist_AcidSpray();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:356
class CDOTA_Ability_Alchemist_UnstableConcoction : public CDOTABaseAbility {
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
	CDOTA_Ability_Alchemist_UnstableConcoction(CDOTA_Ability_Alchemist_UnstableConcoction &);
	CDOTA_Ability_Alchemist_UnstableConcoction(CDOTA_Ability_Alchemist_UnstableConcoction &);
	CDOTA_Ability_Alchemist_UnstableConcoction();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Alchemist_UnstableConcoction();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:424
class CDOTA_Ability_Alchemist_UnstableConcoctionThrow : public CDOTABaseAbility {
public:

private:

	float m_fCookTime;  // +0x390
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
	CDOTA_Ability_Alchemist_UnstableConcoctionThrow(CDOTA_Ability_Alchemist_UnstableConcoctionThrow &);
	CDOTA_Ability_Alchemist_UnstableConcoctionThrow(CDOTA_Ability_Alchemist_UnstableConcoctionThrow &);
	CDOTA_Ability_Alchemist_UnstableConcoctionThrow();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual void CopyAbilityState(CDOTABaseAbility *);
	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual Activity GetCastAnimation();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetAssociatedPrimaryAbilities();
	void DoStun(CDOTA_BaseNPC *, const Vector &);
	virtual ~CDOTA_Ability_Alchemist_UnstableConcoctionThrow();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[210] CopyAbilityState
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[234] GetCastAnimation
	// vtable[306] IsHiddenWhenStolen
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:466
class C_CDOTA_Ability_Alchemist_UnstableConcoctionThrow_MapInstall {
	C_CDOTA_Ability_Alchemist_UnstableConcoctionThrow_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:713
class CDOTA_Modifier_Alchemist_UnstableConcoction : public CDOTA_Buff {
public:

private:

	float brew_time;  // +0xba8
	float brew_explosion;  // +0xbac
	float m_fStartTime;  // +0xbb0
	float m_fLastAlertTime;  // +0xbb4
	int m_nConcoctionFXIndex;  // +0xbb8
	bool m_bHasStunned;  // +0xbbc
	CDOTA_Modifier_Alchemist_UnstableConcoction();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityStart(const CModifierParams &);
	virtual ~CDOTA_Modifier_Alchemist_UnstableConcoction();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] OnAbilityStart
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:893
class CDOTA_Ability_Alchemist_GoblinsGreed : public CDOTABaseAbility {
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
	CDOTA_Ability_Alchemist_GoblinsGreed(CDOTA_Ability_Alchemist_GoblinsGreed &);
	CDOTA_Ability_Alchemist_GoblinsGreed(CDOTA_Ability_Alchemist_GoblinsGreed &);
	CDOTA_Ability_Alchemist_GoblinsGreed();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Alchemist_GoblinsGreed();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:907
class CDOTA_Modifier_Alchemist_GoblinsGreed : public CDOTA_Buff {
public:

private:

	float duration;  // +0xbc0
	int bonus_gold;  // +0xbc4
	int bonus_bonus_gold;  // +0xbc8
	int bonus_gold_cap;  // +0xbcc
	CDOTA_Modifier_Alchemist_GoblinsGreed();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Alchemist_GoblinsGreed();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:1047
class CDOTA_Ability_Alchemist_ChemicalRage : public CDOTABaseAbility {
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
	CDOTA_Ability_Alchemist_ChemicalRage(CDOTA_Ability_Alchemist_ChemicalRage &);
	CDOTA_Ability_Alchemist_ChemicalRage(CDOTA_Ability_Alchemist_ChemicalRage &);
	CDOTA_Ability_Alchemist_ChemicalRage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Alchemist_ChemicalRage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:1081
class CDOTA_Modifier_Alchemist_ChemicalRageTransform : public CDOTA_Buff {
public:

	CDOTA_Modifier_Alchemist_ChemicalRageTransform();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Alchemist_ChemicalRageTransform();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:1154
class CDOTA_Modifier_Alchemist_ChemicalRage : public CDOTA_Buff {
public:

private:

	float base_attack_time;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_health_regen;  // +0xbb0
	float bonus_mana_regen;  // +0xbb4
	int bonus_movespeed;  // +0xbb8
	int m_nFXAlchemistCRIndex;  // +0xbbc
	CDOTA_Modifier_Alchemist_ChemicalRage();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool AllowIllusionDuplicate();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseAttackTimeConstant(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierBaseManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual ~CDOTA_Modifier_Alchemist_ChemicalRage();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[18] AllowIllusionDuplicate
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_alchemist.cpp:1304
class CDOTA_Modifier_Alchemist_UltimateScepter : public CDOTA_Buff_Item {
public:

private:

	int bonus_all_stats;  // +0xba8
	int bonus_health;  // +0xbac
	int bonus_mana;  // +0xbb0
	CDOTA_Modifier_Alchemist_UltimateScepter();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Alchemist_UltimateScepter();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Alchemist::~CDOTA_Unit_Hero_Alchemist  (line 32, @0x0000000002ba2380, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Alchemist::~CDOTA_Unit_Hero_Alchemist(CDOTA_Unit_Hero_Alchemist *const this)
{
  this->_vptr_IHandleEntity = &off_448B3B0;
  this->_vptr_INextBotEventResponder = &off_448C390;
  this->_vptr_CObstructionObject = &off_448C6C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Alchemist::~CDOTA_Unit_Hero_Alchemist  (line 32, @0x0000000002ba23c0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Alchemist
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Alchemist::~CDOTA_Unit_Hero_Alchemist(CDOTA_Unit_Hero_Alchemist *const this)
{
  this->_vptr_IHandleEntity = &off_448B3B0;
  this->_vptr_INextBotEventResponder = &off_448C390;
  this->_vptr_CObstructionObject = &off_448C6C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Alchemist::Schema_DynamicBinding  (line 34, @0x0000000002b8c950, libserver.so)
// globals: CDOTA_Unit_Hero_Alchemist::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Alchemist::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Alchemist *const this)
{
  return CDOTA_Unit_Hero_Alchemist::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002b8c980, libserver.so)
// globals: CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002b8c990, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Alchemist>
void __fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002b8c9b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002b8c9d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002b8c9e0, libserver.so)
// globals: CDOTA_Unit_Hero_Alchemist::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Alchemist::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002b968a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002b9c2a0, libserver.so)  // inlines: CDOTA_Unit_Hero_Alchemist, Construct<CDOTA_Unit_Hero_Alchemist>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_448B3B0;
    *(p + 236) = &off_448C390;
    *(p + 257) = &off_448C6C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002babe30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002bac400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal  (line 34, @0x0000000002bcf8b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_alchemist", "CDOTA_Unit_Hero_Alchemist"
// globals: `guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass, CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo, CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass) != 0 )
  {
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_flags = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pInputs = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass._vptr_CEntityClass = off_448B330;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Alchemist::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AlchemistClass != 0 )
    return &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo,
      "CDOTA_Unit_Hero_Alchemist",
      "npc_dota_hero_alchemist",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo);
  }
  CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pClassInfo = &CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo;
  CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AlchemistClass = &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass;
  CDOTA_Unit_Hero_Alchemist::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AlchemistClassInfo.m_pClass = &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass;
  CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AlchemistClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Alchemist::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AlchemistClass;
}


// CDOTA_Unit_Hero_Alchemist::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002b33870, libserver.so)
int __fastcall CDOTA_Unit_Hero_Alchemist::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Alchemist *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Alchemist::GetServerClass  (line 47, @0x0000000002b4bc20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Alchemist::GetServerClass(CDOTA_Unit_Hero_Alchemist *const this)
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


// CDOTA_Unit_Hero_Alchemist::OnItemEquipped  (line 57, @0x0000000002b369a0, libserver.so)
// calls: CDOTA_BaseNPC::OnItemEquipped
void __fastcall CDOTA_Unit_Hero_Alchemist::OnItemEquipped(CDOTA_Unit_Hero_Alchemist *const this, CDOTA_Item *pItem)
{
  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
}


// CDOTA_Unit_Hero_Alchemist::GetSoundSet  (line 91, @0x0000000002b36a00, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetSoundSet
// strings: "modifier_alchemist_chemical_rage", "Hero_Alchemist.ChemicalRage"
const char *__fastcall CDOTA_Unit_Hero_Alchemist::GetSoundSet(CDOTA_Unit_Hero_Alchemist *const this)
{
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_alchemist_chemical_rage", 0) != 0 )
    return "Hero_Alchemist.ChemicalRage";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Unit_Hero_Alchemist::OnLoadState  (line 103, @0x0000000002b36ac0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw"
bool __fastcall CDOTA_Unit_Hero_Alchemist::OnLoadState(CDOTA_Unit_Hero_Alchemist *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "alchemist_unstable_concoction", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", 1, 0);
  return 1;
}


// CDOTA_Ability_Alchemist_AcidSpray::~CDOTA_Ability_Alchemist_AcidSpray  (line 123, @0x0000000002ba0090, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::~CDOTA_Ability_Alchemist_AcidSpray(
        CDOTA_Ability_Alchemist_AcidSpray *const this)
{
  this->_vptr_IHandleEntity = &off_448C790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Alchemist_AcidSpray::~CDOTA_Ability_Alchemist_AcidSpray  (line 123, @0x0000000002ba00b0, libserver.so)  // inlines: ~CDOTA_Ability_Alchemist_AcidSpray
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::~CDOTA_Ability_Alchemist_AcidSpray(
        CDOTA_Ability_Alchemist_AcidSpray *const this)
{
  this->_vptr_IHandleEntity = &off_448C790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Alchemist_AcidSpray::Schema_DynamicBinding  (line 125, @0x0000000002b8c9f0, libserver.so)
// globals: CDOTA_Ability_Alchemist_AcidSpray::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_AcidSpray::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_AcidSpray *const this)
{
  return CDOTA_Ability_Alchemist_AcidSpray::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 125, @0x0000000002b8ca00, libserver.so)
// globals: CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::DestructInstance  (line 125, @0x0000000002b8ca10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Alchemist_AcidSpray>
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::FreeInstance  (line 125, @0x0000000002b8ca30, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::CanAllocate  (line 125, @0x0000000002b8ca50, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 125, @0x0000000002b8ca60, libserver.so)
// globals: CDOTA_Ability_Alchemist_AcidSpray::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_AcidSpray::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::AllocateInstance  (line 125, @0x0000000002b968e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::ConstructInstance  (line 125, @0x0000000002b9c8e0, libserver.so)  // inlines: CDOTA_Ability_Alchemist_AcidSpray, Construct<CDOTA_Ability_Alchemist_AcidSpray>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_448C790;
  }
  return p;
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x0000000002ba97b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 125, @0x0000000002ba97d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal  (line 125, @0x0000000002bd02a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Alchemist_AcidSpray"
// globals: `guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass, CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo, CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo
CEntityClass *__cdecl CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass) != 0 )
  {
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pClassInfo = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_flags = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pInputs = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_nInputCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pOutputs = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_nOutputCount = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pGameClass = 0;
    CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass._vptr_CEntityClass = off_448C710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass);
    __cxa_atexit(
      CDOTA_Ability_Alchemist_AcidSpray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Alchemist_AcidSprayClass != 0 )
    return &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass;
  if ( `guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo,
      "CDOTA_Ability_Alchemist_AcidSpray",
      "alchemist_acid_spray",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo);
  }
  CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pClassInfo = &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo;
  CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pBaseClassInfo = CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Alchemist_AcidSprayClass = &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass;
  CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClassInfo.m_pClass = &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass;
  CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Alchemist_AcidSprayClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Alchemist_AcidSpray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_AcidSprayClass;
}


// CDOTA_Ability_Alchemist_AcidSpray::YouForgotToImplementOrDeclareServerClass  (line 144, @0x0000000002b33880, libserver.so)
int __fastcall CDOTA_Ability_Alchemist_AcidSpray::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Alchemist_AcidSpray *const this)
{
  return 0;
}


// CDOTA_Ability_Alchemist_AcidSpray::GetServerClass  (line 144, @0x0000000002b4bd20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Alchemist_AcidSpray::GetServerClass(
        CDOTA_Ability_Alchemist_AcidSpray *const this)
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


// CDOTA_Ability_Alchemist_AcidSpray::OnSpellStart  (line 153, @0x0000000002b704e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTABaseAbility::GetCursorPosition, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, Thinker_Create (16 total)
// strings: "modifier_alchemist_acid_spray_thinker", "particles/units/heroes/hero_alchemist/alchemist_acid_spray_cast.vpcf", "attach_attack1", "Hero_Alchemist.PreAttack"
void __fastcall CDOTA_Ability_Alchemist_AcidSpray::OnSpellStart(CDOTA_Ability_Alchemist_AcidSpray *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v7; // r15
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v16; // 0:kr14_12.12

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_alchemist_acid_spray_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_alchemist/alchemist_acid_spray_cast.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Caster, 0, v7, 5, "attach_attack1", *AbsOrigin, 1);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Caster, 1, *&CursorPosition.x, CursorPosition.z);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, Caster);
  LODWORD(Caster) = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v16 = CDOTABaseAbility::GetCursorPosition(this);
  v11 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v11, this, "modifier_alchemist_acid_spray_thinker", &kv, v16, Caster, 0, 1, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Alchemist.PreAttack", v12);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Alchemist_AcidSpray::GetAbilityDamageToTargetOverInterval  (line 175, @0x0000000002b76760, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Alchemist_AcidSpray::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Alchemist_AcidSpray *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_Alchemist_AcidSpray *v6; // rbx
  float fIntervala; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage", -1, 1);
    return ((v6 * fIntervala) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::~CDOTA_Modifier_Alchemist_AcidSpray_Thinker  (line 190, @0x0000000002b9c090, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::~CDOTA_Modifier_Alchemist_AcidSpray_Thinker(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_448D250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::~CDOTA_Modifier_Alchemist_AcidSpray_Thinker  (line 190, @0x0000000002b9c0b0, libserver.so)  // inlines: ~CDOTA_Modifier_Alchemist_AcidSpray_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::~CDOTA_Modifier_Alchemist_AcidSpray_Thinker(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_448D250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::IsHidden  (line 195, @0x0000000002b8ca70, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::IsHidden(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::IsAura  (line 197, @0x0000000002b8ca80, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::IsAura(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetModifierAura  (line 198, @0x0000000002b8ca90, libserver.so)
// strings: "modifier_alchemist_acid_spray"
const char *__fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetModifierAura(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return "modifier_alchemist_acid_spray";
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchTeam  (line 200, @0x0000000002b8caa0, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchType  (line 201, @0x0000000002b8cab0, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return 3;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchFlags  (line 202, @0x0000000002b8cac0, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return 16;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraRadius  (line 203, @0x0000000002b8cad0, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::GetAuraRadius(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnCreated  (line 222, @0x0000000002b80080, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CBaseEntity::EmitSound
// strings: "tick_rate", "particles/units/heroes/hero_alchemist/alchemist_acid_spray.vpcf", "Hero_Alchemist.AcidSpray"
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnCreated(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v4; // xmm0
  float v5; // r12d
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r13d
  const Vector *v13; // r12
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  double v17; // [rsp+0h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_rate", -1, 0);
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_3;
LABEL_7:
    this->damage = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_4;
LABEL_8:
    this->radius = 0;
    goto LABEL_5;
  }
  v5 = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_7;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_8;
LABEL_4:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "radius", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, v5, v8);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_alchemist/alchemist_acid_spray.vpcf",
                       2,
                       0,
                       0,
                       0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  m_nFXIndex = this->m_nFXIndex;
  v13 = AbsOrigin;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, m_nFXIndex, 0, *&v13->x, v13->z);
  HIDWORD(v17) = 1065353216;
  LODWORD(v13) = this->m_nFXIndex;
  *&v17 = this->radius;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v13, 1, v17, 1.0);
  v16 = CDOTA_Buff::GetParent(this);
  CBaseEntity::EmitSound(v16, "Hero_Alchemist.AcidSpray", 0.0, 0);
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnDestroy  (line 243, @0x0000000002b374c0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::StopSound, UTIL_Remove
// strings: "Hero_Alchemist.AcidSpray"
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnDestroy(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Alchemist.AcidSpray");
  v5 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v5);
}


// CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnIntervalThink  (line 254, @0x0000000002b61a60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_Buff::Destroy, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Hero_Alchemist.AcidSpray.Damage"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray_Thinker::OnIntervalThink(
        CDOTA_Modifier_Alchemist_AcidSpray_Thinker *const this)
{
  __m128i v2; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+20h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    hUnits.m_Size = 0;
    *v2.m128i_i32 = this->radius;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    Parent = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hUnits, 2, 3, 16, 0, 0);
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
                if ( v13->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && !m_pInstance->m_bIsWaitingToSpawn.m_Value
                  && (m_pInstance->m_nUnitState64.m_Value & 0x100) == 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 405))(v13->m_pInstance) == 0 )
                {
                  break;
                }
              }
            }
          }
          if ( hUnits.m_Size <= ++v8 )
            goto LABEL_15;
        }
        flDamage = this->damage;
        Ability = CDOTA_Buff::GetAbility(this);
        v16 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v16, m_pInstance, Ability, flDamage, 1, 8);
        v17 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v17, "Hero_Alchemist.AcidSpray.Damage", 0.0, 0, 0);
        ++v8;
      }
      while ( hUnits.m_Size > v8 );
    }
LABEL_15:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
      if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    }
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Alchemist_AcidSpray::~CDOTA_Modifier_Alchemist_AcidSpray  (line 281, @0x0000000002b9c040, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray::~CDOTA_Modifier_Alchemist_AcidSpray(
        CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  this->_vptr_CDOTA_Buff = &off_448D570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_AcidSpray::~CDOTA_Modifier_Alchemist_AcidSpray  (line 281, @0x0000000002b9c060, libserver.so)  // inlines: ~CDOTA_Modifier_Alchemist_AcidSpray
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray::~CDOTA_Modifier_Alchemist_AcidSpray(
        CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  this->_vptr_CDOTA_Buff = &off_448D570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_AcidSpray::IsDebuff  (line 286, @0x0000000002b8cae0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_AcidSpray::IsDebuff(CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_AcidSpray::IsPurgable  (line 287, @0x0000000002b8caf0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_AcidSpray::IsPurgable(CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_AcidSpray::GetEffectName  (line 295, @0x0000000002b8cb00, libserver.so)
// strings: "particles/units/heroes/hero_alchemist/alchemist_acid_spray_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Alchemist_AcidSpray::GetEffectName(
        CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  return "particles/units/heroes/hero_alchemist/alchemist_acid_spray_debuff.vpcf";
}


// CDOTA_Modifier_Alchemist_AcidSpray::OnCreated  (line 309, @0x0000000002b6da10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_alchemist"
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray::OnCreated(
        CDOTA_Modifier_Alchemist_AcidSpray *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_alchemist", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      this->armor_reduction += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  }
}


// CDOTA_Modifier_Alchemist_AcidSpray::OnRefresh  (line 325, @0x0000000002b6dab0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_alchemist"
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray::OnRefresh(
        CDOTA_Modifier_Alchemist_AcidSpray *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_alchemist", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      this->armor_reduction += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  }
}


// CDOTA_Modifier_Alchemist_AcidSpray::DeclareFunctions  (line 340, @0x0000000002b33890, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Alchemist_AcidSpray::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Alchemist_AcidSpray::DeclareFunctions(CDOTA_Modifier_Alchemist_AcidSpray *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Alchemist_AcidSpray::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Alchemist_AcidSpray::GetModifierPhysicalArmorBonus  (line 347, @0x0000000002b338b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_AcidSpray::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Alchemist_AcidSpray *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->armor_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::~CDOTA_Ability_Alchemist_UnstableConcoction  (line 356, @0x0000000002ba00e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::~CDOTA_Ability_Alchemist_UnstableConcoction(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  this->_vptr_IHandleEntity = &off_448D8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::~CDOTA_Ability_Alchemist_UnstableConcoction  (line 356, @0x0000000002ba0100, libserver.so)  // inlines: ~CDOTA_Ability_Alchemist_UnstableConcoction
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::~CDOTA_Ability_Alchemist_UnstableConcoction(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  this->_vptr_IHandleEntity = &off_448D8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::Schema_DynamicBinding  (line 358, @0x0000000002b8cb10, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoction::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoction::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 358, @0x0000000002b8cb20, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::DestructInstance  (line 358, @0x0000000002b8cb30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Alchemist_UnstableConcoction>
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::FreeInstance  (line 358, @0x0000000002b8cb50, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::CanAllocate  (line 358, @0x0000000002b8cb70, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 358, @0x0000000002b8cb80, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoction::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoction::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::AllocateInstance  (line 358, @0x0000000002b96920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::ConstructInstance  (line 358, @0x0000000002b9c910, libserver.so)  // inlines: CDOTA_Ability_Alchemist_UnstableConcoction, Construct<CDOTA_Ability_Alchemist_UnstableConcoction>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_448D8D0;
  }
  return p;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 358, @0x0000000002ba9800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 358, @0x0000000002ba9820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal  (line 358, @0x0000000002bc4550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "alchemist_unstable_concoction", "CDOTA_Ability_Alchemist_UnstableConcoction"
// globals: `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass, CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass, __dso_handle, CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo, CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass);
    CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass._vptr_CEntityClass = off_448D850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass);
    __cxa_atexit(
      CDOTA_Ability_Alchemist_UnstableConcoction::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionClass != 0 )
    return &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass;
  if ( `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo,
      "CDOTA_Ability_Alchemist_UnstableConcoction",
      "alchemist_unstable_concoction",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo);
  }
  CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass.m_pClassInfo = &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo;
  CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass.m_pBaseClassInfo = CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionClass = &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass;
  CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClassInfo.m_pClass = &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass;
  CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Alchemist_UnstableConcoction::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionClass;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::GetAssociatedSecondaryAbilities  (line 365, @0x0000000002b8cb90, libserver.so)
// strings: "alchemist_unstable_concoction_throw"
const char *__fastcall CDOTA_Ability_Alchemist_UnstableConcoction::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  return "alchemist_unstable_concoction_throw";
}


// CDOTA_Ability_Alchemist_UnstableConcoction::OnUpgrade  (line 376, @0x0000000002b37cb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "alchemist_unstable_concoction_throw"
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::OnUpgrade(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "alchemist_unstable_concoction_throw", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::OnSpellStart  (line 391, @0x0000000002b37fe0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", "alchemist_unstable_concoction", "Hero_Alchemist.UnstableConcoction.Fuse"
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::OnSpellStart(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_alchemist_unstable_concoction");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_alchemist_unstable_concoction", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v4, "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", 0, 1);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Alchemist.UnstableConcoction.Fuse", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Alchemist_UnstableConcoction::GetAbilityDamageToTargetOverInterval  (line 405, @0x0000000002b69060, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "max_damage"
__int64 __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_damage", -1, 1);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Alchemist_UnstableConcoction::GetStunDuration  (line 415, @0x0000000002b75290, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Alchemist_UnstableConcoction::GetStunDuration(
        CDOTA_Ability_Alchemist_UnstableConcoction *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_stun", -1, 1);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::~CDOTA_Ability_Alchemist_UnstableConcoctionThrow  (line 424, @0x0000000002ba0130, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::~CDOTA_Ability_Alchemist_UnstableConcoctionThrow(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  this->_vptr_IHandleEntity = &off_448E3D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::~CDOTA_Ability_Alchemist_UnstableConcoctionThrow  (line 424, @0x0000000002ba0150, libserver.so)  // inlines: ~CDOTA_Ability_Alchemist_UnstableConcoctionThrow
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::~CDOTA_Ability_Alchemist_UnstableConcoctionThrow(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  this->_vptr_IHandleEntity = &off_448E3D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::Schema_DynamicBinding  (line 426, @0x0000000002b8cba0, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoctionThrow::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 426, @0x0000000002b8cbb0, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::DestructInstance  (line 426, @0x0000000002b8cbc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Alchemist_UnstableConcoctionThrow>
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::FreeInstance  (line 426, @0x0000000002b8cbe0, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::CanAllocate  (line 426, @0x0000000002b8cc00, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 426, @0x0000000002b8cc10, libserver.so)
// globals: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_UnstableConcoctionThrow::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::AllocateInstance  (line 426, @0x0000000002b96960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::ConstructInstance  (line 426, @0x0000000002b9c940, libserver.so)  // inlines: CDOTA_Ability_Alchemist_UnstableConcoctionThrow, Construct<CDOTA_Ability_Alchemist_UnstableConcoctionThrow>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_448E3D0;
  }
  return p;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000002ba9850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000002ba9870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal  (line 426, @0x0000000002bd23c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "alchemist_unstable_concoction_throw", "CDOTA_Ability_Alchemist_UnstableConcoctionThrow"
// globals: `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo
CEntityClass *__cdecl CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass) != 0 )
  {
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pClassInfo = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_flags = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pInputs = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_nInputCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pOutputs = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_nOutputCount = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pGameClass = 0;
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass._vptr_CEntityClass = off_448E350;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass);
    __cxa_atexit(
      CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass != 0 )
    return &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass;
  if ( `guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo,
      "CDOTA_Ability_Alchemist_UnstableConcoctionThrow",
      "alchemist_unstable_concoction_throw",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo);
  }
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pClassInfo = &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo;
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pBaseClassInfo = CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass = &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass;
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClassInfo.m_pClass = &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass;
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_UnstableConcoctionThrowClass;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::ProcsMagicStick  (line 446, @0x0000000002b8cc20, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::ProcsMagicStick(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return 0;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetCastAnimation  (line 451, @0x0000000002b8cc30, libserver.so)
Activity __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetCastAnimation(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return 1579;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::IsHiddenWhenStolen  (line 453, @0x0000000002b8cc40, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::IsHiddenWhenStolen(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetAssociatedPrimaryAbilities  (line 454, @0x0000000002b8cc50, libserver.so)
// strings: "alchemist_unstable_concoction"
const char *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return "alchemist_unstable_concoction";
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::YouForgotToImplementOrDeclareServerClass  (line 466, @0x0000000002b338d0, libserver.so)
int __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  return 0;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetServerClass  (line 466, @0x0000000002b4bba0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::GetServerClass(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
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


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnUpgrade  (line 475, @0x0000000002b37d00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "alchemist_unstable_concoction"
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnUpgrade(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "alchemist_unstable_concoction", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CopyAbilityState  (line 488, @0x0000000002b338e0, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::CopyAbilityState(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this,
        CDOTABaseAbility *pAbilityCopy)
{
  *&pAbilityCopy[1]._vptr_IHandleEntity = this->m_fCookTime;
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnUnStolen  (line 496, @0x0000000002b87d90, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun
// strings: "modifier_alchemist_unstable_concoction"
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnUnStolen(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v4; // r14d
  CDOTA_BaseNPC *v5; // rax
  float v6; // [rsp+Ch] [rbp-24h]

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_alchemist_unstable_concoction", 0);
  if ( ModifierByName != 0 )
  {
    if ( g_pGameRules != 0 )
      v4 = COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]));
    else
      v4 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    v6 = (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    this->m_fCookTime = v4 - (v6 - (*(ModifierByName->_vptr_CDOTA_Buff + 31))(ModifierByName));
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(this, v5, &vec3_origin);
  }
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnSpellStart  (line 512, @0x0000000002b78a50, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DOTAGameRules, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<float>, GetSerialNumber, InState, IsInvulnerable, NormalizeInPlace, Set, SpeakConcept, String, ToDOTABaseNPC, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CResponseCriteriaSet::CResponseCriteriaSet (25 total)
// strings: "modifier_alchemist_unstable_concoction", "brew_time", "cook_time", "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_projectile.vpcf", "Hero_Alchemist.UnstableConcoction.Fuse", "Hero_Alchemist.UnstableConcoction.Throw" (9 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnSpellStart(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v4; // r13d
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v6; // r12
  float v7; // xmm1_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rax
  int v15; // edx
  __int16 v16; // cx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *v19; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  const Vector *AbsOrigin; // rax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v30; // rax
  int v31; // eax
  CDOTA_BaseNPC *v32; // rax
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  float fLength; // [rsp+18h] [rbp-158h]
  float brew_time; // [rsp+1Ch] [rbp-154h]
  __int64 vPos; // [rsp+20h] [rbp-150h]
  Vector vDirection; // [rsp+30h] [rbp-140h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-130h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-B0h] BYREF
  _BYTE kv_0[24]; // [rsp+E0h] [rbp-90h] OVERLAPPED BYREF
  int LevelSpecialValue; // [rsp+F8h] [rbp-78h]
  int v46; // [rsp+FCh] [rbp-74h]
  int v47; // [rsp+100h] [rbp-70h]
  vec_t x; // [rsp+104h] [rbp-6Ch]
  vec_t v49; // [rsp+108h] [rbp-68h]
  vec_t v50; // [rsp+10Ch] [rbp-64h]
  int v51; // [rsp+110h] [rbp-60h]
  char v52; // [rsp+114h] [rbp-5Ch]
  int v53; // [rsp+118h] [rbp-58h]
  int v54; // [rsp+11Ch] [rbp-54h]
  char v55; // [rsp+120h] [rbp-50h]
  char v56; // [rsp+121h] [rbp-4Fh]
  char v57; // [rsp+122h] [rbp-4Eh]
  char v58; // [rsp+123h] [rbp-4Dh]
  char v59; // [rsp+124h] [rbp-4Ch]
  char v60; // [rsp+125h] [rbp-4Bh]
  int v61; // [rsp+126h] [rbp-4Ah]
  int v62; // [rsp+12Ch] [rbp-44h]
  int v63; // [rsp+130h] [rbp-40h]
  KeyValues *p_kv; // [rsp+138h] [rbp-38h]
  unsigned __int64 v65; // [rsp+148h] [rbp-28h]

  v65 = __readfsqword(0x28u);
  if ( !this->m_bHidden.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_alchemist_unstable_concoction", 0);
    if ( ModifierByName != 0 )
    {
      if ( g_pGameRules != 0 )
        v4 = *&g_pGameRules[18].m_szQuestName[20];
      else
        v4 = 0.0;
      brew_time = (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
      this->m_fCookTime = v4 - (brew_time - (*(ModifierByName->_vptr_CDOTA_Buff + 31))(ModifierByName));
    }
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "brew_time", -1, 0);
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v6 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    {
      if ( LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
      {
        KeyValues::KeyValues(&kv, "unstable_concoction");
        KeyValues::SetFloat(&kv, "cook_time", v7);
        v52 = 0;
        v46 = -1;
        v47 = -1;
        v61 = 0;
        *&kv_0[16] = 0;
        x = vec3_origin.x;
        y = vec3_origin.y;
        LevelSpecialValue = 0;
        v49 = y;
        z = vec3_origin.z;
        v51 = 1;
        v50 = z;
        v53 = -1;
        v54 = 0;
        v55 = 0;
        v56 = 1;
        v57 = 0;
        v58 = 1;
        p_kv = 0;
        v59 = 0;
        v62 = 0;
        v63 = 0;
        v60 = 0;
        *kv_0 = "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_projectile.vpcf";
        *&kv_0[8] = this;
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
        v10 = CDOTABaseAbility::GetCaster(this);
        if ( v10 != 0 && (m_pEntity = v10->m_pEntity) != 0 )
        {
          v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v13 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v46) = v13 | v46 & 0x8000;
          v46 = (v12 << 15) | v46 & 0x7FFF;
        }
        else
        {
          v46 = -1;
        }
        v14 = v6->m_pEntity;
        if ( v14 != 0 )
        {
          v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
          v16 = 0x7FFF;
          if ( v14->m_EHandle.m_Index != -1 )
            v16 = v14->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v47) = v16 | v47 & 0x8000;
          v47 = (v15 << 15) | v47 & 0x7FFF;
        }
        else
        {
          v47 = -1;
        }
        v56 = 0;
        v51 = 4;
        p_kv = &kv;
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, kv_0);
        v17 = CDOTABaseAbility::GetCaster(this);
        CBaseEntity::StopSound(v17, "Hero_Alchemist.UnstableConcoction.Fuse");
        v18 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v18, "Hero_Alchemist.UnstableConcoction.Throw", 0.0, 0, 0);
        KeyValues::~KeyValues(&kv);
      }
    }
    else
    {
      KeyValues::KeyValues(kv_0, "unstable_concoction");
      KeyValues::SetFloat(kv_0, "cook_time", v23);
      vPos = *&CDOTABaseAbility::GetCursorPosition(this).x;
      v24 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
      v26 = *(&vPos + 1) - AbsOrigin->y;
      v27 = *&vPos - AbsOrigin->x;
      vDirection.z = 0.0;
      vDirection.y = v26;
      vDirection.x = v27;
      fLength = VectorNormalize(&vDirection);
      if ( fLength < 0.0099999998 )
      {
        v28 = CDOTABaseAbility::GetCaster(this);
        AbsAngles = CBaseEntity::GetAbsAngles(v28);
        AngleVectors(AbsAngles, &vDirection, 0, 0);
      }
      sLinearProjectileCreateInfo::sLinearProjectileCreateInfo(&info);
      info.pszEffectName = "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_projectile_linear.vpcf";
      info.bStickyFoWReveal = 0;
      info.pAbility = this;
      v30 = CDOTABaseAbility::GetCaster(this);
      info.vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v30);
      v31 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "movement_speed", -1, 0);
      info.fDistance = fLength;
      info.vVelocity.y = vDirection.y * v31;
      info.vVelocity.z = vDirection.z * v31;
      info.vVelocity.x = v31 * vDirection.x;
      v32 = CDOTABaseAbility::GetCaster(this);
      if ( v32 != 0 && (v33 = v32->m_pEntity) != 0 )
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
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      v36 = CDOTABaseAbility::GetCaster(this);
      CBaseEntity::StopSound(v36, "Hero_Alchemist.UnstableConcoction.Fuse");
      v37 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_Alchemist.UnstableConcoction.Throw", 0.0, 0, 0);
      KeyValues::~KeyValues(kv_0);
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&info);
    v19 = this->m_pEntity;
    m_pAsString = "";
    if ( v19->m_designerName.u.m_Id != 0 )
      m_pAsString = v19->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&info, "abilityname", m_pAsString, 1.0);
    CResponseCriteriaSet::AppendCriteria(
      &info,
      "cookstate",
      1.0,
      COERCE_FLOAT(COERCE_UNSIGNED_INT64(this->m_fCookTime)));
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &info, 4, 0, 0, 0, 0);
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v22, "modifier_alchemist_unstable_concoction");
    CResponseCriteriaSet::~CResponseCriteriaSet(&info);
  }
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileHit_ExtraData  (line 591, @0x0000000002b87e70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileHit_ExtraData(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CEntityInstance *m_pInstance; // rsi

  v4 = *hTarget;
  if ( (*hTarget + 2) > 1
    && (v5 = *hTarget, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && v4 == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
  {
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(this, m_pInstance, &vec3_origin);
    return 1;
  }
  else
  {
    CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(this, 0, vLocation);
    return 1;
  }
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun  (line 610, @0x0000000002b87730, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemapValClamped, Set, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::TriggerSpellAbsorb, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound (24 total)
// callers: CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnUnStolen, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileHit_ExtraData, CDOTA_Modifier_Alchemist_UnstableConcoction::OnDestroy, CDOTA_Modifier_Alchemist_UnstableConcoction::OnIntervalThink, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileThink
// strings: "midair_explosion_radius", "brew_time", "max_damage", "min_damage", "modifier_stunned", "Hero_Alchemist.UnstableConcoction.Stun" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this,
        CDOTA_BaseNPC *pTarget,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // r12d
  __m128i v7; // xmm4
  float v8; // ebx
  CDOTA_BaseNPC *Caster; // rax
  __m128 v10; // xmm1
  float m_fCookTime; // xmm2_4
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  CEntityIdentity *m_pEntity; // rbx
  __int16 v15; // cx
  int v16; // eax
  __int64 v17; // r12
  int v18; // ebx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm2_4
  float v34; // xmm0_4
  __int16 v35; // cx
  int v36; // eax
  __int64 m_Size; // rbx
  int v38; // eax
  CHandle<CBaseEntity> *v39; // rdx
  float brew_time; // [rsp+34h] [rbp-9Ch]
  float fDamage; // [rsp+38h] [rbp-98h]
  float fDamagea; // [rsp+38h] [rbp-98h]
  CHandle<CBaseEntity> src; // [rsp+40h] [rbp-90h] BYREF
  Vector vPos; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "midair_explosion_radius", -1, 0);
  vPos = *vLocation;
  if ( pTarget != 0 )
    vPos = *CBaseEntity::GetAbsOrigin(pTarget);
  *v7.m128i_i32 = LevelSpecialValue;
  hUnits.m_Size = 0;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vPos, 0, v8, &hUnits, 2, 1, 16, 0, 0);
  brew_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "brew_time", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "max_stun", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "min_stun", -1, 0);
  fDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_damage", -1, 0);
  v10.m128_f32[0] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "min_damage", -1, 0);
  m_fCookTime = this->m_fCookTime;
  if ( brew_time == 0.0 )
  {
    v12.m128_f32[0] = m_fCookTime - brew_time;
    v13 = _mm_cmple_ss(0LL, v12);
    LODWORD(fDamagea) = _mm_andnot_ps(v13, v10).m128_u32[0] | LODWORD(fDamage) & v13.m128_i32[0];
  }
  else
  {
    v33 = m_fCookTime / brew_time;
    v34 = 0.0;
    if ( v33 >= 0.0 )
      v34 = fminf(1.0, v33);
    fDamagea = v10.m128_f32[0] + (v34 * (fDamage - v10.m128_f32[0]));
  }
  if ( pTarget == 0 )
    goto LABEL_11;
  src.m_Index = -1;
  m_pEntity = pTarget->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&hUnits, &src) != -1 )
    goto LABEL_11;
  src.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v35 = 0x7FFF;
    v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(src.m_Index) = v35 | src.m_Index & 0x8000;
    src.m_Index = (v36 << 15) | src.m_Index & 0x7FFF;
  }
  m_Size = hUnits.m_Size;
  v38 = hUnits.m_Size;
  if ( hUnits.m_Size == hUnits.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&hUnits.m_Memory, 1);
    v38 = hUnits.m_Size;
  }
  v16 = v38 + 1;
  hUnits.m_Size = v16;
  v39 = &hUnits.m_Memory.m_pMemory[m_Size];
  if ( v39 != 0 )
  {
    v39->m_Index = src.m_Index;
LABEL_11:
    v16 = hUnits.m_Size;
  }
  if ( v16 > 0 )
  {
    v17 = 0;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        v19 = &hUnits.m_Memory.m_pMemory[v17];
        m_Index = hUnits.m_Memory.m_pMemory[v17].m_Index;
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
              if ( v23->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
                && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
              {
                break;
              }
            }
          }
        }
        ++v18;
        ++v17;
        if ( hUnits.m_Size <= v18 )
          goto LABEL_24;
      }
      v25 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v25, m_pInstance, this, fDamagea, 1, 8);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v26);
      v27 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_stunned", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Alchemist.UnstableConcoction.Stun", 0.0, 0, 0);
      ++v18;
      ++v17;
      KeyValues::~KeyValues(&kv);
    }
    while ( hUnits.m_Size > v18 );
  }
LABEL_24:
  if ( pTarget != 0 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v28) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_explosion.vpcf",
                     2,
                     pTarget,
                     0,
                     v28);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, v28, 0, pTarget, 5, "attach_hitloc", vPos, 1);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v31, v28);
  }
  v32 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v32, "Hero_Alchemist.UnstableConcoction.Fuse");
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
  }
}


// CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileThink  (line 677, @0x0000000002b88500, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, FindUnitsInRadius, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_alchemist_unstable_concoction", "brew_explosion", "midair_explosion_radius"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Alchemist_UnstableConcoctionThrow::OnProjectileThink(
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  float v5; // r13d
  float v6; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r13
  float flRadius; // [rsp+1Ch] [rbp-44h]
  float flRadiusa; // [rsp+1Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+20h] [rbp-40h] BYREF

  this->m_vProjectileLoc = *vLocation;
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_alchemist_unstable_concoction", 0);
  if ( ModifierByName != 0 )
  {
    v5 = g_pGameRules != 0
       ? COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]))
       : COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    flRadius = (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v6 = (*(ModifierByName->_vptr_CDOTA_Buff + 31))(ModifierByName);
    this->m_fCookTime = v5 - (flRadius - v6);
    if ( (v5 - (flRadius - v6)) > CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "brew_explosion", -1, 0) )
    {
      hUnits.m_Size = 0;
      hUnits.m_Memory.m_pMemory = 0;
      hUnits.m_Memory.m_nAllocationCount = 0;
      hUnits.m_Memory.m_nGrowSize = 0;
      flRadiusa = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "midair_explosion_radius", -1, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v7->m_iTeamNum.m_Value, &this->m_vProjectileLoc, 0, flRadiusa, &hUnits, 2, 1, 0, 1, 0);
      if ( hUnits.m_Size > 0 && hUnits.m_Memory.m_pMemory->m_Index + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hUnits.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[hUnits.m_Memory.m_pMemory->m_Index & 0x1FF];
          if ( v9 != 0 && hUnits.m_Memory.m_pMemory->m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
              && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
            {
              CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(this, m_pInstance, &vec3_origin);
            }
          }
        }
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
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::~CDOTA_Modifier_Alchemist_UnstableConcoction  (line 713, @0x0000000002b9bff0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::~CDOTA_Modifier_Alchemist_UnstableConcoction(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  this->_vptr_CDOTA_Buff = &off_448EE90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::~CDOTA_Modifier_Alchemist_UnstableConcoction  (line 713, @0x0000000002b9c010, libserver.so)  // inlines: ~CDOTA_Modifier_Alchemist_UnstableConcoction
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::~CDOTA_Modifier_Alchemist_UnstableConcoction(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  this->_vptr_CDOTA_Buff = &off_448EE90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::IsHidden  (line 718, @0x0000000002b8cc60, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::IsHidden(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::IsPurgable  (line 724, @0x0000000002b8cc70, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::IsPurgable(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::OnCreated  (line 744, @0x0000000002b80dd0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "brew_time", "brew_explosion", "particles/units/heroes/hero_alchemist/alchemist_unstableconc_bottles.vpcf", "alchem_wr", "alchem_wl"
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::OnCreated(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CGameRules *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  int m_nConcoctionFXIndex; // r13d
  const CBaseAnimating *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int v17; // r13d
  const CBaseAnimating *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  __int64 v20; // r12
  CDOTA_BaseNPC *v21; // rax
  int v22; // ebx
  const CBaseAnimating *v23; // r13
  CDOTA_ParticleManager *v24; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->brew_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "brew_time", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->brew_explosion = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "brew_explosion", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->brew_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->brew_explosion = 0.0;
LABEL_4:
  this->m_bHasStunned = 0;
  this->m_nConcoctionFXIndex = -1;
  v5 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    this->m_fStartTime = *&g_pGameRules[18].m_szQuestName[20];
    v6 = *&v5[18].m_szQuestName[20];
  }
  else
  {
    v6 = 0.0;
    this->m_fStartTime = 0.0;
  }
  this->m_fLastAlertTime = (this->brew_time - (0.15000001 * this->brew_time)) + v6;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v6);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1573, 0.1, 0.0, 9, 0, 1.0);
  v8 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nConcoctionFXIndex = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_alchemist/alchemist_unstableconc_bottles.vpcf",
                                 2,
                                 v8,
                                 0,
                                 0);
  v10 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTA_Buff::GetCaster(this);
  m_nConcoctionFXIndex = this->m_nConcoctionFXIndex;
  v14 = v12;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, m_nConcoctionFXIndex, 0, v14, 1, 0, *AbsOrigin, 1);
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = this->m_nConcoctionFXIndex;
  v18 = v16;
  v19 = GetParticleManager();
  v20 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v17, 1, v18, 5, "alchem_wr", vec3_invalid, 1);
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = this->m_nConcoctionFXIndex;
  v23 = v21;
  v24 = GetParticleManager();
  *&v26.x = v20;
  v26.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v24, v22, 2, v23, 5, "alchem_wl", v26, 1);
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::DeclareFunctions  (line 768, @0x0000000002b33900, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::DeclareFunctions(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  this->m_Functions[127].__pfn = (&stru_10 + 697);
  this->m_Functions[127].__delta = 0;
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::OnAbilityStart  (line 773, @0x0000000002b48370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveGesture
// strings: "alchemist_unstable_concoction_throw"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::OnAbilityStart(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTABaseAbility *v13; // rdx
  CDOTA_BaseNPC *Caster; // rax

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
          Parent = CDOTA_Buff::GetParent(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "alchemist_unstable_concoction_throw", 0);
          if ( params->ability.m_Index + 2 > 1 )
          {
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[params->ability.m_Index & 0x1FF];
              if ( v12 != 0 && params->ability.m_Index == v12->m_EHandle.m_Index )
              {
                v13 = v12->m_pInstance;
                if ( AbilityByName == v13 && v13 != 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::RemoveGesture(Caster, 1573);
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


// CDOTA_Modifier_Alchemist_UnstableConcoction::OnRefresh  (line 793, @0x0000000002b7dbb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "brew_time", "brew_explosion"
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::OnRefresh(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float LevelSpecialValue; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->brew_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "brew_time", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "brew_explosion", -1, 0);
      this->m_bHasStunned = 0;
      this->brew_explosion = LevelSpecialValue;
      return;
    }
  }
  else
  {
    this->brew_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->brew_explosion = 0.0;
  this->m_bHasStunned = 0;
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::OnDestroy  (line 802, @0x0000000002b87f00, libserver.so)  // inlines: DOTAGameRules, GetGameTime, InState, IsInvulnerable
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveGesture, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun
// strings: "alchemist_unstable_concoction", "alchemist_unstable_concoction_throw", "Hero_Alchemist.UnstableConcoction.Fuse"
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::OnDestroy(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  int m_nConcoctionFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow *AbilityByName; // r12
  CDOTA_BaseNPC *v10; // rax
  float v11; // r14d
  CDOTA_BaseNPC *v12; // rax
  float v13; // [rsp+Ch] [rbp-24h]

  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "alchemist_unstable_concoction_throw", 0);
    if ( AbilityByName != 0 )
    {
      v10 = CDOTA_Buff::GetCaster(this);
      if ( !v10->m_bIsWaitingToSpawn.m_Value && (v10->m_nUnitState64.m_Value & 0x100) == 0 && !this->m_bHasStunned )
      {
        this->m_bHasStunned = 1;
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        if ( g_pGameRules != 0 )
          v11 = COERCE_FLOAT(_mm_cvtsi128_si32(*&g_pGameRules[18].m_szQuestName[20]));
        v13 = (*(this->_vptr_CDOTA_Buff + 30))(this);
        AbilityByName->m_fCookTime = v11 - (v13 - (*(this->_vptr_CDOTA_Buff + 31))(this));
        v12 = CDOTA_Buff::GetParent(this);
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(AbilityByName, v12, &vec3_origin);
      }
    }
  }
  v3 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v3, "alchemist_unstable_concoction_throw", "alchemist_unstable_concoction", 0, 1);
  v4 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v4, "Hero_Alchemist.UnstableConcoction.Fuse");
  v5 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v5, 1573);
  m_nConcoctionFXIndex = this->m_nConcoctionFXIndex;
  if ( m_nConcoctionFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nConcoctionFXIndex, 0);
    this->m_nConcoctionFXIndex = -1;
  }
}


// CDOTA_Modifier_Alchemist_UnstableConcoction::OnIntervalThink  (line 831, @0x0000000002b88090, libserver.so)  // inlines: DOTAGameRules, GetClassNameAsCStr, GetClassname, GetGameTime, InState, IsInvulnerable, SpeakConcept, String, Vector
// calls: log10, floor, floorf, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun (18 total)
// strings: "abilityname", "cookstate", "alchemist_unstable_concoction_throw", "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_timer.vpcf"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Alchemist_UnstableConcoction::OnIntervalThink(
        CDOTA_Modifier_Alchemist_UnstableConcoction *const this)
{
  float v1; // xmm1_4
  __m128d v3; // xmm0
  float v4; // xmm3_4
  double v5; // xmm0_8
  double v6; // r15
  float v7; // xmm0_4
  int v8; // r12d
  float m_fLastAlertTime; // xmm0_4
  CGameRules *v10; // rax
  float v11; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  float v14; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_Ability_Alchemist_UnstableConcoctionThrow *AbilityByName; // r12
  CDOTA_BaseNPC *Caster; // rax
  CGameRules *v20; // rax
  float v21; // r13d
  __m128i v22; // xmm0
  CDOTA_BaseNPC *v23; // rax
  CEntityIdentity *v24; // rax
  const char *v25; // rdx
  float v26; // xmm2_4
  CDOTA_Speech *v27; // rdi
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  double v33; // [rsp+10h] [rbp-88h]
  float v34; // [rsp+1Ch] [rbp-7Ch]
  float v35; // [rsp+1Ch] [rbp-7Ch]
  _BYTE v36[12]; // [rsp+20h] [rbp-78h] OVERLAPPED BYREF

  v1 = 0.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  v3.m128d_f64[1] = (this->brew_explosion - (v1 - this->m_fStartTime));
  v3.m128d_f64[0] = v3.m128d_f64[1] + 0.1;
  v4 = _mm_movedup_pd(v3).m128d_f64[0];
  v34 = v4;
  v33 = v4;
  v5 = log10(v4);
  v6 = floor(v5);
  v7 = floorf(v34);
  v8 = v33 - v7 < 0.5 ? 1 : 8;
  if ( v34 >= 0.5 )
  {
    v35 = v7;
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    *v36 = 0;
    LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_alchemist/alchemist_unstable_concoction_timer.vpcf",
                        7,
                        Parent,
                        0,
                        0);
    *&v36[4] = v35;
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v30, Parent, 1, *v36, v8);
    *&v36[4] = 0;
    *v36 = (v6 + 2.0);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v31, Parent, 2, COERCE_DOUBLE(*v36), 0.0);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v32, Parent);
  }
  if ( CDOTA_Buff::GetCaster(this) == 0 )
    goto LABEL_16;
  if ( CDOTA_Buff::GetAbility(this) == 0 )
    goto LABEL_16;
  m_fLastAlertTime = this->m_fLastAlertTime;
  if ( m_fLastAlertTime == -1.0 )
    goto LABEL_16;
  v10 = g_pGameRules;
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v11 >= m_fLastAlertTime )
  {
    CResponseCriteriaSet::CResponseCriteriaSet(v36);
    m_pEntity = CDOTA_Buff::GetAbility(this)->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(v36, "abilityname", m_pAsString, 1.0);
    CResponseCriteriaSet::AppendCriteria(v36, "cookstate", 1.0, v14);
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, v36, 4, 0, 0, 0, 0);
    this->m_fLastAlertTime = -1.0;
    CResponseCriteriaSet::~CResponseCriteriaSet(v36);
LABEL_16:
    v10 = g_pGameRules;
  }
  v16 = 0.0;
  if ( v10 != 0 )
    v16 = *&v10[18].m_szQuestName[20];
  if ( (v16 - this->m_fStartTime) >= this->brew_explosion )
  {
    v17 = CDOTA_Buff::GetParent(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "alchemist_unstable_concoction_throw", 0);
    if ( AbilityByName != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      if ( !Caster->m_bIsWaitingToSpawn.m_Value && (Caster->m_nUnitState64.m_Value & 0x100) == 0 && !this->m_bHasStunned )
      {
        v20 = g_pGameRules;
        this->m_bHasStunned = 1;
        v21 = 0.0;
        if ( v20 != 0 )
          v21 = *&v20[18].m_szQuestName[20];
        *v22.m128i_i64 = (*(this->_vptr_CDOTA_Buff + 30))(this);
        AbilityByName->m_fCookTime = v21
                                   - (COERCE_FLOAT(_mm_cvtsi128_si32(v22)) - (*(this->_vptr_CDOTA_Buff + 31))(this));
        v23 = CDOTA_Buff::GetParent(this);
        CDOTA_Ability_Alchemist_UnstableConcoctionThrow::DoStun(AbilityByName, v23, &vec3_origin);
        CResponseCriteriaSet::CResponseCriteriaSet(v36);
        v24 = CDOTA_Buff::GetAbility(this)->m_pEntity;
        v25 = "";
        if ( v24->m_designerName.u.m_Id != 0 )
          v25 = v24->m_designerName.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(v36, "abilityname", v25, 1.0);
        CResponseCriteriaSet::AppendCriteria(v36, "cookstate", 1.0, v26);
        v27 = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
        if ( v27 != 0 )
          CDOTA_Speech::SpeakConcept(v27, 18, v36, 4, 0, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(v36);
      }
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Ability_Alchemist_GoblinsGreed::~CDOTA_Ability_Alchemist_GoblinsGreed  (line 893, @0x0000000002ba0180, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::~CDOTA_Ability_Alchemist_GoblinsGreed(
        CDOTA_Ability_Alchemist_GoblinsGreed *const this)
{
  this->_vptr_IHandleEntity = &off_448F1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::~CDOTA_Ability_Alchemist_GoblinsGreed  (line 893, @0x0000000002ba01a0, libserver.so)  // inlines: ~CDOTA_Ability_Alchemist_GoblinsGreed
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::~CDOTA_Ability_Alchemist_GoblinsGreed(
        CDOTA_Ability_Alchemist_GoblinsGreed *const this)
{
  this->_vptr_IHandleEntity = &off_448F1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::Schema_DynamicBinding  (line 895, @0x0000000002b8cc80, libserver.so)
// globals: CDOTA_Ability_Alchemist_GoblinsGreed::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_GoblinsGreed *const this)
{
  return CDOTA_Ability_Alchemist_GoblinsGreed::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 895, @0x0000000002b8cc90, libserver.so)
// globals: CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::DestructInstance  (line 895, @0x0000000002b8cca0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Alchemist_GoblinsGreed>
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::FreeInstance  (line 895, @0x0000000002b8ccc0, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::CanAllocate  (line 895, @0x0000000002b8cce0, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 895, @0x0000000002b8ccf0, libserver.so)
// globals: CDOTA_Ability_Alchemist_GoblinsGreed::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_GoblinsGreed::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::AllocateInstance  (line 895, @0x0000000002b969a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::ConstructInstance  (line 895, @0x0000000002b9c970, libserver.so)  // inlines: CDOTA_Ability_Alchemist_GoblinsGreed, Construct<CDOTA_Ability_Alchemist_GoblinsGreed>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_448F1F0;
  }
  return p;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 895, @0x0000000002ba98a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 895, @0x0000000002ba98c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal  (line 895, @0x0000000002bc46a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "alchemist_goblins_greed", "CDOTA_Ability_Alchemist_GoblinsGreed"
// globals: `guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass, CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass, __dso_handle, CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo, CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo
CEntityClass *__cdecl CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass);
    CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass._vptr_CEntityClass = off_448F170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass);
    __cxa_atexit(
      CDOTA_Ability_Alchemist_GoblinsGreed::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Alchemist_GoblinsGreedClass != 0 )
    return &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass;
  if ( `guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo,
      "CDOTA_Ability_Alchemist_GoblinsGreed",
      "alchemist_goblins_greed",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo);
  }
  CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass.m_pClassInfo = &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo;
  CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass.m_pBaseClassInfo = CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Alchemist_GoblinsGreedClass = &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass;
  CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClassInfo.m_pClass = &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass;
  CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Alchemist_GoblinsGreedClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Alchemist_GoblinsGreed::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_GoblinsGreedClass;
}


// CDOTA_Ability_Alchemist_GoblinsGreed::GetIntrinsicModifierName  (line 898, @0x0000000002b8cd00, libserver.so)
// strings: "modifier_alchemist_goblins_greed"
const char *__fastcall CDOTA_Ability_Alchemist_GoblinsGreed::GetIntrinsicModifierName(
        CDOTA_Ability_Alchemist_GoblinsGreed *const this)
{
  return "modifier_alchemist_goblins_greed";
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::~CDOTA_Modifier_Alchemist_GoblinsGreed  (line 907, @0x0000000002ba9270, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::~CDOTA_Modifier_Alchemist_GoblinsGreed(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DeathList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_448FCB0;
  this->m_DeathList.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_DeathList.m_Memory,
        CUtlMemory<float,int>::Purge(&this->m_DeathList.m_Memory),
        (this->m_DeathList.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<float,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::~CDOTA_Modifier_Alchemist_GoblinsGreed  (line 907, @0x0000000002ba92e0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Alchemist_GoblinsGreed, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<float, int>::Purge
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::~CDOTA_Modifier_Alchemist_GoblinsGreed(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  bool v2; // zf
  CUtlVectorBase<float,CUtlMemory<float,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DeathList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_448FCB0;
  this->m_DeathList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_DeathList.m_Memory;
    CUtlMemory<float,int>::Purge(&this->m_DeathList.m_Memory);
    if ( (this->m_DeathList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<float,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::IsHidden  (line 912, @0x0000000002b8cd10, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::IsHidden(CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::IsPurgable  (line 913, @0x0000000002b8cd20, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::IsPurgable(CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::OnCreated  (line 937, @0x0000000002b7f070, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "bonus_bonus_gold", "bonus_gold_cap"
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::OnCreated(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_gold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_gold", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->bonus_bonus_gold = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->bonus_gold_cap = 0;
      goto LABEL_6;
    }
  }
  this->bonus_gold = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->bonus_bonus_gold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_bonus_gold", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_gold_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_gold_cap", -1, 0);
LABEL_6:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v7);
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::OnRefresh  (line 951, @0x0000000002b7e8e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_bonus_gold", "bonus_gold_cap"
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::OnRefresh(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_gold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_gold", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_bonus_gold = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_gold = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_bonus_gold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_bonus_gold", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_gold_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_gold_cap", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_gold_cap = 0;
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::OnIntervalThink  (line 961, @0x0000000002b41fe0, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::OnIntervalThink(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  int m_Size; // eax
  int v3; // ebx
  float v4; // xmm0_4
  float *m_pMemory; // rsi
  __int64 v6; // rcx
  int v7; // eax
  __int64 bonus_gold_cap; // rsi
  int v9; // eax

  m_Size = this->m_DeathList.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = 0.0;
        if ( g_pGameRules != 0 )
          v4 = *&g_pGameRules[18].m_szQuestName[20];
        m_pMemory = this->m_DeathList.m_Memory.m_pMemory;
        v6 = v3;
        if ( (v4 - m_pMemory[v6]) > this->duration )
          break;
        m_Size = this->m_DeathList.m_Size;
        if ( ++v3 >= m_Size )
          goto LABEL_10;
      }
      v7 = m_Size - v3 - 1;
      if ( v7 > 0 )
        memmove(&m_pMemory[v6], &m_pMemory[v6 + 1], 4LL * v7);
      m_Size = this->m_DeathList.m_Size - 1;
      this->m_DeathList.m_Size = m_Size;
    }
    while ( v3 < m_Size );
  }
LABEL_10:
  bonus_gold_cap = this->bonus_gold_cap;
  v9 = this->bonus_gold + this->bonus_bonus_gold * m_Size;
  if ( v9 <= bonus_gold_cap )
    bonus_gold_cap = v9;
  (*(this->_vptr_CDOTA_Buff + 28))(this, bonus_gold_cap);
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::DeclareFunctions  (line 983, @0x0000000002b33920, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Alchemist_GoblinsGreed::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::DeclareFunctions(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Alchemist_GoblinsGreed::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Alchemist_GoblinsGreed::OnDeath  (line 990, @0x0000000002b89170, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<float>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToBasePlayer, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, Vector, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Buff::GetParent, CDOTA_PlayerResource::ModifyGold, CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CDOTAPlayer::GetPlayerByPlayerID, CRecipientFilter::AddRecipient, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (20 total)
// strings: "particles/units/heroes/hero_alchemist/alchemist_lasthit_coins.vpcf", "particles/units/heroes/hero_alchemist/alchemist_lasthit_msg_gold.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_GoblinsGreed::OnDeath(
        CDOTA_Modifier_Alchemist_GoblinsGreed *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *Parent; // rax
  int bonus_gold_cap; // r14d
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v19; // rax
  CTeam *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTAPlayer *PlayerByPlayerID; // rax
  const CEntityInstance *v23; // r15
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  double v29; // xmm0_8
  CDOTA_ParticleManager *v30; // rax
  int v31; // r14d
  const Vector *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  int v38; // xmm0_4
  __int64 m_Size; // rbx
  int v40; // eax
  float *v41; // rax
  int nFXIndex; // [rsp+Ch] [rbp-194h]
  float nFXIndexa; // [rsp+Ch] [rbp-194h]
  int nFXIndexb; // [rsp+Ch] [rbp-194h]
  double v45; // [rsp+10h] [rbp-190h]
  double v46; // [rsp+20h] [rbp-180h]
  float v47; // [rsp+28h] [rbp-178h]
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v49; // [rsp+168h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v49 = __readfsqword(0x28u);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || !v11->m_bIsDOTANPC )
  {
    v11 = 0;
  }
  if ( m_pInstance != 0
    && CDOTA_Buff::GetParent(this) == v11
    && HIBYTE(m_pInstance[7].m_CScriptComponent) != v11->m_iTeamNum.m_Value
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) == 0
    && !v11->m_bIsIllusion.m_Value )
  {
    result.m_szVal = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( (result.m_szVal[2787] & 0x10) != 0 )
      goto LABEL_14;
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 && (*(m_pInstance->_vptr_IHandleEntity + 438))(m_pInstance) == 0 )
    {
      bonus_gold_cap = this->bonus_gold_cap;
      if ( this->bonus_gold + this->m_DeathList.m_Size * this->bonus_bonus_gold <= bonus_gold_cap )
        bonus_gold_cap = this->bonus_gold + this->m_DeathList.m_Size * this->bonus_bonus_gold;
      v15 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_PlayerResource::ModifyGold(g_pDOTAPlayerResource, v15->m_nControllingPlayerID, bonus_gold_cap, 0, 0) > 0 )
      {
        CReliableBroadcastRecipientFilter::CReliableBroadcastRecipientFilter(&filter);
        v16 = CDOTA_Buff::GetParent(this);
        OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v16);
        GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
        CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
        v19 = CDOTA_Buff::GetParent(this);
        v20 = GetGlobalTeam(v19->m_iTeamNum.m_Value);
        CRecipientFilter::RemoveRecipientsByTeam(&filter, v20);
        v21 = CDOTA_Buff::GetParent(this);
        PlayerByPlayerID = CDOTAPlayer::GetPlayerByPlayerID(v21->m_nControllingPlayerID);
        v23 = PlayerByPlayerID;
        if ( PlayerByPlayerID != 0 && (*(PlayerByPlayerID->_vptr_IHandleEntity + 140))(PlayerByPlayerID) != 0 )
        {
          CRecipientFilter::AddRecipient(&filter, v23);
          Caster = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_alchemist/alchemist_lasthit_coins.vpcf",
                       8,
                       0,
                       &filter,
                       Caster);
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          v27 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v27, nFXIndex, 1, *&AbsOrigin->x, AbsOrigin->z);
          v28 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v28, nFXIndex);
          nFXIndexa = bonus_gold_cap;
          v29 = log10(bonus_gold_cap);
          LODWORD(AbsOrigin) = (floor(v29) + 1.0);
          v30 = GetParticleManager();
          v31 = CDOTA_ParticleManager::CreateParticle(
                  v30,
                  "particles/units/heroes/hero_alchemist/alchemist_lasthit_msg_gold.vpcf",
                  2,
                  0,
                  &filter,
                  0);
          v32 = CBaseEntity::GetAbsOrigin(m_pInstance);
          *(&v46 + 1) = v32->y + 0.0;
          v47 = v32->z + 96.0;
          *&v46 = v32->x + 0.0;
          v33 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v33, v31, 0, v46, v47);
          LODWORD(v45) = 0;
          *(&v45 + 1) = nFXIndexa;
          v34 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v34, v31, 1, v45, -1.0);
          LODWORD(v45) = 1065353216;
          *(&v45 + 1) = (AbsOrigin + 1);
          v35 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v35, v31, 2, v45, 0.0);
          v36 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v36, v31, 3, 1.351080114690458e16, 33.0);
          v37 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v37, v31);
        }
        filter._vptr_IRecipientFilter = &off_3FB63F0;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
      v38 = 0;
      if ( g_pGameRules != 0 )
        v38 = *&g_pGameRules[18].m_szQuestName[20];
      m_Size = this->m_DeathList.m_Size;
      v40 = this->m_DeathList.m_Size;
      if ( m_Size == this->m_DeathList.m_Memory.m_nAllocationCount )
      {
        nFXIndexb = v38;
        CUtlMemory<float,int>::Grow(&this->m_DeathList.m_Memory, 1);
        v40 = this->m_DeathList.m_Size;
        v38 = nFXIndexb;
      }
      this->m_DeathList.m_Size = v40 + 1;
      v41 = &this->m_DeathList.m_Memory.m_pMemory[m_Size];
      if ( v41 != 0 )
        *v41 = v38;
    }
  }
  *&result.m_eType = 1;
LABEL_14:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Alchemist_ChemicalRage::~CDOTA_Ability_Alchemist_ChemicalRage  (line 1047, @0x0000000002ba01d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::~CDOTA_Ability_Alchemist_ChemicalRage(
        CDOTA_Ability_Alchemist_ChemicalRage *const this)
{
  this->_vptr_IHandleEntity = &off_4490010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Alchemist_ChemicalRage::~CDOTA_Ability_Alchemist_ChemicalRage  (line 1047, @0x0000000002ba01f0, libserver.so)  // inlines: ~CDOTA_Ability_Alchemist_ChemicalRage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::~CDOTA_Ability_Alchemist_ChemicalRage(
        CDOTA_Ability_Alchemist_ChemicalRage *const this)
{
  this->_vptr_IHandleEntity = &off_4490010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Alchemist_ChemicalRage::Schema_DynamicBinding  (line 1049, @0x0000000002b8cd30, libserver.so)
// globals: CDOTA_Ability_Alchemist_ChemicalRage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_ChemicalRage::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_ChemicalRage *const this)
{
  return CDOTA_Ability_Alchemist_ChemicalRage::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1049, @0x0000000002b8cd40, libserver.so)
// globals: CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::DestructInstance  (line 1049, @0x0000000002b8cd50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Alchemist_ChemicalRage>
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::FreeInstance  (line 1049, @0x0000000002b8cd70, libserver.so)
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::CanAllocate  (line 1049, @0x0000000002b8cd90, libserver.so)
bool __fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1049, @0x0000000002b8cda0, libserver.so)
// globals: CDOTA_Ability_Alchemist_ChemicalRage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Alchemist_ChemicalRage::s_pSchemaBinding;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::AllocateInstance  (line 1049, @0x0000000002b969e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::ConstructInstance  (line 1049, @0x0000000002b9c9a0, libserver.so)  // inlines: CDOTA_Ability_Alchemist_ChemicalRage, Construct<CDOTA_Ability_Alchemist_ChemicalRage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4490010;
  }
  return p;
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1049, @0x0000000002ba98f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1049, @0x0000000002ba9910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal  (line 1049, @0x0000000002bc47f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "alchemist_chemical_rage", "CDOTA_Ability_Alchemist_ChemicalRage"
// globals: `guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass, CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass, __dso_handle, CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo, CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass);
    CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass._vptr_CEntityClass = off_448FF90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass);
    __cxa_atexit(
      CDOTA_Ability_Alchemist_ChemicalRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Alchemist_ChemicalRageClass != 0 )
    return &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass;
  if ( `guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo,
      "CDOTA_Ability_Alchemist_ChemicalRage",
      "alchemist_chemical_rage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo);
  }
  CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass.m_pClassInfo = &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo;
  CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass.m_pBaseClassInfo = CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Alchemist_ChemicalRageClass = &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass;
  CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClassInfo.m_pClass = &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass;
  CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Alchemist_ChemicalRageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Alchemist_ChemicalRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Alchemist_ChemicalRageClass;
}


// CDOTA_Ability_Alchemist_ChemicalRage::OnSpellStart  (line 1059, @0x0000000002b71c10, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail (13 total)
// strings: "transformation_time", "modifier_alchemist_chemical_rage_transform", "Hero_Alchemist.ChemicalRage.Cast"
void __fastcall CDOTA_Ability_Alchemist_ChemicalRage::OnSpellStart(CDOTA_Ability_Alchemist_ChemicalRage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  float v3; // xmm1_4
  CDOTA_BaseNPC *v4; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm3_4
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "transformation_time", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1536);
  KeyValues::KeyValues(&kv, "modifier_alchemist_chemical_rage_transform");
  KeyValues::SetFloat(&kv, "duration", v3);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, v4, this, "modifier_alchemist_chemical_rage_transform", &kv, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Alchemist.ChemicalRage.Cast", 0.0, 0, 0);
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


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::~CDOTA_Modifier_Alchemist_ChemicalRageTransform  (line 1081, @0x0000000002b9bfa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::~CDOTA_Modifier_Alchemist_ChemicalRageTransform(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4490AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::~CDOTA_Modifier_Alchemist_ChemicalRageTransform  (line 1081, @0x0000000002b9bfc0, libserver.so)  // inlines: ~CDOTA_Modifier_Alchemist_ChemicalRageTransform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::~CDOTA_Modifier_Alchemist_ChemicalRageTransform(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  this->_vptr_CDOTA_Buff = &off_4490AD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::IsHidden  (line 1087, @0x0000000002b8cdb0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::IsHidden(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::IsPurgable  (line 1088, @0x0000000002b8cdc0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::IsPurgable(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::OnCreated  (line 1102, @0x0000000002b38ca0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_Buff::GetParent, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::OnCreated(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  CDOTA_BaseNPC *Caster; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-20h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  hTarget.m_Index = -1;
  if ( Parent != 0 )
  {
    m_pEntity = Parent->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1572, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::OnDestroy  (line 1115, @0x0000000002b7f1b0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_alchemist_chemical_rage"
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::OnDestroy(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  CDOTABaseAbility *Ability; // rax
  float v3; // xmm1_4
  CDOTABaseAbility *v4; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_alchemist_chemical_rage");
  KeyValues::SetFloat(&kv, "duration", v3);
  v4 = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Caster, v4, "modifier_alchemist_chemical_rage", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::DeclareFunctions  (line 1129, @0x0000000002b33940, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Alchemist_ChemicalRageTransform::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::DeclareFunctions(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Alchemist_ChemicalRageTransform::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::GetActivityTranslationModifiers  (line 1136, @0x0000000002b33960, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::GetActivityTranslationModifiers(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "chemical_rage";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRageTransform::CheckState  (line 1143, @0x0000000002b33980, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRageTransform::CheckState(
        CDOTA_Modifier_Alchemist_ChemicalRageTransform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::~CDOTA_Modifier_Alchemist_ChemicalRage  (line 1154, @0x0000000002b9bf50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::~CDOTA_Modifier_Alchemist_ChemicalRage(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4490DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_ChemicalRage::~CDOTA_Modifier_Alchemist_ChemicalRage  (line 1154, @0x0000000002b9bf70, libserver.so)  // inlines: ~CDOTA_Modifier_Alchemist_ChemicalRage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::~CDOTA_Modifier_Alchemist_ChemicalRage(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4490DF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_ChemicalRage::IsPurgable  (line 1162, @0x0000000002b8cdd0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::IsPurgable(CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return 0;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::AllowIllusionDuplicate  (line 1163, @0x0000000002b8cde0, libserver.so)
bool __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::AllowIllusionDuplicate(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return 1;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetEffectName  (line 1173, @0x0000000002b8cdf0, libserver.so)
// strings: "particles/units/heroes/hero_alchemist/alchemist_chemical_rage.vpcf"
const char *__fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetEffectName(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return "particles/units/heroes/hero_alchemist/alchemist_chemical_rage.vpcf";
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetStatusEffectName  (line 1174, @0x0000000002b8ce00, libserver.so)
// strings: "particles/status_fx/status_effect_chemical_rage.vpcf"
const char *__fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetStatusEffectName(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return "particles/status_fx/status_effect_chemical_rage.vpcf";
}


// CDOTA_Modifier_Alchemist_ChemicalRage::StatusEffectPriority  (line 1175, @0x0000000002b8ce10, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::StatusEffectPriority(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return 1000;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetHeroEffectName  (line 1176, @0x0000000002b8ce20, libserver.so)
// strings: "particles/units/heroes/hero_alchemist/alchemist_chemical_rage_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetHeroEffectName(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return "particles/units/heroes/hero_alchemist/alchemist_chemical_rage_hero_effect.vpcf";
}


// CDOTA_Modifier_Alchemist_ChemicalRage::HeroEffectPriority  (line 1177, @0x0000000002b8ce30, libserver.so)
int __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::HeroEffectPriority(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  return 100;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::OnCreated  (line 1194, @0x0000000002b808b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "base_attack_time", "bonus_health", "bonus_health_regen", "bonus_mana_regen", "bonus_movespeed", "particles/units/heroes/hero_alchemist/alchemist_chemichalrage_effect.vpcf" (7 total)
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::OnCreated(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v12; // rax
  int m_nFXAlchemistCRIndex; // r13d
  const CBaseAnimating *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  int v17; // ebx
  const CBaseAnimating *v18; // r12
  CDOTA_ParticleManager *v19; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "base_attack_time", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->base_attack_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->bonus_health = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_health_regen", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->bonus_mana_regen = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->bonus_movespeed = 0;
    goto LABEL_7;
  }
LABEL_10:
  this->bonus_health_regen = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "bonus_mana_regen", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_movespeed", -1, 0);
LABEL_7:
  this->m_nFXAlchemistCRIndex = -1;
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXAlchemistCRIndex = CDOTA_ParticleManager::CreateParticle(
                                  ParticleManager,
                                  "particles/units/heroes/hero_alchemist/alchemist_chemichalrage_effect.vpcf",
                                  2,
                                  Caster,
                                  0,
                                  0);
  v10 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = CDOTA_Buff::GetCaster(this);
  m_nFXAlchemistCRIndex = this->m_nFXAlchemistCRIndex;
  v14 = v12;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, m_nFXAlchemistCRIndex, 0, v14, 1, 0, *AbsOrigin, 1);
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = this->m_nFXAlchemistCRIndex;
  v18 = v16;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v17, 1, v18, 5, "attach_ogerhead", vec3_invalid, 1);
}


// CDOTA_Modifier_Alchemist_ChemicalRage::OnRefresh  (line 1214, @0x0000000002b7f4a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "base_attack_time", "bonus_health", "bonus_health_regen", "bonus_mana_regen", "bonus_movespeed"
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::OnRefresh(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "base_attack_time", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->base_attack_time = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->bonus_health = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_health_regen", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->bonus_mana_regen = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->bonus_health_regen = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->bonus_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "bonus_mana_regen", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bonus_movespeed", -1, 0);
    return;
  }
LABEL_11:
  this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::OnDestroy  (line 1225, @0x0000000002b38500, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::OnDestroy(CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  int m_nFXAlchemistCRIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_nFXAlchemistCRIndex = this->m_nFXAlchemistCRIndex;
  if ( m_nFXAlchemistCRIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXAlchemistCRIndex, 0);
    this->m_nFXAlchemistCRIndex = -1;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1580, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_Alchemist_ChemicalRage::DeclareFunctions  (line 1242, @0x0000000002b33990, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseAttackTimeConstant(CModifierParams const&), CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseManaRegen(CModifierParams const&), CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierMoveSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Alchemist_ChemicalRage::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::DeclareFunctions(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this)
{
  this->m_Functions[26].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseAttackTimeConstant;
  this->m_Functions[26].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierHealthBonus;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierConstantHealthRegen;
  this->m_Functions[51].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseManaRegen;
  this->m_Functions[11].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[51].__delta = 0;
  this->m_Functions[11].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Alchemist_ChemicalRage::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetActivityTranslationModifiers  (line 1254, @0x0000000002b33a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetActivityTranslationModifiers(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "chemical_rage";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseAttackTimeConstant  (line 1261, @0x0000000002b33a50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseAttackTimeConstant(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->base_attack_time) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierHealthBonus  (line 1268, @0x0000000002b33a70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierHealthBonus(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierConstantHealthRegen  (line 1276, @0x0000000002b33a90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseManaRegen  (line 1283, @0x0000000002b33ab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierBaseManaRegen(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->bonus_mana_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierMoveSpeedBonus_Constant  (line 1290, @0x0000000002b33ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_ChemicalRage::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Alchemist_ChemicalRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_UltimateScepter::~CDOTA_Modifier_Alchemist_UltimateScepter  (line 1304, @0x0000000002b9bf00, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::~CDOTA_Modifier_Alchemist_UltimateScepter(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Alchemist_UltimateScepter::~CDOTA_Modifier_Alchemist_UltimateScepter  (line 1304, @0x0000000002b9bf20, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Alchemist_UltimateScepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::~CDOTA_Modifier_Alchemist_UltimateScepter(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Alchemist_UltimateScepter::DeclareFunctions  (line 1325, @0x0000000002b33af0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All(CModifierParams const&), CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierManaBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::DeclareFunctions(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All;
  this->m_Functions[58].__pfn = CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierHealthBonus;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierManaBonus;
  this->m_Functions[59].__delta = 0;
}


// CDOTA_Modifier_Alchemist_UltimateScepter::OnCreated  (line 1335, @0x0000000002b6de70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_all_stats", "bonus_health", "bonus_mana"
void __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::OnCreated(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_all_stats = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_all_stats", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_health = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_all_stats = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_health = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_health", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_mana", -1, 0);
    return;
  }
LABEL_7:
  this->bonus_mana = 0;
}


// CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All  (line 1342, @0x0000000002b33b70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierBonusStats_All(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this,
        const CModifierParams *const params)
{
  int bonus_all_stats; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_all_stats = this->bonus_all_stats;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_all_stats);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierHealthBonus  (line 1347, @0x0000000002b33bb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierHealthBonus(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this,
        const CModifierParams *const params)
{
  int bonus_health; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_health = this->bonus_health;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_health);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierManaBonus  (line 1352, @0x0000000002b33bf0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Alchemist_UltimateScepter::GetModifierManaBonus(
        CDOTA_Modifier_Alchemist_UltimateScepter *const this,
        const CModifierParams *const params)
{
  int bonus_mana; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  bonus_mana = this->bonus_mana;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * bonus_mana);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


