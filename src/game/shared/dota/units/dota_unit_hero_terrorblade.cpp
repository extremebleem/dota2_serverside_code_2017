// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:44
class CDOTA_Unit_Hero_Terrorblade : public CDOTA_BaseNPC_Hero {
	class NetworkVar_m_nArcanaColor {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	int m_nFXDeath;  // +0x16ec
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
	CDOTA_Unit_Hero_Terrorblade(CDOTA_Unit_Hero_Terrorblade &);
	CDOTA_Unit_Hero_Terrorblade(CDOTA_Unit_Hero_Terrorblade &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetSoundSet();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnDeath();
	virtual const char * GetDeathEffectName();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Hero_Terrorblade();
	virtual ~CDOTA_Unit_Hero_Terrorblade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[460] GetSoundSet
	// vtable[159] ModifyOrAppendCriteria
	// vtable[8] Spawn
	// vtable[470] OnDeath
	// vtable[502] GetDeathEffectName
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// sizeof = 5888
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:77
class C_CDOTA_Unit_Hero_Terrorblade_MapInstall {
	C_CDOTA_Unit_Hero_Terrorblade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:180
class CDOTA_Ability_Terrorblade_Reflection : public CDOTABaseAbility {
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
	CDOTA_Ability_Terrorblade_Reflection(CDOTA_Ability_Terrorblade_Reflection &);
	CDOTA_Ability_Terrorblade_Reflection(CDOTA_Ability_Terrorblade_Reflection &);
	CDOTA_Ability_Terrorblade_Reflection();
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
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Terrorblade_Reflection();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:200
class C_CDOTA_Ability_Terrorblade_Reflection_MapInstall {
	C_CDOTA_Ability_Terrorblade_Reflection_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:342
class CDOTA_Modifier_Terrorblade_Reflection_Invulnerability : public CDOTA_Modifier_Invulnerable {
public:

private:

	EHANDLE hTarget;  // +0xba8
	CDOTA_Modifier_Terrorblade_Reflection_Invulnerability();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] GetModifierMoveSpeed_Absolute
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:469
class CDOTA_Modifier_Terrorblade_Reflection_Slow : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	CDOTA_Modifier_Terrorblade_Reflection_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Terrorblade_Reflection_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:527
class CDOTA_Ability_Terrorblade_ConjureImage : public CDOTABaseAbility {
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
	CDOTA_Ability_Terrorblade_ConjureImage(CDOTA_Ability_Terrorblade_ConjureImage &);
	CDOTA_Ability_Terrorblade_ConjureImage(CDOTA_Ability_Terrorblade_ConjureImage &);
	CDOTA_Ability_Terrorblade_ConjureImage();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Terrorblade_ConjureImage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[209] IsReflectionDelayed
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:540
class C_CDOTA_Ability_Terrorblade_ConjureImage_MapInstall {
	C_CDOTA_Ability_Terrorblade_ConjureImage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:627
class CDOTA_Modifier_Terrorblade_ConjureImage : public CDOTA_Buff {
public:

	CDOTA_Modifier_Terrorblade_ConjureImage(CDOTA_Modifier_Terrorblade_ConjureImage &);
	CDOTA_Modifier_Terrorblade_ConjureImage(const CDOTA_Modifier_Terrorblade_ConjureImage &);
	CDOTA_Modifier_Terrorblade_ConjureImage();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Terrorblade_ConjureImage();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:649
class CDOTA_Ability_Terrorblade_Metamorphosis : public CDOTABaseAbility {
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
	CDOTA_Ability_Terrorblade_Metamorphosis(CDOTA_Ability_Terrorblade_Metamorphosis &);
	CDOTA_Ability_Terrorblade_Metamorphosis(CDOTA_Ability_Terrorblade_Metamorphosis &);
	CDOTA_Ability_Terrorblade_Metamorphosis();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Terrorblade_Metamorphosis();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:695
class CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura : public CDOTA_Buff {
public:

	CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura();
	virtual bool IsHidden();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[42] GetAuraEntityReject
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:758
class CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier : public CDOTA_Buff {
public:

	CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:801
class CDOTA_Modifier_Terrorblade_Metamorphosis_Transform : public CDOTA_Buff {
public:

	CDOTA_Modifier_Terrorblade_Metamorphosis_Transform();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:887
class CDOTA_Modifier_Terrorblade_Metamorphosis : public CDOTA_Buff {
public:

private:

	float base_attack_time;  // +0xba8
	int bonus_range;  // +0xbac
	int m_iOriginalAttackCapabilities;  // +0xbb0
	int bonus_damage;  // +0xbb4
	int speed_loss;  // +0xbb8

	string_t m_iszRangedAttackEffect;  // +0xbc0
	CDOTA_Modifier_Terrorblade_Metamorphosis();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool AllowIllusionDuplicate();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseAttackTimeConstant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_Terrorblade_Metamorphosis();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[18] AllowIllusionDuplicate
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:1068
class CDOTA_Ability_Terrorblade_Sunder : public CDOTABaseAbility {
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
	CDOTA_Ability_Terrorblade_Sunder(CDOTA_Ability_Terrorblade_Sunder &);
	CDOTA_Ability_Terrorblade_Sunder(CDOTA_Ability_Terrorblade_Sunder &);
	CDOTA_Ability_Terrorblade_Sunder();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Terrorblade_Sunder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:1081
class C_CDOTA_Ability_Terrorblade_Sunder_MapInstall {
	C_CDOTA_Ability_Terrorblade_Sunder_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_terrorblade.cpp:1176
class CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect : public CDOTA_Buff {
public:

private:

	bool m_bFrozen;  // +0xba8
	bool m_bFlail;  // +0xba9
	CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool RemoveOnDeath();
	virtual bool IsPermanent();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect();

	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[54] RemoveOnDeath
	// vtable[23] IsPermanent
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Terrorblade::~CDOTA_Unit_Hero_Terrorblade  (line 44, @0x0000000002d2d6a0, libserver.so)  // inlines: ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Terrorblade::~CDOTA_Unit_Hero_Terrorblade(CDOTA_Unit_Hero_Terrorblade *const this)
{
  CUtlString *p_m_szResponseCriteria; // rdi

  p_m_szResponseCriteria = &this->m_szResponseCriteria;
  p_m_szResponseCriteria[-734].m_pString = &off_463C570;
  p_m_szResponseCriteria[-498].m_pString = &off_463D550;
  p_m_szResponseCriteria[-477].m_pString = &off_463D880;
  if ( this->m_szResponseCriteria.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_szResponseCriteria);
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Terrorblade::~CDOTA_Unit_Hero_Terrorblade  (line 44, @0x0000000002d32ea0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Terrorblade, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Terrorblade::~CDOTA_Unit_Hero_Terrorblade(CDOTA_Unit_Hero_Terrorblade *const this)
{
  CUtlString *p_m_szResponseCriteria; // rdi

  p_m_szResponseCriteria = &this->m_szResponseCriteria;
  p_m_szResponseCriteria[-734].m_pString = &off_463C570;
  p_m_szResponseCriteria[-498].m_pString = &off_463D550;
  p_m_szResponseCriteria[-477].m_pString = &off_463D880;
  if ( this->m_szResponseCriteria.m_pString != 0 )
    CUtlString::FreeMemoryBlock(p_m_szResponseCriteria);
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Terrorblade::Schema_DynamicBinding  (line 46, @0x0000000002d1ee50, libserver.so)
// globals: CDOTA_Unit_Hero_Terrorblade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Terrorblade::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Terrorblade *const this)
{
  return CDOTA_Unit_Hero_Terrorblade::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002d1ee80, libserver.so)
// globals: CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002d1ee90, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Terrorblade>
void __fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002d1eeb0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002d1eed0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002d1eee0, libserver.so)
// globals: CDOTA_Unit_Hero_Terrorblade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Terrorblade::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002d24c50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5888);
  memset(v1, 0, 0x1700u);
  return v1;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002d28b50, libserver.so)  // inlines: CDOTA_Unit_Hero_Terrorblade, CNetworkVarBase, CUtlString, Construct<CDOTA_Unit_Hero_Terrorblade>, EnsureValidValue<unsigned int>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 734) = 0;
    *p = &off_463C570;
    *(p + 236) = &off_463D550;
    *(p + 257) = &off_463D880;
    *(p + 1470) = 0;
    *(p + 1467) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002d354f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002d35810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal  (line 46, @0x0000000002d4f070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_terrorblade", "CDOTA_Unit_Hero_Terrorblade"
// globals: `guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass, CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo, CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass) != 0 )
  {
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_flags = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pInputs = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass._vptr_CEntityClass = off_463C4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Terrorblade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TerrorbladeClass != 0 )
    return &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo,
      "CDOTA_Unit_Hero_Terrorblade",
      "npc_dota_hero_terrorblade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo);
  }
  CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pClassInfo = &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo;
  CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TerrorbladeClass = &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass;
  CDOTA_Unit_Hero_Terrorblade::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClassInfo.m_pClass = &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass;
  CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TerrorbladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Terrorblade::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TerrorbladeClass;
}


// CDOTA_Unit_Hero_Terrorblade::GetDeathEffectName  (line 55, @0x0000000002d1eef0, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Terrorblade::GetDeathEffectName(CDOTA_Unit_Hero_Terrorblade *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Terrorblade::YouForgotToImplementOrDeclareServerClass  (line 77, @0x0000000002cc9820, libserver.so)
int __fastcall CDOTA_Unit_Hero_Terrorblade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Terrorblade *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Terrorblade::GetServerClass  (line 77, @0x0000000002cde430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Terrorblade::GetServerClass(CDOTA_Unit_Hero_Terrorblade *const this)
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


// CDOTA_Unit_Hero_Terrorblade::GetSoundSet  (line 81, @0x0000000002ccc0b0, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetSoundSet
// strings: "modifier_terrorblade_metamorphosis", "Hero_Terrorblade_Morphed"
const char *__fastcall CDOTA_Unit_Hero_Terrorblade::GetSoundSet(CDOTA_Unit_Hero_Terrorblade *const this)
{
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_terrorblade_metamorphosis", 0) != 0 )
    return "Hero_Terrorblade_Morphed";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Unit_Hero_Terrorblade::Spawn  (line 91, @0x0000000002cf2bf0, libserver.so)  // inlines: GetCustomKillEffect, GetModifier, SetCustomKillEffect
// calls: CDOTA_BaseNPC_Hero::Spawn, GetAssetModifier<CDOTA_BaseNPC, CCustomKillEffectModifier>, CUtlString::Get, CUtlString::operator=
void __fastcall CDOTA_Unit_Hero_Terrorblade::Spawn(
        CDOTA_Unit_Hero_Terrorblade *const this,
        const CEntityKeyValues *pKeyValues)
{
  const CCustomKillEffectModifier *Asset; // rax
  const char *v4; // rax

  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  Asset = GetAssetModifier<CDOTA_BaseNPC,CCustomKillEffectModifier>(this);
  if ( Asset != 0 )
  {
    v4 = CUtlString::Get(&Asset->m_strModifier);
    CUtlString::operator=(&this->m_strCustomKillEffect, v4);
  }
}


// CDOTA_Unit_Hero_Terrorblade::ModifyOrAppendCriteria  (line 113, @0x0000000002cd22e0, libserver.so)  // inlines: IsEmpty, operator char const*
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria, CUtlString::Get
// strings: "modifier_terrorblade_metamorphosis", "customresponse"
void __fastcall CDOTA_Unit_Hero_Terrorblade::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Terrorblade *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4
  char *m_pString; // rax
  const char *v6; // rax

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_terrorblade_metamorphosis", 0);
  CResponseCriteriaSet::AppendCriteria(set, "metamorphosis", 1.0, v4);
  m_pString = this->m_szResponseCriteria.m_pString;
  if ( m_pString != 0 && *m_pString != 0 )
  {
    v6 = CUtlString::Get(&this->m_szResponseCriteria);
    CResponseCriteriaSet::AppendCriteria(set, "customresponse", v6, 1.0);
  }
}


// CDOTA_Unit_Hero_Terrorblade::OnAlive  (line 126, @0x0000000002cc9830, libserver.so)
void __fastcall CDOTA_Unit_Hero_Terrorblade::OnAlive(CDOTA_Unit_Hero_Terrorblade *const this)
{
  ;
}


// CDOTA_Unit_Hero_Terrorblade::OnDying  (line 139, @0x0000000002cc9840, libserver.so)
void __fastcall CDOTA_Unit_Hero_Terrorblade::OnDying(CDOTA_Unit_Hero_Terrorblade *const this)
{
  ;
}


// CDOTA_Unit_Hero_Terrorblade::OnDeath  (line 155, @0x0000000002ccb7e0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Terrorblade::OnDeath(CDOTA_Unit_Hero_Terrorblade *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_Terrorblade_Reflection::~CDOTA_Ability_Terrorblade_Reflection  (line 180, @0x0000000002d2c090, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Terrorblade_Reflection::~CDOTA_Ability_Terrorblade_Reflection(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  this->_vptr_IHandleEntity = &off_463D950;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Terrorblade_Reflection::~CDOTA_Ability_Terrorblade_Reflection  (line 180, @0x0000000002d2c0b0, libserver.so)  // inlines: ~CDOTA_Ability_Terrorblade_Reflection
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Terrorblade_Reflection::~CDOTA_Ability_Terrorblade_Reflection(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  this->_vptr_IHandleEntity = &off_463D950;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Terrorblade_Reflection::Schema_DynamicBinding  (line 182, @0x0000000002d1ef00, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Reflection::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Reflection::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Reflection *const this)
{
  return CDOTA_Ability_Terrorblade_Reflection::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 182, @0x0000000002d1ef10, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::DestructInstance  (line 182, @0x0000000002d1ef20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Terrorblade_Reflection>
void __fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::FreeInstance  (line 182, @0x0000000002d1ef40, libserver.so)
void __fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::CanAllocate  (line 182, @0x0000000002d1ef60, libserver.so)
bool __fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 182, @0x0000000002d1ef70, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Reflection::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Reflection::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::AllocateInstance  (line 182, @0x0000000002d24c90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::ConstructInstance  (line 182, @0x0000000002d29340, libserver.so)  // inlines: CDOTA_Ability_Terrorblade_Reflection, Construct<CDOTA_Ability_Terrorblade_Reflection>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_463D950;
  }
  return p;
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002d34540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002d34560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal  (line 182, @0x0000000002d49460, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "terrorblade_reflection", "CDOTA_Ability_Terrorblade_Reflection"
// globals: `guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass, CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass, __dso_handle, CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo, CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass);
    CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass._vptr_CEntityClass = off_463D8D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass);
    __cxa_atexit(
      CDOTA_Ability_Terrorblade_Reflection::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Terrorblade_ReflectionClass != 0 )
    return &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass;
  if ( `guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo,
      "CDOTA_Ability_Terrorblade_Reflection",
      "terrorblade_reflection",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo);
  }
  CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass.m_pClassInfo = &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo;
  CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass.m_pBaseClassInfo = CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Terrorblade_ReflectionClass = &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass;
  CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClassInfo.m_pClass = &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass;
  CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Terrorblade_ReflectionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Terrorblade_Reflection::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ReflectionClass;
}


// CDOTA_Ability_Terrorblade_Reflection::GetAOERadius  (line 190, @0x0000000002d47130, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Terrorblade_Reflection::GetAOERadius(CDOTA_Ability_Terrorblade_Reflection *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
}


// CDOTA_Ability_Terrorblade_Reflection::YouForgotToImplementOrDeclareServerClass  (line 200, @0x0000000002cc9850, libserver.so)
int __fastcall CDOTA_Ability_Terrorblade_Reflection::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  return 0;
}


// CDOTA_Ability_Terrorblade_Reflection::GetServerClass  (line 200, @0x0000000002cddf30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Terrorblade_Reflection::GetServerClass(
        CDOTA_Ability_Terrorblade_Reflection *const this)
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


// CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseStart  (line 208, @0x0000000002ccdcb0, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseStart, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, __dynamic_cast, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "particles/units/heroes/hero_terrorblade/terrorblade_reflection_cast.vpcf", "attach_attack1", "attach_attack2"
// globals: `typeinfo for'CDOTA_Unit_Hero_Terrorblade
bool __fastcall CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseStart(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax
  void *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // r12
  CDOTA_BaseNPC *v11; // rax
  int v12; // r13d
  const CBaseAnimating *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int v16; // ebx
  const CBaseAnimating *v17; // r13
  CDOTA_ParticleManager *v18; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  CDOTABaseAbility::OnAbilityPhaseStart(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_terrorblade/terrorblade_reflection_cast.vpcf",
                       2,
                       Caster,
                       0,
                       0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( v4 != 0 )
  {
    v5 = __dynamic_cast(v4, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Terrorblade, 0);
    if ( v5 != 0 )
      (*(*v5 + 1648LL))(v5, this->m_nFXIndex, 0);
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v8 = v6;
  v9 = GetParticleManager();
  v10 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, m_nFXIndex, 0, v8, 5, "attach_attack1", vec3_invalid, 1);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = this->m_nFXIndex;
  v13 = v11;
  v14 = GetParticleManager();
  *&v21.x = v10;
  v21.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, v12, 1, v13, 5, "attach_attack2", v21, 1);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = this->m_nFXIndex;
  v17 = v15;
  v18 = GetParticleManager();
  *&v22.x = v10;
  v22.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v16, 2, v17, 1, 0, v22, 1);
  return 1;
}


// CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseInterrupted  (line 226, @0x0000000002cce4b0, libserver.so)
// calls: CDOTABaseAbility::OnAbilityPhaseInterrupted, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_Terrorblade_Reflection::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  CDOTABaseAbility::OnAbilityPhaseInterrupted(this);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  this->m_nFXIndex = -1;
}


// CDOTA_Ability_Terrorblade_Reflection::OnSpellStart  (line 238, @0x0000000002d17a90, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance* (30 total)
// strings: "illusion_outgoing_damage", "illusion_duration", "modifier_illusion", "modifier_terrorblade_reflection_invulnerability", "modifier_terrorblade_reflection_slow", "particles/units/heroes/hero_terrorblade/terrorblade_mirror_image.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Unit_Hero_Terrorblade
void __fastcall CDOTA_Ability_Terrorblade_Reflection::OnSpellStart(CDOTA_Ability_Terrorblade_Reflection *const this)
{
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int LevelSpecialValue; // r13d
  __m128i v5; // xmm1
  float v6; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // r12
  int i; // r13d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm0_4
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  int m_Size; // eax
  CEntityIndex *v25; // rax
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  unsigned int Particle; // r14d
  CDOTA_BaseNPC *v32; // rax
  void *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  float illusion_outgoing_damage; // [rsp+28h] [rbp-148h]
  CEntityIndex v36; // [rsp+2Ch] [rbp-144h]
  int v37; // [rsp+30h] [rbp-140h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-110h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImage; // [rsp+80h] [rbp-F0h] BYREF
  CUnitOrders newOrders; // [rsp+A0h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-90h] BYREF
  KeyValues kv2; // [rsp+100h] [rbp-70h] BYREF
  KeyValues kv3; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+138h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_nFXIndex);
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  illusion_outgoing_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_outgoing_damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_duration", -1, 0);
  *v5.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Caster, v6, &entities, 2, 1, 131456, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v11 = 0;
    for ( i = 0; entities.m_Size > i; ++i )
    {
      v13 = &entities.m_Memory.m_pMemory[v11];
      m_Index = entities.m_Memory.m_pMemory[v11].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v15 = v13->m_Index;
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[v15 & 0x1FF];
          if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
          {
            m_pInstance = v17->m_pInstance;
            if ( v17->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_illusion");
              KeyValues::SetFloat(&kv, "duration", v19);
              KeyValues::SetInt(&kv, "outgoing_damage", illusion_outgoing_damage);
              hImage.m_Size = 0;
              hImage.m_Memory.m_pMemory = 0;
              hImage.m_Memory.m_nAllocationCount = 0;
              hImage.m_Memory.m_nGrowSize = 0;
              v20 = CDOTABaseAbility::GetCaster(this);
              v21 = *(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity;
              DOTA_CreateIllusions(m_pInstance, 1, (v21 + v21), 0, &kv, &hImage, v20, 0, 1);
              if ( hImage.m_Size == 0 )
              {
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hImage);
                KeyValues::~KeyValues(&kv);
                break;
              }
              v22 = CEntityHandle::operator CEntityInstance *(hImage.m_Memory.m_pMemory);
              v23 = v22;
              if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
              {
                newOrders.m_nUnits.m_Size = 0;
                memset(&newOrders.m_nUnits.m_Memory, 0, 28);
                newOrders.m_nOrderSequenceNumber = 0;
                newOrders.m_nIssuerPlayerIndex = -1;
                newOrders.m_vPosition = vec3_origin;
                newOrders.m_bQueue = 0;
                v36.m_Data = CEntityInstance::GetEntityIndex(v22).m_Data;
                m_Size = newOrders.m_nUnits.m_Size;
                v37 = newOrders.m_nUnits.m_Size;
                if ( newOrders.m_nUnits.m_Size == newOrders.m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
                  m_Size = newOrders.m_nUnits.m_Size;
                }
                newOrders.m_nUnits.m_Size = m_Size + 1;
                v25 = &newOrders.m_nUnits.m_Memory.m_pMemory[v37];
                if ( v25 != 0 )
                  v25->m_Data = v36.m_Data;
                newOrders.m_nOrderType = 4;
                newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
                DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
                CDOTA_BaseNPC::SetPseudoQueuedOrder(v23, &newOrders);
                KeyValues::KeyValues(&kv2, "modifier_terrorblade_reflection_invulnerability");
                KeyValues::SetFloat(&kv2, "duration", v26);
                KeyValues::SetPtr(&kv2, "target", m_pInstance);
                v27 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  v23,
                  v27,
                  this,
                  "modifier_terrorblade_reflection_invulnerability",
                  &kv2,
                  0);
                KeyValues::KeyValues(&kv3, "modifier_terrorblade_reflection_slow");
                KeyValues::SetFloat(&kv3, "duration", v28);
                v29 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, v29, this, "modifier_terrorblade_reflection_slow", &kv3, 0);
                v30 = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             v30,
                             "particles/units/heroes/hero_terrorblade/terrorblade_mirror_image.vpcf",
                             1,
                             v23,
                             0,
                             0);
                v32 = CDOTABaseAbility::GetCaster(this);
                if ( v32 != 0 )
                {
                  v33 = __dynamic_cast(v32, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Terrorblade, 0);
                  if ( v33 != 0 )
                    (*(*v33 + 1648LL))(v33, Particle, 0);
                }
                v34 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v34, Particle);
                KeyValues::~KeyValues(&kv3);
                KeyValues::~KeyValues(&kv2);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&newOrders.m_nUnits);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                {
                  CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                  if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                    CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                }
              }
              DOTA_EmitSound(10, "Hero_Terrorblade.Reflection", m_pInstance);
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImage);
              if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImage.m_Memory);
                if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImage.m_Memory);
              }
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      ++v11;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Terrorblade_Reflection::GetAbilityDamageToTargetOverInterval  (line 317, @0x0000000002cf6580, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "illusion_outgoing_damage"
__int64 __fastcall CDOTA_Ability_Terrorblade_Reflection::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Terrorblade_Reflection *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-20h]
  float LevelSpecialValue; // [rsp+4h] [rbp-1Ch]
  float v12; // [rsp+4h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_outgoing_damage", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    v12 = ((100.0 - LevelSpecialValue) / 100.0)
        * (CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget) * fNumAttacksa);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * v12);
  }
  return result;
}


// CDOTA_Ability_Terrorblade_Reflection::GetSlowDuration  (line 334, @0x0000000002cf6650, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "illusion_duration"
float __fastcall CDOTA_Ability_Terrorblade_Reflection::GetSlowDuration(
        CDOTA_Ability_Terrorblade_Reflection *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_duration", -1, 0);
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability  (line 342, @0x0000000002d277f0, libserver.so)  // inlines: ~CDOTA_Modifier_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability  (line 342, @0x0000000002d27810, libserver.so)  // inlines: ~CDOTA_Modifier_Invulnerable, ~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::~CDOTA_Modifier_Terrorblade_Reflection_Invulnerability(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::IsHidden  (line 348, @0x0000000002d1ef80, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::IsHidden(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::IsPurgable  (line 349, @0x0000000002d1ef90, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::IsPurgable(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  return 0;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetStatusEffectName  (line 359, @0x0000000002d1efa0, libserver.so)
// strings: "particles/status_fx/status_effect_terrorblade_reflection.vpcf"
const char *__fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetStatusEffectName(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  return "particles/status_fx/status_effect_terrorblade_reflection.vpcf";
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::StatusEffectPriority  (line 360, @0x0000000002d1efb0, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::StatusEffectPriority(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  return 20010;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::OnCreated  (line 370, @0x0000000002ccc940, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::OnCreated(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this,
        KeyValues *pKV)
{
  _BYTE *Ptr; // rax
  float v4; // xmm1_4
  __int64 v5; // rdx
  int v6; // eax
  __int16 v7; // cx

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v5 = *(Ptr + 1)) != 0 )
  {
    v6 = (*(v5 + 16) >> 15) - (*(v5 + 48) & 1);
    if ( *(v5 + 16) == -1 )
      v7 = 0x7FFF;
    else
      v7 = *(v5 + 16) & 0x7FFF;
    LOWORD(this->hTarget.m_Index) = v7 | this->hTarget.m_Index & 0x8000;
    this->hTarget.m_Index = (v6 << 15) | this->hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->hTarget.m_Index = -1;
  }
  CDOTA_Buff::StartIntervalThink(this, 0.1, v4);
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::OnIntervalThink  (line 379, @0x0000000002d176f0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsAttackImmune, IsInvulnerable, IsValid, LookupEntity, Purge, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::IsInvisibleTo, CEntityInstance::GetEntityIndex, CBaseEntity::GetAbsOrigin, DOTA_ExecuteOrders, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::RemoveAll, CUtlMemory<CEntityIndex, int>::Purge, CDOTA_BaseNPC::ForceKill, CUtlMemory<CEntityIndex, int>::Grow, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::OnIntervalThink(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *v7; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CEntityIndex v10; // r14d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  vec_t v13; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  CEntityIndex v15; // r14d
  CUnitOrders newOrders; // [rsp+0h] [rbp-60h] BYREF

  m_Index = this->hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->hTarget.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(v4->m_pInstance) != 0 )
          {
            m_Value = m_pInstance->m_nUnitState64.m_Value;
            if ( (m_Value & 4) != 0
              || m_pInstance->m_bIsWaitingToSpawn.m_Value
              || (m_Value & 0x100) != 0
              || (v7 = CDOTA_Buff::GetParent(this), CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v7))
              || (v12 = CDOTA_Buff::GetParent(this), !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(v12, m_pInstance)) )
            {
              newOrders.m_bQueue = 0;
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_vPosition.x = vec3_origin.x;
              y = vec3_origin.y;
              newOrders.m_nIssuerPlayerIndex = -1;
              newOrders.m_vPosition.y = y;
              newOrders.m_vPosition.z = vec3_origin.z;
              Parent = CDOTA_Buff::GetParent(this);
              v10.m_Data = CEntityInstance::GetEntityIndex(Parent).m_Data;
              CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
              newOrders.m_nUnits.m_Size = 1;
              if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
                newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v10.m_Data;
              newOrders.m_nOrderType = 1;
              newOrders.m_vPosition = *CBaseEntity::GetAbsOrigin(m_pInstance);
              DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
              CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&newOrders.m_nUnits);
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  goto LABEL_17;
              }
            }
            else
            {
              newOrders.m_bQueue = 0;
              newOrders.m_nUnits.m_Size = 0;
              memset(&newOrders.m_nUnits.m_Memory, 0, 28);
              newOrders.m_nOrderSequenceNumber = 0;
              newOrders.m_vPosition.x = vec3_origin.x;
              v13 = vec3_origin.y;
              newOrders.m_nIssuerPlayerIndex = -1;
              newOrders.m_vPosition.y = v13;
              newOrders.m_vPosition.z = vec3_origin.z;
              v14 = CDOTA_Buff::GetParent(this);
              v15.m_Data = CEntityInstance::GetEntityIndex(v14).m_Data;
              CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
              newOrders.m_nUnits.m_Size = 1;
              if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
                newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v15.m_Data;
              newOrders.m_nOrderType = 4;
              newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
              DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
              CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&newOrders.m_nUnits);
              if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
                if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
LABEL_17:
                  CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
              }
            }
          }
          else
          {
            v11 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::ForceKill(v11, 0);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::CheckState  (line 424, @0x0000000002cd1440, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invulnerable::CheckState
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::CheckState(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invulnerable::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x282804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFD7D7FBEFFLL;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::DeclareFunctions  (line 437, @0x0000000002cc9860, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::DeclareFunctions(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this)
{
  this->m_Functions[18].__pfn = (&stru_10 + 705);
  this->m_Functions[18].__delta = 0;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetModifierInvisibilityLevel  (line 445, @0x0000000002cc98b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this,
        const CModifierParams *const params)
{
  return 0x3E8CCCCD00000001uLL;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetModifierMoveSpeed_Absolute  (line 450, @0x0000000002cc98d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this,
        const CModifierParams *const params)
{
  return 0x4409800000000001uLL;
}


// CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::ModelScale  (line 457, @0x0000000002cc98f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Reflection_Invulnerability::ModelScale(
        CDOTA_Modifier_Terrorblade_Reflection_Invulnerability *const this,
        const CModifierParams *const params)
{
  return 0x41C8000000000001uLL;
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::~CDOTA_Modifier_Terrorblade_Reflection_Slow  (line 469, @0x0000000002d277a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::~CDOTA_Modifier_Terrorblade_Reflection_Slow(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_463E750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::~CDOTA_Modifier_Terrorblade_Reflection_Slow  (line 469, @0x0000000002d277c0, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Reflection_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::~CDOTA_Modifier_Terrorblade_Reflection_Slow(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_463E750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::IsDebuff  (line 474, @0x0000000002d1efc0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::IsDebuff(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::GetEffectName  (line 478, @0x0000000002d1efd0, libserver.so)
// strings: "particles/units/heroes/hero_terrorblade/terrorblade_reflection_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::GetEffectName(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this)
{
  return "particles/units/heroes/hero_terrorblade/terrorblade_reflection_slow.vpcf";
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::OnCreated  (line 492, @0x0000000002d09580, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::OnCreated(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::DeclareFunctions  (line 499, @0x0000000002cc9910, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::DeclareFunctions(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierMoveSpeedBonus_Percentage  (line 507, @0x0000000002cc9950, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierAttackSpeedBonus_Constant  (line 514, @0x0000000002cc9970, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Reflection_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Terrorblade_Reflection_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Terrorblade_ConjureImage::~CDOTA_Ability_Terrorblade_ConjureImage  (line 527, @0x0000000002d2c0e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::~CDOTA_Ability_Terrorblade_ConjureImage(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  this->_vptr_IHandleEntity = &off_463EAB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Terrorblade_ConjureImage::~CDOTA_Ability_Terrorblade_ConjureImage  (line 527, @0x0000000002d2c100, libserver.so)  // inlines: ~CDOTA_Ability_Terrorblade_ConjureImage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::~CDOTA_Ability_Terrorblade_ConjureImage(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  this->_vptr_IHandleEntity = &off_463EAB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Terrorblade_ConjureImage::Schema_DynamicBinding  (line 529, @0x0000000002d1efe0, libserver.so)
// globals: CDOTA_Ability_Terrorblade_ConjureImage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  return CDOTA_Ability_Terrorblade_ConjureImage::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 529, @0x0000000002d1eff0, libserver.so)
// globals: CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::DestructInstance  (line 529, @0x0000000002d1f000, libserver.so)  // inlines: Destruct<CDOTA_Ability_Terrorblade_ConjureImage>
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::FreeInstance  (line 529, @0x0000000002d1f020, libserver.so)
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::CanAllocate  (line 529, @0x0000000002d1f040, libserver.so)
bool __fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 529, @0x0000000002d1f050, libserver.so)
// globals: CDOTA_Ability_Terrorblade_ConjureImage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_ConjureImage::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::AllocateInstance  (line 529, @0x0000000002d24cd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::ConstructInstance  (line 529, @0x0000000002d29370, libserver.so)  // inlines: CDOTA_Ability_Terrorblade_ConjureImage, Construct<CDOTA_Ability_Terrorblade_ConjureImage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_463EAB0;
  }
  return p;
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 529, @0x0000000002d34590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 529, @0x0000000002d345b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal  (line 529, @0x0000000002d495b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "terrorblade_conjure_image", "CDOTA_Ability_Terrorblade_ConjureImage"
// globals: `guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass, CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass, __dso_handle, CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo, CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass);
    CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass._vptr_CEntityClass = off_463EA30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass);
    __cxa_atexit(
      CDOTA_Ability_Terrorblade_ConjureImage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Terrorblade_ConjureImageClass != 0 )
    return &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass;
  if ( `guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo,
      "CDOTA_Ability_Terrorblade_ConjureImage",
      "terrorblade_conjure_image",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo);
  }
  CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass.m_pClassInfo = &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo;
  CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass.m_pBaseClassInfo = CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Terrorblade_ConjureImageClass = &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass;
  CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClassInfo.m_pClass = &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass;
  CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Terrorblade_ConjureImageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Terrorblade_ConjureImage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_ConjureImageClass;
}


// CDOTA_Ability_Terrorblade_ConjureImage::IsReflectionDelayed  (line 535, @0x0000000002d1f060, libserver.so)
bool __fastcall CDOTA_Ability_Terrorblade_ConjureImage::IsReflectionDelayed(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  return 1;
}


// CDOTA_Ability_Terrorblade_ConjureImage::YouForgotToImplementOrDeclareServerClass  (line 540, @0x0000000002cc9990, libserver.so)
int __fastcall CDOTA_Ability_Terrorblade_ConjureImage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  return 0;
}


// CDOTA_Ability_Terrorblade_ConjureImage::GetServerClass  (line 540, @0x0000000002cde330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Terrorblade_ConjureImage::GetServerClass(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
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


// CDOTA_Ability_Terrorblade_ConjureImage::OnSpellStart  (line 549, @0x0000000002cf6a80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetInstance, GetLevelSpecialValueFor<float>, GetPaddedCollisionRadius, Purge, ToDOTABaseNPC, operator CBaseEntity*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, DOTA_CreateIllusions, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, DOTA_EmitSound (17 total)
// strings: "illusion_outgoing_damage", "illusion_incoming_damage", "illusion_duration", "modifier_illusion", "conjure_image_", "modifier_terrorblade_metamorphosis" (8 total)
void __fastcall CDOTA_Ability_Terrorblade_ConjureImage::OnSpellStart(
        CDOTA_Ability_Terrorblade_ConjureImage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  __m128i v4; // xmm0
  float v5; // r14d
  __m128i v6; // xmm0
  float v7; // r15d
  float v8; // xmm1_4
  CDOTA_BaseNPC *pCaster; // rax
  float v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rbx
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rdx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImage; // [rsp+20h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv_modifier; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 && Caster->m_bIsDOTANPC )
  {
    *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_outgoing_damage", -1, 0);
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    *v6.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_incoming_damage", -1, 0);
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_illusion");
    KeyValues::SetFloat(&kv, "duration", v8);
    KeyValues::SetInt(&kv, "outgoing_damage", v5);
    KeyValues::SetInt(&kv, "incoming_damage", v7);
    hImage.m_Size = 0;
    hImage.m_Memory.m_nAllocationCount = 0;
    hImage.m_Memory.m_pMemory = 0;
    hImage.m_Memory.m_nGrowSize = 0;
    pCaster = CDOTABaseAbility::GetCaster(this);
    v10 = v3->m_flHullRadius + v3->m_flCollisionPadding;
    DOTA_CreateIllusions(v3, 1, (v10 + v10), 0, &kv, &hImage, pCaster, "conjure_image_", 1);
    if ( hImage.m_Size != 0 )
    {
      v11 = CEntityHandle::operator CEntityInstance *(hImage.m_Memory.m_pMemory);
      v12 = v11;
      if ( v11 != 0 && v11->m_bIsDOTANPC )
      {
        if ( !this->m_bStolen.m_Value )
        {
          if ( CDOTA_BaseNPC::FindModifierByName(v11, "modifier_terrorblade_metamorphosis", 0) != 0 )
            CDOTA_BaseNPC::StartGesture(v12, 1512, 0.1, 0.1, 9, 0, 1.0);
          else
            CDOTA_BaseNPC::StartGesture(v12, 1542, 0.1, 0.1, 9, 0, 1.0);
        }
        KeyValues::KeyValues(&kv_modifier, "modifier_terrorblade_conjureimage");
        KeyValues::SetFloat(&kv_modifier, "duration", v13);
        v14 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v12, v14, this, "modifier_terrorblade_conjureimage", &kv_modifier, 0);
        KeyValues::~KeyValues(&kv_modifier);
        v15 = v12;
      }
      else
      {
        v15 = 0;
      }
      DOTA_EmitSound(10, "Hero_Terrorblade.ConjureImage", v15);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImage);
      if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_12;
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImage.m_Memory);
      if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_12;
    }
    else
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hImage);
      if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_12;
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImage.m_Memory);
      if ( (hImage.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_12;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hImage.m_Memory);
LABEL_12:
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Terrorblade_ConjureImage::GetAbilityDamageToTargetOverInterval  (line 607, @0x0000000002cf6670, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "illusion_outgoing_damage"
__int64 __fastcall CDOTA_Ability_Terrorblade_ConjureImage::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Terrorblade_ConjureImage *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-20h]
  float LevelSpecialValue; // [rsp+4h] [rbp-1Ch]
  float v12; // [rsp+4h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "illusion_outgoing_damage", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    v12 = ((100.0 - LevelSpecialValue) / 100.0)
        * (CDOTA_BaseNPC::GetAverageTrueAttackDamage(v8, pTarget) * fNumAttacksa);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * v12);
  }
  return result;
}


// CDOTA_Modifier_Terrorblade_ConjureImage::~CDOTA_Modifier_Terrorblade_ConjureImage  (line 627, @0x0000000002d28610, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_ConjureImage::~CDOTA_Modifier_Terrorblade_ConjureImage(
        CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  this->_vptr_CDOTA_Buff = &off_463F530;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_ConjureImage::~CDOTA_Modifier_Terrorblade_ConjureImage  (line 627, @0x0000000002d28630, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_ConjureImage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_ConjureImage::~CDOTA_Modifier_Terrorblade_ConjureImage(
        CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  this->_vptr_CDOTA_Buff = &off_463F530;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_ConjureImage::IsHidden  (line 632, @0x0000000002d1f070, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_ConjureImage::IsHidden(CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_ConjureImage::IsPurgable  (line 633, @0x0000000002d1f080, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_ConjureImage::IsPurgable(
        CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  return 0;
}


// CDOTA_Modifier_Terrorblade_ConjureImage::GetStatusEffectName  (line 635, @0x0000000002d1f090, libserver.so)
// strings: "particles/status_fx/status_effect_terrorblade_reflection.vpcf"
const char *__fastcall CDOTA_Modifier_Terrorblade_ConjureImage::GetStatusEffectName(
        CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  return "particles/status_fx/status_effect_terrorblade_reflection.vpcf";
}


// CDOTA_Modifier_Terrorblade_ConjureImage::StatusEffectPriority  (line 636, @0x0000000002d1f0a0, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_ConjureImage::StatusEffectPriority(
        CDOTA_Modifier_Terrorblade_ConjureImage *const this)
{
  return 10010;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::~CDOTA_Ability_Terrorblade_Metamorphosis  (line 649, @0x0000000002d2c130, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::~CDOTA_Ability_Terrorblade_Metamorphosis(
        CDOTA_Ability_Terrorblade_Metamorphosis *const this)
{
  this->_vptr_IHandleEntity = &off_463F8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::~CDOTA_Ability_Terrorblade_Metamorphosis  (line 649, @0x0000000002d2c150, libserver.so)  // inlines: ~CDOTA_Ability_Terrorblade_Metamorphosis
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::~CDOTA_Ability_Terrorblade_Metamorphosis(
        CDOTA_Ability_Terrorblade_Metamorphosis *const this)
{
  this->_vptr_IHandleEntity = &off_463F8D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::Schema_DynamicBinding  (line 651, @0x0000000002d1f0b0, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Metamorphosis::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Metamorphosis::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Metamorphosis *const this)
{
  return CDOTA_Ability_Terrorblade_Metamorphosis::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 651, @0x0000000002d1f0c0, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::DestructInstance  (line 651, @0x0000000002d1f0d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Terrorblade_Metamorphosis>
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::FreeInstance  (line 651, @0x0000000002d1f0f0, libserver.so)
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::CanAllocate  (line 651, @0x0000000002d1f110, libserver.so)
bool __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 651, @0x0000000002d1f120, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Metamorphosis::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Metamorphosis::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::AllocateInstance  (line 651, @0x0000000002d24d10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::ConstructInstance  (line 651, @0x0000000002d293a0, libserver.so)  // inlines: CDOTA_Ability_Terrorblade_Metamorphosis, Construct<CDOTA_Ability_Terrorblade_Metamorphosis>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_463F8D0;
  }
  return p;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 651, @0x0000000002d345e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 651, @0x0000000002d34600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal  (line 651, @0x0000000002d49700, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "terrorblade_metamorphosis", "CDOTA_Ability_Terrorblade_Metamorphosis"
// globals: `guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass, CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass, __dso_handle, CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo, CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo
CEntityClass *__cdecl CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass);
    CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass._vptr_CEntityClass = off_463F850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass);
    __cxa_atexit(
      CDOTA_Ability_Terrorblade_Metamorphosis::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Terrorblade_MetamorphosisClass != 0 )
    return &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass;
  if ( `guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo,
      "CDOTA_Ability_Terrorblade_Metamorphosis",
      "terrorblade_metamorphosis",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo);
  }
  CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass.m_pClassInfo = &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo;
  CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass.m_pBaseClassInfo = CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Terrorblade_MetamorphosisClass = &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass;
  CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClassInfo.m_pClass = &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass;
  CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Terrorblade_MetamorphosisClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Terrorblade_Metamorphosis::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_MetamorphosisClass;
}


// CDOTA_Ability_Terrorblade_Metamorphosis::OnSpellStart  (line 663, @0x0000000002cf4a60, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_terrorblade_metamorphosis_transform_aura"
void __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::OnSpellStart(
        CDOTA_Ability_Terrorblade_Metamorphosis *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_terrorblade_metamorphosis_transform_aura");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_terrorblade_metamorphosis_transform_aura", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Terrorblade_Metamorphosis::GetAbilityDamageToTargetOverInterval  (line 678, @0x0000000002cfeb60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Terrorblade_Metamorphosis::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Terrorblade_Metamorphosis *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0) * fNumAttacksa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fNumAttacksb);
  }
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura  (line 695, @0x0000000002d27750, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4640390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura  (line 695, @0x0000000002d27770, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4640390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::IsHidden  (line 700, @0x0000000002d1f130, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::IsHidden(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::IsAura  (line 705, @0x0000000002d1f140, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::IsAura(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetModifierAura  (line 706, @0x0000000002d1f150, libserver.so)
// strings: "modifier_terrorblade_metamorphosis_transform_aura_applier"
const char *__fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetModifierAura(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return "modifier_terrorblade_metamorphosis_transform_aura_applier";
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchTeam  (line 708, @0x0000000002d1f160, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchType  (line 709, @0x0000000002d1f170, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchType(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 3;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchFlags  (line 710, @0x0000000002d1f180, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return &stru_40440;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraRadius  (line 711, @0x0000000002d1f190, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraRadius(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 900;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraDuration  (line 712, @0x0000000002d1f1a0, libserver.so)
float __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraDuration(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  return 1.0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraEntityReject  (line 713, @0x0000000002d2f930, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_terrorblade_reflection_invulnerability"
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::GetAuraEntityReject(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  int v4; // r13d
  CDOTA_BaseNPC *Caster; // rax

  v4 = (*(pNPC->_vptr_IHandleEntity + 414))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  return v4 != (*(Caster->_vptr_IHandleEntity + 414))(Caster)
      || !pNPC->m_bIsIllusion.m_Value && pNPC != CDOTA_Buff::GetCaster(this)
      || CDOTA_BaseNPC::FindModifierByName(pNPC, "modifier_terrorblade_reflection_invulnerability", 0) != 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::DeclareFunctions  (line 733, @0x0000000002cc99a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::DeclareFunctions(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::OnDeath  (line 743, @0x0000000002cd8760, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura::OnDeath(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier  (line 758, @0x0000000002d27700, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier *const this)
{
  this->_vptr_CDOTA_Buff = &off_46406B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier  (line 758, @0x0000000002d27720, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier *const this)
{
  this->_vptr_CDOTA_Buff = &off_46406B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::OnCreated  (line 774, @0x0000000002cf76a0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "transformation_time", "modifier_terrorblade_metamorphosis_transform"
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::OnCreated(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTABaseAbility *v5; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "transformation_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_terrorblade_metamorphosis_transform");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, Caster, v5, "modifier_terrorblade_metamorphosis_transform", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::OnDestroy  (line 788, @0x0000000002ccc460, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_terrorblade_metamorphosis_transform", "modifier_terrorblade_metamorphosis"
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier::OnDestroy(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform_Aura_Applier *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_terrorblade_metamorphosis_transform");
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(v3, "modifier_terrorblade_metamorphosis");
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform  (line 801, @0x0000000002d276b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_46409D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform  (line 801, @0x0000000002d276d0, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::~CDOTA_Modifier_Terrorblade_Metamorphosis_Transform(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  this->_vptr_CDOTA_Buff = &off_46409D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::IsHidden  (line 807, @0x0000000002d1f1b0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::IsHidden(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::IsPurgable  (line 808, @0x0000000002d1f1c0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::IsPurgable(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  return 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::OnCreated  (line 822, @0x0000000002ccce80, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, __dynamic_cast, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture
// strings: "Hero_Terrorblade.Metamorphosis", "particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_transform.vpcf"
// globals: `typeinfo for'CDOTA_Unit_Hero_Terrorblade
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::OnCreated(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int Particle; // r12d
  CDOTA_BaseNPC *Caster; // rax
  void *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Terrorblade.Metamorphosis", Parent);
  if ( CDOTA_Buff::GetAbility(this) != 0 && !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v10 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v10, 1512, 0.1, 0.1, 9, 0, 1.0);
  }
  v4 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_transform.vpcf",
               1,
               v4,
               0,
               0);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    v8 = __dynamic_cast(Caster, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Terrorblade, 0);
    if ( v8 != 0 )
      (*(*v8 + 1648LL))(v8, Particle, 0);
  }
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::OnDestroy  (line 846, @0x0000000002cf75b0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_terrorblade_metamorphosis"
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::OnDestroy(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  CDOTABaseAbility *Ability; // rax
  float v3; // xmm1_4
  CDOTABaseAbility *v4; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_terrorblade_metamorphosis");
  KeyValues::SetFloat(&kv, "duration", v3);
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Parent, v4, "modifier_terrorblade_metamorphosis", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::DeclareFunctions  (line 860, @0x0000000002cc99c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::DeclareFunctions(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::GetActivityTranslationModifiers  (line 867, @0x0000000002cc99e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::GetActivityTranslationModifiers(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "metamorphosis";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::CheckState  (line 874, @0x0000000002cc9a00, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis_Transform::CheckState(
        CDOTA_Modifier_Terrorblade_Metamorphosis_Transform *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::~CDOTA_Modifier_Terrorblade_Metamorphosis  (line 887, @0x0000000002d27660, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::~CDOTA_Modifier_Terrorblade_Metamorphosis(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  this->_vptr_CDOTA_Buff = &off_4640CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::~CDOTA_Modifier_Terrorblade_Metamorphosis  (line 887, @0x0000000002d27680, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Metamorphosis
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::~CDOTA_Modifier_Terrorblade_Metamorphosis(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  this->_vptr_CDOTA_Buff = &off_4640CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::IsPurgable  (line 895, @0x0000000002d1f1d0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::IsPurgable(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  return 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::AllowIllusionDuplicate  (line 896, @0x0000000002d1f1e0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::AllowIllusionDuplicate(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::OnCreated  (line 921, @0x0000000002d0d0a0, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetRangedProjectileName, NetworkStateChanged, Set, SetAttackCapability, SetRangedProjectileName, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, MakeEntitySystemString, CDOTA_BaseNPC::ManageModelChanges
// strings: "base_attack_time", "bonus_range", "speed_loss", "particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_base_attack.vpcf"
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::OnCreated(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // r12
  CDOTA_BaseNPC *v10; // rax
  UtlSymLargeId_t v11; // [rsp+0h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "base_attack_time", -1, 0);
  else
    this->base_attack_time = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->bonus_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_range", -1, 0);
  else
    this->bonus_range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->speed_loss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "speed_loss", -1, 0);
  else
    this->speed_loss = 0;
  this->m_iOriginalAttackCapabilities = 1;
  if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    this->m_iOriginalAttackCapabilities = 2;
    this->m_iszRangedAttackEffect.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v8 = Caster;
  if ( Caster->m_iAttackCapabilities.m_Value != 2 )
  {
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v8->m_iAttackCapabilities.m_Value = 2;
  }
  v9 = CDOTA_Buff::GetCaster(this);
  MakeEntitySystemString("particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_base_attack.vpcf");
  v9->m_iszAutoAttackRangedParticle.u.m_Id = v11;
  v10 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::ManageModelChanges(v10);
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::OnRefresh  (line 963, @0x0000000002d0a7b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "base_attack_time", "bonus_range", "speed_loss"
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::OnRefresh(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

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
      this->bonus_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_range", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_damage = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->speed_loss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "speed_loss", -1, 0);
    return;
  }
LABEL_9:
  this->speed_loss = 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::OnDestroy  (line 973, @0x0000000002cd79b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetAttackCapability, SetRangedProjectileName, String, ToCStr, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, __dynamic_cast, CDOTA_ParticleManager::ReleaseParticleIndex, MakeEntitySystemString
// strings: "modifier_terrorblade_metamorphosis_transform_aura_applier", "particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_transform_end.vpcf"
// globals: `typeinfo for'CDOTA_Unit_Hero_Terrorblade
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::OnDestroy(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int m_iOriginalAttackCapabilities; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int Particle; // r12d
  CDOTA_BaseNPC *v10; // rax
  void *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  const char *m_pAsString; // r12
  CDOTA_BaseNPC *v14; // r13
  UtlSymLargeId_t v15; // [rsp+0h] [rbp-30h]

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_terrorblade_metamorphosis_transform_aura_applier");
  m_iOriginalAttackCapabilities = this->m_iOriginalAttackCapabilities;
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = Caster;
  if ( m_iOriginalAttackCapabilities != Caster->m_iAttackCapabilities.m_Value )
  {
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_iAttackCapabilities.m_Value = m_iOriginalAttackCapabilities;
  }
  if ( this->m_iOriginalAttackCapabilities == 2 )
  {
    m_pAsString = "";
    if ( this->m_iszRangedAttackEffect.u.m_Id != 0 )
      m_pAsString = this->m_iszRangedAttackEffect.u.m_pAsString;
    v14 = CDOTA_Buff::GetCaster(this);
    MakeEntitySystemString(m_pAsString);
    v14->m_iszAutoAttackRangedParticle.u.m_Id = v15;
  }
  v6 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(v6, 1542, 0.1, 0.1, 9, 0, 1.0);
  if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    v7 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_terrorblade/terrorblade_metamorphosis_transform_end.vpcf",
                 1,
                 v7,
                 0,
                 0);
    v10 = CDOTA_Buff::GetCaster(this);
    if ( v10 != 0 )
    {
      v11 = __dynamic_cast(v10, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Terrorblade, 0);
      if ( v11 != 0 )
        (*(*v11 + 1648LL))(v11, Particle, 0);
    }
    v12 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
  }
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::DeclareFunctions  (line 1001, @0x0000000002cc9a10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttackTimeConstant(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::ModelScale(CModifierParams const&), CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierMoveSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::DeclareFunctions(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this)
{
  this->m_Functions[26].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttackTimeConstant;
  this->m_Functions[26].__delta = 0;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[69].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierAttackRangeBonus;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetActivityTranslationModifiers;
  this->m_Functions[152].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierModelChange;
  this->m_Functions[3].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::ModelScale;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[3].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[11].__pfn = CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[11].__delta = 0;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::ModelScale  (line 1014, @0x0000000002cc9ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::ModelScale(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  return 0xC120000000000001LL;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetActivityTranslationModifiers  (line 1020, @0x0000000002cc9af0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetActivityTranslationModifiers(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "metamorphosis";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierMoveSpeedBonus_Constant  (line 1027, @0x0000000002cc9b10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->speed_loss;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttackTimeConstant  (line 1034, @0x0000000002cc9b30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttackTimeConstant(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->base_attack_time) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttack_BonusDamage  (line 1042, @0x0000000002cc9b50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierAttackRangeBonus  (line 1049, @0x0000000002cd29f0, libserver.so)
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetAbility(this), *&result.m_eType = 1, *(result.m_szVal + 852) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->bonus_range;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierModelChange  (line 1057, @0x0000000002cc9b70, libserver.so)
// strings: "models/heroes/terrorblade/demon.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_Terrorblade_Metamorphosis::GetModifierModelChange(
        CDOTA_Modifier_Terrorblade_Metamorphosis *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/terrorblade/demon.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_Terrorblade_Sunder::~CDOTA_Ability_Terrorblade_Sunder  (line 1068, @0x0000000002d2c180, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Terrorblade_Sunder::~CDOTA_Ability_Terrorblade_Sunder(
        CDOTA_Ability_Terrorblade_Sunder *const this)
{
  this->_vptr_IHandleEntity = &off_4641050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Terrorblade_Sunder::~CDOTA_Ability_Terrorblade_Sunder  (line 1068, @0x0000000002d2c1a0, libserver.so)  // inlines: ~CDOTA_Ability_Terrorblade_Sunder
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Terrorblade_Sunder::~CDOTA_Ability_Terrorblade_Sunder(
        CDOTA_Ability_Terrorblade_Sunder *const this)
{
  this->_vptr_IHandleEntity = &off_4641050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Terrorblade_Sunder::Schema_DynamicBinding  (line 1070, @0x0000000002d1f1f0, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Sunder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Sunder::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Sunder *const this)
{
  return CDOTA_Ability_Terrorblade_Sunder::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1070, @0x0000000002d1f200, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::DestructInstance  (line 1070, @0x0000000002d1f210, libserver.so)  // inlines: Destruct<CDOTA_Ability_Terrorblade_Sunder>
void __fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::FreeInstance  (line 1070, @0x0000000002d1f230, libserver.so)
void __fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::CanAllocate  (line 1070, @0x0000000002d1f250, libserver.so)
bool __fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1070, @0x0000000002d1f260, libserver.so)
// globals: CDOTA_Ability_Terrorblade_Sunder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Terrorblade_Sunder::s_pSchemaBinding;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::AllocateInstance  (line 1070, @0x0000000002d24d50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::ConstructInstance  (line 1070, @0x0000000002d293d0, libserver.so)  // inlines: CDOTA_Ability_Terrorblade_Sunder, Construct<CDOTA_Ability_Terrorblade_Sunder>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4641050;
  }
  return p;
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1070, @0x0000000002d34630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1070, @0x0000000002d34650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal  (line 1070, @0x0000000002d49850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "terrorblade_sunder", "CDOTA_Ability_Terrorblade_Sunder"
// globals: `guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass, CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass, __dso_handle, CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo, CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo
CEntityClass *__cdecl CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass);
    CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass._vptr_CEntityClass = off_4640FD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass);
    __cxa_atexit(
      CDOTA_Ability_Terrorblade_Sunder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Terrorblade_SunderClass != 0 )
    return &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass;
  if ( `guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo,
      "CDOTA_Ability_Terrorblade_Sunder",
      "terrorblade_sunder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo);
  }
  CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass.m_pClassInfo = &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo;
  CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass.m_pBaseClassInfo = CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Terrorblade_SunderClass = &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass;
  CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClassInfo.m_pClass = &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass;
  CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Terrorblade_SunderClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Terrorblade_Sunder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Terrorblade_SunderClass;
}


// CDOTA_Ability_Terrorblade_Sunder::YouForgotToImplementOrDeclareServerClass  (line 1081, @0x0000000002cc9b90, libserver.so)
int __fastcall CDOTA_Ability_Terrorblade_Sunder::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Terrorblade_Sunder *const this)
{
  return 0;
}


// CDOTA_Ability_Terrorblade_Sunder::GetServerClass  (line 1081, @0x0000000002cde130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Terrorblade_Sunder::GetServerClass(CDOTA_Ability_Terrorblade_Sunder *const this)
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


// CDOTA_Ability_Terrorblade_Sunder::GetCooldown  (line 1091, @0x0000000002cfebf0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_terrorblade"
float __fastcall CDOTA_Ability_Terrorblade_Sunder::GetCooldown(
        CDOTA_Ability_Terrorblade_Sunder *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_terrorblade", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Terrorblade_Sunder::CastFilterResult  (line 1106, @0x0000000002cd1480, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Terrorblade_Sunder::CastFilterResult(
        CDOTA_Ability_Terrorblade_Sunder *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = UnitFilter(pTarget, 3, 1, &stru_20010, Caster->m_iTeamNum.m_Value);
  if ( v5 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v5;
}


// CDOTA_Ability_Terrorblade_Sunder::GetCustomCastError  (line 1120, @0x0000000002ccbac0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Terrorblade_Sunder::GetCustomCastError(
        CDOTA_Ability_Terrorblade_Sunder *const this,
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


// CDOTA_Ability_Terrorblade_Sunder::OnSpellStart  (line 1130, @0x0000000002cfd6c0, libserver.so)  // inlines: GetAbilityData, GetHealthPercent, GetLevelSpecialValueFor<int>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, __dynamic_cast, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound (15 total)
// strings: "hit_point_minimum_pct", "particles/units/heroes/hero_terrorblade/terrorblade_sunder.vpcf", "attach_hitloc", "Hero_Terrorblade.Sunder.Cast", "Hero_Terrorblade.Sunder.Target"
// globals: `typeinfo for'CDOTA_Unit_Hero_Terrorblade
void __fastcall CDOTA_Ability_Terrorblade_Sunder::OnSpellStart(CDOTA_Ability_Terrorblade_Sunder *const this)
{
  int LevelSpecialValue; // r13d
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // r14
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  CDOTA_BaseNPC *v15; // rax
  int v16; // r15d
  CDOTA_BaseNPC *v17; // rax
  int v18; // eax
  CDOTA_BaseNPC *v19; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int Particle; // r13d
  CDOTA_ParticleManager *v22; // rax
  __int64 v23; // r14
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rdi
  CDOTA_Unit_Hero_Terrorblade *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // r13
  CDOTA_ParticleManager *v29; // rax
  unsigned int v30; // r13d
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // r15
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm3_4
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // r13
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  __int64 v45; // r14
  CDOTA_BaseNPC *v46; // r15
  CDOTA_ParticleManager *v47; // rax
  CDOTA_Unit_Hero_Terrorblade *pTB; // [rsp+10h] [rbp-40h]
  CDOTA_Unit_Hero_Terrorblade *pTBa; // [rsp+10h] [rbp-40h]
  vec_t vecFallbackPosition; // [rsp+18h] [rbp-38h]
  vec_t vecFallbackPositiona; // [rsp+18h] [rbp-38h]
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v53; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v54; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v55; // 0:xmm0_8.8,8:xmm1_4.4

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hit_point_minimum_pct", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v6 = 100LL * CBaseEntity::GetHealth(Caster);
    v7 = (*(Caster->_vptr_IHandleEntity + 156))(Caster);
    v8 = v7;
    if ( v7 <= 0 )
      v8 = 1;
    v9 = v6 / v8;
    v10 = 100LL * CBaseEntity::GetHealth(v4);
    v11 = (*(v4->_vptr_IHandleEntity + 156))(v4);
    v12 = 1;
    if ( v11 > 0 )
      v12 = v11;
    v13 = v10 / v12;
    v14 = v10 / v12;
    if ( LevelSpecialValue > v13 )
      v14 = LevelSpecialValue;
    if ( v9 >= LevelSpecialValue )
      LevelSpecialValue = v9;
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = (*(v15->_vptr_IHandleEntity + 156))(v15);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::ModifyHealth(v17, v14 * v16 / 100, this, 0, 32);
    v18 = (*(v4->_vptr_IHandleEntity + 156))(v4);
    CDOTA_BaseNPC::ModifyHealth(v4, v18 * LevelSpecialValue / 100, this, 0, 32);
    v19 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_terrorblade/terrorblade_sunder.vpcf",
                 2,
                 v19,
                 0,
                 0);
    pTB = CDOTABaseAbility::GetCaster(this);
    v22 = GetParticleManager();
    v23 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v22, Particle, 0, pTB, 5, "attach_hitloc", vec3_invalid, 1);
    v24 = GetParticleManager();
    v52.z = vecFallbackPosition;
    *&v52.x = v23;
    CDOTA_ParticleManager::SetParticleControlEnt(v24, Particle, 1, v4, 5, "attach_hitloc", v52, 1);
    v25 = CDOTABaseAbility::GetCaster(this);
    if ( v25 != 0
      && (v26 = __dynamic_cast(v25, &`typeinfo for'CDOTA_BaseNPC, &`typeinfo for'CDOTA_Unit_Hero_Terrorblade, 0)) != 0 )
    {
      pTBa = v26;
      (*(v26->_vptr_IHandleEntity + 206))(v26, Particle, 0);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
      v28 = CDOTABaseAbility::GetCaster(this);
      v29 = GetParticleManager();
      v30 = CDOTA_ParticleManager::CreateParticle(
              v29,
              "particles/units/heroes/hero_terrorblade/terrorblade_sunder.vpcf",
              2,
              v28,
              0,
              0);
      v31 = GetParticleManager();
      v53.z = vecFallbackPosition;
      *&v53.x = v23;
      CDOTA_ParticleManager::SetParticleControlEnt(v31, v30, 0, v4, 5, "attach_hitloc", v53, 1);
      v32 = CDOTABaseAbility::GetCaster(this);
      v33 = GetParticleManager();
      v54.z = vecFallbackPosition;
      *&v54.x = v23;
      CDOTA_ParticleManager::SetParticleControlEnt(v33, v30, 1, v32, 5, "attach_hitloc", v54, 1);
      (*(pTBa->_vptr_IHandleEntity + 206))(pTBa, v30, 0);
    }
    else
    {
      v41 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v41, Particle);
      v42 = CDOTABaseAbility::GetCaster(this);
      v43 = GetParticleManager();
      v30 = CDOTA_ParticleManager::CreateParticle(
              v43,
              "particles/units/heroes/hero_terrorblade/terrorblade_sunder.vpcf",
              2,
              v42,
              0,
              0);
      v44 = GetParticleManager();
      v45 = *&vec3_invalid.x;
      vecFallbackPositiona = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v44, v30, 0, v4, 5, "attach_hitloc", vec3_invalid, 1);
      v46 = CDOTABaseAbility::GetCaster(this);
      v47 = GetParticleManager();
      *&v55.x = v45;
      v55.z = vecFallbackPositiona;
      CDOTA_ParticleManager::SetParticleControlEnt(v47, v30, 1, v46, 5, "attach_hitloc", v55, 1);
    }
    v34 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v34, v30);
    v35 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Terrorblade.Sunder.Cast", v35);
    DOTA_EmitSound(10, "Hero_Terrorblade.Sunder.Target", v4);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v39 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v39,
      0,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      -1.0,
      v40);
  }
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect  (line 1176, @0x0000000002d27610, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4641B10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect  (line 1176, @0x0000000002d27630, libserver.so)  // inlines: ~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::~CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4641B10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::GetStatusEffectName  (line 1181, @0x0000000002d1f270, libserver.so)
// strings: "particles/status_fx/status_effect_faceless_chronosphere.vpcf"
const char *__fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::GetStatusEffectName(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  return "particles/status_fx/status_effect_faceless_chronosphere.vpcf";
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::StatusEffectPriority  (line 1182, @0x0000000002d1f280, libserver.so)
int __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::StatusEffectPriority(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  return 30;
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::RemoveOnDeath  (line 1183, @0x0000000002d1f290, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::RemoveOnDeath(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  return 0;
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::IsPermanent  (line 1184, @0x0000000002d1f2a0, libserver.so)
bool __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::IsPermanent(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  return 1;
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::CheckState  (line 1200, @0x0000000002cd24e0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::CheckState(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this,
        CDOTABuffState *const buffState)
{
  if ( this->m_bFrozen )
  {
    buffState->m_nEnabledStateMask |= 0x40000uLL;
    buffState->m_nDisabledStateMask &= ~0x40000uLL;
  }
  else
  {
    buffState->m_nDisabledStateMask |= 0x40000uLL;
    buffState->m_nEnabledStateMask &= ~0x40000uLL;
  }
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnCreated  (line 1214, @0x0000000002cccc50, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnCreated(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this,
        KeyValues *pKV)
{
  int (**vptr_CDOTA_Buff)(...); // rax
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm1_4

  this->m_bFrozen = 0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_bFlail = 0;
  vptr_CDOTA_Buff[63](this, 1, 3.0);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1508, 0.1, 0.1, 9, 0, 1.0);
  CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v5);
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnIntervalThink  (line 1239, @0x0000000002ccccd0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnIntervalThink(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    v3 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v3, 1508, 0.1, 0.1, 9, 0, 1.0);
    if ( this->m_bFlail )
    {
      this->m_bFrozen = 1;
      CDOTA_Buff::StartIntervalThink(this, 0.2, v4);
    }
    else
    {
      CDOTA_Buff::StartIntervalThink(this, 0.2, v4);
      this->m_bFlail = 1;
    }
  }
}


// CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnDestroy  (line 1262, @0x0000000002cd1540, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveAllGestures, CBaseEntity::AddEffects
void __fastcall CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect::OnDestroy(
        CDOTA_Modifier_Terrorblade_Arcana_Kill_Effect *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveAllGestures(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  if ( (*(v3->_vptr_IHandleEntity + 408))(v3) == 0 )
  {
    v4 = CDOTA_Buff::GetParent(this);
    CBaseEntity::AddEffects(v4, 32);
  }
}


