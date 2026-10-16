// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:37
class CDOTA_Unit_Hero_Lina : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Lina(CDOTA_Unit_Hero_Lina &);
	CDOTA_Unit_Hero_Lina(CDOTA_Unit_Hero_Lina &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnDeath();
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Lina();
	virtual ~CDOTA_Unit_Hero_Lina();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[470] OnDeath
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:51
class C_CDOTA_Unit_Hero_Lina_MapInstall {
	C_CDOTA_Unit_Hero_Lina_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:79
class CDOTA_Ability_Lina_DragonSlave : public CDOTABaseAbility {
public:

private:

	int dragon_slave_distance;  // +0x398
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
	CDOTA_Ability_Lina_DragonSlave(CDOTA_Ability_Lina_DragonSlave &);
	CDOTA_Ability_Lina_DragonSlave(CDOTA_Ability_Lina_DragonSlave &);
	CDOTA_Ability_Lina_DragonSlave();
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
	virtual const char * GetStolenActivityModifier();
	virtual void OnProjectileThink(const Vector &);
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lina_DragonSlave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[291] OnProjectileThink
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:108
class C_CDOTA_Ability_Lina_DragonSlave_MapInstall {
	C_CDOTA_Ability_Lina_DragonSlave_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:251
class CDOTA_Ability_Lina_LightStrikeArray : public CDOTABaseAbility {
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
	CDOTA_Ability_Lina_LightStrikeArray(CDOTA_Ability_Lina_LightStrikeArray &);
	CDOTA_Ability_Lina_LightStrikeArray(CDOTA_Ability_Lina_LightStrikeArray &);
	CDOTA_Ability_Lina_LightStrikeArray();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Lina_LightStrikeArray();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:274
class C_CDOTA_Ability_Lina_LightStrikeArray_MapInstall {
	C_CDOTA_Ability_Lina_LightStrikeArray_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:317
class CDOTA_Modifier_Lina_LightStrikeArray_Thinker : public CDOTA_Buff {
public:

private:

	int m_iDamage;  // +0xba8
	float m_flStunDuration;  // +0xbac
	int light_strike_array_aoe;  // +0xbb0
	CDOTA_Modifier_Lina_LightStrikeArray_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Lina_LightStrikeArray_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:430
class CDOTA_Ability_Lina_FierySoul : public CDOTABaseAbility {
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
	CDOTA_Ability_Lina_FierySoul(CDOTA_Ability_Lina_FierySoul &);
	CDOTA_Ability_Lina_FierySoul(CDOTA_Ability_Lina_FierySoul &);
	CDOTA_Ability_Lina_FierySoul();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Lina_FierySoul();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:446
class CDOTA_Modifier_Lina_FierySoul : public CDOTA_Buff {
public:

private:

	int fiery_soul_attack_speed_bonus;  // +0xba8
	int fiery_soul_move_speed_bonus;  // +0xbac
	int fiery_soul_max_stacks;  // +0xbb0
	float fiery_soul_stack_duration;  // +0xbb4
	int m_nFXIndex;  // +0xbb8
	float m_flFierySoulDieTime;  // +0xbbc
	CDOTA_Modifier_Lina_FierySoul();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual bool DestroyOnExpire();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ~CDOTA_Modifier_Lina_FierySoul();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[61] DestroyOnExpire
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:565
class CDOTA_Ability_Lina_LagunaBlade : public CDOTABaseAbility {
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
	CDOTA_Ability_Lina_LagunaBlade(CDOTA_Ability_Lina_LagunaBlade &);
	CDOTA_Ability_Lina_LagunaBlade(CDOTA_Ability_Lina_LagunaBlade &);
	CDOTA_Ability_Lina_LagunaBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual int GetAbilityDamage();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetStolenActivityModifier();
	virtual int GetCurrentAbilityDamageType();
	virtual int GetCurrentAbilityImmunityType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Lina_LagunaBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[256] CastFilterResult
	// vtable[266] OnSpellStart
	// vtable[247] GetAbilityDamage
	// vtable[226] GetCastRange
	// vtable[310] GetStolenActivityModifier
	// vtable[253] GetCurrentAbilityDamageType
	// vtable[254] GetCurrentAbilityImmunityType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:590
class C_CDOTA_Ability_Lina_LagunaBlade_MapInstall {
	C_CDOTA_Ability_Lina_LagunaBlade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:673
class CDOTA_Modifier_Lina_LagunaBlade : public CDOTA_Buff {
public:

	CDOTA_Modifier_Lina_LagunaBlade();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Lina_LagunaBlade();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:716
class CDOTA_Ability_Holdout_FierySoul : public CDOTABaseAbility {
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
	CDOTA_Ability_Holdout_FierySoul(CDOTA_Ability_Holdout_FierySoul &);
	CDOTA_Ability_Holdout_FierySoul(CDOTA_Ability_Holdout_FierySoul &);
	CDOTA_Ability_Holdout_FierySoul();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Holdout_FierySoul();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_lina.cpp:732
class CDOTA_Modifier_Holdout_FierySoul : public CDOTA_Buff {
public:

private:

	int fiery_soul_attack_speed_bonus;  // +0xba8
	int fiery_soul_move_speed_bonus;  // +0xbac
	int fiery_soul_max_stacks;  // +0xbb0
	float fiery_soul_cast_point_bonus;  // +0xbb4
	int m_nFXIndex;  // +0xbb8
	float m_flFierySoulDuration;  // +0xbbc
	CDOTA_Modifier_Holdout_FierySoul();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	virtual bool DestroyOnExpire();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	void SetNewCastPoints();
	virtual ~CDOTA_Modifier_Holdout_FierySoul();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// vtable[61] DestroyOnExpire
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Lina::~CDOTA_Unit_Hero_Lina  (line 37, @0x0000000002a189d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Lina::~CDOTA_Unit_Hero_Lina(CDOTA_Unit_Hero_Lina *const this)
{
  this->_vptr_IHandleEntity = &off_4352210;
  this->_vptr_INextBotEventResponder = &off_43531F0;
  this->_vptr_CObstructionObject = &off_4353520;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Lina::~CDOTA_Unit_Hero_Lina  (line 37, @0x0000000002a18a10, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Lina
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Lina::~CDOTA_Unit_Hero_Lina(CDOTA_Unit_Hero_Lina *const this)
{
  this->_vptr_IHandleEntity = &off_4352210;
  this->_vptr_INextBotEventResponder = &off_43531F0;
  this->_vptr_CObstructionObject = &off_4353520;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Lina::Schema_DynamicBinding  (line 39, @0x0000000002a09e10, libserver.so)
// globals: CDOTA_Unit_Hero_Lina::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lina::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lina *const this)
{
  return CDOTA_Unit_Hero_Lina::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002a09e40, libserver.so)
// globals: CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002a09e50, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Lina>
void __fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002a09e70, libserver.so)
void __fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002a09e90, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002a09ea0, libserver.so)
// globals: CDOTA_Unit_Hero_Lina::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Lina::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002a0fac0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002a13580, libserver.so)  // inlines: CDOTA_Unit_Hero_Lina, Construct<CDOTA_Unit_Hero_Lina>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4352210;
    *(p + 236) = &off_43531F0;
    *(p + 257) = &off_4353520;
  }
  return p;
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a207d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002a20a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Lina::GetEntityClassInternal  (line 39, @0x0000000002a3c380, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_lina", "CDOTA_Unit_Hero_Lina"
// globals: `guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass, CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass, __dso_handle, CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo, CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Lina::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass);
    CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass._vptr_CEntityClass = off_4352190;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Lina::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LinaClass != 0 )
    return &CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo,
      "CDOTA_Unit_Hero_Lina",
      "npc_dota_hero_lina",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo);
  }
  CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass.m_pClassInfo = &CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo;
  CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LinaClass = &CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass;
  CDOTA_Unit_Hero_Lina::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LinaClassInfo.m_pClass = &CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass;
  CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LinaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Lina::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LinaClass;
}


// CDOTA_Unit_Hero_Lina::GetDeathEffectName  (line 44, @0x0000000002a09eb0, libserver.so)
// strings: "particles/units/heroes/hero_lina/lina_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Lina::GetDeathEffectName(CDOTA_Unit_Hero_Lina *const this)
{
  return "particles/units/heroes/hero_lina/lina_death.vpcf";
}


// CDOTA_Unit_Hero_Lina::YouForgotToImplementOrDeclareServerClass  (line 51, @0x00000000029b54b0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Lina::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Lina *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Lina::GetServerClass  (line 51, @0x00000000029c94b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Lina::GetServerClass(CDOTA_Unit_Hero_Lina *const this)
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


// CDOTA_Unit_Hero_Lina::OnDeath  (line 60, @0x00000000029ba1c0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Lina::OnDeath(CDOTA_Unit_Hero_Lina *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_Lina_DragonSlave::~CDOTA_Ability_Lina_DragonSlave  (line 79, @0x0000000002a17420, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lina_DragonSlave::~CDOTA_Ability_Lina_DragonSlave(
        CDOTA_Ability_Lina_DragonSlave *const this)
{
  this->_vptr_IHandleEntity = &off_43535F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lina_DragonSlave::~CDOTA_Ability_Lina_DragonSlave  (line 79, @0x0000000002a17440, libserver.so)  // inlines: ~CDOTA_Ability_Lina_DragonSlave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lina_DragonSlave::~CDOTA_Ability_Lina_DragonSlave(
        CDOTA_Ability_Lina_DragonSlave *const this)
{
  this->_vptr_IHandleEntity = &off_43535F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lina_DragonSlave::Schema_DynamicBinding  (line 81, @0x0000000002a09ec0, libserver.so)
// globals: CDOTA_Ability_Lina_DragonSlave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_DragonSlave::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_DragonSlave *const this)
{
  return CDOTA_Ability_Lina_DragonSlave::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 81, @0x0000000002a09ed0, libserver.so)
// globals: CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::DestructInstance  (line 81, @0x0000000002a09ee0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lina_DragonSlave>
void __fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::FreeInstance  (line 81, @0x0000000002a09f00, libserver.so)
void __fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::CanAllocate  (line 81, @0x0000000002a09f20, libserver.so)
bool __fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 81, @0x0000000002a09f30, libserver.so)
// globals: CDOTA_Ability_Lina_DragonSlave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_DragonSlave::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::AllocateInstance  (line 81, @0x0000000002a0fb00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::ConstructInstance  (line 81, @0x0000000002a142b0, libserver.so)  // inlines: CDOTA_Ability_Lina_DragonSlave, Construct<CDOTA_Ability_Lina_DragonSlave>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_43535F0;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 81, @0x0000000002a1f810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 81, @0x0000000002a1f830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal  (line 81, @0x0000000002a37b50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "lina_dragon_slave", "CDOTA_Ability_Lina_DragonSlave"
// globals: `guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass, CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass, __dso_handle, CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo, CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass);
    CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass._vptr_CEntityClass = off_4353570;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass);
    __cxa_atexit(
      CDOTA_Ability_Lina_DragonSlave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lina_DragonSlaveClass != 0 )
    return &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass;
  if ( `guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo,
      "CDOTA_Ability_Lina_DragonSlave",
      "lina_dragon_slave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo);
  }
  CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass.m_pClassInfo = &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo;
  CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass.m_pBaseClassInfo = CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lina_DragonSlaveClass = &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass;
  CDOTA_Ability_Lina_DragonSlave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClassInfo.m_pClass = &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass;
  CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lina_DragonSlaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lina_DragonSlave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_DragonSlaveClass;
}


// CDOTA_Ability_Lina_DragonSlave::GetStolenActivityModifier  (line 88, @0x0000000002a09f40, libserver.so)
const char *__fastcall CDOTA_Ability_Lina_DragonSlave::GetStolenActivityModifier(
        CDOTA_Ability_Lina_DragonSlave *const this)
{
  return "wave";
}


// CDOTA_Ability_Lina_DragonSlave::YouForgotToImplementOrDeclareServerClass  (line 108, @0x00000000029b54c0, libserver.so)
int __fastcall CDOTA_Ability_Lina_DragonSlave::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lina_DragonSlave *const this)
{
  return 0;
}


// CDOTA_Ability_Lina_DragonSlave::GetServerClass  (line 108, @0x00000000029c9ef0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lina_DragonSlave::GetServerClass(CDOTA_Ability_Lina_DragonSlave *const this)
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


// CDOTA_Ability_Lina_DragonSlave::GetCooldown  (line 118, @0x00000000029e5920, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_lina_1"
float __fastcall CDOTA_Ability_Lina_DragonSlave::GetCooldown(CDOTA_Ability_Lina_DragonSlave *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lina_1", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Lina_DragonSlave::OnSpellStart  (line 133, @0x00000000029e3d00, libserver.so)  // inlines: CEntityHandle, CHandle, CPASAttenuationFilter, CPASFilter, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, NormalizeInPlace, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CPASAttenuationFilter, ~CPASFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CGameSceneNode::GetOwnerEntity, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::~CRecipientFilter (17 total)
// strings: "dragon_slave_speed", "dragon_slave_width_initial", "dragon_slave_width_end", "Hero_Lina.DragonSlave.Cast", "particles/units/heroes/hero_lina/lina_spell_dragon_slave.vpcf", "Hero_Lina.DragonSlave"
void __fastcall CDOTA_Ability_Lina_DragonSlave::OnSpellStart(CDOTA_Ability_Lina_DragonSlave *const this)
{
  int LevelSpecialValue; // r14d
  int v3; // r13d
  int v4; // r15d
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  int dragon_slave_distance; // eax
  vec_t y; // xmm2_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const QAngle *AbsAngles; // rax
  float vPos; // [rsp+4h] [rbp-22Ch]
  float vPos_4; // [rsp+8h] [rbp-228h]
  float vPos_4a; // [rsp+8h] [rbp-228h]
  Vector vDirection; // [rsp+20h] [rbp-210h] BYREF
  Vector vLocation; // [rsp+30h] [rbp-200h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-1F0h] BYREF
  CPASAttenuationFilter filter; // [rsp+C0h] [rbp-170h] BYREF
  unsigned __int64 v32; // [rsp+1F8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v32 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dragon_slave_speed", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dragon_slave_width_initial", -1, 0);
  v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dragon_slave_width_end", -1, 0);
  this->dragon_slave_distance = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Lina.DragonSlave.Cast", 0.0, 0, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    vPos_4 = AbsOrigin->x;
    vPos = AbsOrigin->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    vPos_4 = CursorPosition.x;
    vPos = CursorPosition.y;
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CBaseEntity::GetAbsOrigin(v8);
  v10 = vPos_4 - v9->x;
  v11 = vPos - v9->y;
  vDirection.z = 0.0;
  vDirection.x = v10;
  vDirection.y = v11;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v23 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v23);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  dragon_slave_distance = this->dragon_slave_distance;
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vVelocity.x = vec3_origin.x;
  info.vAcceleration.x = vec3_origin.x;
  info.pszEffectName = "particles/units/heroes/hero_lina/lina_spell_dragon_slave.vpcf";
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  y = vec3_origin.y;
  info.bHasFrontalCone = 1;
  info.bCheckStartPosition = 0;
  info.vSpawnOrigin.y = y;
  info.vVelocity.y = y;
  info.vAcceleration.y = y;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bDrawsOnMinimap = 0;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.vSpawnOrigin.z = vec3_origin.z;
  info.vVelocity.z = info.vSpawnOrigin.z;
  vPos_4a = LevelSpecialValue * (dragon_slave_distance / (dragon_slave_distance - v3));
  info.vAcceleration.z = info.vSpawnOrigin.z;
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  v14 = CDOTABaseAbility::GetCaster(this);
  info.vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v14);
  info.vVelocity.y = vDirection.y * vPos_4a;
  info.vVelocity.z = vDirection.z * vPos_4a;
  info.vVelocity.x = vPos_4a * vDirection.x;
  info.fDistance = this->dragon_slave_distance;
  info.fStartRadius = v3;
  info.fEndRadius = v4;
  v15 = CDOTABaseAbility::GetCaster(this);
  if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
  {
    v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v18 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  vLocation = *CBaseEntity::GetAbsOrigin(OwnerEntity);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vLocation);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vLocation, 0.80000001, v21);
  v22 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Lina.DragonSlave", 0.0, 0, 0);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Lina_DragonSlave::OnProjectileThink  (line 191, @0x00000000029c8940, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Lina_DragonSlave::OnProjectileThink(
        CDOTA_Ability_Lina_DragonSlave *const this,
        const Vector *const vLocation)
{
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v6; // r14d
  int v7; // r15d
  SosFieldValueMem_t *v8; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vLocation;
  *(v8 + 1) = v7;
  *(v8 + 2) = v6;
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
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Lina_DragonSlave::OnProjectileHit  (line 212, @0x00000000029c5150, libserver.so)  // inlines: FastRSqrt, FastRSqrtFast, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTABaseAbility::GetCaster, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_ParticleManager::ReleaseParticleIndex, EconEntity_OnOwnerKillEaterEvent
// strings: "particles/units/heroes/hero_lina/lina_spell_dragon_slave_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Lina_DragonSlave::OnProjectileHit(
        CDOTA_Ability_Lina_DragonSlave *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  int v10; // r14d
  CDOTA_BaseNPC *Caster; // rax
  double v12; // xmm0_8
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // rax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  unsigned int v26; // [rsp+4h] [rbp-3Ch]
  float v27; // [rsp+8h] [rbp-38h]
  unsigned int v28; // [rsp+Ch] [rbp-34h]

  if ( (*hTarget + 2) <= 1 )
    return 0;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[*hTarget & 0x1FF];
  if ( v6 == 0 )
    return 0;
  if ( *hTarget != v6->m_EHandle.m_Index )
    return 0;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 )
    return 0;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 0;
  vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
    || LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0
    || (BYTE1(vptr_IHandleEntity) & 1) != 0 )
  {
    return 0;
  }
  v10 = (*(this->_vptr_IHandleEntity + 247))(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  v12 = ApplyDamage(Caster, m_pInstance, this, v10, 2, 0);
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v12) == 0 )
  {
    v23 = 0;
    if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
    {
      v23 = m_pInstance;
    }
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = 0;
    if ( v24 != 0 && v24->m_bIsDOTANPC && (v24->m_iUnitType & 1) != 0 && !v24->m_bIsIllusion.m_Value )
      v25 = v24;
    EconEntity_OnOwnerKillEaterEvent(
      v25,
      v23,
      kill_eater_event_t::kKillEaterEventType_Lina_DragonSlaveKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  v13 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_lina/lina_spell_dragon_slave_impact.vpcf",
               1,
               m_pInstance,
               0,
               v13);
  v16 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
  v18 = vLocation->x - AbsOrigin->x;
  v19 = vLocation->y - AbsOrigin->y;
  v20 = 1.0 / fsqrt((((v18 * v18) + 0.00000011920929) + (v19 * v19)) + 0.0);
  v27 = (0.5 * v20) * (3.0 - ((((((v18 * v18) + 0.00000011920929) + (v19 * v19)) + 0.0) * v20) * v20));
  *&v26 = v18 * v27;
  *&v28 = v19 * v27;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v21, Particle, 1, COERCE_DOUBLE(__PAIR64__(v28, v26)), v27 * 0.0);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
  return 0;
}


// CDOTA_Ability_Lina_DragonSlave::GetAbilityDamageToTargetOverInterval  (line 237, @0x00000000029bb550, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lina_DragonSlave::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lina_DragonSlave *const this,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fDuration);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Lina_LightStrikeArray::~CDOTA_Ability_Lina_LightStrikeArray  (line 251, @0x0000000002a17470, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::~CDOTA_Ability_Lina_LightStrikeArray(
        CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  this->_vptr_IHandleEntity = &off_43540F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lina_LightStrikeArray::~CDOTA_Ability_Lina_LightStrikeArray  (line 251, @0x0000000002a17490, libserver.so)  // inlines: ~CDOTA_Ability_Lina_LightStrikeArray
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::~CDOTA_Ability_Lina_LightStrikeArray(
        CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  this->_vptr_IHandleEntity = &off_43540F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lina_LightStrikeArray::Schema_DynamicBinding  (line 253, @0x0000000002a09f50, libserver.so)
// globals: CDOTA_Ability_Lina_LightStrikeArray::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_LightStrikeArray::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  return CDOTA_Ability_Lina_LightStrikeArray::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 253, @0x0000000002a09f60, libserver.so)
// globals: CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::DestructInstance  (line 253, @0x0000000002a09f70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lina_LightStrikeArray>
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::FreeInstance  (line 253, @0x0000000002a09f90, libserver.so)
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::CanAllocate  (line 253, @0x0000000002a09fb0, libserver.so)
bool __fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 253, @0x0000000002a09fc0, libserver.so)
// globals: CDOTA_Ability_Lina_LightStrikeArray::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_LightStrikeArray::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::AllocateInstance  (line 253, @0x0000000002a0fb40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::ConstructInstance  (line 253, @0x0000000002a14300, libserver.so)  // inlines: CDOTA_Ability_Lina_LightStrikeArray, Construct<CDOTA_Ability_Lina_LightStrikeArray>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43540F0;
  }
  return p;
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 253, @0x0000000002a1f860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 253, @0x0000000002a1f880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal  (line 253, @0x0000000002a37ca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "lina_light_strike_array", "CDOTA_Ability_Lina_LightStrikeArray"
// globals: `guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass, CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass, __dso_handle, CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo, CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass);
    CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass._vptr_CEntityClass = off_4354070;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass);
    __cxa_atexit(
      CDOTA_Ability_Lina_LightStrikeArray::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lina_LightStrikeArrayClass != 0 )
    return &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass;
  if ( `guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo,
      "CDOTA_Ability_Lina_LightStrikeArray",
      "lina_light_strike_array",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo);
  }
  CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass.m_pClassInfo = &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo;
  CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass.m_pBaseClassInfo = CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lina_LightStrikeArrayClass = &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass;
  CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClassInfo.m_pClass = &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass;
  CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lina_LightStrikeArrayClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lina_LightStrikeArray::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LightStrikeArrayClass;
}


// CDOTA_Ability_Lina_LightStrikeArray::GetStolenActivityModifier  (line 268, @0x0000000002a09fd0, libserver.so)
// strings: "lsa"
const char *__fastcall CDOTA_Ability_Lina_LightStrikeArray::GetStolenActivityModifier(
        CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  return "lsa";
}


// CDOTA_Ability_Lina_LightStrikeArray::YouForgotToImplementOrDeclareServerClass  (line 274, @0x00000000029b54d0, libserver.so)
int __fastcall CDOTA_Ability_Lina_LightStrikeArray::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  return 0;
}


// CDOTA_Ability_Lina_LightStrikeArray::GetServerClass  (line 274, @0x00000000029c9af0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lina_LightStrikeArray::GetServerClass(
        CDOTA_Ability_Lina_LightStrikeArray *const this)
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


// CDOTA_Ability_Lina_LightStrikeArray::OnSpellStart  (line 283, @0x00000000029eafb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "light_strike_array_aoe", "light_strike_array_delay_time", "modifier_lina_light_strike_array"
void __fastcall CDOTA_Ability_Lina_LightStrikeArray::OnSpellStart(CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v5 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "light_strike_array_aoe", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "light_strike_array_delay_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_lina_light_strike_array");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_lina_light_strike_array", &kv, CursorPosition, m_Value, 0, 1, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Lina_LightStrikeArray::GetAbilityDamageToTargetOverInterval  (line 299, @0x00000000029bb5b0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Lina_LightStrikeArray::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lina_LightStrikeArray *const this,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fDuration);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Lina_LightStrikeArray::GetSlowDuration  (line 309, @0x00000000029b7110, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Lina_LightStrikeArray::GetSlowDuration(CDOTA_Ability_Lina_LightStrikeArray *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Lina_LightStrikeArray_Thinker::~CDOTA_Modifier_Lina_LightStrikeArray_Thinker  (line 317, @0x0000000002a119a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lina_LightStrikeArray_Thinker::~CDOTA_Modifier_Lina_LightStrikeArray_Thinker(
        CDOTA_Modifier_Lina_LightStrikeArray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4354BB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lina_LightStrikeArray_Thinker::~CDOTA_Modifier_Lina_LightStrikeArray_Thinker  (line 317, @0x0000000002a119c0, libserver.so)  // inlines: ~CDOTA_Modifier_Lina_LightStrikeArray_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lina_LightStrikeArray_Thinker::~CDOTA_Modifier_Lina_LightStrikeArray_Thinker(
        CDOTA_Modifier_Lina_LightStrikeArray_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4354BB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lina_LightStrikeArray_Thinker::IsHidden  (line 325, @0x0000000002a09fe0, libserver.so)
bool __fastcall CDOTA_Modifier_Lina_LightStrikeArray_Thinker::IsHidden(
        CDOTA_Modifier_Lina_LightStrikeArray_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnCreated  (line 338, @0x00000000029e2310, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SoundEventGuid_t, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CDOTA_Buff::GetCaster, CBaseEntity::GetTeam (21 total)
// strings: "light_strike_array_aoe", "light_strike_array_delay_time", "Ability.PreLightStrikeArray"
void __fastcall CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnCreated(
        CDOTA_Modifier_Lina_LightStrikeArray_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float LevelSpecialValue; // xmm0_4
  float v8; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  Vector vPos; // [rsp+0h] [rbp-1D0h] BYREF
  EmitSound_t ep; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v17; // [rsp+1A8h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->light_strike_array_aoe, "light_strike_array_aoe");
  v4 = CDOTA_Buff::GetAbility(this);
  this->m_iDamage = (*(v4->_vptr_IHandleEntity + 247))(v4);
  v5 = CDOTA_Buff::GetAbility(this);
  this->m_flStunDuration = CDOTABaseAbility::GetDuration(v5);
  v6 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "light_strike_array_delay_time", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v8);
  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v10);
  Caster = CDOTA_Buff::GetCaster(this);
  Team = CBaseEntity::GetTeam(Caster);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  ep.m_pSoundName = "Ability.PreLightStrikeArray";
  ep.m_pOrigin = &vPos;
  CBaseEntity::EmitSound(&filter, 0, &ep);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnIntervalThink  (line 376, @0x00000000029d9fb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues (21 total)
// strings: "modifier_stun", "modifier_stunned", "particles/units/heroes/hero_lina/lina_spell_light_strike_array.vpcf", "Ability.LightStrikeArray"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Lina_LightStrikeArray_Thinker::OnIntervalThink(
        CDOTA_Modifier_Lina_LightStrikeArray_Thinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  __m128i v6; // xmm4
  float v7; // r14d
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v11; // rax
  __int64 v12; // r12
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r13
  float v19; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v21; // rax
  CDOTABaseAbility *v22; // r15
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  unsigned int v31; // xmm0_4
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  float flDamage; // [rsp+2Ch] [rbp-84h]
  float flDamagea; // [rsp+2Ch] [rbp-84h]
  Vector vPos; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-38h]
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4

  v42 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  flDamage = this->light_strike_array_aoe;
  Parent = CDOTA_Buff::GetParent(this);
  v43 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v43, flDamage, v5);
  *v6.m128i_i32 = this->light_strike_array_aoe;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  v8 = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, v8, v7, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = &entities.m_Memory.m_pMemory[v12];
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
              if ( v17->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v12 )
          goto LABEL_20;
      }
      KeyValues::KeyValues(&kv, "modifier_stun");
      KeyValues::SetFloat(&kv, "duration", v19);
      Ability = CDOTA_Buff::GetAbility(this);
      v21 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, Ability, "modifier_stunned", &kv, 0);
      flDamagea = this->m_iDamage;
      v22 = CDOTA_Buff::GetAbility(this);
      v23 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v23, m_pInstance, v22, flDamagea, 2, 0);
      if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
        || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
      {
        m_pInstance = 0;
      }
      v24 = CDOTA_Buff::GetCaster(this);
      v25 = 0;
      if ( v24 != 0 && v24->m_bIsDOTANPC && (v24->m_iUnitType & 1) != 0 && !v24->m_bIsIllusion.m_Value )
        v25 = v24;
      EconEntity_OnOwnerKillEaterEvent(
        v25,
        m_pInstance,
        kill_eater_event_t::kKillEaterEventType_Lina_LightStrikeArrayStuns,
        1,
        INVALID_ITEM_DEF_INDEX);
      KeyValues::~KeyValues(&kv);
      ++v12;
    }
    while ( entities.m_Size > v12 );
  }
LABEL_20:
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_lina/lina_spell_light_strike_array.vpcf",
               8,
               0,
               0,
               0);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, Particle, 0, *&v29->x, v29->z);
  *&v31 = this->light_strike_array_aoe;
  vPos.z = 1.0;
  *&vPos.x = v31 | 0x3F80000000000000LL;
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, Particle, 1, *&vPos.x, 1.0);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v33, Particle);
  v34 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v34);
  v35 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Ability.LightStrikeArray", v35);
  v36 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v36);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Lina_FierySoul::~CDOTA_Ability_Lina_FierySoul  (line 430, @0x0000000002a174c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lina_FierySoul::~CDOTA_Ability_Lina_FierySoul(CDOTA_Ability_Lina_FierySoul *const this)
{
  this->_vptr_IHandleEntity = &off_4354F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lina_FierySoul::~CDOTA_Ability_Lina_FierySoul  (line 430, @0x0000000002a174e0, libserver.so)  // inlines: ~CDOTA_Ability_Lina_FierySoul
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lina_FierySoul::~CDOTA_Ability_Lina_FierySoul(CDOTA_Ability_Lina_FierySoul *const this)
{
  this->_vptr_IHandleEntity = &off_4354F10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lina_FierySoul::Schema_DynamicBinding  (line 432, @0x0000000002a09ff0, libserver.so)
// globals: CDOTA_Ability_Lina_FierySoul::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_FierySoul::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_FierySoul *const this)
{
  return CDOTA_Ability_Lina_FierySoul::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 432, @0x0000000002a0a000, libserver.so)
// globals: CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::DestructInstance  (line 432, @0x0000000002a0a010, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lina_FierySoul>
void __fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::FreeInstance  (line 432, @0x0000000002a0a030, libserver.so)
void __fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::CanAllocate  (line 432, @0x0000000002a0a050, libserver.so)
bool __fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 432, @0x0000000002a0a060, libserver.so)
// globals: CDOTA_Ability_Lina_FierySoul::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_FierySoul::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::AllocateInstance  (line 432, @0x0000000002a0fb80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::ConstructInstance  (line 432, @0x0000000002a14330, libserver.so)  // inlines: CDOTA_Ability_Lina_FierySoul, Construct<CDOTA_Ability_Lina_FierySoul>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4354F10;
  }
  return p;
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 432, @0x0000000002a1f8b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 432, @0x0000000002a1f8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal  (line 432, @0x0000000002a37df0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Lina_FierySoul"
// globals: `guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass, CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass, __dso_handle, CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo, CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass);
    CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass._vptr_CEntityClass = off_4354E90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass);
    __cxa_atexit(
      CDOTA_Ability_Lina_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lina_FierySoulClass != 0 )
    return &CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass;
  if ( `guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo,
      "CDOTA_Ability_Lina_FierySoul",
      "lina_fiery_soul",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo);
  }
  CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass.m_pClassInfo = &CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo;
  CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass.m_pBaseClassInfo = CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lina_FierySoulClass = &CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass;
  CDOTA_Ability_Lina_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_FierySoulClassInfo.m_pClass = &CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass;
  CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lina_FierySoulClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lina_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_FierySoulClass;
}


// CDOTA_Ability_Lina_FierySoul::GetIntrinsicModifierName  (line 435, @0x0000000002a0a070, libserver.so)
// strings: "modifier_lina_fiery_soul"
const char *__fastcall CDOTA_Ability_Lina_FierySoul::GetIntrinsicModifierName(CDOTA_Ability_Lina_FierySoul *const this)
{
  return "modifier_lina_fiery_soul";
}


// CDOTA_Modifier_Lina_FierySoul::~CDOTA_Modifier_Lina_FierySoul  (line 446, @0x0000000002a11950, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lina_FierySoul::~CDOTA_Modifier_Lina_FierySoul(
        CDOTA_Modifier_Lina_FierySoul *const this)
{
  this->_vptr_CDOTA_Buff = &off_43559D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lina_FierySoul::~CDOTA_Modifier_Lina_FierySoul  (line 446, @0x0000000002a11970, libserver.so)  // inlines: ~CDOTA_Modifier_Lina_FierySoul
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lina_FierySoul::~CDOTA_Modifier_Lina_FierySoul(
        CDOTA_Modifier_Lina_FierySoul *const this)
{
  this->_vptr_CDOTA_Buff = &off_43559D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lina_FierySoul::DestroyOnExpire  (line 458, @0x0000000002a0a080, libserver.so)
bool __fastcall CDOTA_Modifier_Lina_FierySoul::DestroyOnExpire(CDOTA_Modifier_Lina_FierySoul *const this)
{
  return 0;
}


// CDOTA_Modifier_Lina_FierySoul::DeclareFunctions  (line 477, @0x00000000029b54e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Lina_FierySoul::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Lina_FierySoul::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Lina_FierySoul::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_Lina_FierySoul::DeclareFunctions(CDOTA_Modifier_Lina_FierySoul *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Lina_FierySoul::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Lina_FierySoul::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[128].__pfn = CDOTA_Modifier_Lina_FierySoul::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Lina_FierySoul::OnCreated  (line 484, @0x00000000029fb6e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "fiery_soul_attack_speed_bonus", "fiery_soul_move_speed_bonus", "fiery_soul_max_stacks", "fiery_soul_stack_duration", "particles/units/heroes/hero_lina/lina_fiery_soul.vpcf"
void __fastcall CDOTA_Modifier_Lina_FierySoul::OnCreated(CDOTA_Modifier_Lina_FierySoul *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v9; // eax
  CDOTA_ParticleManager *v10; // rax
  unsigned int v11; // [rsp+10h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->fiery_soul_attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            Ability,
                                            "fiery_soul_attack_speed_bonus",
                                            -1,
                                            0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->fiery_soul_attack_speed_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->fiery_soul_move_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v4,
                                            "fiery_soul_move_speed_bonus",
                                            -1,
                                            0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->fiery_soul_max_stacks = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->fiery_soul_stack_duration = 0.0;
      goto LABEL_6;
    }
  }
  this->fiery_soul_move_speed_bonus = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->fiery_soul_max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "fiery_soul_max_stacks", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->fiery_soul_stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                      v6,
                                      "fiery_soul_stack_duration",
                                      -1,
                                      0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_lina/lina_fiery_soul.vpcf",
                       1,
                       Parent,
                       0,
                       0);
  v9 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  LODWORD(Parent) = this->m_nFXIndex;
  *&v11 = v9;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Parent, 1, COERCE_DOUBLE(v11), 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Lina_FierySoul::OnRefresh  (line 496, @0x00000000029f7f00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "fiery_soul_attack_speed_bonus", "fiery_soul_move_speed_bonus"
void __fastcall CDOTA_Modifier_Lina_FierySoul::OnRefresh(CDOTA_Modifier_Lina_FierySoul *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->fiery_soul_attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            Ability,
                                            "fiery_soul_attack_speed_bonus",
                                            -1,
                                            0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->fiery_soul_move_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v4,
                                            "fiery_soul_move_speed_bonus",
                                            -1,
                                            0);
      return;
    }
  }
  else
  {
    this->fiery_soul_attack_speed_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->fiery_soul_move_speed_bonus = 0;
}


// CDOTA_Modifier_Lina_FierySoul::GetModifierMoveSpeedBonus_Percentage  (line 502, @0x00000000029b5540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lina_FierySoul::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Lina_FierySoul *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->fiery_soul_move_speed_bonus * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lina_FierySoul::GetModifierAttackSpeedBonus_Constant  (line 507, @0x00000000029b5580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Lina_FierySoul::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Lina_FierySoul *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->fiery_soul_attack_speed_bonus * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Lina_FierySoul::OnAbilityExecuted  (line 512, @0x00000000029e59a0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsToggle, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, Vector, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::ForceRefresh, CDOTA_Buff::StartIntervalThink
// strings: "special_bonus_unique_lina_2"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Lina_FierySoul::OnAbilityExecuted(
        CDOTA_Modifier_Lina_FierySoul *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int fiery_soul_max_stacks; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rbx
  float v15; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int v17; // eax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  float v20; // xmm1_4
  void (__fastcall *v21)(CDOTA_Modifier_Lina_FierySoul *const, _QWORD); // rbx
  unsigned int v22; // eax
  unsigned int v23; // [rsp+0h] [rbp-30h]
  ModifierVariant_t result; // 0:rax.16

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
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          fiery_soul_max_stacks = this->fiery_soul_max_stacks;
          Caster = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lina_2", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
            fiery_soul_max_stacks += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
          if ( params->ability.m_Index + 2 > 1 )
          {
            v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F];
            if ( v12 != 0 )
            {
              v13 = &v12[params->ability.m_Index & 0x1FF];
              if ( v13 != 0 && params->ability.m_Index == v13->m_EHandle.m_Index )
              {
                v14 = v13->m_pInstance;
                if ( v13->m_pInstance != 0
                  && (*(v14->_vptr_IHandleEntity + 223))(v13->m_pInstance) == 0
                  && ((*(v14->_vptr_IHandleEntity + 251))(v14) & 0x200) == 0 )
                {
                  if ( fiery_soul_max_stacks <= (*(this->_vptr_CDOTA_Buff + 27))(this) )
                  {
                    v21 = *(this->_vptr_CDOTA_Buff + 28);
                    v22 = (*(this->_vptr_CDOTA_Buff + 27))(this);
                    v21(this, v22);
                  }
                  else
                  {
                    (*(this->_vptr_CDOTA_Buff + 25))(this);
                  }
                  v15 = 0.0;
                  if ( g_pGameRules != 0 )
                    v15 = *&g_pGameRules[18].m_szQuestName[20];
                  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
                  this->m_flFierySoulDieTime = v15 + this->fiery_soul_stack_duration;
                  vptr_CDOTA_Buff[63](this, 1);
                  v17 = (*(this->_vptr_CDOTA_Buff + 27))(this);
                  m_nFXIndex = this->m_nFXIndex;
                  *&v23 = v17;
                  ParticleManager = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 1, COERCE_DOUBLE(v23), 0.0);
                  CDOTA_Buff::ForceRefresh(this);
                  CDOTA_Buff::StartIntervalThink(this, this->fiery_soul_stack_duration, v20);
                }
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Lina_FierySoul::OnIntervalThink  (line 552, @0x00000000029b6ac0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Lina_FierySoul::OnIntervalThink(CDOTA_Modifier_Lina_FierySoul *const this)
{
  float v1; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, -1.0, v1);
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
}


// CDOTA_Ability_Lina_LagunaBlade::~CDOTA_Ability_Lina_LagunaBlade  (line 565, @0x0000000002a17510, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Lina_LagunaBlade::~CDOTA_Ability_Lina_LagunaBlade(
        CDOTA_Ability_Lina_LagunaBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4355D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Lina_LagunaBlade::~CDOTA_Ability_Lina_LagunaBlade  (line 565, @0x0000000002a17530, libserver.so)  // inlines: ~CDOTA_Ability_Lina_LagunaBlade
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Lina_LagunaBlade::~CDOTA_Ability_Lina_LagunaBlade(
        CDOTA_Ability_Lina_LagunaBlade *const this)
{
  this->_vptr_IHandleEntity = &off_4355D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Lina_LagunaBlade::Schema_DynamicBinding  (line 567, @0x0000000002a0a090, libserver.so)
// globals: CDOTA_Ability_Lina_LagunaBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_LagunaBlade::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_LagunaBlade *const this)
{
  return CDOTA_Ability_Lina_LagunaBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 567, @0x0000000002a0a0a0, libserver.so)
// globals: CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::DestructInstance  (line 567, @0x0000000002a0a0b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Lina_LagunaBlade>
void __fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::FreeInstance  (line 567, @0x0000000002a0a0d0, libserver.so)
void __fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::CanAllocate  (line 567, @0x0000000002a0a0f0, libserver.so)
bool __fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 567, @0x0000000002a0a100, libserver.so)
// globals: CDOTA_Ability_Lina_LagunaBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Lina_LagunaBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::AllocateInstance  (line 567, @0x0000000002a0fbc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::ConstructInstance  (line 567, @0x0000000002a14360, libserver.so)  // inlines: CDOTA_Ability_Lina_LagunaBlade, Construct<CDOTA_Ability_Lina_LagunaBlade>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4355D30;
  }
  return p;
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 567, @0x0000000002a1f900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 567, @0x0000000002a1f920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal  (line 567, @0x0000000002a37f40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Lina_LagunaBlade"
// globals: `guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass, CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass, __dso_handle, CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo, CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass);
    CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass._vptr_CEntityClass = off_4355CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass);
    __cxa_atexit(
      CDOTA_Ability_Lina_LagunaBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Lina_LagunaBladeClass != 0 )
    return &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass;
  if ( `guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo,
      "CDOTA_Ability_Lina_LagunaBlade",
      "lina_laguna_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo);
  }
  CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass.m_pClassInfo = &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo;
  CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass.m_pBaseClassInfo = CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Lina_LagunaBladeClass = &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass;
  CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClassInfo.m_pClass = &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass;
  CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Lina_LagunaBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Lina_LagunaBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Lina_LagunaBladeClass;
}


// CDOTA_Ability_Lina_LagunaBlade::GetCastRange  (line 576, @0x0000000002a33bf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Lina_LagunaBlade::GetCastRange(
        CDOTA_Ability_Lina_LagunaBlade *const this,
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


// CDOTA_Ability_Lina_LagunaBlade::GetStolenActivityModifier  (line 578, @0x0000000002a0a110, libserver.so)
// strings: "laguna"
const char *__fastcall CDOTA_Ability_Lina_LagunaBlade::GetStolenActivityModifier(
        CDOTA_Ability_Lina_LagunaBlade *const this)
{
  return "laguna";
}


// CDOTA_Ability_Lina_LagunaBlade::GetCurrentAbilityDamageType  (line 580, @0x0000000002a181e0, libserver.so)  // inlines: GetAbilityDamageType, GetAbilityData
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Lina_LagunaBlade::GetCurrentAbilityDamageType(CDOTA_Ability_Lina_LagunaBlade *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 4;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityDamageType;
}


// CDOTA_Ability_Lina_LagunaBlade::GetCurrentAbilityImmunityType  (line 581, @0x0000000002a18250, libserver.so)  // inlines: GetAbilityDamageType, GetAbilityData
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Lina_LagunaBlade::GetCurrentAbilityImmunityType(
        CDOTA_Ability_Lina_LagunaBlade *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 3;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityDamageType;
}


// CDOTA_Ability_Lina_LagunaBlade::YouForgotToImplementOrDeclareServerClass  (line 590, @0x00000000029b55c0, libserver.so)
int __fastcall CDOTA_Ability_Lina_LagunaBlade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Lina_LagunaBlade *const this)
{
  return 0;
}


// CDOTA_Ability_Lina_LagunaBlade::GetServerClass  (line 590, @0x00000000029ca0f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Lina_LagunaBlade::GetServerClass(CDOTA_Ability_Lina_LagunaBlade *const this)
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


// CDOTA_Ability_Lina_LagunaBlade::CastFilterResult  (line 598, @0x00000000029b8590, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_Lina_LagunaBlade::CastFilterResult(
        CDOTA_Ability_Lina_LagunaBlade *const this,
        CDOTA_BaseNPC *pTarget)
{
  int result; // eax
  CDOTA_BaseNPC *Caster; // rax

  result = CDOTABaseAbility::CastFilterResult(this, pTarget);
  if ( result == 0 )
  {
    if ( (pTarget->m_nUnitState64.m_Value & 0x200) == 0 )
      return 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      return 0;
    else
      return 17;
  }
  return result;
}


// CDOTA_Ability_Lina_LagunaBlade::OnSpellStart  (line 613, @0x00000000029dd7c0, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, ToDOTABaseNPC, VectorAdd, operator+
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, GetParticleManager, CDOTA_ParticleManager::CreateParticle (19 total)
// strings: "modifier_lina_laguna_blade", "Ability.LagunaBladeImpact", "particles/units/heroes/hero_lina/lina_spell_laguna_blade.vpcf", "attach_attack1", "attach_hitloc", "Ability.LagunaBlade"
void __fastcall CDOTA_Ability_Lina_LagunaBlade::OnSpellStart(CDOTA_Ability_Lina_LagunaBlade *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  const char *ReplacementSound; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  const CBaseAnimating *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  const Vector *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm3_4
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]
  Vector vecFallbackPosition; // 0:^10.12

  v24 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_delay", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_lina_laguna_blade");
      KeyValues::SetFloat(&kv, "duration", v4);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_lina_laguna_blade", &kv, 0);
      v6 = CDOTABaseAbility::GetCaster(this);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v6, "Ability.LagunaBladeImpact");
      CDOTA_BaseNPC::UnitEmitSound(v3, ReplacementSound, 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
    v8 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_lina/lina_spell_laguna_blade.vpcf",
                    2,
                    0,
                    0,
                    v8);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    vecFallbackPosition.x = AbsOrigin->x + 0.0;
    vecFallbackPosition.y = AbsOrigin->y + 0.0;
    vecFallbackPosition.z = AbsOrigin->z + 96.0;
    v12 = CDOTABaseAbility::GetCaster(this);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v13, v8, 0, v12, 5, "attach_attack1", vecFallbackPosition, 1);
    v14 = CDOTABaseAbility::GetCursorTarget(this);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v15, v8, 1, v14, 5, "attach_hitloc", vec3_invalid, 1);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, v8);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v17, "Ability.LagunaBlade", 0.0, 0, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v20 = CBaseEntity::GetAbsOrigin(v3);
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v21, 0, m_iAbilityID, 0, 0, *&v20->x, v20->z, -1.0, v22);
  }
}


// CDOTA_Ability_Lina_LagunaBlade::GetAbilityDamage  (line 646, @0x00000000029e5c20, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_Lina_LagunaBlade::GetAbilityDamage(CDOTA_Ability_Lina_LagunaBlade *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
}


// CDOTA_Ability_Lina_LagunaBlade::GetAbilityDamageToTargetOverInterval  (line 653, @0x00000000029bb8b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::GetArmorReductionForDamageType
int __fastcall CDOTA_Ability_Lina_LagunaBlade::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Lina_LagunaBlade *const this,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  bool v8; // zf
  int result; // eax
  int v10; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = !CDOTA_BaseNPC::HasScepter(Caster);
  result = 0;
  if ( v8 )
  {
    if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    {
      v10 = (*(this->_vptr_IHandleEntity + 247))(this);
      return (v10 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
    }
  }
  else if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    return (*(this->_vptr_IHandleEntity + 247))(this);
  }
  return result;
}


// CDOTA_Modifier_Lina_LagunaBlade::~CDOTA_Modifier_Lina_LagunaBlade  (line 673, @0x0000000002a11900, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Lina_LagunaBlade::~CDOTA_Modifier_Lina_LagunaBlade(
        CDOTA_Modifier_Lina_LagunaBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_43567F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Lina_LagunaBlade::~CDOTA_Modifier_Lina_LagunaBlade  (line 673, @0x0000000002a11920, libserver.so)  // inlines: ~CDOTA_Modifier_Lina_LagunaBlade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Lina_LagunaBlade::~CDOTA_Modifier_Lina_LagunaBlade(
        CDOTA_Modifier_Lina_LagunaBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_43567F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Lina_LagunaBlade::IsDebuff  (line 678, @0x0000000002a0a120, libserver.so)
bool __fastcall CDOTA_Modifier_Lina_LagunaBlade::IsDebuff(CDOTA_Modifier_Lina_LagunaBlade *const this)
{
  return 1;
}


// CDOTA_Modifier_Lina_LagunaBlade::IsPurgable  (line 679, @0x0000000002a0a130, libserver.so)
bool __fastcall CDOTA_Modifier_Lina_LagunaBlade::IsPurgable(CDOTA_Modifier_Lina_LagunaBlade *const this)
{
  return 0;
}


// CDOTA_Modifier_Lina_LagunaBlade::OnDestroy  (line 686, @0x00000000029c2240, libserver.so)  // inlines: ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage, EconEntity_OnOwnerKillEaterEvent
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Lina_LagunaBlade::OnDestroy(CDOTA_Modifier_Lina_LagunaBlade *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int v3; // r12d
  CDOTABaseAbility *Ability; // rax
  int v5; // r15d
  CDOTABaseAbility *v6; // r14
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // rdi

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = -!CDOTA_BaseNPC::HasScepter(Caster);
  Ability = CDOTA_Buff::GetAbility(this);
  v5 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v6 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  v8 = CDOTA_Buff::GetCaster(this);
  ApplyDamage(v8, Parent, v6, v5, (v3 & 0xFFFFFFFE) + 4, 0);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    v9 = CDOTA_Buff::GetParent(this);
    if ( (*(v9->_vptr_IHandleEntity + 408))(v9) == 0 )
    {
      v10 = CDOTA_Buff::GetParent(this);
      if ( v10 != 0 )
      {
        v11 = 0;
        if ( v10->m_bIsDOTANPC && (v10->m_iUnitType & 1) != 0 && !v10->m_bIsIllusion.m_Value )
          v11 = v10;
      }
      else
      {
        v11 = 0;
      }
      v12 = CDOTA_Buff::GetCaster(this);
      v13 = 0;
      if ( v12 != 0 && v12->m_bIsDOTANPC && (v12->m_iUnitType & 1) != 0 && !v12->m_bIsIllusion.m_Value )
        v13 = v12;
      EconEntity_OnOwnerKillEaterEvent(
        v13,
        v11,
        kill_eater_event_t::kKillEaterEventType_Lina_LagunaBladeKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
}


// CDOTA_Ability_Holdout_FierySoul::~CDOTA_Ability_Holdout_FierySoul  (line 716, @0x0000000002a17560, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_FierySoul::~CDOTA_Ability_Holdout_FierySoul(
        CDOTA_Ability_Holdout_FierySoul *const this)
{
  this->_vptr_IHandleEntity = &off_4356B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_FierySoul::~CDOTA_Ability_Holdout_FierySoul  (line 716, @0x0000000002a17580, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_FierySoul
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_FierySoul::~CDOTA_Ability_Holdout_FierySoul(
        CDOTA_Ability_Holdout_FierySoul *const this)
{
  this->_vptr_IHandleEntity = &off_4356B50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_FierySoul::Schema_DynamicBinding  (line 718, @0x0000000002a0a140, libserver.so)
// globals: CDOTA_Ability_Holdout_FierySoul::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_FierySoul::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_FierySoul *const this)
{
  return CDOTA_Ability_Holdout_FierySoul::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 718, @0x0000000002a0a150, libserver.so)
// globals: CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::DestructInstance  (line 718, @0x0000000002a0a160, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_FierySoul>
void __fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::FreeInstance  (line 718, @0x0000000002a0a180, libserver.so)
void __fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::CanAllocate  (line 718, @0x0000000002a0a1a0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 718, @0x0000000002a0a1b0, libserver.so)
// globals: CDOTA_Ability_Holdout_FierySoul::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_FierySoul::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::AllocateInstance  (line 718, @0x0000000002a0fc00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::ConstructInstance  (line 718, @0x0000000002a14390, libserver.so)  // inlines: CDOTA_Ability_Holdout_FierySoul, Construct<CDOTA_Ability_Holdout_FierySoul>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4356B50;
  }
  return p;
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 718, @0x0000000002a1f950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 718, @0x0000000002a1f970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal  (line 718, @0x0000000002a38090, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Holdout_FierySoul"
// globals: `guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass, CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass, __dso_handle, CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo, CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass);
    CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass._vptr_CEntityClass = off_4356AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_FierySoul::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_FierySoulClass != 0 )
    return &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo,
      "CDOTA_Ability_Holdout_FierySoul",
      "holdout_fiery_soul",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo);
  }
  CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass.m_pClassInfo = &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo;
  CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_FierySoulClass = &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass;
  CDOTA_Ability_Holdout_FierySoul::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClassInfo.m_pClass = &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass;
  CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_FierySoulClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_FierySoul::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_FierySoulClass;
}


// CDOTA_Ability_Holdout_FierySoul::GetIntrinsicModifierName  (line 721, @0x0000000002a0a1c0, libserver.so)
// strings: "modifier_holdout_fiery_soul"
const char *__fastcall CDOTA_Ability_Holdout_FierySoul::GetIntrinsicModifierName(
        CDOTA_Ability_Holdout_FierySoul *const this)
{
  return "modifier_holdout_fiery_soul";
}


// CDOTA_Modifier_Holdout_FierySoul::~CDOTA_Modifier_Holdout_FierySoul  (line 732, @0x0000000002a118b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_FierySoul::~CDOTA_Modifier_Holdout_FierySoul(
        CDOTA_Modifier_Holdout_FierySoul *const this)
{
  this->_vptr_CDOTA_Buff = &off_4357610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_FierySoul::~CDOTA_Modifier_Holdout_FierySoul  (line 732, @0x0000000002a118d0, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_FierySoul
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_FierySoul::~CDOTA_Modifier_Holdout_FierySoul(
        CDOTA_Modifier_Holdout_FierySoul *const this)
{
  this->_vptr_CDOTA_Buff = &off_4357610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_FierySoul::DestroyOnExpire  (line 760, @0x0000000002a0a1d0, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_FierySoul::DestroyOnExpire(CDOTA_Modifier_Holdout_FierySoul *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_FierySoul::DeclareFunctions  (line 782, @0x00000000029b55d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_FierySoul::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Holdout_FierySoul::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted(CModifierParams const&), CDOTA_Modifier_Holdout_FierySoul::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_FierySoul::DeclareFunctions(CDOTA_Modifier_Holdout_FierySoul *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Holdout_FierySoul::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Holdout_FierySoul::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[128].__pfn = CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Holdout_FierySoul::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Holdout_FierySoul::OnCreated  (line 790, @0x00000000029fb510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "fiery_soul_attack_speed_bonus", "fiery_soul_move_speed_bonus", "fiery_soul_max_stacks", "fiery_soul_cast_point_bonus", "particles/units/heroes/hero_lina/lina_fiery_soul.vpcf"
void __fastcall CDOTA_Modifier_Holdout_FierySoul::OnCreated(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v9; // eax
  CDOTA_ParticleManager *v10; // rax
  unsigned int v11; // [rsp+10h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->fiery_soul_attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            Ability,
                                            "fiery_soul_attack_speed_bonus",
                                            -1,
                                            0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->fiery_soul_attack_speed_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->fiery_soul_move_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v4,
                                            "fiery_soul_move_speed_bonus",
                                            -1,
                                            0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->fiery_soul_max_stacks = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->fiery_soul_cast_point_bonus = 0.0;
      goto LABEL_6;
    }
  }
  this->fiery_soul_move_speed_bonus = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->fiery_soul_max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "fiery_soul_max_stacks", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->fiery_soul_cast_point_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        v6,
                                        "fiery_soul_cast_point_bonus",
                                        -1,
                                        0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_lina/lina_fiery_soul.vpcf",
                       1,
                       Parent,
                       0,
                       0);
  v9 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  LODWORD(Parent) = this->m_nFXIndex;
  *&v11 = v9;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Parent, 1, COERCE_DOUBLE(v11), 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Holdout_FierySoul::OnRefresh  (line 802, @0x00000000029fb180, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetDuration, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
// strings: "fiery_soul_attack_speed_bonus", "fiery_soul_move_speed_bonus", "fiery_soul_max_stacks", "fiery_soul_cast_point_bonus"
void __fastcall CDOTA_Modifier_Holdout_FierySoul::OnRefresh(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CGameRules *v7; // rax
  CDOTABaseAbility *v8; // rax
  float Duration; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int v11; // eax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  float v14; // [rsp+Ch] [rbp-24h]
  unsigned int v15; // [rsp+10h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->fiery_soul_attack_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            Ability,
                                            "fiery_soul_attack_speed_bonus",
                                            -1,
                                            0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->fiery_soul_attack_speed_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->fiery_soul_move_speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v4,
                                            "fiery_soul_move_speed_bonus",
                                            -1,
                                            0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->fiery_soul_move_speed_bonus = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->fiery_soul_max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "fiery_soul_max_stacks", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->fiery_soul_cast_point_bonus = 0.0;
    v7 = g_pGameRules;
    if ( g_pGameRules != 0 )
      goto LABEL_6;
LABEL_12:
    v14 = 0.0;
    goto LABEL_7;
  }
LABEL_10:
  this->fiery_soul_max_stacks = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->fiery_soul_cast_point_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        v6,
                                        "fiery_soul_cast_point_bonus",
                                        -1,
                                        0);
  v7 = g_pGameRules;
  if ( g_pGameRules == 0 )
    goto LABEL_12;
LABEL_6:
  v14 = *&v7[18].m_szQuestName[20];
LABEL_7:
  v8 = CDOTA_Buff::GetAbility(this);
  Duration = CDOTABaseAbility::GetDuration(v8);
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_flFierySoulDuration = Duration + v14;
  v11 = vptr_CDOTA_Buff[27](this);
  m_nFXIndex = this->m_nFXIndex;
  *&v15 = v11;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 1, COERCE_DOUBLE(v15), 0.0);
}


// CDOTA_Modifier_Holdout_FierySoul::GetModifierMoveSpeedBonus_Percentage  (line 813, @0x00000000029b5640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_FierySoul::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->fiery_soul_move_speed_bonus * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_FierySoul::GetModifierAttackSpeedBonus_Constant  (line 818, @0x00000000029b5680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_FierySoul::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->fiery_soul_attack_speed_bonus * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_FierySoul::OnTooltip  (line 823, @0x00000000029b56c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_FierySoul::OnTooltip(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = v4 * this->fiery_soul_cast_point_bonus;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted  (line 828, @0x00000000029e5c40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAbilityAnItem, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::ForceRefresh
// strings: "special_bonus_unique_lina_2"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted(
        CDOTA_Modifier_Holdout_FierySoul *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  int fiery_soul_max_stacks; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  bool v14; // cc
  int (**vptr_CDOTA_Buff)(...); // rax
  CDOTABaseAbility *Ability; // rax
  float Duration; // xmm0_4
  float v18; // xmm1_4
  int (*v19)(...); // r12
  unsigned int v20; // eax

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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (params->ability.m_Index + 2 <= 1
           || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->ability.m_Index) >> 9) & 0x3F]) == 0
           || (v10 = &v9[params->ability.m_Index & 0x1FF]) == 0
           || params->ability.m_Index != v10->m_EHandle.m_Index
           || v10->m_pInstance == 0
           || (*(v10->m_pInstance->_vptr_IHandleEntity + 223))(v10->m_pInstance) == 0) )
        {
          fiery_soul_max_stacks = this->fiery_soul_max_stacks;
          Caster = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_lina_2", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
            fiery_soul_max_stacks += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
          v14 = fiery_soul_max_stacks <= (*(this->_vptr_CDOTA_Buff + 27))(this);
          vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
          if ( v14 )
          {
            v19 = vptr_CDOTA_Buff[28];
            v20 = vptr_CDOTA_Buff[27](this);
            v19(this, v20);
            CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints(this);
            CDOTA_Buff::ForceRefresh(this);
          }
          else
          {
            vptr_CDOTA_Buff[25](this);
            CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints(this);
          }
          Ability = CDOTA_Buff::GetAbility(this);
          Duration = CDOTABaseAbility::GetDuration(Ability);
          CDOTA_Buff::StartIntervalThink(this, Duration, v18);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Holdout_FierySoul::OnIntervalThink  (line 863, @0x00000000029d33a0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints
void __fastcall CDOTA_Modifier_Holdout_FierySoul::OnIntervalThink(CDOTA_Modifier_Holdout_FierySoul *const this)
{
  float v1; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, -1.0, v1);
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
  CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints(this);
}


// CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints  (line 871, @0x00000000029d3240, libserver.so)  // inlines: GetAbilityData, NetworkStateChanged, Set, SetOverrideCastPoint
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::LoadAbilityData
// callers: CDOTA_Modifier_Holdout_FierySoul::OnIntervalThink, CDOTA_Modifier_Holdout_FierySoul::OnAbilityExecuted
void __fastcall CDOTA_Modifier_Holdout_FierySoul::SetNewCastPoints(CDOTA_Modifier_Holdout_FierySoul *const this)
{
  int i; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v5; // rbx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_nCastPoints; // r14d
  int EffectiveLevel; // eax
  int v9; // r14d
  DOTAAbilityData_t *v10; // rdx
  float v11; // xmm1_4
  float flNewCastPoint; // [rsp+Ch] [rbp-24h]
  float flNewCastPointa; // [rsp+Ch] [rbp-24h]

  for ( i = 0; i != 24; ++i )
  {
    while ( 1 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, i);
      v5 = AbilityByIndex;
      if ( AbilityByIndex != 0 )
        break;
LABEL_3:
      if ( ++i == 24 )
        return;
    }
    m_pAbilityData = AbilityByIndex->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v5, 0);
      m_pAbilityData = v5->m_pAbilityData;
    }
    m_nCastPoints = m_pAbilityData->m_nCastPoints;
    EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(v5);
    v9 = m_nCastPoints - 1;
    if ( EffectiveLevel <= v9 )
      v9 = EffectiveLevel;
    if ( v9 < 0 )
      break;
    v10 = v5->m_pAbilityData;
    if ( v10 == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(v5, 0);
      v10 = v5->m_pAbilityData;
    }
    flNewCastPoint = v10->m_pCastPoints[v9];
    v11 = (*(this->_vptr_CDOTA_Buff + 27))(this) * this->fiery_soul_cast_point_bonus;
    if ( (flNewCastPoint - v11) == v5->m_flOverrideCastPoint.m_Value )
      goto LABEL_3;
    flNewCastPointa = flNewCastPoint - v11;
    (*(v5->_vptr_IHandleEntity + 22))(v5, 848, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v5->m_flOverrideCastPoint.m_Value = flNewCastPointa;
  }
}


