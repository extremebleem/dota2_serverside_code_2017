// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:40
class CDOTA_Unit_Hero_Lich : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Lich(CDOTA_Unit_Hero_Lich &);
	CDOTA_Unit_Hero_Lich(CDOTA_Unit_Hero_Lich &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Lich();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Unit_Hero_Lich();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:61
class C_CDOTA_Unit_Hero_Lich_MapInstall {
	C_CDOTA_Unit_Hero_Lich_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:73
class CDOTA_Modifier_Lich_Attack_Slow : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Lich_Attack_Slow();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lich_Attack_Slow();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:183
class CDOTA_Modifier_Lich_Attack_Slow_Debuff : public CDOTA_Buff {
public:

private:

	int value;  // +0xba8
	CDOTA_Modifier_Lich_Attack_Slow_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Lich_Attack_Slow_Debuff();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:254
class CDOTA_Ability_Lich_FrostNova : public CDOTABaseAbility {
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
	CDOTA_Ability_Lich_FrostNova(CDOTA_Ability_Lich_FrostNova &);
	CDOTA_Ability_Lich_FrostNova(CDOTA_Ability_Lich_FrostNova &);
	CDOTA_Ability_Lich_FrostNova();
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
	virtual ~CDOTA_Ability_Lich_FrostNova();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:276
class C_CDOTA_Ability_Lich_FrostNova_MapInstall {
	C_CDOTA_Ability_Lich_FrostNova_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:351
class CDOTA_Modifier_Lich_FrostNova_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	int slow_attack_speed;  // +0xbac
	CDOTA_Modifier_Lich_FrostNova_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Lich_FrostNova_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:423
class CDOTA_Modifier_Lich_ChainFrost_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	int slow_attack_speed;  // +0xbac
	int slow_movement_speed_scepter;  // +0xbb0
	int slow_attack_speed_scepter;  // +0xbb4
	CDOTA_Modifier_Lich_ChainFrost_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Lich_ChainFrost_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:503
class CDOTA_Ability_Lich_FrostArmor : public CDOTABaseAbility {
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
	CDOTA_Ability_Lich_FrostArmor(CDOTA_Ability_Lich_FrostArmor &);
	CDOTA_Ability_Lich_FrostArmor(CDOTA_Ability_Lich_FrostArmor &);
	CDOTA_Ability_Lich_FrostArmor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Lich_FrostArmor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:536
class CDOTA_Modifier_Lich_FrostArmor_Autocast : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lich_FrostArmor_Autocast();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lich_FrostArmor_Autocast();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttack
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:590
class CDOTA_Modifier_Lich_FrostArmor : public CDOTA_Buff {
public:

private:

	int armor_bonus;  // +0xba8
	float slow_duration;  // +0xbac
	CDOTA_Modifier_Lich_FrostArmor();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Lich_FrostArmor();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[90] OnAttacked
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:696
class CDOTA_Modifier_Lich_FrostArmor_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	int slow_attack_speed;  // +0xbac
	CDOTA_Modifier_Lich_FrostArmor_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Lich_FrostArmor_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:770
class CDOTA_Ability_Lich_DarkRitual : public CDOTABaseAbility {
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
	CDOTA_Ability_Lich_DarkRitual(CDOTA_Ability_Lich_DarkRitual &);
	CDOTA_Ability_Lich_DarkRitual(CDOTA_Ability_Lich_DarkRitual &);
	CDOTA_Ability_Lich_DarkRitual();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Lich_DarkRitual();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:853
class CDOTA_Ability_Lich_ChainFrost : public CDOTABaseAbility {
public:

private:

	int jump_range;  // +0x390
	int jumps;  // +0x394
	float slow_duration;  // +0x398
	int vision_radius;  // +0x39c
	int projectile_speed;  // +0x3a0
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
	CDOTA_Ability_Lich_ChainFrost(CDOTA_Ability_Lich_ChainFrost &);
	CDOTA_Ability_Lich_ChainFrost(CDOTA_Ability_Lich_ChainFrost &);
	CDOTA_Ability_Lich_ChainFrost();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamage();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink(const Vector &);
	virtual float GetAvoidRadius();
	virtual bool IsAvoidMagical();
	virtual float GetAvoidStrength(CDOTA_Bot *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lich_ChainFrost();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[226] GetCastRange
	// vtable[247] GetAbilityDamage
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[291] OnProjectileThink
	// vtable[327] GetAvoidRadius
	// vtable[328] IsAvoidMagical
	// vtable[330] GetAvoidStrength
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:887
class C_CDOTA_Ability_Lich_ChainFrost_MapInstall {
	C_CDOTA_Ability_Lich_ChainFrost_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lich.cpp:1111
class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public CDOTA_Buff {
public:

private:

	int m_nDamageToHeroes;  // +0xba8
	int m_nHeroesKilled;  // +0xbac
	int m_nJumps;  // +0xbb0
	EHANDLE m_hTarget;  // +0xbb4
	EHANDLE m_hAvoidTarget;  // +0xbb8
	CDOTA_Modifier_Lich_Chain_Frost_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Lich_Chain_Frost_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Lich::~CDOTA_Unit_Hero_Lich  (line 40, @0x0000000002a18930, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Lich::~CDOTA_Unit_Hero_Lich(CDOTA_Unit_Hero_Lich *const this)
{
  this->_vptr_IHandleEntity = &off_434C270;
  this->_vptr_INextBotEventResponder = &off_434D250;
  this->_vptr_CObstructionObject = &off_434D580;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Lich::~CDOTA_Unit_Hero_Lich  (line 40, @0x0000000002a18970, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Lich
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Lich::~CDOTA_Unit_Hero_Lich(CDOTA_Unit_Hero_Lich *const this)
{
  this->_vptr_IHandleEntity = &off_434C270;
  this->_vptr_INextBotEventResponder = &off_434D250;
  this->_vptr_CObstructionObject = &off_434D580;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Lich::Schema_DynamicBinding  (line 42, @0x0000000002a099a0, libserver.so)
// globals: CDOTA_Unit_Hero_Lich::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lich::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lich *const this)
{
  return CDOTA_Unit_Hero_Lich::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002a099d0, libserver.so)
// globals: CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002a099e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Lich>
void __fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002a09a00, libserver.so)
void __fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002a09a20, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002a09a30, libserver.so)
// globals: CDOTA_Unit_Hero_Lich::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lich::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002a0f980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002a13530, libserver.so)  // inlines: CDOTA_Unit_Hero_Lich, Construct<CDOTA_Unit_Hero_Lich>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_434C270;
    *(p + 236) = &off_434D250;
    *(p + 257) = &off_434D580;
  }
  return p;
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a206d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002a20910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Lich::GetEntityClassInternal  (line 42, @0x0000000002a3b7b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_lich", "CDOTA_Unit_Hero_Lich"
// globals: `guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass, CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass, __dso_handle, CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo, CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Lich::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass);
    CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass._vptr_CEntityClass = off_434C1F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Lich::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LichClass != 0 )
    return &CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo,
      "CDOTA_Unit_Hero_Lich",
      "npc_dota_hero_lich",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo);
  }
  CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass.m_pClassInfo = &CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo;
  CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LichClass = &CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass;
  CDOTA_Unit_Hero_Lich::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LichClassInfo.m_pClass = &CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass;
  CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LichClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Lich::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LichClass;
}


// CDOTA_Unit_Hero_Lich::Spawn  (line 50, @0x0000000002a18fa0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_lich_attack_slow"
void __fastcall CDOTA_Unit_Hero_Lich::Spawn(CDOTA_Unit_Hero_Lich *const this, const CEntityKeyValues *pKeyValues)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  KeyValues::KeyValues(&kv, "modifier_lich_attack_slow");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_lich_attack_slow", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Hero_Lich::YouForgotToImplementOrDeclareServerClass  (line 61, @0x00000000029b51e0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Lich::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Lich *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Lich::GetServerClass  (line 61, @0x00000000029c9cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Lich::GetServerClass(CDOTA_Unit_Hero_Lich *const this)
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


// CDOTA_Modifier_Lich_Attack_Slow::~CDOTA_Modifier_Lich_Attack_Slow  (line 73, @0x0000000002a1e680, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Lich_Attack_Slow::~CDOTA_Modifier_Lich_Attack_Slow(
        CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_434D610;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Lich_Attack_Slow::~CDOTA_Modifier_Lich_Attack_Slow  (line 73, @0x0000000002a1e760, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Lich_Attack_Slow, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Lich_Attack_Slow::~CDOTA_Modifier_Lich_Attack_Slow(
        CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_434D610;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_Attack_Slow::IsHidden  (line 78, @0x0000000002a09a40, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Attack_Slow::IsHidden(CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_Attack_Slow::IsPurgable  (line 79, @0x0000000002a09a50, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Attack_Slow::IsPurgable(CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Lich_Attack_Slow::GetAttributes  (line 80, @0x0000000002a09a60, libserver.so)
int __fastcall CDOTA_Modifier_Lich_Attack_Slow::GetAttributes(CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_Attack_Slow::DeclareFunctions  (line 96, @0x00000000029b51f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lich_Attack_Slow::OnAttack(CModifierParams const&), CDOTA_Modifier_Lich_Attack_Slow::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Lich_Attack_Slow::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lich_Attack_Slow::DeclareFunctions(CDOTA_Modifier_Lich_Attack_Slow *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Lich_Attack_Slow::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Lich_Attack_Slow::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Lich_Attack_Slow::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Lich_Attack_Slow::OnAttack  (line 105, @0x0000000002a044b0, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CEntityHandle::operator CEntityInstance*, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CUtlMemory<short int, int>::Grow
// strings: "special_bonus_unique_lich_2", "particles/items2_fx/skadi_projectile.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_Attack_Slow::OnAttack(
        CDOTA_Modifier_Lich_Attack_Slow *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CEntityInstance *v12; // rax
  CEntityInstance *v13; // r13
  CEntityInstance *v14; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r13
  __int64 m_Size; // rbx
  __int16 *v19; // rdx
  UtlSymLargeId_t v20; // [rsp+0h] [rbp-30h]

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
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lich_2", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value != 0 )
    {
      v12 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      if ( v12 == 0 || (v13 = v12, BYTE3(v12[7]._vptr_IHandleEntity) == 0) )
        v13 = 0;
      v14 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
      if ( v14 != 0
        && BYTE3(v14[7]._vptr_IHandleEntity) != 0
        && v13 != 0
        && (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
        && HIBYTE(v13[7].m_CScriptComponent) != HIBYTE(v14[7].m_CScriptComponent) )
      {
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        MakeEntitySystemString("particles/items2_fx/skadi_projectile.vpcf");
        RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v20;
        m_Size = this->m_InFlightAttackRecords.m_Size;
        if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
          CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
        ++this->m_InFlightAttackRecords.m_Size;
        v19 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
        if ( v19 != 0 )
          *v19 = RecordByIndex->m_iRecord;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Lich_Attack_Slow::OnAttackLanded  (line 132, @0x00000000029ded90, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "special_bonus_unique_lich_2", "modifier_lich_attack_slow_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_Attack_Slow::OnAttackLanded(
        CDOTA_Modifier_Lich_Attack_Slow *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rax
  CBaseEntity *v13; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v19 = __readfsqword(0x28u);
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
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord)
    && ((v10 = CEntityHandle::operator CEntityInstance *(&params->htarget)) != 0
     && BYTE3(v10[7]._vptr_IHandleEntity) != 0
      ? (v11 = v10)
      : (v11 = 0),
        (v12 = CEntityHandle::operator CEntityInstance *(&params->hattacker), v13 = v12, v12 != 0)
     && BYTE3(v12[7]._vptr_IHandleEntity) != 0
     && v11 != 0
     && (v11[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
     && HIBYTE(v11[7].m_CScriptComponent) != HIBYTE(v12[7].m_CScriptComponent)
     && LOBYTE(v12[71].m_pEntity) == 0) )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lich_2", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "duration", 1, 1);
    KeyValues::KeyValues(&kv, "modifier_lich_attack_slow_debuff");
    KeyValues::SetFloat(&kv, "duration", v16);
    Ability = CDOTA_Buff::GetAbility(this);
    CDOTA_BaseNPC::AddNewModifier(v11, v13, Ability, "modifier_lich_attack_slow_debuff", &kv, 0);
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Lich_Attack_Slow::OnAttackFail  (line 168, @0x00000000029d9bc0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_Attack_Slow::OnAttackFail(
        CDOTA_Modifier_Lich_Attack_Slow *const this,
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
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::~CDOTA_Modifier_Lich_Attack_Slow_Debuff  (line 183, @0x0000000002a11bd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::~CDOTA_Modifier_Lich_Attack_Slow_Debuff(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_434D930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::~CDOTA_Modifier_Lich_Attack_Slow_Debuff  (line 183, @0x0000000002a11bf0, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_Attack_Slow_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::~CDOTA_Modifier_Lich_Attack_Slow_Debuff(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_434D930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsPurgable  (line 189, @0x0000000002a09a70, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsPurgable(CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetEffectName  (line 195, @0x0000000002a09a80, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetEffectName(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetStatusEffectName  (line 196, @0x0000000002a09a90, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::StatusEffectPriority  (line 197, @0x0000000002a09aa0, libserver.so)
int __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return 10;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsDebuff  (line 199, @0x0000000002a09ab0, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsDebuff(CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsHidden  (line 200, @0x0000000002a09ac0, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::IsHidden(CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::OnCreated  (line 211, @0x00000000029e5850, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_lich_2"
void __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::OnCreated(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lich_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->value = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::DeclareFunctions  (line 222, @0x00000000029b5250, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::DeclareFunctions(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierAttackSpeedBonus_Constant  (line 230, @0x00000000029b5290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->value;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 237, @0x00000000029b52b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_Attack_Slow_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lich_Attack_Slow_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->value;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lich_FrostNova::~CDOTA_Ability_Lich_FrostNova  (line 254, @0x0000000002a172e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lich_FrostNova::~CDOTA_Ability_Lich_FrostNova(CDOTA_Ability_Lich_FrostNova *const this)
{
  this->_vptr_IHandleEntity = &off_434DC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lich_FrostNova::~CDOTA_Ability_Lich_FrostNova  (line 254, @0x0000000002a17300, libserver.so)  // inlines: ~CDOTA_Ability_Lich_FrostNova
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lich_FrostNova::~CDOTA_Ability_Lich_FrostNova(CDOTA_Ability_Lich_FrostNova *const this)
{
  this->_vptr_IHandleEntity = &off_434DC90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lich_FrostNova::Schema_DynamicBinding  (line 256, @0x0000000002a09ad0, libserver.so)
// globals: CDOTA_Ability_Lich_FrostNova::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_FrostNova::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_FrostNova *const this)
{
  return CDOTA_Ability_Lich_FrostNova::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 256, @0x0000000002a09ae0, libserver.so)
// globals: CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::DestructInstance  (line 256, @0x0000000002a09af0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lich_FrostNova>
void __fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::FreeInstance  (line 256, @0x0000000002a09b10, libserver.so)
void __fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::CanAllocate  (line 256, @0x0000000002a09b30, libserver.so)
bool __fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 256, @0x0000000002a09b40, libserver.so)
// globals: CDOTA_Ability_Lich_FrostNova::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_FrostNova::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::AllocateInstance  (line 256, @0x0000000002a0f9c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::ConstructInstance  (line 256, @0x0000000002a141d0, libserver.so)  // inlines: CDOTA_Ability_Lich_FrostNova, Construct<CDOTA_Ability_Lich_FrostNova>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_434DC90;
  }
  return p;
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 256, @0x0000000002a1f6d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 256, @0x0000000002a1f6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal  (line 256, @0x0000000002a37610, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "lich_frost_nova", "CDOTA_Ability_Lich_FrostNova"
// globals: `guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass, CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass, __dso_handle, CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo, CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass);
    CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass._vptr_CEntityClass = off_434DC10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass);
    __cxa_atexit(
      CDOTA_Ability_Lich_FrostNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lich_FrostNovaClass != 0 )
    return &CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass;
  if ( `guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo,
      "CDOTA_Ability_Lich_FrostNova",
      "lich_frost_nova",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo);
  }
  CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass.m_pClassInfo = &CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo;
  CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass.m_pBaseClassInfo = CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lich_FrostNovaClass = &CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass;
  CDOTA_Ability_Lich_FrostNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClassInfo.m_pClass = &CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass;
  CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lich_FrostNovaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lich_FrostNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostNovaClass;
}


// CDOTA_Ability_Lich_FrostNova::YouForgotToImplementOrDeclareServerClass  (line 276, @0x00000000029b52d0, libserver.so)
int __fastcall CDOTA_Ability_Lich_FrostNova::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lich_FrostNova *const this)
{
  return 0;
}


// CDOTA_Ability_Lich_FrostNova::GetServerClass  (line 276, @0x00000000029c98b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lich_FrostNova::GetServerClass(CDOTA_Ability_Lich_FrostNova *const this)
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


// CDOTA_Ability_Lich_FrostNova::OnSpellStart  (line 285, @0x00000000029f1f30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (23 total)
// strings: "aoe_damage", "modifier_lich_frostnova_slow", "particles/units/heroes/hero_lich/lich_frost_nova.vpcf", "Ability.FrostNova"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lich_FrostNova::OnSpellStart(CDOTA_Ability_Lich_FrostNova *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r15d
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  float v8; // xmm1_4
  int AbilityParticleEffect; // r13d
  CBaseEntity *v10; // rax
  const Vector *v11; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  __int64 v15; // rbx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  __m128i v24; // xmm4
  float v25; // ebx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *pCacheNPC; // [rsp+20h] [rbp-90h]
  float flRadius; // [rsp+2Ch] [rbp-84h]
  double v32; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "aoe_damage", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pCacheNPC = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    flRadius = LevelSpecialValue;
    v5 = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, pCacheNPC, flRadius, &entities, 2, 19, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_lich_frostnova_slow");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v8);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_lich/lich_frost_nova.vpcf",
                              8,
                              0,
                              0);
    v10 = CDOTABaseAbility::GetCursorTarget(this);
    v11 = CBaseEntity::GetAbsOrigin(v10);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v11->x, v11->z);
    *&v32 = flRadius;
    *(&v32 + 1) = flRadius;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v13, AbilityParticleEffect, 1, v32, flRadius);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v14, AbilityParticleEffect);
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(pCacheNPC, this, 1) )
    {
      if ( entities.m_Size > 0 )
      {
        v15 = 0;
        do
        {
          while ( 1 )
          {
            v16 = &entities.m_Memory.m_pMemory[v15];
            m_Index = v16->m_Index;
            if ( v16->m_Index + 2 > 1 )
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
            if ( entities.m_Size <= ++v15 )
              goto LABEL_14;
          }
          v22 = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(v22, m_pInstance, this, v3, 2, 0);
          v23 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_lich_frostnova_slow", &kv, 0);
          ++v15;
        }
        while ( entities.m_Size > v15 );
      }
LABEL_14:
      *v24.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
      v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
      v26 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v26, pCacheNPC, this, v25, 2, 0);
      v27 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(pCacheNPC, v27, this, "modifier_lich_frostnova_slow", &kv, 0);
    }
    v28 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v28, "Ability.FrostNova");
    CDOTA_BaseNPC::UnitEmitSound(pCacheNPC, ReplacementSound, 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


// CDOTA_Ability_Lich_FrostNova::GetAbilityDamageToTargetOverInterval  (line 332, @0x00000000029bb4f0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lich_FrostNova::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lich_FrostNova *const this,
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


// CDOTA_Ability_Lich_FrostNova::GetSlowDuration  (line 342, @0x00000000029b7100, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Lich_FrostNova::GetSlowDuration(CDOTA_Ability_Lich_FrostNova *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Lich_FrostNova_Slow::~CDOTA_Modifier_Lich_FrostNova_Slow  (line 351, @0x0000000002a11b80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::~CDOTA_Modifier_Lich_FrostNova_Slow(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434E750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_FrostNova_Slow::~CDOTA_Modifier_Lich_FrostNova_Slow  (line 351, @0x0000000002a11ba0, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_FrostNova_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::~CDOTA_Modifier_Lich_FrostNova_Slow(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434E750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_FrostNova_Slow::IsDebuff  (line 356, @0x0000000002a09b50, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::IsDebuff(CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_FrostNova_Slow::GetEffectName  (line 365, @0x0000000002a09b60, libserver.so)
// strings: "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_FrostNova_Slow::GetEffectName(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  return "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf";
}


// CDOTA_Modifier_Lich_FrostNova_Slow::GetStatusEffectName  (line 366, @0x0000000002a09b70, libserver.so)
// strings: "particles/status_fx/status_effect_frost_lich.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_FrostNova_Slow::GetStatusEffectName(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  return "particles/status_fx/status_effect_frost_lich.vpcf";
}


// CDOTA_Modifier_Lich_FrostNova_Slow::StatusEffectPriority  (line 367, @0x0000000002a09b80, libserver.so)
int __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::StatusEffectPriority(CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  return 9;
}


// CDOTA_Modifier_Lich_FrostNova_Slow::OnCreated  (line 379, @0x00000000029f8820, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "slow_movement_speed", "slow_attack_speed", "Hero_Lich.FrostArmorDamage"
void __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::OnCreated(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->slow_attack_speed = 0;
    goto LABEL_4;
  }
  this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Lich.FrostArmorDamage", 0.0, 0, 0);
}


// CDOTA_Modifier_Lich_FrostNova_Slow::OnRefresh  (line 391, @0x00000000029f77d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed", "slow_attack_speed"
void __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::OnRefresh(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed = 0;
}


// CDOTA_Modifier_Lich_FrostNova_Slow::DeclareFunctions  (line 399, @0x00000000029b52e0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::DeclareFunctions(CDOTA_Modifier_Lich_FrostNova_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Lich_FrostNova_Slow::GetModifierMoveSpeedBonus_Percentage  (line 407, @0x00000000029b5320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_FrostNova_Slow::GetModifierAttackSpeedBonus_Constant  (line 414, @0x00000000029b5340, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostNova_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lich_FrostNova_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::~CDOTA_Modifier_Lich_ChainFrost_Slow  (line 423, @0x0000000002a11b30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::~CDOTA_Modifier_Lich_ChainFrost_Slow(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434EA90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::~CDOTA_Modifier_Lich_ChainFrost_Slow  (line 423, @0x0000000002a11b50, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_ChainFrost_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::~CDOTA_Modifier_Lich_ChainFrost_Slow(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434EA90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::IsDebuff  (line 428, @0x0000000002a09b90, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::IsDebuff(CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::GetEffectName  (line 437, @0x0000000002a09ba0, libserver.so)
// strings: "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::GetEffectName(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  return "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf";
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::GetStatusEffectName  (line 438, @0x0000000002a09bb0, libserver.so)
// strings: "particles/status_fx/status_effect_frost_lich.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::GetStatusEffectName(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  return "particles/status_fx/status_effect_frost_lich.vpcf";
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::StatusEffectPriority  (line 439, @0x0000000002a09bc0, libserver.so)
int __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::StatusEffectPriority(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  return 9;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::OnCreated  (line 453, @0x00000000029f9a80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "slow_movement_speed", "slow_attack_speed", "slow_movement_speed_scepter", "slow_attack_speed_scepter", "Hero_Lich.FrostArmorDamage"
void __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::OnCreated(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->slow_movement_speed_scepter = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->slow_attack_speed_scepter = 0;
      goto LABEL_6;
    }
  }
  this->slow_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->slow_movement_speed_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v5,
                                        "slow_movement_speed_scepter",
                                        -1,
                                        0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->slow_attack_speed_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      v6,
                                      "slow_attack_speed_scepter",
                                      -1,
                                      0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Lich.FrostArmorDamage", 0.0, 0, 0);
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::OnRefresh  (line 467, @0x00000000029f8f10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed", "slow_attack_speed", "slow_movement_speed_scepter", "slow_attack_speed_scepter"
void __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::OnRefresh(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->slow_movement_speed_scepter = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->slow_attack_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->slow_movement_speed_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v5,
                                        "slow_movement_speed_scepter",
                                        -1,
                                        0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->slow_attack_speed_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v6,
                                        "slow_attack_speed_scepter",
                                        -1,
                                        0);
    return;
  }
LABEL_9:
  this->slow_attack_speed_scepter = 0;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::DeclareFunctions  (line 477, @0x00000000029b5360, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::DeclareFunctions(CDOTA_Modifier_Lich_ChainFrost_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::GetModifierMoveSpeedBonus_Percentage  (line 485, @0x00000000029b8460, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  int slow_movement_speed_scepter; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    slow_movement_speed_scepter = this->slow_movement_speed_scepter;
  else
    slow_movement_speed_scepter = this->slow_movement_speed;
  *v3.m128i_i32 = slow_movement_speed_scepter;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_ChainFrost_Slow::GetModifierAttackSpeedBonus_Constant  (line 492, @0x00000000029b84c0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_ChainFrost_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lich_ChainFrost_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  CDOTA_BaseNPC *Caster; // rax
  int slow_attack_speed_scepter; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 && (Caster = CDOTA_Buff::GetCaster(this), CDOTA_BaseNPC::HasScepter(Caster)) )
    slow_attack_speed_scepter = this->slow_attack_speed_scepter;
  else
    slow_attack_speed_scepter = this->slow_attack_speed;
  *v3.m128i_i32 = slow_attack_speed_scepter;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lich_FrostArmor::~CDOTA_Ability_Lich_FrostArmor  (line 503, @0x0000000002a17330, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lich_FrostArmor::~CDOTA_Ability_Lich_FrostArmor(
        CDOTA_Ability_Lich_FrostArmor *const this)
{
  this->_vptr_IHandleEntity = &off_434EE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lich_FrostArmor::~CDOTA_Ability_Lich_FrostArmor  (line 503, @0x0000000002a17350, libserver.so)  // inlines: ~CDOTA_Ability_Lich_FrostArmor
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lich_FrostArmor::~CDOTA_Ability_Lich_FrostArmor(
        CDOTA_Ability_Lich_FrostArmor *const this)
{
  this->_vptr_IHandleEntity = &off_434EE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lich_FrostArmor::Schema_DynamicBinding  (line 505, @0x0000000002a09bd0, libserver.so)
// globals: CDOTA_Ability_Lich_FrostArmor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_FrostArmor::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_FrostArmor *const this)
{
  return CDOTA_Ability_Lich_FrostArmor::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 505, @0x0000000002a09be0, libserver.so)
// globals: CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::DestructInstance  (line 505, @0x0000000002a09bf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lich_FrostArmor>
void __fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::FreeInstance  (line 505, @0x0000000002a09c10, libserver.so)
void __fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::CanAllocate  (line 505, @0x0000000002a09c30, libserver.so)
bool __fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 505, @0x0000000002a09c40, libserver.so)
// globals: CDOTA_Ability_Lich_FrostArmor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_FrostArmor::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::AllocateInstance  (line 505, @0x0000000002a0fa00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::ConstructInstance  (line 505, @0x0000000002a14200, libserver.so)  // inlines: CDOTA_Ability_Lich_FrostArmor, Construct<CDOTA_Ability_Lich_FrostArmor>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_434EE10;
  }
  return p;
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002a1f720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 505, @0x0000000002a1f740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal  (line 505, @0x0000000002a37760, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Lich_FrostArmor"
// globals: `guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass, CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass, __dso_handle, CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo, CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass);
    CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass._vptr_CEntityClass = off_434ED90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass);
    __cxa_atexit(
      CDOTA_Ability_Lich_FrostArmor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lich_FrostArmorClass != 0 )
    return &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass;
  if ( `guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo,
      "CDOTA_Ability_Lich_FrostArmor",
      "lich_frost_armor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo);
  }
  CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass.m_pClassInfo = &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo;
  CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass.m_pBaseClassInfo = CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lich_FrostArmorClass = &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass;
  CDOTA_Ability_Lich_FrostArmor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClassInfo.m_pClass = &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass;
  CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lich_FrostArmorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lich_FrostArmor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_FrostArmorClass;
}


// CDOTA_Ability_Lich_FrostArmor::GetIntrinsicModifierName  (line 508, @0x0000000002a09c50, libserver.so)
// strings: "modifier_lich_frost_armor_autocast"
const char *__fastcall CDOTA_Ability_Lich_FrostArmor::GetIntrinsicModifierName(
        CDOTA_Ability_Lich_FrostArmor *const this)
{
  return "modifier_lich_frost_armor_autocast";
}


// CDOTA_Ability_Lich_FrostArmor::OnSpellStart  (line 517, @0x00000000029c1a00, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_lich_frost_armor"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Lich_FrostArmor::OnSpellStart(CDOTA_Ability_Lich_FrostArmor *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rdi
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_lich_frost_armor");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_lich_frost_armor", &kv, 0);
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = 0;
    if ( v6 != 0 && v6->m_bIsDOTANPC && (v6->m_iUnitType & 1) != 0 && !v6->m_bIsIllusion.m_Value )
      v7 = v6;
    EconEntity_OnOwnerKillEaterEvent(
      v7,
      0,
      kill_eater_event_t::kKillEaterEventType_Lich_IceArmorCasts,
      1,
      INVALID_ITEM_DEF_INDEX);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Lich_FrostArmor_Autocast::~CDOTA_Modifier_Lich_FrostArmor_Autocast  (line 536, @0x0000000002a11ae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Autocast::~CDOTA_Modifier_Lich_FrostArmor_Autocast(
        CDOTA_Modifier_Lich_FrostArmor_Autocast *const this)
{
  this->_vptr_CDOTA_Buff = &off_434F8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_FrostArmor_Autocast::~CDOTA_Modifier_Lich_FrostArmor_Autocast  (line 536, @0x0000000002a11b00, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_FrostArmor_Autocast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Autocast::~CDOTA_Modifier_Lich_FrostArmor_Autocast(
        CDOTA_Modifier_Lich_FrostArmor_Autocast *const this)
{
  this->_vptr_CDOTA_Buff = &off_434F8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_FrostArmor_Autocast::IsHidden  (line 541, @0x0000000002a09c60, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_FrostArmor_Autocast::IsHidden(CDOTA_Modifier_Lich_FrostArmor_Autocast *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_FrostArmor_Autocast::DeclareFunctions  (line 551, @0x00000000029b53a0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Autocast::DeclareFunctions(
        CDOTA_Modifier_Lich_FrostArmor_Autocast *const this)
{
  this->m_Functions[120].__pfn = (&stru_10 + 697);
  this->m_Functions[120].__delta = 0;
}


// CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack  (line 558, @0x0000000002a02650, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsEntityInRangeForCast, CDOTA_BaseNPC::IsChanneling, CDOTA_BaseNPC::FindModifierByName, CUnitOrders::CUnitOrders, CUnitOrders::Reset, CEntityInstance::GetEntityIndex, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::AddToTail, DOTA_ExecuteOrders, CUtlVectorBase<CEntityIndex, CUtlMemory<CEntityIndex, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_lich_frost_armor"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostArmor_Autocast::OnAttack(
        CDOTA_Modifier_Lich_FrostArmor_Autocast *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  char m_CScriptComponent_high; // r13
  CDOTABaseAbility *Ability; // rax
  int v10; // r13d
  CDOTA_BaseNPC *Caster; // rax
  __m128i v12; // xmm0
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *v16; // rax
  CEntityIndex src; // [rsp+0h] [rbp-70h] BYREF
  CUnitOrders newOrders; // [rsp+10h] [rbp-60h] BYREF

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
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
          if ( m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
            && CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            v10 = (*(Ability->_vptr_IHandleEntity + 229))(Ability, &vec3_origin, 0);
            Caster = CDOTA_Buff::GetCaster(this);
            *v12.m128i_i32 = v10;
            if ( CDOTA_BaseNPC::IsEntityInRangeForCast(Caster, m_pInstance, v12, v13) )
            {
              v14 = CDOTA_Buff::GetCaster(this);
              if ( !CDOTA_BaseNPC::IsChanneling(v14)
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_lich_frost_armor", 0) == 0 )
              {
                CUnitOrders::CUnitOrders(&newOrders);
                CUnitOrders::Reset(&newOrders);
                newOrders.m_nIssuerPlayerIndex = -1;
                v15 = CDOTA_Buff::GetCaster(this);
                src.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::AddToTail(&newOrders.m_nUnits, &src);
                newOrders.m_nOrderType = 6;
                v16 = CDOTA_Buff::GetAbility(this);
                newOrders.m_nAbilityIndex = CEntityInstance::GetEntityIndex(v16);
                newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
                DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&newOrders.m_nUnits);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Lich_FrostArmor::~CDOTA_Modifier_Lich_FrostArmor  (line 590, @0x0000000002a11a90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_FrostArmor::~CDOTA_Modifier_Lich_FrostArmor(
        CDOTA_Modifier_Lich_FrostArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_434FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_FrostArmor::~CDOTA_Modifier_Lich_FrostArmor  (line 590, @0x0000000002a11ab0, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_FrostArmor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_FrostArmor::~CDOTA_Modifier_Lich_FrostArmor(
        CDOTA_Modifier_Lich_FrostArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_434FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_FrostArmor::GetStatusEffectName  (line 601, @0x0000000002a09c70, libserver.so)
// strings: "particles/status_fx/status_effect_frost_armor.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_FrostArmor::GetStatusEffectName(CDOTA_Modifier_Lich_FrostArmor *const this)
{
  return "particles/status_fx/status_effect_frost_armor.vpcf";
}


// CDOTA_Modifier_Lich_FrostArmor::StatusEffectPriority  (line 602, @0x0000000002a09c80, libserver.so)
int __fastcall CDOTA_Modifier_Lich_FrostArmor::StatusEffectPriority(CDOTA_Modifier_Lich_FrostArmor *const this)
{
  return 3;
}


// CDOTA_Modifier_Lich_FrostArmor::OnCreated  (line 614, @0x00000000029f95d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "special_bonus_unique_lich_1", "Hero_Lich.FrostArmor"
void __fastcall CDOTA_Modifier_Lich_FrostArmor::OnCreated(CDOTA_Modifier_Lich_FrostArmor *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // r12
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_bonus", -1, 0);
  else
    this->armor_bonus = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
  else
    this->slow_duration = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lich_1", 0);
  v7 = AbilityByName;
  if ( AbilityByName != 0
    && AbilityByName->m_iLevel.m_Value > 0
    && (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10) != 0 )
  {
    this->armor_bonus += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "value", 1, 1);
  }
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Lich.FrostArmor", 0.0, 0, 0);
}


// CDOTA_Modifier_Lich_FrostArmor::OnRefresh  (line 640, @0x00000000029f94c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "special_bonus_unique_lich_1", "Hero_Lich.FrostArmor"
void __fastcall CDOTA_Modifier_Lich_FrostArmor::OnRefresh(CDOTA_Modifier_Lich_FrostArmor *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // r12
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_bonus", -1, 0);
  else
    this->armor_bonus = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
  else
    this->slow_duration = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lich_1", 0);
  v7 = AbilityByName;
  if ( AbilityByName != 0
    && AbilityByName->m_iLevel.m_Value > 0
    && (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x10) != 0 )
  {
    this->armor_bonus += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "value", 1, 1);
  }
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Lich.FrostArmor", 0.0, 0, 0);
}


// CDOTA_Modifier_Lich_FrostArmor::DeclareFunctions  (line 658, @0x00000000029b53c0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lich_FrostArmor::DeclareFunctions(CDOTA_Modifier_Lich_FrostArmor *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[137].__pfn = (&stru_10 + 705);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Lich_FrostArmor::GetModifierPhysicalArmorBonus  (line 666, @0x00000000029b5400, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostArmor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Lich_FrostArmor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_FrostArmor::OnAttacked  (line 673, @0x00000000029c5cd0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_lich_frostarmor_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostArmor::OnAttacked(
        CDOTA_Modifier_Lich_FrostArmor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r13
  uint32 v8; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  float v13; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-28h]

  v17 = __readfsqword(0x28u);
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
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
        {
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
          if ( CDOTA_Buff::GetParent(this) == v12
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 4) == 0
            && v12->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent) )
          {
            KeyValues::KeyValues(&kv, "modifier_lich_frostarmor_slow");
            KeyValues::SetFloat(&kv, "duration", v13);
            Ability = CDOTA_Buff::GetAbility(this);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_lich_frostarmor_slow", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::~CDOTA_Modifier_Lich_FrostArmor_Slow  (line 696, @0x0000000002a11a40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::~CDOTA_Modifier_Lich_FrostArmor_Slow(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434FF30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::~CDOTA_Modifier_Lich_FrostArmor_Slow  (line 696, @0x0000000002a11a60, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_FrostArmor_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::~CDOTA_Modifier_Lich_FrostArmor_Slow(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_434FF30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::IsDebuff  (line 701, @0x0000000002a09c90, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::IsDebuff(CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::GetEffectName  (line 710, @0x0000000002a09ca0, libserver.so)
// strings: "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::GetEffectName(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  return "particles/units/heroes/hero_lich/lich_slowed_cold.vpcf";
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::GetStatusEffectName  (line 711, @0x0000000002a09cb0, libserver.so)
// strings: "particles/status_fx/status_effect_frost_lich.vpcf"
const char *__fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::GetStatusEffectName(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  return "particles/status_fx/status_effect_frost_lich.vpcf";
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::StatusEffectPriority  (line 712, @0x0000000002a09cc0, libserver.so)
int __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::StatusEffectPriority(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  return 9;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::OnCreated  (line 724, @0x00000000029f8770, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "slow_movement_speed", "slow_attack_speed", "Hero_Lich.FrostArmorDamage"
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::OnCreated(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->slow_attack_speed = 0;
    goto LABEL_4;
  }
  this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Lich.FrostArmorDamage", 0.0, 0, 0);
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::OnRefresh  (line 736, @0x00000000029f76b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed", "slow_attack_speed"
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::OnRefresh(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed = 0;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::DeclareFunctions  (line 744, @0x00000000029b5420, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::DeclareFunctions(CDOTA_Modifier_Lich_FrostArmor_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::GetModifierMoveSpeedBonus_Percentage  (line 752, @0x00000000029b5460, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lich_FrostArmor_Slow::GetModifierAttackSpeedBonus_Constant  (line 759, @0x00000000029b5480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lich_FrostArmor_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lich_FrostArmor_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Lich_DarkRitual::~CDOTA_Ability_Lich_DarkRitual  (line 770, @0x0000000002a17380, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lich_DarkRitual::~CDOTA_Ability_Lich_DarkRitual(
        CDOTA_Ability_Lich_DarkRitual *const this)
{
  this->_vptr_IHandleEntity = &off_43502B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lich_DarkRitual::~CDOTA_Ability_Lich_DarkRitual  (line 770, @0x0000000002a173a0, libserver.so)  // inlines: ~CDOTA_Ability_Lich_DarkRitual
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lich_DarkRitual::~CDOTA_Ability_Lich_DarkRitual(
        CDOTA_Ability_Lich_DarkRitual *const this)
{
  this->_vptr_IHandleEntity = &off_43502B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lich_DarkRitual::Schema_DynamicBinding  (line 772, @0x0000000002a09cd0, libserver.so)
// globals: CDOTA_Ability_Lich_DarkRitual::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_DarkRitual::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_DarkRitual *const this)
{
  return CDOTA_Ability_Lich_DarkRitual::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 772, @0x0000000002a09ce0, libserver.so)
// globals: CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::DestructInstance  (line 772, @0x0000000002a09cf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lich_DarkRitual>
void __fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::FreeInstance  (line 772, @0x0000000002a09d10, libserver.so)
void __fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::CanAllocate  (line 772, @0x0000000002a09d30, libserver.so)
bool __fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 772, @0x0000000002a09d40, libserver.so)
// globals: CDOTA_Ability_Lich_DarkRitual::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_DarkRitual::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::AllocateInstance  (line 772, @0x0000000002a0fa40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::ConstructInstance  (line 772, @0x0000000002a14230, libserver.so)  // inlines: CDOTA_Ability_Lich_DarkRitual, Construct<CDOTA_Ability_Lich_DarkRitual>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43502B0;
  }
  return p;
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 772, @0x0000000002a1f770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 772, @0x0000000002a1f790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal  (line 772, @0x0000000002a378b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "lich_dark_ritual", "CDOTA_Ability_Lich_DarkRitual"
// globals: `guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass, CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass, __dso_handle, CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo, CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass);
    CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass._vptr_CEntityClass = off_4350230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass);
    __cxa_atexit(
      CDOTA_Ability_Lich_DarkRitual::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lich_DarkRitualClass != 0 )
    return &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass;
  if ( `guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo,
      "CDOTA_Ability_Lich_DarkRitual",
      "lich_dark_ritual",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo);
  }
  CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass.m_pClassInfo = &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo;
  CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass.m_pBaseClassInfo = CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lich_DarkRitualClass = &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass;
  CDOTA_Ability_Lich_DarkRitual::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClassInfo.m_pClass = &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass;
  CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lich_DarkRitualClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lich_DarkRitual::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_DarkRitualClass;
}


// CDOTA_Ability_Lich_DarkRitual::OnSpellStart  (line 782, @0x0000000002a05800, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC_Hero*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTABaseAbility::GetCaster, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetHealth, CDOTA_BaseNPC::GiveMana, CDOTA_BaseNPC::Kill, SendOverheadEventMessage (19 total)
// strings: "health_conversion", "particles/units/heroes/hero_lich/lich_dark_ritual.vpcf", "attach_attack1", "Ability.DarkRitual"
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Lich_DarkRitual::OnSpellStart(CDOTA_Ability_Lich_DarkRitual *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r15
  int LevelSpecialValue; // r13d
  int AbilityParticleEffect; // r12d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  __m128i v12; // xmm3
  float v13; // r12d
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTAPlayer *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  const Vector *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  __int64 v22; // r12
  int v23; // ebx
  CConcreteEntityList *v24; // rsi
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  __int64 v29; // rcx
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // r13
  __int64 m_Size; // r14
  CDOTA_BaseNPC_Hero **v33; // rax
  int v34; // ebx
  __m128i v35; // xmm5
  __m128i v36; // xmm2
  unsigned int v37; // r12d
  __int64 v38; // r13
  unsigned __int64 v39; // rbx
  CDOTA_BaseNPC *pEnt; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  CUtlVector<CDOTA_BaseNPC_Hero*,CUtlMemory<CDOTA_BaseNPC_Hero*,int> > xpSplittingHeroes; // [rsp+50h] [rbp-50h] BYREF

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "health_conversion", -1, 0);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_lich/lich_dark_ritual.vpcf",
                              2,
                              0,
                              0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 0, v3, 1, 0, *AbsOrigin, 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = CBaseEntity::GetAbsOrigin(Caster);
    pEnt = CDOTABaseAbility::GetCaster(this);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v10, AbilityParticleEffect, 1, pEnt, 5, "attach_attack1", *v9, 1);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, AbilityParticleEffect);
    *v12.m128i_i32 = (LevelSpecialValue * CBaseEntity::GetHealth(v3) / 100);
    v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::GiveMana(v14, v13, 0, 1);
    CDOTA_BaseNPC::Kill(v3, 0, 0, 0.0, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = (*(v15->_vptr_IHandleEntity + 413))(v15);
    SendOverheadEventMessage(v16, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v3, v13, 0);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v17, "Ability.DarkRitual", 0.0, 0, 0);
    v18 = CDOTABaseAbility::GetCaster(this);
    if ( v18 != 0 )
    {
      v19 = 0;
      if ( v18->m_bIsDOTANPC && (v18->m_iUnitType & 1) != 0 && !v18->m_bIsIllusion.m_Value )
        v19 = v18;
    }
    else
    {
      v19 = 0;
    }
    EconEntity_OnOwnerKillEaterEvent(
      v19,
      0,
      kill_eater_event_t::kKillEaterEventType_Lich_Sacrifices,
      1,
      INVALID_ITEM_DEF_INDEX);
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v20 = CBaseEntity::GetAbsOrigin(v3);
    v21 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v21->m_iTeamNum.m_Value, v20, v3, 1300.0, &entities, 1, 1, 270424, 0, 0);
    xpSplittingHeroes.m_Size = 0;
    xpSplittingHeroes.m_Memory.m_pMemory = 0;
    xpSplittingHeroes.m_Memory.m_nAllocationCount = 0;
    xpSplittingHeroes.m_Memory.m_nGrowSize = 0;
    if ( entities.m_Size <= 0 )
      goto LABEL_31;
    v22 = 0;
    v23 = 0;
    do
    {
      while ( 1 )
      {
        v24 = CEntityHandle::gm_pEntityList;
        v25 = &entities.m_Memory.m_pMemory[v22];
        m_Index = entities.m_Memory.m_pMemory[v22].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v27 = v25->m_Index;
          v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = v27 & 0x1FF;
            v24 = (8 * v29);
            v30 = &v28[v29];
            if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
            {
              m_pInstance = v30->m_pInstance;
              if ( v30->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (m_pInstance->m_iUnitType & 1) != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v30->m_pInstance) != 0 )
              {
                m_Size = xpSplittingHeroes.m_Size;
                if ( xpSplittingHeroes.m_Size == xpSplittingHeroes.m_Memory.m_nAllocationCount )
                  CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Grow(&xpSplittingHeroes.m_Memory, 1);
                ++xpSplittingHeroes.m_Size;
                v33 = &xpSplittingHeroes.m_Memory.m_pMemory[m_Size];
                if ( v33 != 0 )
                  break;
              }
            }
          }
        }
        ++v23;
        ++v22;
        if ( entities.m_Size <= v23 )
          goto LABEL_21;
      }
      *v33 = m_pInstance;
      ++v23;
      ++v22;
    }
    while ( entities.m_Size > v23 );
LABEL_21:
    v34 = xpSplittingHeroes.m_Size;
    if ( xpSplittingHeroes.m_Size != 0 )
    {
      *v35.m128i_i32 = (*(v3->_vptr_IHandleEntity + 409))(v3, v24);
      v36 = v35;
      *v36.m128i_i32 = *v35.m128i_i32 / v34;
      v37 = _mm_cvtsi128_si32(v36);
      if ( v34 > 0 )
      {
        v38 = 8LL * (v34 - 1) + 8;
        v39 = 0;
        do
        {
          (*(xpSplittingHeroes.m_Memory.m_pMemory[v39 / 8]->_vptr_IHandleEntity + 493))(
            xpSplittingHeroes.m_Memory.m_pMemory[v39 / 8],
            0,
            1,
            1,
            *_mm_cvtsi32_si128(v37).m128i_i64);
          v39 += 8LL;
        }
        while ( v39 != v38 );
      }
      xpSplittingHeroes.m_Size = 0;
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_26;
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_26;
    }
    else
    {
LABEL_31:
      xpSplittingHeroes.m_Size = 0;
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_26;
      CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
      if ( (xpSplittingHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
        goto LABEL_26;
    }
    CUtlMemory<CDOTA_BaseNPC_Hero *,int>::Purge(&xpSplittingHeroes.m_Memory);
LABEL_26:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Lich_ChainFrost::~CDOTA_Ability_Lich_ChainFrost  (line 853, @0x0000000002a173d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lich_ChainFrost::~CDOTA_Ability_Lich_ChainFrost(
        CDOTA_Ability_Lich_ChainFrost *const this)
{
  this->_vptr_IHandleEntity = &off_4350DB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lich_ChainFrost::~CDOTA_Ability_Lich_ChainFrost  (line 853, @0x0000000002a173f0, libserver.so)  // inlines: ~CDOTA_Ability_Lich_ChainFrost
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lich_ChainFrost::~CDOTA_Ability_Lich_ChainFrost(
        CDOTA_Ability_Lich_ChainFrost *const this)
{
  this->_vptr_IHandleEntity = &off_4350DB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lich_ChainFrost::Schema_DynamicBinding  (line 855, @0x0000000002a09d50, libserver.so)
// globals: CDOTA_Ability_Lich_ChainFrost::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_ChainFrost::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_ChainFrost *const this)
{
  return CDOTA_Ability_Lich_ChainFrost::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 855, @0x0000000002a09d60, libserver.so)
// globals: CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::DestructInstance  (line 855, @0x0000000002a09d70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lich_ChainFrost>
void __fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::FreeInstance  (line 855, @0x0000000002a09d90, libserver.so)
void __fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::CanAllocate  (line 855, @0x0000000002a09db0, libserver.so)
bool __fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 855, @0x0000000002a09dc0, libserver.so)
// globals: CDOTA_Ability_Lich_ChainFrost::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lich_ChainFrost::s_pSchemaBinding;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::AllocateInstance  (line 855, @0x0000000002a0fa80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::ConstructInstance  (line 855, @0x0000000002a14260, libserver.so)  // inlines: CDOTA_Ability_Lich_ChainFrost, Construct<CDOTA_Ability_Lich_ChainFrost>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 233) = 0;
    *p = &off_4350DB0;
    *(p + 234) = -1;
  }
  return p;
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 855, @0x0000000002a1f7c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 855, @0x0000000002a1f7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal  (line 855, @0x0000000002a37a00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "lich_chain_frost", "CDOTA_Ability_Lich_ChainFrost"
// globals: `guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass, CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass, __dso_handle, CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo, CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass);
    CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass._vptr_CEntityClass = off_4350D30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass);
    __cxa_atexit(
      CDOTA_Ability_Lich_ChainFrost::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lich_ChainFrostClass != 0 )
    return &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass;
  if ( `guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo,
      "CDOTA_Ability_Lich_ChainFrost",
      "lich_chain_frost",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo);
  }
  CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass.m_pClassInfo = &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo;
  CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass.m_pBaseClassInfo = CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lich_ChainFrostClass = &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass;
  CDOTA_Ability_Lich_ChainFrost::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClassInfo.m_pClass = &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass;
  CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lich_ChainFrostClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lich_ChainFrost::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lich_ChainFrostClass;
}


// CDOTA_Ability_Lich_ChainFrost::GetCastRange  (line 859, @0x0000000002a33b50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Lich_ChainFrost::GetCastRange(
        CDOTA_Ability_Lich_ChainFrost *const this,
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


// CDOTA_Ability_Lich_ChainFrost::GetAbilityDamage  (line 860, @0x0000000002a33bb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Lich_ChainFrost::GetAbilityDamage(CDOTA_Ability_Lich_ChainFrost *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v4; // rsi

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = "damage_scepter";
  if ( !HasScepter )
    v4 = "damage";
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v4, -1, 0);
}


// CDOTA_Ability_Lich_ChainFrost::GetAvoidRadius  (line 867, @0x0000000002a09dd0, libserver.so)
float __fastcall CDOTA_Ability_Lich_ChainFrost::GetAvoidRadius(CDOTA_Ability_Lich_ChainFrost *const this)
{
  return this->jump_range + 150.0;
}


// CDOTA_Ability_Lich_ChainFrost::IsAvoidMagical  (line 868, @0x0000000002a09df0, libserver.so)
bool __fastcall CDOTA_Ability_Lich_ChainFrost::IsAvoidMagical(CDOTA_Ability_Lich_ChainFrost *const this)
{
  return 1;
}


// CDOTA_Ability_Lich_ChainFrost::GetAvoidStrength  (line 869, @0x0000000002a212e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Ability_Lich_ChainFrost::GetAvoidStrength(
        CDOTA_Ability_Lich_ChainFrost *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 300.0) / 1200.0;
  if ( v6 < 0.0 )
    return 0.89999998;
  result = 0.5;
  if ( v6 <= 1.0 )
    return (v6 * -0.39999998) + 0.89999998;
  return result;
}


// CDOTA_Ability_Lich_ChainFrost::YouForgotToImplementOrDeclareServerClass  (line 887, @0x00000000029b54a0, libserver.so)
int __fastcall CDOTA_Ability_Lich_ChainFrost::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lich_ChainFrost *const this)
{
  return 0;
}


// CDOTA_Ability_Lich_ChainFrost::GetServerClass  (line 887, @0x00000000029c9ff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lich_ChainFrost::GetServerClass(CDOTA_Ability_Lich_ChainFrost *const this)
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


// CDOTA_Ability_Lich_ChainFrost::OnSpellStart  (line 899, @0x00000000029eab70, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetAbilityData, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, InValidate, IsInvulnerable, StopSoundEvent, ToDOTABaseNPC, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, KeyValues::SetFloat, KeyValues::SetInt, GetProjectileAttachmentName, CBaseAnimating::GetAttachment, Thinker_Create, CDOTA_BaseNPC::UnitEmitSound (25 total)
// strings: "jump_range", "modifier_lich_chain_frost_thinker", "avoid_target", "damage_to_heroes", "heroes_killed", "Hero_Lich.ChainFrost" (8 total)
void __fastcall CDOTA_Ability_Lich_ChainFrost::OnSpellStart(CDOTA_Ability_Lich_ChainFrost *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r13
  CBaseEntity *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  const char *ProjectileAttachmentName; // r14
  CDOTA_BaseNPC *v8; // rax
  const CBaseAnimating *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CSoundOpGameSystem *v12; // r15
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm3_4
  Vector vecOrigin; // [rsp+10h] [rbp-1A0h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-190h] BYREF
  KeyValues kv_stun; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v24; // [rsp+178h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    this->jump_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "jump_range", -1, 0);
    this->jumps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "jumps", -1, 0);
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
    this->vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
    this->projectile_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_lich_chain_frost_thinker");
    v4 = CDOTABaseAbility::GetCursorTarget(this);
    KeyValues::SetPtr(&kv, "target", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    KeyValues::SetPtr(&kv, "avoid_target", Caster);
    KeyValues::SetFloat(&kv, "delay", v6);
    KeyValues::SetInt(&kv, "jumps", this->jumps);
    KeyValues::SetInt(&kv, "damage_to_heroes", 0);
    KeyValues::SetInt(&kv, "heroes_killed", 0);
    ProjectileAttachmentName = GetProjectileAttachmentName(3);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = (*(v8->_vptr_IHandleEntity + 43))(v8);
    CBaseAnimating::GetAttachment(v9, ProjectileAttachmentName, &vecOrigin);
    LODWORD(ProjectileAttachmentName) = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v10 = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(v10, this, "modifier_lich_chain_frost_thinker", &kv, vecOrigin, ProjectileAttachmentName, 0, 0, 0);
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Lich.ChainFrost", 0.0, 0, 0);
    v12 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&kv_stun);
      kv_stun.m_uValue = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&kv_stun);
      kv_stun.m_uValue = &off_3FCB130;
      CRecipientFilter::MakeReliable(&kv_stun);
      CSoundOpGameSystem::StopSoundEvent(v12, &kv_stun, this->m_SoundEventGuid);
      kv_stun.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv_stun);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    v13 = CDOTABaseAbility::GetCaster(this);
    this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Lich.ChainFrostLoop", 0.0, 0, 0);
    if ( LOBYTE(v3[4].m_pfnMoveDone.__pfn) == 0
      && (BYTE1(v3[3].m_vecVelocity.m_Value.x) & 1) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv_stun, "modifier_stunned");
      KeyValues::SetFloat(&kv_stun, "duration", v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v15, this, "modifier_stunned", &kv_stun, 0);
      KeyValues::~KeyValues(&kv_stun);
    }
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v19 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v19,
      0,
      m_iAbilityID,
      0,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      10.0,
      v20);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Lich_ChainFrost::OnProjectileThink  (line 945, @0x00000000029c8b30, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CDOTAPASFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CDOTABaseAbility::GetCaster, CDOTAPASFilter::CDOTAPASFilter, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Lich_ChainFrost::OnProjectileThink(
        CDOTA_Ability_Lich_ChainFrost *const this,
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


// CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData  (line 968, @0x00000000029fd0b0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, InValidate, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, Random, SpeakConcept, StopSoundEvent, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, KeyValues::GetInt, RandomInt, KeyValues::KeyValues, KeyValues::SetPtr, KeyValues::SetFloat, KeyValues::SetInt, GetProjectileAttachmentName, CBaseAnimating::GetAttachment (38 total)
// strings: "damage_to_heroes", "heroes_killed", "modifier_lich_chain_frost_thinker", "avoid_target", "modifier_lich_chainfrost_slow", "Hero_Lich.ChainFrostImpact.Hero" (9 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Lich_ChainFrost::OnProjectileHit_ExtraData(
        CDOTA_Ability_Lich_ChainFrost *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityInstance *v6; // rax
  __m128i v7; // xmm2
  CEntityInstance *v8; // r12
  __int64 v9; // rax
  float v10; // r15d
  CDOTA_BaseNPC *Caster; // rax
  int i; // r15d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // rdi
  int (**vptr_IHandleEntity)(...); // rax
  int m_Size; // esi
  int v21; // eax
  float v22; // xmm1_4
  const char *ProjectileAttachmentName; // r14
  const CBaseAnimating *v24; // rax
  int m_Value; // r12d
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // rdi
  float v30; // xmm1_4
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  int v33; // r15d
  float v34; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CSoundOpGameSystem *v36; // r12
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CEntityInstance *value; // [rsp+18h] [rbp-1F8h]
  float valuea; // [rsp+18h] [rbp-1F8h]
  int nHeroesKilleda; // [rsp+20h] [rbp-1F0h]
  int nDamageToHeroes; // [rsp+28h] [rbp-1E8h]
  int nJumpsRemaining; // [rsp+2Ch] [rbp-1E4h]
  Vector vBounceLocation; // [rsp+30h] [rbp-1E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-1D0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-1B0h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-170h] BYREF
  unsigned __int64 v56; // [rsp+1D8h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  v6 = CEntityHandle::operator CEntityInstance *(hTarget);
  if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    v8 = v6;
  else
    v8 = 0;
  v9 = *&vLocation->x;
  *v7.m128i_i32 = this->jump_range;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  *&vBounceLocation.x = v9;
  *&v9 = vLocation->z;
  entities.m_Memory.m_nGrowSize = 0;
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  LODWORD(vBounceLocation.z) = v9;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vBounceLocation, v8, v10, &entities, 2, 3, 272, 0, 0);
  for ( i = 0; entities.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v13 = &entities.m_Memory.m_pMemory[i];
      m_Index = v13->m_Index;
      if ( v13->m_Index + 2 > 1 )
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
              && v8 != m_pInstance
              && (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) == 0 )
            {
              break;
            }
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&entities, i);
      if ( entities.m_Size <= i )
        goto LABEL_16;
    }
  }
LABEL_16:
  nJumpsRemaining = KeyValues::GetInt(pExtraData, "jumps", 0);
  nDamageToHeroes = KeyValues::GetInt(pExtraData, "damage_to_heroes", 0);
  nHeroesKilleda = KeyValues::GetInt(pExtraData, "heroes_killed", 0);
  if ( nJumpsRemaining == this->jumps )
  {
    if ( v8 == 0 )
      goto LABEL_22;
    if ( LOBYTE(v8[71]._vptr_IHandleEntity) == 0
      && (BYTE1(v8[58]._vptr_IHandleEntity) & 1) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v8, this, 0)
      && (BYTE1(v8[58]._vptr_IHandleEntity) & 2) == 0 )
    {
      goto LABEL_37;
    }
  }
  else
  {
    if ( v8 == 0 )
      goto LABEL_22;
    vptr_IHandleEntity = v8[58]._vptr_IHandleEntity;
    if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
      && LOBYTE(v8[71]._vptr_IHandleEntity) == 0
      && (BYTE1(vptr_IHandleEntity) & 1) == 0
      && (*(v8->_vptr_IHandleEntity + 403))(v8) == 0 )
    {
LABEL_37:
      KeyValues::KeyValues(&kv, "modifier_lich_chainfrost_slow");
      KeyValues::SetFloat(&kv, "duration", v30);
      v31 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v8, v31, this, "modifier_lich_chainfrost_slow", &kv, 0);
      valuea = (*(this->_vptr_IHandleEntity + 247))(this);
      v32 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v32, v8, this, valuea, 2, 0);
      KeyValues::~KeyValues(&kv);
      if ( (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
LABEL_38:
        CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Lich.ChainFrostImpact.Hero", 0.0, 0, 0);
        v33 = (*(this->_vptr_IHandleEntity + 247))(this);
        if ( (*(v8->_vptr_IHandleEntity + 408))(v8) == 0 )
        {
          ++nHeroesKilleda;
          v33 *= this->jumps;
        }
        m_Size = entities.m_Size;
        nDamageToHeroes += v33;
        if ( entities.m_Size <= 0 )
          goto LABEL_41;
        goto LABEL_23;
      }
      goto LABEL_20;
    }
  }
  if ( (v8[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
    goto LABEL_38;
LABEL_20:
  if ( nJumpsRemaining >= -49 )
    CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Lich.ChainFrostImpact.Creep", 0.0, 0, 0);
LABEL_22:
  m_Size = entities.m_Size;
  if ( entities.m_Size <= 0 )
    goto LABEL_41;
LABEL_23:
  if ( nJumpsRemaining <= 0 )
  {
    v45 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v45) )
    {
      m_Size = entities.m_Size;
      goto LABEL_24;
    }
LABEL_41:
    (*(this->_vptr_IHandleEntity + 247))(this);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "chainfrost_damageratio", 1.0, v34);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    v36 = g_pSoundOpGameSystem;
    if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&kv);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&kv);
      kv.m_uValue = &off_3FCB130;
      CRecipientFilter::MakeReliable(&kv);
      CSoundOpGameSystem::StopSoundEvent(v36, &kv, this->m_SoundEventGuid);
      kv.m_uValue = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&kv);
      this->m_SoundEventGuid.m_nGuid.m_Data = 0;
      this->m_SoundEventGuid.m_hStackHash = -1;
    }
    v37 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v37, "Hero_Lich.ChainFrost");
    if ( nHeroesKilleda > 1 )
    {
      v38 = CDOTABaseAbility::GetCaster(this);
      v39 = ToDOTABaseNPCRealHero(v38);
      EconEntity_OnOwnerKillEaterEvent(
        v39,
        0,
        kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostMultiKills,
        1,
        INVALID_ITEM_DEF_INDEX);
      if ( nHeroesKilleda != 2 )
      {
        v40 = CDOTABaseAbility::GetCaster(this);
        v41 = ToDOTABaseNPCRealHero(v40);
        EconEntity_OnOwnerKillEaterEvent(
          v41,
          0,
          kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostTripleKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v44 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v44, m_iAbilityID);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    goto LABEL_31;
  }
LABEL_24:
  v21 = RandomInt(0, (m_Size - 1));
  value = CEntityHandle::operator CEntityInstance *(&entities.m_Memory.m_pMemory[v21]);
  if ( value != 0 && BYTE3(value[7]._vptr_IHandleEntity) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_lich_chain_frost_thinker");
    KeyValues::SetPtr(&kv, "target", value);
    KeyValues::SetPtr(&kv, "avoid_target", v8);
    KeyValues::SetFloat(&kv, "delay", v22);
    KeyValues::SetInt(&kv, "jumps", nJumpsRemaining - 1);
    KeyValues::SetInt(&kv, "damage_to_heroes", nDamageToHeroes);
    KeyValues::SetInt(&kv, "heroes_killed", nHeroesKilleda);
    criteria._vptr_CResponseCriteriaSet = *&vLocation->x;
    *&criteria.m_Lookup.m_LessFunc = vLocation->z;
    if ( v8 != 0 )
    {
      ProjectileAttachmentName = GetProjectileAttachmentName(3);
      v24 = (*(v8->_vptr_IHandleEntity + 43))(v8);
      CBaseAnimating::GetAttachment(v24, ProjectileAttachmentName, &criteria);
    }
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v26 = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(
      v26,
      this,
      "modifier_lich_chain_frost_thinker",
      &kv,
      *&criteria._vptr_CResponseCriteriaSet,
      m_Value,
      0,
      0,
      0);
    v27 = CDOTABaseAbility::GetCaster(this);
    v28 = 0;
    if ( v27 != 0 && v27->m_bIsDOTANPC && (v27->m_iUnitType & 1) != 0 && !v27->m_bIsIllusion.m_Value )
      v28 = v27;
    EconEntity_OnOwnerKillEaterEvent(
      v28,
      0,
      kill_eater_event_t::kKillEaterEventType_Lich_ChainFrostBounces,
      1,
      INVALID_ITEM_DEF_INDEX);
    KeyValues::~KeyValues(&kv);
  }
LABEL_31:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return 1;
}


// CDOTA_Ability_Lich_ChainFrost::GetAbilityDamageToTargetOverInterval  (line 1100, @0x00000000029e58b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lich_ChainFrost::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lich_ChainFrost *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1);
    return ((LevelSpecialValue * 3.0) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Lich_Chain_Frost_Thinker::~CDOTA_Modifier_Lich_Chain_Frost_Thinker  (line 1111, @0x0000000002a119f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lich_Chain_Frost_Thinker::~CDOTA_Modifier_Lich_Chain_Frost_Thinker(
        CDOTA_Modifier_Lich_Chain_Frost_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4351870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lich_Chain_Frost_Thinker::~CDOTA_Modifier_Lich_Chain_Frost_Thinker  (line 1111, @0x0000000002a11a10, libserver.so)  // inlines: ~CDOTA_Modifier_Lich_Chain_Frost_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lich_Chain_Frost_Thinker::~CDOTA_Modifier_Lich_Chain_Frost_Thinker(
        CDOTA_Modifier_Lich_Chain_Frost_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4351870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lich_Chain_Frost_Thinker::IsHidden  (line 1119, @0x0000000002a09e00, libserver.so)
bool __fastcall CDOTA_Modifier_Lich_Chain_Frost_Thinker::IsHidden(CDOTA_Modifier_Lich_Chain_Frost_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnCreated  (line 1134, @0x00000000029b6c20, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "avoid_target", "damage_to_heroes", "heroes_killed"
void __fastcall CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnCreated(
        CDOTA_Modifier_Lich_Chain_Frost_Thinker *const this,
        KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v5; // rdx
  int v6; // eax
  __int16 v7; // cx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  float v12; // xmm1_4
  float Float; // xmm0_4
  float v14; // xmm1_4

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v5 = Ptr[1]) != 0 )
  {
    v6 = (*(v5 + 16) >> 15) - (*(v5 + 48) & 1);
    v7 = 0x7FFF;
    if ( *(v5 + 16) != -1 )
      v7 = *(v5 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v7 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v6 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v8 = KeyValues::GetPtr(pKV, "avoid_target", 0);
  if ( v8 != 0 && (v9 = v8[1]) != 0 )
  {
    v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    if ( *(v9 + 16) == -1 )
      v11 = 0x7FFF;
    else
      v11 = *(v9 + 16) & 0x7FFF;
    LOWORD(this->m_hAvoidTarget.m_Index) = v11 | this->m_hAvoidTarget.m_Index & 0x8000;
    this->m_hAvoidTarget.m_Index = (v10 << 15) | this->m_hAvoidTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAvoidTarget.m_Index = -1;
  }
  this->m_nJumps = KeyValues::GetInt(pKV, "jumps", 0);
  this->m_nDamageToHeroes = KeyValues::GetInt(pKV, "damage_to_heroes", 0);
  this->m_nHeroesKilled = KeyValues::GetInt(pKV, "heroes_killed", 0);
  Float = KeyValues::GetFloat(pKV, "delay", v12);
  CDOTA_Buff::StartIntervalThink(this, Float, v14);
}


// CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnIntervalThink  (line 1148, @0x00000000029fc5b0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, DotaRetrieveAbilityValue<int>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo
// calls: CDOTA_Buff::GetParent, UTIL_Remove, __stack_chk_fail, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetInt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, KeyValues::~KeyValues, _Unwind_Resume
// strings: "damage_to_heroes", "heroes_killed", "particles/units/heroes/hero_lich/lich_chain_frost.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Lich_Chain_Frost_Thinker::OnIntervalThink(
        CDOTA_Modifier_Lich_Chain_Frost_Thinker *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *v5; // rax
  CEntityInstance *m_pInstance; // r15
  CDOTABaseAbility *Ability; // rdi
  int LevelSpecialValue; // r14d
  int v9; // r13d
  CDOTABaseAbility *v10; // rax
  bool v11; // sf
  bool v12; // of
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rax
  int v16; // edx
  __int16 v17; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v19; // rax
  bool bVision; // [rsp+Fh] [rbp-C1h]
  KeyValues kv; // [rsp+10h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp-38h]

  v23 = __readfsqword(0x28u);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "projectile_speed", -1, 0);
    else
      LevelSpecialValue = 0;
    v9 = 0;
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v10, "vision_radius", -1, 0);
    KeyValues::KeyValues(&kv, "chain_frost");
    KeyValues::SetInt(&kv, "jumps", this->m_nJumps);
    KeyValues::SetInt(&kv, "damage_to_heroes", this->m_nDamageToHeroes);
    KeyValues::SetInt(&kv, "heroes_killed", this->m_nHeroesKilled);
    info.bProvidesVision = 0;
    v12 = __OFSUB__(this->m_nJumps, -50);
    v11 = this->m_nJumps + 50 < 0;
    info.hTarget.m_Index = -1;
    info.hSource.m_Index = -1;
    info.colorGemColor = 0;
    info.bDrawsOnMinimap = 0;
    bVision = v11 == v12;
    info.bDodgeable = 1;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    memset(&info.pAbility, 0, 20);
    info.vSourceLoc.y = y;
    info.vSourceLoc.z = vec3_origin.z;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.iVisionRadius = 0;
    info.bIsAttack = 0;
    info.bVisibleToEnemies = 1;
    info.pKVExtraData = 0;
    info.bReplaceExisting = 0;
    info.flExpireTime = 0.0;
    info.flMaxImpactTime = 0.0;
    info.bServerOnly = 0;
    info.pszEffectName = "particles/units/heroes/hero_lich/lich_chain_frost.vpcf";
    info.pAbility = CDOTA_Buff::GetAbility(this);
    info.iMoveSpeed = LevelSpecialValue;
    Parent = CDOTA_Buff::GetParent(this);
    info.vSourceLoc = *CBaseEntity::GetAbsOrigin(Parent);
    m_pEntity = m_pInstance->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v17 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v16 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    if ( CDOTA_Buff::GetCaster(this) != 0 )
    {
      info.bProvidesVision = bVision;
      m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
      info.iVisionRadius = v9;
      info.iVisionTeamNumber = m_Value;
    }
    info.bDodgeable = 0;
    info.pKVExtraData = &kv;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    v19 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v19);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v5 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v5);
  }
}


