// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:37
class CDOTA_Unit_Hero_CrystalMaiden : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_iParticleMouthIndex;  // +0x16ec
	int m_iParticleHandRIndex;  // +0x16f0
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
	CDOTA_Unit_Hero_CrystalMaiden(CDOTA_Unit_Hero_CrystalMaiden &);
	CDOTA_Unit_Hero_CrystalMaiden(CDOTA_Unit_Hero_CrystalMaiden &);
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
	CDOTA_Unit_Hero_CrystalMaiden();
	virtual ~CDOTA_Unit_Hero_CrystalMaiden();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// sizeof = 5880
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:56
class C_CDOTA_Unit_Hero_CrystalMaiden_MapInstall {
	C_CDOTA_Unit_Hero_CrystalMaiden_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:98
class CDOTA_Ability_CrystalMaiden_CrystalNova : public CDOTABaseAbility {
public:

private:

	int nova_damage;  // +0x390
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
	CDOTA_Ability_CrystalMaiden_CrystalNova(CDOTA_Ability_CrystalMaiden_CrystalNova &);
	CDOTA_Ability_CrystalMaiden_CrystalNova(CDOTA_Ability_CrystalMaiden_CrystalNova &);
	CDOTA_Ability_CrystalMaiden_CrystalNova();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_CrystalMaiden_CrystalNova();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// vtable[310] GetStolenActivityModifier
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:125
class C_CDOTA_Ability_CrystalMaiden_CrystalNova_MapInstall {
	C_CDOTA_Ability_CrystalMaiden_CrystalNova_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:208
class CDOTA_Modifier_CrystalMaiden_CrystalNova : public CDOTA_Buff {
public:

private:

	int movespeed_slow;  // +0xba8
	int attackspeed_slow;  // +0xbac
	CDOTA_Modifier_CrystalMaiden_CrystalNova();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_CrystalMaiden_CrystalNova();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:266
class CDOTA_Ability_CrystalMaiden_Frostbite : public CDOTABaseAbility {
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
	CDOTA_Ability_CrystalMaiden_Frostbite(CDOTA_Ability_CrystalMaiden_Frostbite &);
	CDOTA_Ability_CrystalMaiden_Frostbite(CDOTA_Ability_CrystalMaiden_Frostbite &);
	CDOTA_Ability_CrystalMaiden_Frostbite();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_CrystalMaiden_Frostbite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:357
class CDOTA_Modifier_CrystalMaiden_Frostbite : public CDOTA_Buff {
public:

private:

	int max_ticks;  // +0xba8
	float damage;  // +0xbac
	CDOTA_Modifier_CrystalMaiden_Frostbite();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_CrystalMaiden_Frostbite();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:455
class CDOTA_Ability_CrystalMaiden_BrillianceAura : public CDOTABaseAbility {
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
	CDOTA_Ability_CrystalMaiden_BrillianceAura(CDOTA_Ability_CrystalMaiden_BrillianceAura &);
	CDOTA_Ability_CrystalMaiden_BrillianceAura(CDOTA_Ability_CrystalMaiden_BrillianceAura &);
	CDOTA_Ability_CrystalMaiden_BrillianceAura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnOwnerSpawned();
	virtual void OnSpellStart();
	void UpdateAura();
	virtual ~CDOTA_Ability_CrystalMaiden_BrillianceAura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[269] OnOwnerSpawned
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:547
class CDOTA_Modifier_CrystalMaiden_BrillianceAura : public CDOTA_Buff {
public:

	CDOTA_Modifier_CrystalMaiden_BrillianceAura(CDOTA_Modifier_CrystalMaiden_BrillianceAura &);
	CDOTA_Modifier_CrystalMaiden_BrillianceAura(const CDOTA_Modifier_CrystalMaiden_BrillianceAura &);
	CDOTA_Modifier_CrystalMaiden_BrillianceAura();

private:

	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_CrystalMaiden_BrillianceAura();

	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:561
class CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect : public CDOTA_Buff {
public:

private:

	float mana_regen;  // +0xba8
	float mana_regen_self;  // +0xbac
	CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:624
class CDOTA_Ability_CrystalMaiden_FreezingField : public CDOTABaseAbility {
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
	CDOTA_Ability_CrystalMaiden_FreezingField(CDOTA_Ability_CrystalMaiden_FreezingField &);
	CDOTA_Ability_CrystalMaiden_FreezingField(CDOTA_Ability_CrystalMaiden_FreezingField &);
	CDOTA_Ability_CrystalMaiden_FreezingField();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual float GetPlaybackRateOverride();
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_CrystalMaiden_FreezingField();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[213] GetPlaybackRateOverride
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:651
class C_CDOTA_Ability_CrystalMaiden_FreezingField_MapInstall {
	C_CDOTA_Ability_CrystalMaiden_FreezingField_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:712
class CDOTA_Modifier_CrystalMaiden_FreezingField : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage;  // +0xbac
	float explosion_interval;  // +0xbb0
	int explosion_radius;  // +0xbb4
	float slow_duration;  // +0xbb8
	int explosion_min_dist;  // +0xbbc
	int explosion_max_dist;  // +0xbc0
	float scepter_delay;  // +0xbc4
	float m_fLastTick;  // +0xbc8
	float m_fTimeAccumulator;  // +0xbcc
	int m_iExplosionCount;  // +0xbd0
	int m_iExplosionTotalCount;  // +0xbd4
	int m_iExplosionQuadrant;  // +0xbd8
	int m_nFXIndex;  // +0xbdc
	CDOTA_Modifier_CrystalMaiden_FreezingField();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual ~CDOTA_Modifier_CrystalMaiden_FreezingField();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:936
class CDOTA_Modifier_CrystalMaiden_FreezingField_Slow : public CDOTA_Buff {
public:

private:

	int movespeed_slow;  // +0xba8
	int attack_slow;  // +0xbac
	CDOTA_Modifier_CrystalMaiden_FreezingField_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_crystal_maiden.cpp:993
class CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker : public CDOTA_Buff {
public:

	CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker(CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker &);
	CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker(const CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker &);
	CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker();
	virtual bool IsHidden();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker();

	// vtable[11] IsHidden
	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_CrystalMaiden::~CDOTA_Unit_Hero_CrystalMaiden  (line 37, @0x0000000002a18610, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::~CDOTA_Unit_Hero_CrystalMaiden(
        CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  this->_vptr_IHandleEntity = &off_432A650;
  this->_vptr_INextBotEventResponder = &off_432B630;
  this->_vptr_CObstructionObject = &off_432B960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_CrystalMaiden::~CDOTA_Unit_Hero_CrystalMaiden  (line 37, @0x0000000002a18650, libserver.so)  // inlines: ~CDOTA_Unit_Hero_CrystalMaiden
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::~CDOTA_Unit_Hero_CrystalMaiden(
        CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  this->_vptr_IHandleEntity = &off_432A650;
  this->_vptr_INextBotEventResponder = &off_432B630;
  this->_vptr_CObstructionObject = &off_432B960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_CrystalMaiden::Schema_DynamicBinding  (line 39, @0x0000000002a08090, libserver.so)
// globals: CDOTA_Unit_Hero_CrystalMaiden::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_CrystalMaiden::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  return CDOTA_Unit_Hero_CrystalMaiden::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002a080c0, libserver.so)
// globals: CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002a080d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_CrystalMaiden>
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002a080f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002a08110, libserver.so)
bool __fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002a08120, libserver.so)
// globals: CDOTA_Unit_Hero_CrystalMaiden::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_CrystalMaiden::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002a0f200, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5880);
  memset(v1, 0, 0x16F8u);
  return v1;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002a13390, libserver.so)  // inlines: CDOTA_Unit_Hero_CrystalMaiden, Construct<CDOTA_Unit_Hero_CrystalMaiden>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_432A650;
    *(p + 236) = &off_432B630;
    *(p + 257) = &off_432B960;
    *(p + 1468) = -1;
  }
  return p;
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a207f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a20ac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal  (line 39, @0x0000000002a3c770, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_crystal_maiden", "CDOTA_Unit_Hero_CrystalMaiden"
// globals: `guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass, CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass, __dso_handle, CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo, CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass);
    CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass._vptr_CEntityClass = off_432A5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_CrystalMaiden::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_CrystalMaidenClass != 0 )
    return &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass;
  if ( `guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo,
      "CDOTA_Unit_Hero_CrystalMaiden",
      "npc_dota_hero_crystal_maiden",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo);
  }
  CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass.m_pClassInfo = &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo;
  CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass.m_pBaseClassInfo = CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_CrystalMaidenClass = &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass;
  CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClassInfo.m_pClass = &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass;
  CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_CrystalMaidenClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_CrystalMaiden::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_CrystalMaidenClass;
}


// CDOTA_Unit_Hero_CrystalMaiden::GetDeathEffectName  (line 44, @0x0000000002a08130, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_CrystalMaiden::GetDeathEffectName(CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_CrystalMaiden::YouForgotToImplementOrDeclareServerClass  (line 56, @0x00000000029b46a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_CrystalMaiden::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_CrystalMaiden::GetServerClass  (line 56, @0x00000000029c94f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_CrystalMaiden::GetServerClass(CDOTA_Unit_Hero_CrystalMaiden *const this)
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


// CDOTA_Unit_Hero_CrystalMaiden::OnDying  (line 67, @0x00000000029ba1a0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_CrystalMaiden::OnDying(CDOTA_Unit_Hero_CrystalMaiden *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::~CDOTA_Ability_CrystalMaiden_CrystalNova  (line 98, @0x0000000002a16b60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::~CDOTA_Ability_CrystalMaiden_CrystalNova(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  this->_vptr_IHandleEntity = &off_432BA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::~CDOTA_Ability_CrystalMaiden_CrystalNova  (line 98, @0x0000000002a16b80, libserver.so)  // inlines: ~CDOTA_Ability_CrystalMaiden_CrystalNova
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::~CDOTA_Ability_CrystalMaiden_CrystalNova(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  this->_vptr_IHandleEntity = &off_432BA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::Schema_DynamicBinding  (line 100, @0x0000000002a08140, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_CrystalNova::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  return CDOTA_Ability_CrystalMaiden_CrystalNova::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 100, @0x0000000002a08150, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::DestructInstance  (line 100, @0x0000000002a08160, libserver.so)  // inlines: Destruct<CDOTA_Ability_CrystalMaiden_CrystalNova>
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::FreeInstance  (line 100, @0x0000000002a08180, libserver.so)
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::CanAllocate  (line 100, @0x0000000002a081a0, libserver.so)
bool __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 100, @0x0000000002a081b0, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_CrystalNova::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_CrystalNova::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::AllocateInstance  (line 100, @0x0000000002a0f240, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::ConstructInstance  (line 100, @0x0000000002a13d20, libserver.so)  // inlines: CDOTA_Ability_CrystalMaiden_CrystalNova, Construct<CDOTA_Ability_CrystalMaiden_CrystalNova>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_432BA30;
  }
  return p;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000002a1ef00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000002a1ef20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal  (line 100, @0x0000000002a357e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "crystal_maiden_crystal_nova", "CDOTA_Ability_CrystalMaiden_CrystalNova"
// globals: `guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass, CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass, __dso_handle, CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo, CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo
CEntityClass *__cdecl CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass);
    CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass._vptr_CEntityClass = off_432B9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass);
    __cxa_atexit(
      CDOTA_Ability_CrystalMaiden_CrystalNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass != 0 )
    return &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass;
  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo,
      "CDOTA_Ability_CrystalMaiden_CrystalNova",
      "crystal_maiden_crystal_nova",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo);
  }
  CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass.m_pClassInfo = &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo;
  CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass.m_pBaseClassInfo = CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass = &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass;
  CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClassInfo.m_pClass = &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass;
  CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CrystalMaiden_CrystalNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_CrystalNovaClass;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::GetStolenActivityModifier  (line 119, @0x0000000002a081c0, libserver.so)
const char *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::GetStolenActivityModifier(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  return "crystal_nova";
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::YouForgotToImplementOrDeclareServerClass  (line 125, @0x00000000029b46b0, libserver.so)
int __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  return 0;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::GetServerClass  (line 125, @0x00000000029c98f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::GetServerClass(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
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


// CDOTA_Ability_CrystalMaiden_CrystalNova::OnSpellStart  (line 134, @0x00000000029f0730, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (21 total)
// strings: "nova_damage", "special_bonus_unique_crystal_maiden_2", "modifier_crystal_maiden_crystal_nova", "particles/units/heroes/hero_crystalmaiden/maiden_crystal_nova.vpcf", "hero_Crystal.crystalNova"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::OnSpellStart(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v6; // xmm3
  float v7; // r12d
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r12
  int v15; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  __m128i v26; // xmm0
  float v27; // ebx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  float flDamage; // [rsp+2Ch] [rbp-B4h]
  Vector vPos; // [rsp+40h] [rbp-A0h] BYREF
  Vector vLocation; // [rsp+50h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+60h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v36; // [rsp+A8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "nova_damage", -1, 0);
  this->nova_damage = v3;
  flDamage = v3;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_crystal_maiden_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  *v6.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, &vPosition, v8, v7, &entities, 2, 19, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_crystal_maiden_crystal_nova");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v10);
  LODWORD(v8) = CDOTABaseAbility::CreateAbilityParticleEffect(
                  this,
                  "particles/units/heroes/hero_crystalmaiden/maiden_crystal_nova.vpcf",
                  2,
                  0,
                  0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v8, 0, *&vPosition.x, vPosition.z);
  *&vLocation.x = LODWORD(v7) | 0x4000000000000000LL;
  vLocation.z = 1000.0;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, v8, 1, *&vLocation.x, 1000.0);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, v8);
  if ( entities.m_Size > 0 )
  {
    v14 = 0;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &entities.m_Memory.m_pMemory[v14];
        m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v15;
        ++v14;
        if ( entities.m_Size <= v15 )
          goto LABEL_14;
      }
      v22 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v22, m_pInstance, this, flDamage, 2, 0);
      v23 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_crystal_maiden_crystal_nova", &kv, 0);
      ++v15;
      ++v14;
    }
    while ( entities.m_Size > v15 );
  }
LABEL_14:
  v24 = CDOTABaseAbility::GetCaster(this);
  if ( v24 != 0 && (v24->m_iUnitType & 1) != 0 )
    v25 = v24;
  else
    v25 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v25,
    0,
    kill_eater_event_t::kKillEaterEventType_CrystalMaiden_CrystalNovas,
    1,
    INVALID_ITEM_DEF_INDEX);
  CDOTABaseAbility::GetCursorPosition(this);
  vPos = CDOTABaseAbility::GetCursorPosition(this);
  *v26.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_CRYSTALNOVA,
    v28->m_iTeamNum.m_Value,
    &vLocation,
    1000.0,
    v27,
    1);
  v29 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "hero_Crystal.crystalNova", v29);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::GetAbilityDamageToTargetOverInterval  (line 186, @0x00000000029e3690, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "nova_damage"
__int64 __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "nova_damage", -1, 0);
    this->nova_damage = LevelSpecialValue;
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_CrystalMaiden_CrystalNova::GetSlowDuration  (line 199, @0x00000000029de7c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_CrystalMaiden_CrystalNova::GetSlowDuration(
        CDOTA_Ability_CrystalMaiden_CrystalNova *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::~CDOTA_Modifier_CrystalMaiden_CrystalNova  (line 208, @0x0000000002a126a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::~CDOTA_Modifier_CrystalMaiden_CrystalNova(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  this->_vptr_CDOTA_Buff = &off_432C4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::~CDOTA_Modifier_CrystalMaiden_CrystalNova  (line 208, @0x0000000002a126c0, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_CrystalNova
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::~CDOTA_Modifier_CrystalMaiden_CrystalNova(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  this->_vptr_CDOTA_Buff = &off_432C4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::IsDebuff  (line 213, @0x0000000002a081d0, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::IsDebuff(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::GetEffectName  (line 221, @0x0000000002a081e0, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::GetEffectName(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::GetStatusEffectName  (line 222, @0x0000000002a081f0, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::GetStatusEffectName(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::StatusEffectPriority  (line 223, @0x0000000002a08200, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::StatusEffectPriority(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  return 10;
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::OnCreated  (line 234, @0x00000000029f7cc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "movespeed_slow", "attackspeed_slow"
void __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::OnCreated(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movespeed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attackspeed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attackspeed_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->movespeed_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attackspeed_slow = 0;
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::DeclareFunctions  (line 242, @0x00000000029b46c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::DeclareFunctions(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierMoveSpeedBonus_Percentage  (line 248, @0x00000000029b4700, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierAttackSpeedBonus_Constant  (line 255, @0x00000000029b4720, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CrystalMaiden_CrystalNova::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_CrystalMaiden_CrystalNova *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attackspeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::~CDOTA_Ability_CrystalMaiden_Frostbite  (line 266, @0x0000000002a16bb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::~CDOTA_Ability_CrystalMaiden_Frostbite(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  this->_vptr_IHandleEntity = &off_432C850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::~CDOTA_Ability_CrystalMaiden_Frostbite  (line 266, @0x0000000002a16bd0, libserver.so)  // inlines: ~CDOTA_Ability_CrystalMaiden_Frostbite
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::~CDOTA_Ability_CrystalMaiden_Frostbite(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  this->_vptr_IHandleEntity = &off_432C850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::Schema_DynamicBinding  (line 268, @0x0000000002a08210, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_Frostbite::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  return CDOTA_Ability_CrystalMaiden_Frostbite::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 268, @0x0000000002a08220, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::DestructInstance  (line 268, @0x0000000002a08230, libserver.so)  // inlines: Destruct<CDOTA_Ability_CrystalMaiden_Frostbite>
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::FreeInstance  (line 268, @0x0000000002a08250, libserver.so)
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::CanAllocate  (line 268, @0x0000000002a08270, libserver.so)
bool __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 268, @0x0000000002a08280, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_Frostbite::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_Frostbite::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::AllocateInstance  (line 268, @0x0000000002a0f280, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::ConstructInstance  (line 268, @0x0000000002a13d50, libserver.so)  // inlines: CDOTA_Ability_CrystalMaiden_Frostbite, Construct<CDOTA_Ability_CrystalMaiden_Frostbite>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_432C850;
  }
  return p;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 268, @0x0000000002a1ef50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 268, @0x0000000002a1ef70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal  (line 268, @0x0000000002a3e090, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "crystal_maiden_frostbite", "CDOTA_Ability_CrystalMaiden_Frostbite"
// globals: `guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass, CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo, CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo
CEntityClass *__cdecl CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass) != 0 )
  {
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pClassInfo = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_flags = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pInputs = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_nInputCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pOutputs = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_nOutputCount = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pGameClass = 0;
    CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass._vptr_CEntityClass = off_432C7D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass);
    __cxa_atexit(
      CDOTA_Ability_CrystalMaiden_Frostbite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CrystalMaiden_FrostbiteClass != 0 )
    return &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass;
  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo,
      "CDOTA_Ability_CrystalMaiden_Frostbite",
      "crystal_maiden_frostbite",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo);
  }
  CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pClassInfo = &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo;
  CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pBaseClassInfo = CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CrystalMaiden_FrostbiteClass = &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass;
  CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClassInfo.m_pClass = &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass;
  CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CrystalMaiden_FrostbiteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CrystalMaiden_Frostbite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FrostbiteClass;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::GetStolenActivityModifier  (line 273, @0x0000000002a08290, libserver.so)
const char *__fastcall CDOTA_Ability_CrystalMaiden_Frostbite::GetStolenActivityModifier(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  return "frostbite";
}


// CDOTA_Ability_CrystalMaiden_Frostbite::IsHiddenWhenStolen  (line 278, @0x0000000002a082a0, libserver.so)
bool __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::IsHiddenWhenStolen(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  return 1;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::OnSpellStart  (line 285, @0x00000000029de7e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsConsideredHero, IsInvulnerable, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (17 total)
// strings: "special_bonus_unique_crystal_maiden_1", "modifier_crystal_maiden_frostbite", "particles/units/heroes/hero_crystalmaiden/maiden_frostbite.vpcf", "modifier_crystal_maiden_frostbite_ministun", "modifier_stunned", "hero_Crystal.frostbite"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::OnSpellStart(CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // r12
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v6; // r12
  __int64 v7; // rax
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // r15
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC_Hero *v18; // rdi
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv_ministun; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "creep_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_crystal_maiden_1", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "value", 1, 1);
  }
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v6 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v7 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v7 & 0x100) == 0 && (v7 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v6, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_crystal_maiden_frostbite");
      KeyValues::SetFloat(&kv, "duration", v8);
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v6, v9, this, "modifier_crystal_maiden_frostbite", &kv, 0);
      v10 = CDOTABaseAbility::GetCaster(this);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_crystalmaiden/maiden_frostbite.vpcf",
                                1,
                                v10,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 1, v6, 1, 0, vec3_invalid, 1);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v13, AbilityParticleEffect);
      KeyValues::KeyValues(&kv_ministun, "modifier_crystal_maiden_frostbite_ministun");
      KeyValues::SetFloat(&kv_ministun, "duration", v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v6, v15, this, "modifier_stunned", &kv_ministun, 0);
      v16 = 0;
      if ( v6->m_bIsDOTANPC
        && (v6[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
        && LOBYTE(v6[4].m_pfnMoveDone.__delta) == 0 )
      {
        v16 = v6;
      }
      v17 = CDOTABaseAbility::GetCaster(this);
      if ( v17 != 0 && (v17->m_iUnitType & 1) != 0 )
        v18 = v17;
      else
        v18 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v18,
        v16,
        kill_eater_event_t::kKillEaterEventType_CrystalMaiden_FrostbittenEnemies,
        1,
        INVALID_ITEM_DEF_INDEX);
      CDOTA_BaseNPC::UnitEmitSound(v6, "hero_Crystal.frostbite", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv_ministun);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_CrystalMaiden_Frostbite::GetAbilityDamageToTargetOverInterval  (line 335, @0x00000000029eeeb0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this,
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
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_CrystalMaiden_Frostbite::GetStunDuration  (line 348, @0x00000000029deb20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_CrystalMaiden_Frostbite::GetStunDuration(
        CDOTA_Ability_CrystalMaiden_Frostbite *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::~CDOTA_Modifier_CrystalMaiden_Frostbite  (line 357, @0x0000000002a12650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::~CDOTA_Modifier_CrystalMaiden_Frostbite(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  this->_vptr_CDOTA_Buff = &off_432D310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::~CDOTA_Modifier_CrystalMaiden_Frostbite  (line 357, @0x0000000002a12670, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_Frostbite
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::~CDOTA_Modifier_CrystalMaiden_Frostbite(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  this->_vptr_CDOTA_Buff = &off_432D310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::GetPriority  (line 368, @0x0000000002a082b0, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::GetPriority(CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  return 2;
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::GetStatusEffectName  (line 371, @0x0000000002a082c0, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::GetStatusEffectName(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::StatusEffectPriority  (line 372, @0x0000000002a082d0, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::StatusEffectPriority(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  return 10;
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::OnCreated  (line 383, @0x00000000029e0aa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_crystalmaiden/maiden_frostbite_buff.vpcf"
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::OnCreated(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // eax

  Float = KeyValues::GetFloat(pKV, "duration", v2);
  this->max_ticks = (Float + Float);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage", -1, 0);
  else
    this->damage = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v6);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_crystalmaiden/maiden_frostbite_buff.vpcf",
                         1,
                         Parent,
                         0);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::OnRefresh  (line 405, @0x00000000029b6610, libserver.so)
// calls: KeyValues::GetFloat
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::OnRefresh(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float Float; // xmm0_4

  Float = KeyValues::GetFloat(pKV, "duration", v2);
  this->max_ticks = (Float + Float);
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::OnIntervalThink  (line 418, @0x00000000029b75c0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::OnIntervalThink(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  int max_ticks; // eax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v6; // [rsp+Ch] [rbp-24h]

  max_ticks = this->max_ticks;
  if ( max_ticks > 0 )
  {
    this->max_ticks = max_ticks - 1;
    v6 = 0.5 * this->damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, v6, 2, 0);
  }
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::OnDestroy  (line 431, @0x00000000029b7ac0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "hero_Crystal.frostbite"
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::OnDestroy(CDOTA_Modifier_CrystalMaiden_Frostbite *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "hero_Crystal.frostbite");
}


// CDOTA_Modifier_CrystalMaiden_Frostbite::CheckState  (line 440, @0x00000000029b4740, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_CrystalMaiden_Frostbite::CheckState(
        CDOTA_Modifier_CrystalMaiden_Frostbite *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFFFFFCLL;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x7C | 0x80;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 3;
  buffState->m_nDisabledStateMask = v3;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::~CDOTA_Ability_CrystalMaiden_BrillianceAura  (line 455, @0x0000000002a16c00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::~CDOTA_Ability_CrystalMaiden_BrillianceAura(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  this->_vptr_IHandleEntity = &off_432D670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::~CDOTA_Ability_CrystalMaiden_BrillianceAura  (line 455, @0x0000000002a16c20, libserver.so)  // inlines: ~CDOTA_Ability_CrystalMaiden_BrillianceAura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::~CDOTA_Ability_CrystalMaiden_BrillianceAura(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  this->_vptr_IHandleEntity = &off_432D670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::Schema_DynamicBinding  (line 457, @0x0000000002a082e0, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_BrillianceAura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  return CDOTA_Ability_CrystalMaiden_BrillianceAura::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 457, @0x0000000002a082f0, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::DestructInstance  (line 457, @0x0000000002a08300, libserver.so)  // inlines: Destruct<CDOTA_Ability_CrystalMaiden_BrillianceAura>
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::FreeInstance  (line 457, @0x0000000002a08320, libserver.so)
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::CanAllocate  (line 457, @0x0000000002a08340, libserver.so)
bool __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 457, @0x0000000002a08350, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_BrillianceAura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_BrillianceAura::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::AllocateInstance  (line 457, @0x0000000002a0f2c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::ConstructInstance  (line 457, @0x0000000002a13d80, libserver.so)  // inlines: CDOTA_Ability_CrystalMaiden_BrillianceAura, Construct<CDOTA_Ability_CrystalMaiden_BrillianceAura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_432D670;
  }
  return p;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 457, @0x0000000002a1efa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 457, @0x0000000002a1efc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal  (line 457, @0x0000000002a35930, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "crystal_maiden_brilliance_aura", "CDOTA_Ability_CrystalMaiden_BrillianceAura"
// globals: `guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass, CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass, __dso_handle, CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo, CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass);
    CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass._vptr_CEntityClass = off_432D5F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass);
    __cxa_atexit(
      CDOTA_Ability_CrystalMaiden_BrillianceAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass != 0 )
    return &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass;
  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo,
      "CDOTA_Ability_CrystalMaiden_BrillianceAura",
      "crystal_maiden_brilliance_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo);
  }
  CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass.m_pClassInfo = &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo;
  CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass.m_pBaseClassInfo = CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass = &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass;
  CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClassInfo.m_pClass = &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass;
  CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CrystalMaiden_BrillianceAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_BrillianceAuraClass;
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::OnSpellStart  (line 473, @0x00000000029f0bb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTA_BaseNPC::GiveMana, SendOverheadEventMessage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "mana_restore", "particles/items_fx/arcane_boots.vpcf", "DOTA_Item.ArcaneBoots.Activate", "particles/items_fx/arcane_boots_recipient.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::OnSpellStart(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // rbx
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_ParticleManager *v18; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTAPlayer *v22; // rax
  CDOTAPlayer *v23; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  entities.m_Size = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_restore", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &entities, 1, 19, 0, 0, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/items_fx/arcane_boots.vpcf",
                  1,
                  v7,
                  0,
                  0);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v7);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "DOTA_Item.ArcaneBoots.Activate", v10);
  if ( entities.m_Size > 0 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = &entities.m_Memory.m_pMemory[v11];
        m_Index = v12->m_Index;
        if ( v12->m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance->m_flMaxMana.m_Value > 0.0 )
              {
                CDOTA_BaseNPC::GiveMana(m_pInstance, LevelSpecialValue, 0, 1);
                v18 = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             v18,
                             "particles/items_fx/arcane_boots_recipient.vpcf",
                             1,
                             m_pInstance,
                             0,
                             0);
                v20 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
                v21 = CDOTABaseAbility::GetCaster(this);
                v22 = (*(v21->_vptr_IHandleEntity + 413))(v21);
                SendOverheadEventMessage(
                  v22,
                  DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD,
                  m_pInstance,
                  LevelSpecialValue,
                  0);
                if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                  break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v11 )
          goto LABEL_13;
      }
      v23 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
      SendOverheadEventMessage(v23, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, m_pInstance, LevelSpecialValue, 0);
      ++v11;
    }
    while ( entities.m_Size > v11 );
  }
LABEL_13:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::OnUpgrade  (line 511, @0x00000000029cf320, libserver.so)
// calls: CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura, CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::OnUpgrade(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura(this);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::OnOwnerSpawned  (line 519, @0x00000000029cf340, libserver.so)
// calls: CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::OnOwnerSpawned(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura(this);
}


// CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura  (line 526, @0x00000000029cf200, libserver.so)  // inlines: SetBool
// calls: KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_CrystalMaiden_BrillianceAura::OnUpgrade, CDOTA_Ability_CrystalMaiden_BrillianceAura::OnOwnerSpawned
// strings: "modifier_crystal_maiden_brilliance_aura", "modifier_crystal_maiden_brilliance_aura_effect", "aura_apply_modifier", "aura_search_team", "aura_search_type", "aura_search_flags"
void __fastcall CDOTA_Ability_CrystalMaiden_BrillianceAura::UpdateAura(
        CDOTA_Ability_CrystalMaiden_BrillianceAura *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_crystal_maiden_brilliance_aura");
  KeyValues::SetInt(&kv, "aura", 1);
  KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_crystal_maiden_brilliance_aura_effect");
  KeyValues::SetInt(&kv, "aura_radius", -1);
  KeyValues::SetInt(&kv, "aura_search_team", 1);
  KeyValues::SetInt(&kv, "aura_search_type", 35);
  KeyValues::SetInt(&kv, "aura_search_flags", 32784);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_crystal_maiden_brilliance_aura", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAura::~CDOTA_Modifier_CrystalMaiden_BrillianceAura  (line 547, @0x0000000002a13120, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAura::~CDOTA_Modifier_CrystalMaiden_BrillianceAura(
        CDOTA_Modifier_CrystalMaiden_BrillianceAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_432E0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAura::~CDOTA_Modifier_CrystalMaiden_BrillianceAura  (line 547, @0x0000000002a13140, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_BrillianceAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAura::~CDOTA_Modifier_CrystalMaiden_BrillianceAura(
        CDOTA_Modifier_CrystalMaiden_BrillianceAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_432E0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAura::IsHidden  (line 551, @0x0000000002a08360, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAura::IsHidden(
        CDOTA_Modifier_CrystalMaiden_BrillianceAura *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect  (line 561, @0x0000000002a12600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_432E450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect  (line 561, @0x0000000002a12620, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::~CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this)
{
  this->_vptr_CDOTA_Buff = &off_432E450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::DeclareFunctions  (line 582, @0x00000000029b4770, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::DeclareFunctions(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this)
{
  this->m_Functions[52].__pfn = CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::GetModifierConstantManaRegen;
  this->m_Functions[52].__delta = 0;
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::OnCreated  (line 589, @0x00000000029e0480, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_regen_self"
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::OnCreated(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_regen_self = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "mana_regen_self", -1, 0);
      return;
    }
  }
  else
  {
    this->mana_regen = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_regen_self = 0.0;
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::OnRefresh  (line 597, @0x00000000029e0520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "mana_regen_self"
void __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::OnRefresh(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "mana_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->mana_regen_self = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "mana_regen_self", -1, 0);
      return;
    }
  }
  else
  {
    this->mana_regen = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->mana_regen_self = 0.0;
}


// CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::GetModifierConstantManaRegen  (line 605, @0x00000000029b73d0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName
// strings: "crystal_maiden_brilliance_aura"
ModifierVariant_t __fastcall CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect::GetModifierConstantManaRegen(
        CDOTA_Modifier_CrystalMaiden_BrillianceAuraEffect *const this,
        const CModifierParams *const params)
{
  unsigned int v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v6; // rax
  ModifierVariant_t result; // 0:rax.16

  v3 = _mm_cvtsi128_si32(LODWORD(this->mana_regen));
  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == CDOTA_Buff::GetCaster(this)
      || (v6 = CDOTA_Buff::GetParent(this),
          CDOTA_BaseNPC::FindAbilityByName(v6, "crystal_maiden_brilliance_aura", 0) != 0) )
    {
      v3 = _mm_cvtsi128_si32(LODWORD(this->mana_regen_self));
    }
    result.m_szVal = 0;
    *&result.m_eType = (v3 << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::~CDOTA_Ability_CrystalMaiden_FreezingField  (line 624, @0x0000000002a16c50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::~CDOTA_Ability_CrystalMaiden_FreezingField(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  this->_vptr_IHandleEntity = &off_432E7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::~CDOTA_Ability_CrystalMaiden_FreezingField  (line 624, @0x0000000002a16c70, libserver.so)  // inlines: ~CDOTA_Ability_CrystalMaiden_FreezingField
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::~CDOTA_Ability_CrystalMaiden_FreezingField(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  this->_vptr_IHandleEntity = &off_432E7B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::Schema_DynamicBinding  (line 626, @0x0000000002a08370, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_FreezingField::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  return CDOTA_Ability_CrystalMaiden_FreezingField::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 626, @0x0000000002a08380, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::DestructInstance  (line 626, @0x0000000002a08390, libserver.so)  // inlines: Destruct<CDOTA_Ability_CrystalMaiden_FreezingField>
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::FreeInstance  (line 626, @0x0000000002a083b0, libserver.so)
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::CanAllocate  (line 626, @0x0000000002a083d0, libserver.so)
bool __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 626, @0x0000000002a083e0, libserver.so)
// globals: CDOTA_Ability_CrystalMaiden_FreezingField::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_CrystalMaiden_FreezingField::s_pSchemaBinding;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::AllocateInstance  (line 626, @0x0000000002a0f300, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::ConstructInstance  (line 626, @0x0000000002a13db0, libserver.so)  // inlines: CDOTA_Ability_CrystalMaiden_FreezingField, Construct<CDOTA_Ability_CrystalMaiden_FreezingField>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_432E7B0;
  }
  return p;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 626, @0x0000000002a1eff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 626, @0x0000000002a1f010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal  (line 626, @0x0000000002a35a80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "crystal_maiden_freezing_field", "CDOTA_Ability_CrystalMaiden_FreezingField"
// globals: `guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass, CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass, __dso_handle, CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo, CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass);
    CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass._vptr_CEntityClass = off_432E730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass);
    __cxa_atexit(
      CDOTA_Ability_CrystalMaiden_FreezingField::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass != 0 )
    return &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass;
  if ( `guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo,
      "CDOTA_Ability_CrystalMaiden_FreezingField",
      "crystal_maiden_freezing_field",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo);
  }
  CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass.m_pClassInfo = &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo;
  CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass.m_pBaseClassInfo = CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass = &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass;
  CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClassInfo.m_pClass = &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass;
  CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_CrystalMaiden_FreezingField::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_CrystalMaiden_FreezingFieldClass;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::GetStolenActivityModifier  (line 644, @0x0000000002a083f0, libserver.so)
const char *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::GetStolenActivityModifier(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  return "freezing_field";
}


// CDOTA_Ability_CrystalMaiden_FreezingField::GetAssociatedSecondaryAbilities  (line 646, @0x0000000002a08400, libserver.so)
// strings: "crystal_maiden_frostbite"
const char *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  return "crystal_maiden_frostbite";
}


// CDOTA_Ability_CrystalMaiden_FreezingField::YouForgotToImplementOrDeclareServerClass  (line 651, @0x00000000029b4790, libserver.so)
int __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  return 0;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::GetServerClass  (line 651, @0x00000000029c8ff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_CrystalMaiden_FreezingField::GetServerClass(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
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


// CDOTA_Ability_CrystalMaiden_FreezingField::GetPlaybackRateOverride  (line 659, @0x00000000029b47a0, libserver.so)
float __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::GetPlaybackRateOverride(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  return 0.60000002;
}


// CDOTA_Ability_CrystalMaiden_FreezingField::OnSpellStart  (line 666, @0x00000000029b8200, libserver.so)  // inlines: GetAbilityData
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_crystal_maiden_freezing_field"
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::OnSpellStart(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  __m128i v5; // xmm0
  DOTAAbilityData_t *m_pAbilityData; // rax
  float v7; // r15d
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_crystal_maiden_freezing_field");
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_crystal_maiden_freezing_field", &kv, 0);
  *v5.m128i_i64 = (*(this->_vptr_IHandleEntity + 225))(this);
  m_pAbilityData = this->m_pAbilityData;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
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
    0,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    v7,
    v12);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::OnChannelFinish  (line 679, @0x00000000029b9d00, libserver.so)  // inlines: GetAbilityData
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
// strings: "modifier_crystal_maiden_freezing_field"
void __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::OnChannelFinish(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this,
        bool bInterrupted)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_crystal_maiden_freezing_field");
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v6, m_iAbilityID);
}


// CDOTA_Ability_CrystalMaiden_FreezingField::GetAbilityDamageToTargetOverInterval  (line 690, @0x00000000029e5400, libserver.so)  // inlines: FastSqrt, Length2D, RemapValClamped, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator-
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_CrystalMaiden_FreezingField::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_CrystalMaiden_FreezingField *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v11; // rax
  __m128i v12; // xmm0
  float v13; // r13d
  int v14; // eax
  float v15; // xmm4_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  float v20; // [rsp-8h] [rbp-34h]
  float LevelSpecialValue; // [rsp-8h] [rbp-34h]
  float v22; // [rsp-4h] [rbp-30h]

  result = 0;
  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return result;
  v7 = (*(this->_vptr_IHandleEntity + 225))(this);
  if ( v7 != 0.0 )
  {
    v8 = fInterval / v7;
    if ( (fInterval / v7) >= 0.0 )
    {
      v22 = 1.0;
      if ( v8 <= 1.0 )
        v22 = v8 + 0.0;
      goto LABEL_6;
    }
  }
  else if ( (fInterval - v7) >= 0.0 )
  {
    v22 = 1.0;
LABEL_6:
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v11 = CBaseEntity::GetAbsOrigin(pTarget);
    v20 = ((v11->x - AbsOrigin->x) * (v11->x - AbsOrigin->x)) + ((v11->y - AbsOrigin->y) * (v11->y - AbsOrigin->y));
    v12 = LODWORD(v20);
    *v12.m128i_i32 = fsqrt(v20);
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 1);
    v14 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1);
    v15 = 0.5 * LevelSpecialValue;
    if ( LevelSpecialValue == (0.5 * LevelSpecialValue) )
    {
      v18.m128_f32[0] = v13 - v15;
      v19 = _mm_cmple_ss(0, v18);
      LODWORD(v17) = _mm_andnot_ps(v19, 0x40C00000u).m128_u32[0] | v19.m128_i32[0] & 0x40000000;
    }
    else
    {
      v16 = (v13 - LevelSpecialValue) / (v15 - LevelSpecialValue);
      if ( v16 < 0.0 )
      {
        v17 = 6.0;
      }
      else
      {
        v17 = 2.0;
        if ( v16 <= 1.0 )
          v17 = (-4.0 * v16) + 6.0;
      }
    }
    return (((v14 * v22) * v17) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  v22 = 0.0;
  goto LABEL_6;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::~CDOTA_Modifier_CrystalMaiden_FreezingField  (line 712, @0x0000000002a33260, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::~CDOTA_Modifier_CrystalMaiden_FreezingField(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F270;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::~CDOTA_Modifier_CrystalMaiden_FreezingField  (line 712, @0x0000000002a336c0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_CrystalMaiden_FreezingField, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::~CDOTA_Modifier_CrystalMaiden_FreezingField(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F270;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::IsHidden  (line 717, @0x0000000002a08410, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::IsHidden(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::IsPurgable  (line 718, @0x0000000002a08420, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::IsPurgable(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 0;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::IsAura  (line 724, @0x0000000002a08430, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::IsAura(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::GetModifierAura  (line 725, @0x0000000002a08440, libserver.so)
// strings: "modifier_crystal_maiden_freezing_field_tracker"
const char *__fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::GetModifierAura(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return "modifier_crystal_maiden_freezing_field_tracker";
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraSearchTeam  (line 727, @0x0000000002a08450, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraSearchTeam(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 2;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraSearchType  (line 728, @0x0000000002a08460, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraSearchType(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 19;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraRadius  (line 729, @0x0000000002a08470, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraRadius(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return this->radius;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraDuration  (line 730, @0x0000000002a08480, libserver.so)
float __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::GetAuraDuration(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  return 0.1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::OnCreated  (line 766, @0x00000000029e1fd0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetDuration, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle (14 total)
// strings: "explosion_interval", "explosion_min_dist", "explosion_max_dist", "scepter_delay", "particles/units/heroes/hero_crystalmaiden/maiden_freezing_field_snow.vpcf", "hero_Crystal.freezingField.wind"
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::OnCreated(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CGameRules *v11; // rax
  float v12; // xmm0_4
  float v13; // r15d
  CDOTABaseAbility *v14; // rax
  float v15; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v18; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v20; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-44h]
  double v27; // [rsp+10h] [rbp-40h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->explosion_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "explosion_interval", -1, 0);
  else
    this->explosion_interval = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage, "damage");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->explosion_radius, "explosion_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "slow_duration", -1, 0);
  else
    this->slow_duration = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->explosion_min_dist, "explosion_min_dist");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->explosion_max_dist, "explosion_max_dist");
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 == 0 )
  {
    this->scepter_delay = 0.0;
    v11 = g_pGameRules;
    if ( g_pGameRules != 0 )
      goto LABEL_7;
LABEL_11:
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    v12 = 0.0;
    goto LABEL_8;
  }
  this->scepter_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "scepter_delay", -1, 0);
  v11 = g_pGameRules;
  if ( g_pGameRules == 0 )
    goto LABEL_11;
LABEL_7:
  v12 = *&v11[18].m_szQuestName[20];
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
LABEL_8:
  this->m_fLastTick = v12;
  this->m_fTimeAccumulator = 0.0;
  this->m_iExplosionCount = 0;
  v14 = CDOTA_Buff::GetAbility(this);
  v15 = (CDOTABaseAbility::GetDuration(v14) / this->explosion_interval) + 1.0;
  this->m_iExplosionQuadrant = 0;
  this->m_iExplosionTotalCount = v15;
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                       this,
                       "particles/units/heroes/hero_crystalmaiden/maiden_freezing_field_snow.vpcf",
                       2,
                       0,
                       0);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v18 = CDOTA_Buff::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v20 = v18;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v20, 1, 0, *AbsOrigin, 1);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  *&v27 = this->radius;
  *(&v27 + 1) = *&v27;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, AbsOrigin, 1, v27, *&v27);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  flFoWRadius = this->radius;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v23, AbsOrigin, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, v13, v24);
  v25 = CDOTA_Buff::GetCaster(this);
  this->m_nFreezingFieldSound = CDOTA_BaseNPC::UnitEmitSound(v25, "hero_Crystal.freezingField.wind", v13, 0, 0);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::OnDestroy  (line 800, @0x00000000029cef20, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::OnDestroy(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nFreezingFieldSound);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField::OnIntervalThink  (line 811, @0x00000000029fede0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, Purge, QAngle, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorAdd, operator CBaseEntity*, operator*=, operator+, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::HasScepter, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, KeyValues::~KeyValues, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier (32 total)
// strings: "crystal_maiden_frostbite", "modifier_crystal_maiden_freezing_field_slow", "modifier_crystal_maiden_freezing_field_tracker", "special_bonus_unique_crystal_maiden_1", "modifier_crystal_maiden_frostbite", "particles/units/heroes/hero_crystalmaiden/maiden_freezing_field_explosion.vpcf" (7 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField::OnIntervalThink(
        CDOTA_Modifier_CrystalMaiden_FreezingField *const this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v7; // xmm6
  float m_fTimeAccumulator; // xmm1_4
  float explosion_interval; // xmm0_4
  float v10; // r13d
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // r13
  int v16; // r12d
  __m128i v17; // xmm0
  float v18; // r15d
  CDOTA_BaseNPC *v19; // rax
  CEntityIdentity *m_pEntity; // r15
  __int16 v21; // cx
  int v22; // eax
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rbx
  float v25; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v27; // rax
  CDOTA_Buff *ModifierByName; // rax
  __int16 v29; // cx
  int v30; // eax
  __int64 m_Size; // r15
  int v32; // eax
  CHandle<CBaseEntity> *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTABaseAbility *v35; // rax
  float v36; // xmm1_4
  CDOTA_BaseNPC *v37; // rax
  vec_t v38; // xmm0_4
  int m_iExplosionQuadrant; // eax
  float v40; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v42; // rax
  vec_t v43; // xmm0_4
  vec_t v44; // xmm2_4
  CDOTA_BaseNPC *v45; // rax
  const Vector *v46; // rbx
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  __m128i v51; // xmm7
  float v52; // r12d
  CDOTA_BaseNPC *v53; // rbx
  CDOTA_BaseNPC *v54; // rax
  __int64 v55; // r12
  int v56; // r15d
  CEntityInstance *v57; // rax
  CEntityInstance *v58; // rbx
  CDOTA_BaseNPC *v59; // rax
  CDOTABaseAbility *v60; // r13
  CDOTA_BaseNPC *v61; // rax
  double v62; // xmm0_8
  CDOTA_BaseNPC_Hero *v63; // r13
  CDOTA_BaseNPC *v64; // rax
  CDOTA_BaseNPC_Hero *v65; // rdi
  CEntityIdentity *v66; // r13
  __int16 v67; // cx
  int v68; // eax
  __int16 v69; // cx
  int v70; // eax
  __int64 v71; // r13
  int v72; // eax
  CHandle<CBaseEntity> *v73; // rax
  CDOTA_BaseNPC *v74; // rax
  CDOTABaseAbility *v75; // rax
  float v76; // xmm1_4
  CDOTA_BaseNPC *v77; // rax
  CDOTA_BaseNPC *v78; // rax
  int v79; // eax
  bool v80; // cc
  CDOTABaseAbility *pAbility; // [rsp+50h] [rbp-100h]
  float pKV; // [rsp+58h] [rbp-F8h]
  CHandle<CBaseEntity> v83; // [rsp+60h] [rbp-F0h] BYREF
  QAngle angle; // [rsp+70h] [rbp-E0h] BYREF
  Vector dir; // [rsp+80h] [rbp-D0h] BYREF
  Vector vExplosionLoc; // [rsp+90h] [rbp-C0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > slow_entities; // [rsp+A0h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > explosion_entities; // [rsp+C0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-70h] BYREF
  KeyValues kv_0; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v91; // [rsp+118h] [rbp-38h]

  v91 = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
  {
    v2 = *&g_pGameRules[18].m_szQuestName[20];
    v3 = v2 - this->m_fLastTick;
  }
  else
  {
    v2 = 0.0;
    v3 = 0.0 - this->m_fLastTick;
  }
  v4 = v3 + this->m_fTimeAccumulator;
  this->m_fLastTick = v2;
  this->m_fTimeAccumulator = v4;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "crystal_maiden_frostbite", 0);
  m_fTimeAccumulator = this->m_fTimeAccumulator;
  explosion_interval = this->explosion_interval;
  for ( pAbility = AbilityByName; m_fTimeAccumulator >= explosion_interval; explosion_interval = this->explosion_interval )
  {
    slow_entities.m_Size = 0;
    *v7.m128i_i32 = this->radius;
    slow_entities.m_Memory.m_pMemory = 0;
    slow_entities.m_Memory.m_nAllocationCount = 0;
    this->m_fTimeAccumulator = m_fTimeAccumulator - explosion_interval;
    slow_entities.m_Memory.m_nGrowSize = 0;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    v11 = CDOTA_Buff::GetCaster(this);
    v12 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
    v14 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, v11, v10, &slow_entities, 2, 19, 0, 0, 0);
    if ( slow_entities.m_Size > 0 )
    {
      v15 = 0;
      v16 = 0;
      do
      {
        v23 = CEntityHandle::operator CEntityInstance *(&slow_entities.m_Memory.m_pMemory[v15]);
        v24 = v23;
        if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_crystal_maiden_freezing_field_slow");
          KeyValues::SetFloat(&kv, "duration", v25);
          Ability = CDOTA_Buff::GetAbility(this);
          v27 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v24, v27, Ability, "modifier_crystal_maiden_freezing_field_slow", &kv, 0);
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v24, "modifier_crystal_maiden_freezing_field_tracker", 0);
          if ( ModifierByName != 0 )
          {
            v17 = 0;
            if ( g_pGameRules != 0 )
              v17 = *&g_pGameRules[18].m_szQuestName[20];
            *v17.m128i_i32 = *v17.m128i_i32 - ModifierByName->m_flCreationTime;
            v18 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
          }
          else
          {
            v18 = 0.0;
          }
          v19 = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::HasScepter(v19) && v18 > this->scepter_delay )
          {
            explosion_entities.m_Size = -1;
            m_pEntity = v24->m_pEntity;
            if ( m_pEntity != 0 )
            {
              v21 = 0x7FFF;
              v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              LOWORD(explosion_entities.m_Size) = v21 | explosion_entities.m_Size & 0x8000;
              explosion_entities.m_Size = (v22 << 15) | explosion_entities.m_Size & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   &explosion_entities) < 0
              && pAbility != 0 )
            {
              explosion_entities.m_Size = -1;
              if ( m_pEntity != 0 )
              {
                v29 = 0x7FFF;
                v30 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(explosion_entities.m_Size) = v29 | explosion_entities.m_Size & 0x8000;
                explosion_entities.m_Size = (v30 << 15) | explosion_entities.m_Size & 0x7FFF;
              }
              m_Size = this->m_hHitEntities.m_Size;
              v32 = this->m_hHitEntities.m_Size;
              if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
                v32 = this->m_hHitEntities.m_Size;
              }
              this->m_hHitEntities.m_Size = v32 + 1;
              v33 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
              if ( v33 != 0 )
                v33->m_Index = explosion_entities.m_Size;
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(pAbility, "duration", -1, 0);
              v34 = CDOTA_Buff::GetCaster(this);
              v35 = CDOTA_BaseNPC::FindAbilityByName(v34, "special_bonus_unique_crystal_maiden_1", 0);
              if ( v35 != 0 && v35->m_iLevel.m_Value > 0 )
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(v35, "value", 1, 1);
              KeyValues::KeyValues(&kv_0, "modifier_crystal_maiden_frostbite");
              KeyValues::SetFloat(&kv_0, "duration", v36);
              v37 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v24, v37, pAbility, "modifier_crystal_maiden_frostbite", &kv_0, 0);
              KeyValues::~KeyValues(&kv_0);
            }
          }
          KeyValues::~KeyValues(&kv);
        }
        ++v16;
        ++v15;
      }
      while ( slow_entities.m_Size > v16 );
    }
    v38 = RandomFloat(this->m_iExplosionQuadrant, (this->m_iExplosionQuadrant + 90));
    m_iExplosionQuadrant = this->m_iExplosionQuadrant;
    angle.x = 0.0;
    angle.y = v38;
    angle.z = 0.0;
    this->m_iExplosionQuadrant = (m_iExplosionQuadrant + 90) % 360;
    AngleVectors(&angle, &dir, 0, 0);
    v40 = RandomFloat(this->explosion_min_dist, this->explosion_max_dist);
    dir.x = dir.x * v40;
    dir.y = dir.y * v40;
    dir.z = v40 * dir.z;
    Parent = CDOTA_Buff::GetParent(this);
    v42 = CBaseEntity::GetAbsOrigin(Parent);
    v43 = v42->z + dir.z;
    v44 = v42->x + dir.x;
    vExplosionLoc.y = v42->y + dir.y;
    vExplosionLoc.z = v43;
    vExplosionLoc.x = v44;
    v45 = CDOTA_Buff::GetCaster(this);
    v46 = CBaseEntity::GetAbsOrigin(v45);
    m_nFXIndex = this->m_nFXIndex;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlFallback(ParticleManager, m_nFXIndex, 0, *&v46->x, v46->z);
    LODWORD(v46) = CDOTA_Buff::CreateBuffParticleEffect(
                     this,
                     "particles/units/heroes/hero_crystalmaiden/maiden_freezing_field_explosion.vpcf",
                     2,
                     0,
                     0);
    v49 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v49, v46, 0, *&vExplosionLoc.x, vExplosionLoc.z);
    v50 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v50, v46);
    *v51.m128i_i32 = this->explosion_radius;
    explosion_entities.m_Size = 0;
    explosion_entities.m_Memory.m_pMemory = 0;
    explosion_entities.m_Memory.m_nAllocationCount = 0;
    explosion_entities.m_Memory.m_nGrowSize = 0;
    v52 = COERCE_FLOAT(_mm_cvtsi128_si32(v51));
    v53 = CDOTA_Buff::GetCaster(this);
    v54 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v54->m_iTeamNum.m_Value, &vExplosionLoc, v53, v52, &explosion_entities, 2, 19, 0, 0, 0);
    if ( explosion_entities.m_Size > 0 )
    {
      v55 = 0;
      v56 = 0;
      do
      {
        v57 = CEntityHandle::operator CEntityInstance *(&explosion_entities.m_Memory.m_pMemory[v55]);
        v58 = v57;
        if ( v57 != 0 && BYTE3(v57[7]._vptr_IHandleEntity) != 0 )
        {
          v59 = CDOTA_Buff::GetCaster(this);
          if ( CDOTA_BaseNPC::HasScepter(v59)
            && pAbility != 0
            && pAbility->m_iLevel.m_Value > 0
            && this->scepter_delay < 0.0 )
          {
            v83.m_Index = -1;
            v66 = v58->m_pEntity;
            if ( v66 != 0 )
            {
              v67 = 0x7FFF;
              v68 = (v66->m_EHandle.m_Index >> 15) - (v66->m_flags & 1);
              if ( v66->m_EHandle.m_Index != -1 )
                v67 = v66->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v83.m_Index) = v67 | v83.m_Index & 0x8000;
              v83.m_Index = (v68 << 15) | v83.m_Index & 0x7FFF;
            }
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_hHitEntities,
                   &v83) < 0 )
            {
              v83.m_Index = -1;
              if ( v66 != 0 )
              {
                v69 = 0x7FFF;
                v70 = (v66->m_EHandle.m_Index >> 15) - (v66->m_flags & 1);
                if ( v66->m_EHandle.m_Index != -1 )
                  v69 = v66->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v83.m_Index) = v69 | v83.m_Index & 0x8000;
                v83.m_Index = (v70 << 15) | v83.m_Index & 0x7FFF;
              }
              v71 = this->m_hHitEntities.m_Size;
              v72 = this->m_hHitEntities.m_Size;
              if ( v71 == this->m_hHitEntities.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
                v72 = this->m_hHitEntities.m_Size;
              }
              this->m_hHitEntities.m_Size = v72 + 1;
              v73 = &this->m_hHitEntities.m_Memory.m_pMemory[v71];
              if ( v73 != 0 )
                v73->m_Index = v83.m_Index;
              CDOTABaseAbility::GetLevelSpecialValueFor<float>(pAbility, "duration", -1, 0);
              v74 = CDOTA_Buff::GetCaster(this);
              v75 = CDOTA_BaseNPC::FindAbilityByName(v74, "special_bonus_unique_crystal_maiden_1", 0);
              if ( v75 != 0 && v75->m_iLevel.m_Value > 0 )
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(v75, "value", 1, 1);
              KeyValues::KeyValues(&kv_0, "modifier_crystal_maiden_frostbite");
              KeyValues::SetFloat(&kv_0, "duration", v76);
              v77 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v58, v77, pAbility, "modifier_crystal_maiden_frostbite", &kv_0, 0);
              KeyValues::~KeyValues(&kv_0);
            }
          }
          pKV = this->damage;
          v60 = CDOTA_Buff::GetAbility(this);
          v61 = CDOTA_Buff::GetCaster(this);
          v62 = ApplyDamage(v61, v58, v60, pKV, 2, 0);
          if ( (v58[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && (*(v58->_vptr_IHandleEntity + 408))(v58, v62) == 0 )
          {
            v63 = 0;
            if ( BYTE3(v58[7]._vptr_IHandleEntity) != 0
              && (v58[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(v58[71].m_pEntity) == 0 )
            {
              v63 = v58;
            }
            v64 = CDOTA_Buff::GetCaster(this);
            if ( v64 != 0 && (v64->m_iUnitType & 1) != 0 )
              v65 = v64;
            else
              v65 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v65,
              v63,
              kill_eater_event_t::kKillEaterEventType_CrystalMaiden_FreezingFieldKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
        }
        ++v56;
        ++v55;
      }
      while ( explosion_entities.m_Size > v56 );
    }
    v78 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v78, "hero_Crystal.freezingField.explosion", 0.0, 0, 0);
    v79 = this->m_iExplosionCount + 1;
    v80 = v79 < this->m_iExplosionTotalCount;
    this->m_iExplosionCount = v79;
    if ( !v80 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&explosion_entities);
    if ( (explosion_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&explosion_entities.m_Memory);
      if ( (explosion_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&explosion_entities.m_Memory);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&slow_entities);
    if ( (slow_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&slow_entities.m_Memory);
      if ( (slow_entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&slow_entities.m_Memory);
    }
    m_fTimeAccumulator = this->m_fTimeAccumulator;
  }
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow  (line 936, @0x0000000002a125b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow  (line 936, @0x0000000002a125d0, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::~CDOTA_Modifier_CrystalMaiden_FreezingField_Slow(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::IsDebuff  (line 941, @0x0000000002a08490, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::IsDebuff(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetStatusEffectName  (line 949, @0x0000000002a084a0, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetStatusEffectName(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::StatusEffectPriority  (line 950, @0x0000000002a084b0, libserver.so)
int __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::StatusEffectPriority(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  return 10;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::OnCreated  (line 962, @0x00000000029f7de0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "movespeed_slow"
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::OnCreated(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movespeed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->movespeed_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_slow = 0;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::DeclareFunctions  (line 970, @0x00000000029b47b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::DeclareFunctions(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierMoveSpeedBonus_Percentage  (line 976, @0x00000000029b47f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierAttackSpeedBonus_Constant  (line 981, @0x00000000029b4810, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker  (line 993, @0x0000000002a130d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker  (line 993, @0x0000000002a130f0, libserver.so)  // inlines: ~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::~CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker *const this)
{
  this->_vptr_CDOTA_Buff = &off_432F870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsHidden  (line 998, @0x0000000002a084c0, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsHidden(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsDebuff  (line 999, @0x0000000002a084d0, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsDebuff(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker *const this)
{
  return 1;
}


// CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsPurgable  (line 1000, @0x0000000002a084e0, libserver.so)
bool __fastcall CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker::IsPurgable(
        CDOTA_Modifier_CrystalMaiden_FreezingField_Tracker *const this)
{
  return 0;
}


