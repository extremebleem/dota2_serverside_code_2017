// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:35
class CDOTA_Unit_Hero_Enchantress : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Enchantress(CDOTA_Unit_Hero_Enchantress &);
	CDOTA_Unit_Hero_Enchantress(CDOTA_Unit_Hero_Enchantress &);
	CDOTA_Unit_Hero_Enchantress();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Enchantress();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:42
class C_CDOTA_Unit_Hero_Enchantress_MapInstall {
	C_CDOTA_Unit_Hero_Enchantress_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:56
class CDOTA_Ability_Enchantress_Untouchable : public CDOTABaseAbility {
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
	CDOTA_Ability_Enchantress_Untouchable(CDOTA_Ability_Enchantress_Untouchable &);
	CDOTA_Ability_Enchantress_Untouchable(CDOTA_Ability_Enchantress_Untouchable &);
	CDOTA_Ability_Enchantress_Untouchable();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Enchantress_Untouchable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:65
class C_CDOTA_Ability_Enchantress_Untouchable_MapInstall {
	C_CDOTA_Ability_Enchantress_Untouchable_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:76
class CDOTA_Modifier_Enchantress_Untouchable : public CDOTA_Buff {
public:

	CDOTA_Modifier_Enchantress_Untouchable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual ~CDOTA_Modifier_Enchantress_Untouchable();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackStart
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:118
class CDOTA_Modifier_Enchantress_Untouchable_Slow : public CDOTA_Buff {
public:

private:

	int slow_attack_speed;  // +0xba8
	CDOTA_Modifier_Enchantress_Untouchable_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackFinished(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Enchantress_Untouchable_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:213
class CDOTA_Ability_Enchantress_Enchant : public CDOTABaseAbility {
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
	CDOTA_Ability_Enchantress_Enchant(CDOTA_Ability_Enchantress_Enchant &);
	CDOTA_Ability_Enchantress_Enchant(CDOTA_Ability_Enchantress_Enchant &);
	CDOTA_Ability_Enchantress_Enchant();
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
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_Enchantress_Enchant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:243
class C_CDOTA_Ability_Enchantress_Enchant_MapInstall {
	C_CDOTA_Ability_Enchantress_Enchant_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:366
class CDOTA_Modifier_Enchantress_Enchant : public CDOTA_Buff {
public:

	CDOTA_Modifier_Enchantress_Enchant(CDOTA_Modifier_Enchantress_Enchant &);
	CDOTA_Modifier_Enchantress_Enchant(const CDOTA_Modifier_Enchantress_Enchant &);
	CDOTA_Modifier_Enchantress_Enchant();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual ~CDOTA_Modifier_Enchantress_Enchant();

	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:377
class CDOTA_Modifier_Enchantress_Enchant_Controlled : public CDOTA_Buff {
public:

	CDOTA_Modifier_Enchantress_Enchant_Controlled(CDOTA_Modifier_Enchantress_Enchant_Controlled &);
	CDOTA_Modifier_Enchantress_Enchant_Controlled(const CDOTA_Modifier_Enchantress_Enchant_Controlled &);
	CDOTA_Modifier_Enchantress_Enchant_Controlled();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Enchantress_Enchant_Controlled();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:389
class CDOTA_Modifier_Enchantress_Enchant_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	CDOTA_Modifier_Enchantress_Enchant_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Enchantress_Enchant_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:455
class CDOTA_Ability_Enchantress_NaturesAttendants : public CDOTABaseAbility {
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
	CDOTA_Ability_Enchantress_NaturesAttendants(CDOTA_Ability_Enchantress_NaturesAttendants &);
	CDOTA_Ability_Enchantress_NaturesAttendants(CDOTA_Ability_Enchantress_NaturesAttendants &);
	CDOTA_Ability_Enchantress_NaturesAttendants();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_Enchantress_NaturesAttendants();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:475
class C_CDOTA_Ability_Enchantress_NaturesAttendants_MapInstall {
	C_CDOTA_Ability_Enchantress_NaturesAttendants_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:508
class CDOTA_Modifier_Enchantress_NaturesAttendants : public CDOTA_Buff {
public:

private:

	float heal_interval;  // +0xba8
	float heal;  // +0xbac
	int radius;  // +0xbb0
	int wisp_count;  // +0xbb4
	int m_nWispFXIndex;  // +0xbb8
	CDOTA_Modifier_Enchantress_NaturesAttendants();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool RemoveOnDeath();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Enchantress_NaturesAttendants();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[54] RemoveOnDeath
	// vtable[14] IsPurgable
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:654
class CDOTA_Ability_Enchantress_Impetus : public CDOTABaseAbility {
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
	CDOTA_Ability_Enchantress_Impetus(CDOTA_Ability_Enchantress_Impetus &);
	CDOTA_Ability_Enchantress_Impetus(CDOTA_Ability_Enchantress_Impetus &);
	CDOTA_Ability_Enchantress_Impetus();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Enchantress_Impetus();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:674
class C_CDOTA_Ability_Enchantress_Impetus_MapInstall {
	C_CDOTA_Ability_Enchantress_Impetus_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enchantress.cpp:699
class CDOTA_Modifier_Enchantress_Impetus : public CDOTA_Buff {
public:

private:

	int bonus_attack_range_scepter;  // +0xba8
	float distance_damage_pct;  // +0xbac
	int distance_cap;  // +0xbb0

	CDOTA_Modifier_Enchantress_Impetus();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Enchantress_Impetus();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierAttackRangeBonus
	// vtable[90] GetActivityTranslationModifiers
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Enchantress::~CDOTA_Unit_Hero_Enchantress  (line 35, @0x0000000002ba2a60, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Enchantress::~CDOTA_Unit_Hero_Enchantress(CDOTA_Unit_Hero_Enchantress *const this)
{
  this->_vptr_IHandleEntity = &off_44DB610;
  this->_vptr_INextBotEventResponder = &off_44DC5F0;
  this->_vptr_CObstructionObject = &off_44DC920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Enchantress::~CDOTA_Unit_Hero_Enchantress  (line 35, @0x0000000002ba2aa0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Enchantress
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Enchantress::~CDOTA_Unit_Hero_Enchantress(CDOTA_Unit_Hero_Enchantress *const this)
{
  this->_vptr_IHandleEntity = &off_44DB610;
  this->_vptr_INextBotEventResponder = &off_44DC5F0;
  this->_vptr_CObstructionObject = &off_44DC920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Enchantress::Schema_DynamicBinding  (line 37, @0x0000000002b8ffb0, libserver.so)
// globals: CDOTA_Unit_Hero_Enchantress::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Enchantress::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Enchantress *const this)
{
  return CDOTA_Unit_Hero_Enchantress::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002b8ffe0, libserver.so)
// globals: CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002b8fff0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Enchantress>
void __fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002b90010, libserver.so)
void __fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002b90030, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002b90040, libserver.so)
// globals: CDOTA_Unit_Hero_Enchantress::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Enchantress::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002b97ae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002b9c610, libserver.so)  // inlines: CDOTA_Unit_Hero_Enchantress, Construct<CDOTA_Unit_Hero_Enchantress>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44DB610;
    *(p + 236) = &off_44DC5F0;
    *(p + 257) = &off_44DC920;
  }
  return p;
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002bac050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002bac220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal  (line 37, @0x0000000002bcf140, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_enchantress", "CDOTA_Unit_Hero_Enchantress"
// globals: `guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass, CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass, __dso_handle, CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo, CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass);
    CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass._vptr_CEntityClass = off_44DB590;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Enchantress::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_EnchantressClass != 0 )
    return &CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo,
      "CDOTA_Unit_Hero_Enchantress",
      "npc_dota_hero_enchantress",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo);
  }
  CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass.m_pClassInfo = &CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo;
  CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_EnchantressClass = &CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass;
  CDOTA_Unit_Hero_Enchantress::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnchantressClassInfo.m_pClass = &CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass;
  CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_EnchantressClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Enchantress::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnchantressClass;
}


// CDOTA_Unit_Hero_Enchantress::YouForgotToImplementOrDeclareServerClass  (line 42, @0x0000000002b351f0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Enchantress::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Enchantress *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Enchantress::GetServerClass  (line 42, @0x0000000002b4bee0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Enchantress::GetServerClass(CDOTA_Unit_Hero_Enchantress *const this)
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


// CDOTA_Ability_Enchantress_Untouchable::~CDOTA_Ability_Enchantress_Untouchable  (line 56, @0x0000000002ba1170, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enchantress_Untouchable::~CDOTA_Ability_Enchantress_Untouchable(
        CDOTA_Ability_Enchantress_Untouchable *const this)
{
  this->_vptr_IHandleEntity = &off_44DC9F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enchantress_Untouchable::~CDOTA_Ability_Enchantress_Untouchable  (line 56, @0x0000000002ba1190, libserver.so)  // inlines: ~CDOTA_Ability_Enchantress_Untouchable
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enchantress_Untouchable::~CDOTA_Ability_Enchantress_Untouchable(
        CDOTA_Ability_Enchantress_Untouchable *const this)
{
  this->_vptr_IHandleEntity = &off_44DC9F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enchantress_Untouchable::Schema_DynamicBinding  (line 58, @0x0000000002b90050, libserver.so)
// globals: CDOTA_Ability_Enchantress_Untouchable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Untouchable::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Untouchable *const this)
{
  return CDOTA_Ability_Enchantress_Untouchable::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 58, @0x0000000002b90060, libserver.so)
// globals: CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::DestructInstance  (line 58, @0x0000000002b90070, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enchantress_Untouchable>
void __fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::FreeInstance  (line 58, @0x0000000002b90090, libserver.so)
void __fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::CanAllocate  (line 58, @0x0000000002b900b0, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 58, @0x0000000002b900c0, libserver.so)
// globals: CDOTA_Ability_Enchantress_Untouchable::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Untouchable::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::AllocateInstance  (line 58, @0x0000000002b97b20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::ConstructInstance  (line 58, @0x0000000002b9d2c0, libserver.so)  // inlines: CDOTA_Ability_Enchantress_Untouchable, Construct<CDOTA_Ability_Enchantress_Untouchable>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44DC9F0;
  }
  return p;
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 58, @0x0000000002baa980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 58, @0x0000000002baa9a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal  (line 58, @0x0000000002bc8840, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "enchantress_untouchable", "CDOTA_Ability_Enchantress_Untouchable"
// globals: `guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass, CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass, __dso_handle, CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo, CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass);
    CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass._vptr_CEntityClass = off_44DC970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass);
    __cxa_atexit(
      CDOTA_Ability_Enchantress_Untouchable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enchantress_UntouchableClass != 0 )
    return &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass;
  if ( `guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo,
      "CDOTA_Ability_Enchantress_Untouchable",
      "enchantress_untouchable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo);
  }
  CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass.m_pClassInfo = &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo;
  CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass.m_pBaseClassInfo = CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enchantress_UntouchableClass = &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass;
  CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClassInfo.m_pClass = &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass;
  CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enchantress_UntouchableClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enchantress_Untouchable::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_UntouchableClass;
}


// CDOTA_Ability_Enchantress_Untouchable::GetIntrinsicModifierName  (line 62, @0x0000000002b900d0, libserver.so)
// strings: "modifier_enchantress_untouchable"
const char *__fastcall CDOTA_Ability_Enchantress_Untouchable::GetIntrinsicModifierName(
        CDOTA_Ability_Enchantress_Untouchable *const this)
{
  return "modifier_enchantress_untouchable";
}


// CDOTA_Ability_Enchantress_Untouchable::YouForgotToImplementOrDeclareServerClass  (line 65, @0x0000000002b35200, libserver.so)
int __fastcall CDOTA_Ability_Enchantress_Untouchable::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enchantress_Untouchable *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_Untouchable::GetServerClass  (line 65, @0x0000000002b4c3a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enchantress_Untouchable::GetServerClass(
        CDOTA_Ability_Enchantress_Untouchable *const this)
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


// CDOTA_Modifier_Enchantress_Untouchable::~CDOTA_Modifier_Enchantress_Untouchable  (line 76, @0x0000000002b9abe0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_Untouchable::~CDOTA_Modifier_Enchantress_Untouchable(
        CDOTA_Modifier_Enchantress_Untouchable *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DD4B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_Untouchable::~CDOTA_Modifier_Enchantress_Untouchable  (line 76, @0x0000000002b9ac00, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_Untouchable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_Untouchable::~CDOTA_Modifier_Enchantress_Untouchable(
        CDOTA_Modifier_Enchantress_Untouchable *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DD4B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_Untouchable::IsHidden  (line 81, @0x0000000002b900e0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_Untouchable::IsHidden(CDOTA_Modifier_Enchantress_Untouchable *const this)
{
  return 1;
}


// CDOTA_Modifier_Enchantress_Untouchable::DeclareFunctions  (line 91, @0x0000000002b35210, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Enchantress_Untouchable::DeclareFunctions(
        CDOTA_Modifier_Enchantress_Untouchable *const this)
{
  this->m_Functions[119].__pfn = (&stru_10 + 697);
  this->m_Functions[119].__delta = 0;
}


// CDOTA_Modifier_Enchantress_Untouchable::OnAttackStart  (line 98, @0x0000000002b467e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_enchantress_untouchable_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Untouchable::OnAttackStart(
        CDOTA_Modifier_Enchantress_Untouchable *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *v12; // r13
  char m_CScriptComponent_high; // r13
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
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
        if ( v10->m_pInstance != 0
          && v12->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == v12
          && m_pInstance != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
        {
          m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
          if ( m_CScriptComponent_high != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value
            && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_enchantress_untouchable_slow");
            Ability = CDOTA_Buff::GetAbility(this);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_enchantress_untouchable_slow", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::~CDOTA_Modifier_Enchantress_Untouchable_Slow  (line 118, @0x0000000002b9ab90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::~CDOTA_Modifier_Enchantress_Untouchable_Slow(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DD7D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::~CDOTA_Modifier_Enchantress_Untouchable_Slow  (line 118, @0x0000000002b9abb0, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_Untouchable_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::~CDOTA_Modifier_Enchantress_Untouchable_Slow(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DD7D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::IsDebuff  (line 123, @0x0000000002b900f0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::IsDebuff(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::GetStatusEffectName  (line 132, @0x0000000002b90100, libserver.so)
// strings: "particles/status_fx/status_effect_enchantress_untouchable.vpcf"
const char *__fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::GetStatusEffectName(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  return "particles/status_fx/status_effect_enchantress_untouchable.vpcf";
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::StatusEffectPriority  (line 133, @0x0000000002b90110, libserver.so)
int __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::StatusEffectPriority(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  return 11;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::OnCreated  (line 144, @0x0000000002b6c750, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_attack_speed"
void __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::OnCreated(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_attack_speed", -1, 0);
  else
    this->slow_attack_speed = 0;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::OnRefresh  (line 157, @0x0000000002b6c8d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_attack_speed"
void __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::OnRefresh(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_attack_speed", -1, 0);
  else
    this->slow_attack_speed = 0;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::DeclareFunctions  (line 164, @0x0000000002b35230, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Enchantress_Untouchable_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Enchantress_Untouchable_Slow::OnAttackFinished(CModifierParams const&)
void __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::DeclareFunctions(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Enchantress_Untouchable_Slow::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[168].__delta = 0;
  this->m_Functions[168].__pfn = CDOTA_Modifier_Enchantress_Untouchable_Slow::OnAttackFinished;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::GetModifierAttackSpeedBonus_Constant  (line 172, @0x0000000002b44650, libserver.so)  // inlines: Get, GetAttackTarget, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *m_pInstance; // rsi
  uint32 m_Index; // edx
  CDOTA_BaseNPC *v7; // rcx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  __m128i v11; // xmm0
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  m_pInstance = 0;
  m_Index = Parent->m_hAttackTarget.m_Index;
  v7 = Parent;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(Parent->m_hAttackTarget.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[v7->m_hAttackTarget.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( Caster == m_pInstance
    && CDOTA_Buff::GetCaster(this) != 0
    && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    *v11.m128i_i32 = this->slow_attack_speed;
    *&result.m_eType = (_mm_cvtsi128_si32(v11) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Enchantress_Untouchable_Slow::OnAttackFinished  (line 187, @0x0000000002b44840, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Untouchable_Slow::OnAttackFinished(
        CDOTA_Modifier_Enchantress_Untouchable_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm2
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          if ( params->fAttackTimeRemaining <= 0.0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
          else
            (*(this->_vptr_CDOTA_Buff + 63))(this, 1);
        }
      }
    }
  }
  *v2.m128i_i32 = this->slow_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Enchantress_Enchant::~CDOTA_Ability_Enchantress_Enchant  (line 213, @0x0000000002ba11c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enchantress_Enchant::~CDOTA_Ability_Enchantress_Enchant(
        CDOTA_Ability_Enchantress_Enchant *const this)
{
  this->_vptr_IHandleEntity = &off_44DDB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enchantress_Enchant::~CDOTA_Ability_Enchantress_Enchant  (line 213, @0x0000000002ba11e0, libserver.so)  // inlines: ~CDOTA_Ability_Enchantress_Enchant
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enchantress_Enchant::~CDOTA_Ability_Enchantress_Enchant(
        CDOTA_Ability_Enchantress_Enchant *const this)
{
  this->_vptr_IHandleEntity = &off_44DDB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enchantress_Enchant::Schema_DynamicBinding  (line 215, @0x0000000002b90120, libserver.so)
// globals: CDOTA_Ability_Enchantress_Enchant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Enchant::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Enchant *const this)
{
  return CDOTA_Ability_Enchantress_Enchant::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 215, @0x0000000002b90130, libserver.so)
// globals: CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::DestructInstance  (line 215, @0x0000000002b90140, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enchantress_Enchant>
void __fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::FreeInstance  (line 215, @0x0000000002b90160, libserver.so)
void __fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::CanAllocate  (line 215, @0x0000000002b90180, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 215, @0x0000000002b90190, libserver.so)
// globals: CDOTA_Ability_Enchantress_Enchant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Enchant::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::AllocateInstance  (line 215, @0x0000000002b97b60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::ConstructInstance  (line 215, @0x0000000002b9d2f0, libserver.so)  // inlines: CDOTA_Ability_Enchantress_Enchant, Construct<CDOTA_Ability_Enchantress_Enchant>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44DDB30;
  }
  return p;
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 215, @0x0000000002baa9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 215, @0x0000000002baa9f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal  (line 215, @0x0000000002bc8990, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Enchantress_Enchant"
// globals: `guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass, CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass, __dso_handle, CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo, CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass);
    CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass._vptr_CEntityClass = off_44DDAB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass);
    __cxa_atexit(
      CDOTA_Ability_Enchantress_Enchant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enchantress_EnchantClass != 0 )
    return &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass;
  if ( `guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo,
      "CDOTA_Ability_Enchantress_Enchant",
      "enchantress_enchant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo);
  }
  CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass.m_pClassInfo = &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo;
  CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass.m_pBaseClassInfo = CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enchantress_EnchantClass = &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass;
  CDOTA_Ability_Enchantress_Enchant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClassInfo.m_pClass = &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass;
  CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enchantress_EnchantClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enchantress_Enchant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_EnchantClass;
}


// CDOTA_Ability_Enchantress_Enchant::GetConceptRecipientType  (line 224, @0x0000000002b9fd10, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget
int __fastcall CDOTA_Ability_Enchantress_Enchant::GetConceptRecipientType(
        CDOTA_Ability_Enchantress_Enchant *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rdx
  int result; // eax

  if ( CDOTABaseAbility::GetCursorTarget(this) == 0 )
    return 0;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget == 0 )
    return 0;
  if ( !CursorTarget->m_bIsDOTANPC )
    return 0;
  result = 4;
  if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
    return 0;
  return result;
}


// CDOTA_Ability_Enchantress_Enchant::YouForgotToImplementOrDeclareServerClass  (line 243, @0x0000000002b35270, libserver.so)
int __fastcall CDOTA_Ability_Enchantress_Enchant::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enchantress_Enchant *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_Enchant::GetServerClass  (line 243, @0x0000000002b4c1a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enchantress_Enchant::GetServerClass(
        CDOTA_Ability_Enchantress_Enchant *const this)
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


// CDOTA_Ability_Enchantress_Enchant::CastFilterResult  (line 253, @0x0000000002b38b00, libserver.so)
// calls: CDOTABaseAbility::CastFilterResult, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_enchantress_enchant_controlled"
int __fastcall CDOTA_Ability_Enchantress_Enchant::CastFilterResult(
        CDOTA_Ability_Enchantress_Enchant *const this,
        CDOTA_BaseNPC *pTarget)
{
  int v3; // r12d
  char v4; // cl
  int result; // eax

  v3 = CDOTABaseAbility::CastFilterResult(this, pTarget);
  v4 = (*(pTarget->_vptr_IHandleEntity + 405))(pTarget);
  result = 23;
  if ( v4 == 0 )
  {
    if ( pTarget->m_iTeamNum.m_Value == 4 && (pTarget->m_nUnitState64.m_Value & 0x200) != 0 )
    {
      return 0;
    }
    else if ( CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_enchantress_enchant_controlled", 0) != 0 )
    {
      return 0;
    }
    else
    {
      return v3;
    }
  }
  return result;
}


// CDOTA_Ability_Enchantress_Enchant::GetCustomCastError  (line 271, @0x0000000002b35280, libserver.so)
// strings: "#dota_hud_error_cannot_dominate"
const char *__fastcall CDOTA_Ability_Enchantress_Enchant::GetCustomCastError(
        CDOTA_Ability_Enchantress_Enchant *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_cannot_dominate";
  if ( pTarget->m_bCanBeDominated.m_Value )
    return "";
  return result;
}


// CDOTA_Ability_Enchantress_Enchant::OnSpellStart  (line 280, @0x0000000002b74350, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetLevelSpecialValueFor<float>, GetModifier_Constant_First, GetTeamNumber, IsConsideredHero, IsListeningToEvent, IsSpecialIllusion, Min<float>, ToDOTABaseNPC, ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetDuration, CDOTA_ModifierManager::GetModifier_Constant_First_Internal (25 total)
// strings: "modifier_enchantress_enchant_controlled", "dominate_duration", "modifier_kill", "modifier_dominated", "Hero_Enchantress.EnchantCast", "modifier_enchantress_enchant_slow" (10 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Enchantress_Enchant::OnSpellStart(CDOTA_Ability_Enchantress_Enchant *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  __int64 m_nGrowSize_low; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v14; // rax
  void (__fastcall *v15)(CBaseEntity *, _QWORD); // r13
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int v18; // eax
  void (__fastcall *v19)(CBaseEntity *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v20; // rax
  CDOTA_Buff *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC_Hero *v27; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *dominate_duration; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 3) != 0
      && (LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0
       || (m_nGrowSize_low = LOBYTE(v3[4].m_aThinkFunctions.m_Memory.m_nGrowSize)) != 0xFF
       && *(&v3[4].m_CBodyComponent->_vptr_CBodyComponent + 6 * m_nGrowSize_low) > 0
       && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
            &v3[4],
            modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
            &CModifierParams::s_Default) == 1.0) )
    {
      KeyValues::KeyValues(&kv, "modifier_enchantress_enchant_slow");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v10);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_enchantress_enchant_slow", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Enchantress.EnchantHero", 0.0, 0, 0);
    }
    else
    {
      v4 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enchantress_enchant_controlled", v4) != 0 )
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "dominate_duration", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_kill");
        KeyValues::SetFloat(&kv, "duration", v5);
        v6 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v6, this, "modifier_kill", &kv, 0);
        v7 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_dominated", &kv, 0);
        v8 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_enchantress_enchant_controlled", &kv, 0);
      }
      else
      {
        Purge(v3, this, 6);
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_enchantress_enchant_controlled", 0);
        if ( ModifierByName != 0 )
          CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
        v14 = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_dominated", 0);
        if ( v14 != 0 )
          CDOTA_Buff::Destroy(v14, 0, 0, 0);
        CDOTA_BaseNPC::Interrupt(v3);
        v15 = *(v3->_vptr_IHandleEntity + 70);
        v16 = CDOTABaseAbility::GetCaster(this);
        v15(v3, v16->m_iTeamNum.m_Value);
        CDOTA_BaseNPC::ResetPlayerControls(v3);
        v17 = CDOTABaseAbility::GetCaster(this);
        v18 = (*(v17->_vptr_IHandleEntity + 414))(v17);
        CDOTA_BaseNPC::SetControllableByPlayer(v3, v18, 0);
        v19 = *(v3->_vptr_IHandleEntity + 40);
        v20 = CDOTABaseAbility::GetCaster(this);
        v19(v3, v20);
        (*(v3->_vptr_IHandleEntity + 389))(v3);
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "dominate_duration", -1, 0);
        v21 = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_kill", 0);
        if ( v21 != 0 )
          (*(v21->_vptr_CDOTA_Buff + 30))(v21);
        KeyValues::KeyValues(&kv, "modifier_kill");
        KeyValues::SetFloat(&kv, "duration", v22);
        v23 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v23, this, "modifier_kill", &kv, 0);
        v24 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v24, this, "modifier_dominated", &kv, 0);
        v25 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v25, this, "modifier_enchantress_enchant_controlled", &kv, 0);
        v26 = CDOTABaseAbility::GetCaster(this);
        if ( v26 != 0 && (v26->m_iUnitType & 1) != 0 )
          v27 = v26;
        else
          v27 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v27,
          0,
          kill_eater_event_t::kKillEaterEventType_Enchantress_CreepsConverted,
          1,
          INVALID_ITEM_DEF_INDEX);
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_enchantress/enchantress_enchant.vpcf",
                     2,
                     0,
                     0,
                     0);
        v30 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v30, Particle, 0, v3, 1, 0, vec3_invalid, 1);
        v31 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v31);
        dominate_duration = CDOTABaseAbility::GetCaster(this);
        v33 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(
          v33,
          Particle,
          1,
          dominate_duration,
          5,
          "attach_attack3",
          *AbsOrigin,
          1);
        v34 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v34, Particle);
        CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Enchantress.EnchantCreep", 0.0, 0, 0);
      }
    }
    KeyValues::~KeyValues(&kv);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Enchantress.EnchantCast", 0.0, 0, 0);
  }
}


// CDOTA_Modifier_Enchantress_Enchant::~CDOTA_Modifier_Enchantress_Enchant  (line 366, @0x0000000002b9c1d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_Enchant::~CDOTA_Modifier_Enchantress_Enchant(
        CDOTA_Modifier_Enchantress_Enchant *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DE5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_Enchant::~CDOTA_Modifier_Enchantress_Enchant  (line 366, @0x0000000002b9c1f0, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_Enchant
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_Enchant::~CDOTA_Modifier_Enchantress_Enchant(
        CDOTA_Modifier_Enchantress_Enchant *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DE5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_Enchant::GetEffectName  (line 371, @0x0000000002b901a0, libserver.so)
// strings: "particles/units/heroes/hero_enchantress/enchantress_enchant_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Enchantress_Enchant::GetEffectName(
        CDOTA_Modifier_Enchantress_Enchant *const this)
{
  return "particles/units/heroes/hero_enchantress/enchantress_enchant_slow.vpcf";
}


// CDOTA_Modifier_Enchantress_Enchant::GetStatusEffectName  (line 372, @0x0000000002b901b0, libserver.so)
// strings: "particles/status_fx/status_effect_enchantress_enchant_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Enchantress_Enchant::GetStatusEffectName(
        CDOTA_Modifier_Enchantress_Enchant *const this)
{
  return "particles/status_fx/status_effect_enchantress_enchant_slow.vpcf";
}


// CDOTA_Modifier_Enchantress_Enchant_Controlled::~CDOTA_Modifier_Enchantress_Enchant_Controlled  (line 377, @0x0000000002b9c180, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Controlled::~CDOTA_Modifier_Enchantress_Enchant_Controlled(
        CDOTA_Modifier_Enchantress_Enchant_Controlled *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DE8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_Enchant_Controlled::~CDOTA_Modifier_Enchantress_Enchant_Controlled  (line 377, @0x0000000002b9c1a0, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_Enchant_Controlled
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Controlled::~CDOTA_Modifier_Enchantress_Enchant_Controlled(
        CDOTA_Modifier_Enchantress_Enchant_Controlled *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DE8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_Enchant_Controlled::IsHidden  (line 383, @0x0000000002b901c0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_Enchant_Controlled::IsHidden(
        CDOTA_Modifier_Enchantress_Enchant_Controlled *const this)
{
  return 1;
}


// CDOTA_Modifier_Enchantress_Enchant_Controlled::IsPurgable  (line 384, @0x0000000002b901d0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_Enchant_Controlled::IsPurgable(
        CDOTA_Modifier_Enchantress_Enchant_Controlled *const this)
{
  return 0;
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::~CDOTA_Modifier_Enchantress_Enchant_Slow  (line 389, @0x0000000002b9ab40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::~CDOTA_Modifier_Enchantress_Enchant_Slow(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DEC30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::~CDOTA_Modifier_Enchantress_Enchant_Slow  (line 389, @0x0000000002b9ab60, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_Enchant_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::~CDOTA_Modifier_Enchantress_Enchant_Slow(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DEC30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::GetEffectName  (line 402, @0x0000000002b901e0, libserver.so)
// strings: "particles/units/heroes/hero_enchantress/enchantress_enchant_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::GetEffectName(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  return "particles/units/heroes/hero_enchantress/enchantress_enchant_slow.vpcf";
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::GetStatusEffectName  (line 403, @0x0000000002b901f0, libserver.so)
// strings: "particles/status_fx/status_effect_enchantress_enchant_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::GetStatusEffectName(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  return "particles/status_fx/status_effect_enchantress_enchant_slow.vpcf";
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::StatusEffectPriority  (line 404, @0x0000000002b90200, libserver.so)
int __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::StatusEffectPriority(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  return 9;
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::OnCreated  (line 414, @0x0000000002b6c0f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed"
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::OnCreated(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  else
    this->slow_movement_speed = 0;
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::OnRefresh  (line 421, @0x0000000002b6cb10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed"
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::OnRefresh(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  else
    this->slow_movement_speed = 0;
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::OnDestroy  (line 428, @0x0000000002b37450, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Enchantress.EnchantHero"
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::OnDestroy(CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Enchantress.EnchantHero");
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::DeclareFunctions  (line 437, @0x0000000002b352a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Enchantress_Enchant_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::DeclareFunctions(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Enchantress_Enchant_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Enchantress_Enchant_Slow::GetModifierMoveSpeedBonus_Percentage  (line 444, @0x0000000002b352c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Enchant_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Enchantress_Enchant_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::~CDOTA_Ability_Enchantress_NaturesAttendants  (line 455, @0x0000000002ba1210, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::~CDOTA_Ability_Enchantress_NaturesAttendants(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  this->_vptr_IHandleEntity = &off_44DEF90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::~CDOTA_Ability_Enchantress_NaturesAttendants  (line 455, @0x0000000002ba1230, libserver.so)  // inlines: ~CDOTA_Ability_Enchantress_NaturesAttendants
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::~CDOTA_Ability_Enchantress_NaturesAttendants(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  this->_vptr_IHandleEntity = &off_44DEF90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::Schema_DynamicBinding  (line 457, @0x0000000002b90210, libserver.so)
// globals: CDOTA_Ability_Enchantress_NaturesAttendants::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  return CDOTA_Ability_Enchantress_NaturesAttendants::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 457, @0x0000000002b90220, libserver.so)
// globals: CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::DestructInstance  (line 457, @0x0000000002b90230, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enchantress_NaturesAttendants>
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::FreeInstance  (line 457, @0x0000000002b90250, libserver.so)
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::CanAllocate  (line 457, @0x0000000002b90270, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 457, @0x0000000002b90280, libserver.so)
// globals: CDOTA_Ability_Enchantress_NaturesAttendants::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_NaturesAttendants::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::AllocateInstance  (line 457, @0x0000000002b97ba0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::ConstructInstance  (line 457, @0x0000000002b9d320, libserver.so)  // inlines: CDOTA_Ability_Enchantress_NaturesAttendants, Construct<CDOTA_Ability_Enchantress_NaturesAttendants>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44DEF90;
  }
  return p;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 457, @0x0000000002baaa20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 457, @0x0000000002baaa40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal  (line 457, @0x0000000002bc8ae0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "enchantress_natures_attendants", "CDOTA_Ability_Enchantress_NaturesAttendants"
// globals: `guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass, CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass, __dso_handle, CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo, CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass);
    CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass._vptr_CEntityClass = off_44DEF10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass);
    __cxa_atexit(
      CDOTA_Ability_Enchantress_NaturesAttendants::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enchantress_NaturesAttendantsClass != 0 )
    return &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass;
  if ( `guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo,
      "CDOTA_Ability_Enchantress_NaturesAttendants",
      "enchantress_natures_attendants",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo);
  }
  CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass.m_pClassInfo = &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo;
  CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass.m_pBaseClassInfo = CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enchantress_NaturesAttendantsClass = &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass;
  CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClassInfo.m_pClass = &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass;
  CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enchantress_NaturesAttendantsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enchantress_NaturesAttendants::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_NaturesAttendantsClass;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::GetConceptRecipientType  (line 472, @0x0000000002b90290, libserver.so)
int __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::GetConceptRecipientType(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  return 3;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::YouForgotToImplementOrDeclareServerClass  (line 475, @0x0000000002b352e0, libserver.so)
int __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_NaturesAttendants::GetServerClass  (line 475, @0x0000000002b4c5a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enchantress_NaturesAttendants::GetServerClass(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
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


// CDOTA_Ability_Enchantress_NaturesAttendants::OnSpellStart  (line 484, @0x0000000002b796e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "special_bonus_unique_enchantress_1", "modifier_enchantress_natures_attendants"
void __fastcall CDOTA_Ability_Enchantress_NaturesAttendants::OnSpellStart(
        CDOTA_Ability_Enchantress_NaturesAttendants *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "heal_interval", -1, 0);
  CDOTABaseAbility::GetDuration(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_enchantress_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  KeyValues::KeyValues(&kv, "modifier_enchantress_natures_attendants");
  KeyValues::SetFloat(&kv, "duration", v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, v5, this, "modifier_enchantress_natures_attendants", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::~CDOTA_Modifier_Enchantress_NaturesAttendants  (line 508, @0x0000000002b9aaf0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::~CDOTA_Modifier_Enchantress_NaturesAttendants(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DFA50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::~CDOTA_Modifier_Enchantress_NaturesAttendants  (line 508, @0x0000000002b9ab10, libserver.so)  // inlines: ~CDOTA_Modifier_Enchantress_NaturesAttendants
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::~CDOTA_Modifier_Enchantress_NaturesAttendants(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DFA50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::RemoveOnDeath  (line 517, @0x0000000002b902a0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::RemoveOnDeath(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  return 0;
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::IsPurgable  (line 518, @0x0000000002b902b0, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::IsPurgable(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  return 0;
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::OnCreated  (line 532, @0x0000000002b714a0, libserver.so)  // inlines: GetLevel, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (14 total)
// strings: "wisp_count", "special_bonus_unique_enchantress_2", "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl1.vpcf", "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl3.vpcf", "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl4.vpcf", "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl2.vpcf" (9 total)
void __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::OnCreated(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v9; // xmm1_4
  const char *v10; // r12
  CDOTABaseAbility *v11; // rax
  int m_Value; // eax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const CBaseAnimating *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  __int64 v18; // r12
  CDOTA_BaseNPC *v19; // rax
  const CBaseAnimating *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  int v23; // esi
  int v24; // r12d
  CDOTA_BaseNPC *v25; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v27; // rax
  int m_nWispFXIndex; // r14d
  const CBaseAnimating *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  int v31; // edx
  CDOTA_BaseNPC *v32; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  double v34; // [rsp+10h] [rbp-40h]
  Vector v35; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->heal, "heal");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &this->heal_interval, "heal_interval");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->radius, "radius");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->wisp_count, "wisp_count");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_enchantress_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->wisp_count += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v10 = "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl1.vpcf";
  CDOTA_Buff::StartIntervalThink(this, this->heal_interval, v9);
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
  {
    m_Value = v11->m_iLevel.m_Value;
    if ( m_Value > 0 )
    {
      v10 = "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl3.vpcf";
      if ( m_Value != 3 )
      {
        v10 = "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl4.vpcf";
        if ( m_Value != 4 )
        {
          v10 = "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl1.vpcf";
          if ( m_Value == 2 )
            v10 = "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_lvl2.vpcf";
        }
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nWispFXIndex = CDOTA_ParticleManager::CreateParticle(ParticleManager, v10, 2, Parent, 0, 0);
  v15 = CDOTA_Buff::GetParent(this);
  LODWORD(Parent) = this->m_nWispFXIndex;
  v16 = v15;
  v17 = GetParticleManager();
  v18 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v17, Parent, 0, v16, 1, 0, vec3_invalid, 1);
  v19 = CDOTA_Buff::GetParent(this);
  LODWORD(Parent) = this->m_nWispFXIndex;
  v20 = v19;
  v21 = GetParticleManager();
  *&v35.x = v18;
  v35.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v21, Parent, 1, v20, 5, "attach_attack3", v35, 1);
  LODWORD(v18) = this->m_nWispFXIndex;
  *&v34 = COERCE_UNSIGNED_INT(this->wisp_count);
  v22 = GetParticleManager();
  v23 = v18;
  v24 = 0;
  CDOTA_ParticleManager::SetParticleControl(v22, v23, 2, v34, 0.0);
  if ( this->wisp_count > 0 )
  {
    do
    {
      v25 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
      v27 = CDOTA_Buff::GetParent(this);
      m_nWispFXIndex = this->m_nWispFXIndex;
      v29 = v27;
      v30 = GetParticleManager();
      v31 = v24 + 3;
      ++v24;
      CDOTA_ParticleManager::SetParticleControlEnt(v30, m_nWispFXIndex, v31, v29, 5, "attach_hitloc", *AbsOrigin, 1);
    }
    while ( this->wisp_count > v24 );
  }
  v32 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v32, "Hero_Enchantress.NaturesAttendantsCast", 0.0, 0, 0);
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::OnDestroy  (line 577, @0x0000000002b37600, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetCaster, CBaseEntity::StopSound
// strings: "Hero_Enchantress.NaturesAttendantsCast"
void __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::OnDestroy(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  int m_nWispFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax

  m_nWispFXIndex = this->m_nWispFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nWispFXIndex, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Enchantress.NaturesAttendantsCast");
}


// CDOTA_Modifier_Enchantress_NaturesAttendants::OnIntervalThink  (line 587, @0x0000000002b824e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHealthDeficit, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CBaseEntity::GetHealth, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, RandomInt, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_ParticleManager::SetParticleControlEnt, _Unwind_Resume, CDOTA_Buff::GetAbility (15 total)
// strings: "attach_hitloc", "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_heal.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Enchantress_NaturesAttendants::OnIntervalThink(
        CDOTA_Modifier_Enchantress_NaturesAttendants *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int m_Size; // esi
  int v9; // r13d
  __int64 v10; // r14
  const CBaseEntity *m_pInstance; // r12
  int v12; // r15d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  int v18; // esi
  int wisp_count; // eax
  int v20; // r12d
  CHandle<CBaseEntity> *v21; // rdx
  uint32 v22; // eax
  __int16 v23; // cx
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  int m_nWispFXIndex; // ebx
  CDOTA_ParticleManager *v27; // rax
  int v28; // r12d
  CDOTA_ParticleManager *v29; // rax
  int v30; // r12d
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // r13
  CDOTA_BaseNPC *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // r13
  CDOTABaseAbility *Ability; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *v39; // r15
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  const Vector *v43; // r14
  CDOTA_ParticleManager *v44; // rax
  int nUnitsHealed; // [rsp+1Ch] [rbp-74h]
  int iHealIndex; // [rsp+28h] [rbp-68h]
  int iIndex; // [rsp+2Ch] [rbp-64h]
  int iIndexa; // [rsp+2Ch] [rbp-64h]
  unsigned int v49; // [rsp+30h] [rbp-60h]
  double v50; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  entities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 1, 3, 576, 0, 0);
  m_Size = entities.m_Size;
  v9 = entities.m_Size - 1;
  if ( entities.m_Size - 1 >= 0 )
  {
    v10 = v9;
    do
    {
      while ( 1 )
      {
        v13 = &entities.m_Memory.m_pMemory[v10];
        m_Index = entities.m_Memory.m_pMemory[v10].m_Index;
        if ( m_Index + 2 <= 1
          || (v15 = v13->m_Index,
              (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F]) == 0)
          || (v17 = &v16[v15 & 0x1FF]) == 0
          || m_Index != v17->m_EHandle.m_Index
          || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
          || !m_pInstance->m_bIsDOTANPC )
        {
          m_pInstance = 0;
        }
        v12 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
        if ( v12 - CBaseEntity::GetHealth(m_pInstance) <= 0 )
          break;
        --v9;
        --v10;
        if ( v9 == -1 )
          goto LABEL_14;
      }
      v18 = v9--;
      --v10;
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&entities, v18);
    }
    while ( v9 != -1 );
LABEL_14:
    m_Size = entities.m_Size;
  }
  if ( m_Size != 0 )
  {
    wisp_count = this->wisp_count;
    if ( wisp_count > 0 )
    {
      v20 = 0;
      nUnitsHealed = 0;
      while ( 1 )
      {
        if ( m_Size != 0 )
        {
          iHealIndex = RandomInt(0, (m_Size - 1));
          v21 = &entities.m_Memory.m_pMemory[iHealIndex];
          v22 = v21->m_Index;
          if ( v21->m_Index + 2 > 1 )
          {
            v23 = v21->m_Index;
            v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v21->m_Index) >> 9) & 0x3F];
            if ( v24 != 0 )
            {
              v25 = &v24[v23 & 0x1FF];
              if ( v25 != 0 && v22 == v25->m_EHandle.m_Index )
              {
                v35 = v25->m_pInstance;
                if ( v25->m_pInstance != 0 && v35->m_bIsDOTANPC )
                {
                  Ability = CDOTA_Buff::GetAbility(this);
                  CDOTA_BaseNPC::Heal(v35, this->heal * this->heal_interval, Ability, 0, 1);
                  ++nUnitsHealed;
                  ParticleManager = GetParticleManager();
                  Particle = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_enchantress/enchantress_natures_attendants_heal.vpcf",
                               2,
                               v35,
                               0,
                               0);
                  v39 = CBaseEntity::GetAbsOrigin(v35);
                  v40 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v40, Particle, 0, v35, 5, "attach_hitloc", *v39, 1);
                  v41 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v41, Particle, 1, v35, 1, 0, vec3_invalid, 1);
                  v42 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v42, Particle);
                  v43 = CBaseEntity::GetAbsOrigin(v35);
                  iIndexa = this->m_nWispFXIndex;
                  v44 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v44, iIndexa, v20 + 3, v35, 5, "attach_hitloc", *v43, 1);
                  LODWORD(v43) = (*(v35->_vptr_IHandleEntity + 156))(v35);
                  if ( v43 - CBaseEntity::GetHealth(v35) <= 0 )
                    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                      &entities,
                      iHealIndex);
                }
              }
            }
          }
          wisp_count = this->wisp_count;
          if ( wisp_count <= ++v20 )
            goto LABEL_26;
        }
        else if ( wisp_count <= ++v20 )
        {
          goto LABEL_26;
        }
        m_Size = entities.m_Size;
      }
    }
    nUnitsHealed = 0;
LABEL_26:
    m_nWispFXIndex = this->m_nWispFXIndex;
    *&v49 = (wisp_count - nUnitsHealed);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v27, m_nWispFXIndex, 2, COERCE_DOUBLE(v49), 0.0);
  }
  else
  {
    v28 = this->m_nWispFXIndex;
    *&v50 = COERCE_UNSIGNED_INT(this->wisp_count);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v29, v28, 2, v50, 0.0);
    if ( this->wisp_count > 0 )
    {
      v30 = 0;
      do
      {
        v31 = CDOTA_Buff::GetParent(this);
        v32 = CBaseEntity::GetAbsOrigin(v31);
        v33 = CDOTA_Buff::GetParent(this);
        iIndex = this->m_nWispFXIndex;
        v34 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v34, iIndex, v30 + 3, v33, 5, "attach_hitloc", *v32, 1);
        ++v30;
      }
      while ( this->wisp_count > v30 );
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Enchantress_Impetus::~CDOTA_Ability_Enchantress_Impetus  (line 654, @0x0000000002ba1260, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enchantress_Impetus::~CDOTA_Ability_Enchantress_Impetus(
        CDOTA_Ability_Enchantress_Impetus *const this)
{
  this->_vptr_IHandleEntity = &off_44DFDB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enchantress_Impetus::~CDOTA_Ability_Enchantress_Impetus  (line 654, @0x0000000002ba1280, libserver.so)  // inlines: ~CDOTA_Ability_Enchantress_Impetus
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enchantress_Impetus::~CDOTA_Ability_Enchantress_Impetus(
        CDOTA_Ability_Enchantress_Impetus *const this)
{
  this->_vptr_IHandleEntity = &off_44DFDB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enchantress_Impetus::Schema_DynamicBinding  (line 656, @0x0000000002b902c0, libserver.so)
// globals: CDOTA_Ability_Enchantress_Impetus::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Impetus::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Impetus *const this)
{
  return CDOTA_Ability_Enchantress_Impetus::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 656, @0x0000000002b902d0, libserver.so)
// globals: CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::DestructInstance  (line 656, @0x0000000002b902e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enchantress_Impetus>
void __fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::FreeInstance  (line 656, @0x0000000002b90300, libserver.so)
void __fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::CanAllocate  (line 656, @0x0000000002b90320, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 656, @0x0000000002b90330, libserver.so)
// globals: CDOTA_Ability_Enchantress_Impetus::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enchantress_Impetus::s_pSchemaBinding;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::AllocateInstance  (line 656, @0x0000000002b97be0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::ConstructInstance  (line 656, @0x0000000002b9d350, libserver.so)  // inlines: CDOTA_Ability_Enchantress_Impetus, Construct<CDOTA_Ability_Enchantress_Impetus>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44DFDB0;
  }
  return p;
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 656, @0x0000000002baaa70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 656, @0x0000000002baaa90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal  (line 656, @0x0000000002bc8c30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Enchantress_Impetus"
// globals: `guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass, CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass, __dso_handle, CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo, CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass);
    CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass._vptr_CEntityClass = off_44DFD30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass);
    __cxa_atexit(
      CDOTA_Ability_Enchantress_Impetus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enchantress_ImpetusClass != 0 )
    return &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass;
  if ( `guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo,
      "CDOTA_Ability_Enchantress_Impetus",
      "enchantress_impetus",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo);
  }
  CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass.m_pClassInfo = &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo;
  CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass.m_pBaseClassInfo = CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enchantress_ImpetusClass = &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass;
  CDOTA_Ability_Enchantress_Impetus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClassInfo.m_pClass = &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass;
  CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enchantress_ImpetusClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enchantress_Impetus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enchantress_ImpetusClass;
}


// CDOTA_Ability_Enchantress_Impetus::GetIntrinsicModifierName  (line 660, @0x0000000002b90340, libserver.so)
// strings: "modifier_enchantress_impetus"
const char *__fastcall CDOTA_Ability_Enchantress_Impetus::GetIntrinsicModifierName(
        CDOTA_Ability_Enchantress_Impetus *const this)
{
  return "modifier_enchantress_impetus";
}


// CDOTA_Ability_Enchantress_Impetus::ProcsMagicStick  (line 662, @0x0000000002b90350, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_Impetus::ProcsMagicStick(CDOTA_Ability_Enchantress_Impetus *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_Impetus::IsStealable  (line 663, @0x0000000002b90360, libserver.so)
bool __fastcall CDOTA_Ability_Enchantress_Impetus::IsStealable(CDOTA_Ability_Enchantress_Impetus *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_Impetus::GetCastRange  (line 669, @0x0000000002b6a0e0, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_attack_range_scepter"
int __fastcall CDOTA_Ability_Enchantress_Impetus::GetCastRange(
        CDOTA_Ability_Enchantress_Impetus *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int CastRange; // r12d
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int LevelSpecialValue; // edx

  CastRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  LevelSpecialValue = 0;
  if ( HasScepter )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_range_scepter", -1, 0);
  return LevelSpecialValue + CastRange;
}


// CDOTA_Ability_Enchantress_Impetus::YouForgotToImplementOrDeclareServerClass  (line 674, @0x0000000002b352f0, libserver.so)
int __fastcall CDOTA_Ability_Enchantress_Impetus::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enchantress_Impetus *const this)
{
  return 0;
}


// CDOTA_Ability_Enchantress_Impetus::GetServerClass  (line 674, @0x0000000002b4c620, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enchantress_Impetus::GetServerClass(
        CDOTA_Ability_Enchantress_Impetus *const this)
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


// CDOTA_Ability_Enchantress_Impetus::GetAbilityDamageToTargetOverInterval  (line 683, @0x0000000002b79810, libserver.so)  // inlines: FastSqrt, Length2D, Min<float>, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "distance_cap", "distance_damage_pct"
__int64 __fastcall CDOTA_Ability_Enchantress_Impetus::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Enchantress_Impetus *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v8; // rax
  float v9; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTABaseAbility::GetCaster(this);
    v8 = CBaseEntity::GetAbsOrigin(Caster);
    v9 = fminf(
           CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "distance_cap", -1, 0),
           fsqrt(((v8->x - AbsOrigin->x) * (v8->x - AbsOrigin->x)) + ((v8->y - AbsOrigin->y) * (v8->y - AbsOrigin->y))));
    return ((CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "distance_damage_pct", -1, 0) * v9) / 100.0);
  }
  return result;
}


// CDOTA_Modifier_Enchantress_Impetus::~CDOTA_Modifier_Enchantress_Impetus  (line 699, @0x0000000002ba9350, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Enchantress_Impetus::~CDOTA_Modifier_Enchantress_Impetus(
        CDOTA_Modifier_Enchantress_Impetus *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44E0870;
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


// CDOTA_Modifier_Enchantress_Impetus::~CDOTA_Modifier_Enchantress_Impetus  (line 699, @0x0000000002ba9510, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Enchantress_Impetus, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Enchantress_Impetus::~CDOTA_Modifier_Enchantress_Impetus(
        CDOTA_Modifier_Enchantress_Impetus *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44E0870;
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


// CDOTA_Modifier_Enchantress_Impetus::IsHidden  (line 704, @0x0000000002b90370, libserver.so)
bool __fastcall CDOTA_Modifier_Enchantress_Impetus::IsHidden(CDOTA_Modifier_Enchantress_Impetus *const this)
{
  return 1;
}


// CDOTA_Modifier_Enchantress_Impetus::DeclareFunctions  (line 732, @0x0000000002b35300, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Enchantress_Impetus::OnAttack(CModifierParams const&), CDOTA_Modifier_Enchantress_Impetus::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Enchantress_Impetus::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Enchantress_Impetus::DeclareFunctions(CDOTA_Modifier_Enchantress_Impetus *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Enchantress_Impetus::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Enchantress_Impetus::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Enchantress_Impetus::OnAttackFail;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[69].__pfn = (&stru_10 + 697);
  this->m_Functions[69].__delta = 0;
  this->m_Functions[155].__pfn = (&stru_10 + 705);
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Enchantress_Impetus::OnAttack  (line 743, @0x0000000002b8b7f0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::SpendMana, CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddToTail, CDOTA_Buff::GetCaster, DOTA_EmitSound
// strings: "particles/units/heroes/hero_enchantress/enchantress_impetus.vpcf", "Hero_Enchantress.Impetus"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Impetus::OnAttack(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v7; // r13
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const CDOTA_BaseNPC *v14; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r15
  float v17; // xmm0_4
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rbx
  int v21; // eax
  CDOTA_BaseNPC *Caster; // rax
  UtlSymLargeId_t v23; // [rsp+0h] [rbp-40h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  v7 = Parent;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( v7 != m_pInstance )
    goto LABEL_7;
  v11 = params->htarget.m_Index;
  if ( v11 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[params->htarget.m_Index & 0x1FF]) == 0
    || v11 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || !v14->m_bIsDOTANPC )
  {
    v14 = 0;
  }
  if ( v7 == 0 || !v7->m_bIsDOTANPC )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v16 = Ability;
  if ( v14 == 0
    || Ability == 0
    || (v7->m_nUnitState64.m_Value & 8) != 0
    || v14->m_bIsWaitingToSpawn.m_Value
    || CDOTA_BaseNPC::IsInvulnerable(v14)
    || v16 != CDOTA_BaseNPC::GetCurrentActiveAbility(v7) && !v16->m_bAutoCastState.m_Value )
  {
    goto LABEL_7;
  }
  LODWORD(result.m_szVal) = (*(v16->_vptr_IHandleEntity + 256))(v16, v14);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    v17 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
    *&result.m_eType = 1;
    if ( v17 <= v7->m_flMana.m_Value )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      MakeEntitySystemString("particles/units/heroes/hero_enchantress/enchantress_impetus.vpcf");
      RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v23;
      v21 = (*(v16->_vptr_IHandleEntity + 274))(v16, 0xFFFFFFFFLL);
      CDOTA_BaseNPC::SpendMana(v7, v21, v16, 0);
      CUtlVectorBase<short,CUtlMemory<short,int>>::AddToTail(&this->m_InFlightAttackRecords, &RecordByIndex->m_iRecord);
      Caster = CDOTA_Buff::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Enchantress.Impetus", Caster);
      *&result.m_eType = 1;
    }
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Enchantress_Impetus::OnAttackLanded  (line 775, @0x0000000002b62750, libserver.so)  // inlines: Attacker, AttackerNPC, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, Length2D, LookupEntity, TargetNPC, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, CBaseEntity::GetAbsOrigin, ApplyDamage, SendOverheadEventMessage, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Enchantress.ImpetusDamage"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Impetus::OnAttackLanded(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v19; // rbx
  const Vector *AbsOrigin; // rbx
  const Vector *v21; // rax
  float distance_cap; // xmm0_4
  CDOTABaseAbility *v23; // rax
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // rax
  const Vector *v26; // rbx
  const Vector *v27; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

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
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = params->htarget.m_Index;
    if ( v10 + 2 <= 1
      || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
      || v10 != v12->m_EHandle.m_Index
      || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
      || !v13->m_bIsDOTANPC )
    {
      v13 = 0;
    }
    v14 = params->hattacker.m_Index;
    if ( v14 + 2 > 1
      && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
      && (v16 = &v15[params->hattacker.m_Index & 0x1FF]) != 0
      && v14 == v16->m_EHandle.m_Index
      && (v17 = v16->m_pInstance, v16->m_pInstance != 0)
      && v17->m_bIsDOTANPC )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      v19 = Ability;
      if ( v13 != 0
        && Ability != 0
        && !v13->m_bIsWaitingToSpawn.m_Value
        && !CDOTA_BaseNPC::IsInvulnerable(v13)
        && (*(v19->_vptr_IHandleEntity + 256))(v19, v13) == 0 )
      {
        flDamage = this->distance_cap;
        AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
        v21 = CBaseEntity::GetAbsOrigin(v17);
        if ( fsqrt(((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x)) + ((v21->y - AbsOrigin->y)
                                                                        * (v21->y - AbsOrigin->y))) <= flDamage )
        {
          v26 = CBaseEntity::GetAbsOrigin(v13);
          v27 = CBaseEntity::GetAbsOrigin(v17);
          distance_cap = fsqrt(((v27->x - v26->x) * (v27->x - v26->x)) + ((v27->y - v26->y) * (v27->y - v26->y)));
        }
        else
        {
          distance_cap = this->distance_cap;
        }
        flDamagea = (0.0099999998 * distance_cap) * this->distance_damage_pct;
        v23 = CDOTA_Buff::GetAbility(this);
        ApplyDamage(v17, v13, v23, flDamagea, 4, 0);
        SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v13, flDamagea, 0);
        Caster = CDOTA_Buff::GetCaster(this);
        ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_Enchantress.ImpetusDamage");
        CDOTA_BaseNPC::UnitEmitSound(v13, ReplacementSound, 0.0, 0, 0);
      }
    }
    else
    {
      CDOTA_Buff::GetAbility(this);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Enchantress_Impetus::OnAttackFail  (line 810, @0x0000000002b62a50, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Impetus::OnAttackFail(
        CDOTA_Modifier_Enchantress_Impetus *const this,
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


// CDOTA_Modifier_Enchantress_Impetus::OnCreated  (line 824, @0x0000000002b7e120, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_attack_range_scepter", "distance_damage_pct", "distance_cap"
void __fastcall CDOTA_Modifier_Enchantress_Impetus::OnCreated(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_range_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "bonus_attack_range_scepter",
                                         -1,
                                         0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->distance_damage_pct = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_attack_range_scepter = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->distance_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "distance_damage_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->distance_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "distance_cap", -1, 0);
    return;
  }
LABEL_7:
  this->distance_cap = 0;
}


// CDOTA_Modifier_Enchantress_Impetus::OnRefresh  (line 833, @0x0000000002b7e050, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_attack_range_scepter", "distance_damage_pct", "distance_cap"
void __fastcall CDOTA_Modifier_Enchantress_Impetus::OnRefresh(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_range_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "bonus_attack_range_scepter",
                                         -1,
                                         0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->distance_damage_pct = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_attack_range_scepter = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->distance_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "distance_damage_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->distance_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "distance_cap", -1, 0);
    return;
  }
LABEL_7:
  this->distance_cap = 0;
}


// CDOTA_Modifier_Enchantress_Impetus::GetActivityTranslationModifiers  (line 840, @0x0000000002b3c230, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Impetus::GetActivityTranslationModifiers(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result = 2uLL;
  if ( (params->nActivity - 1503) <= 1 )
    result.m_szVal = "impetus";
  return result;
}


// CDOTA_Modifier_Enchantress_Impetus::GetModifierAttackRangeBonus  (line 855, @0x0000000002b3c380, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
ModifierVariant_t __fastcall CDOTA_Modifier_Enchantress_Impetus::GetModifierAttackRangeBonus(
        CDOTA_Modifier_Enchantress_Impetus *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  __m128i v5; // xmm0
  unsigned __int64 v6; // rdx

  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v6 = 1;
  if ( HasScepter )
  {
    *v5.m128i_i32 = this->bonus_attack_range_scepter;
    return ((_mm_cvtsi128_si32(v5) << 32) | 1);
  }
  return v6;
}


