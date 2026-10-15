// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:40
class CDOTA_Unit_Hero_Dazzle : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Dazzle(CDOTA_Unit_Hero_Dazzle &);
	CDOTA_Unit_Hero_Dazzle(CDOTA_Unit_Hero_Dazzle &);
	CDOTA_Unit_Hero_Dazzle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Dazzle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:47
class C_CDOTA_Unit_Hero_Dazzle_MapInstall {
	C_CDOTA_Unit_Hero_Dazzle_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:61
class CDOTA_Ability_Dazzle_Poison_Touch : public CDOTABaseAbility {
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
	CDOTA_Ability_Dazzle_Poison_Touch(CDOTA_Ability_Dazzle_Poison_Touch &);
	CDOTA_Ability_Dazzle_Poison_Touch(CDOTA_Ability_Dazzle_Poison_Touch &);
	CDOTA_Ability_Dazzle_Poison_Touch();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual float GetSlowDuration();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Dazzle_Poison_Touch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[321] GetSlowDuration
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:79
class C_CDOTA_Ability_Dazzle_Poison_Touch_MapInstall {
	C_CDOTA_Ability_Dazzle_Poison_Touch_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:172
class CDOTA_Modifier_Dazzle_Poison_Touch : public CDOTA_Buff {
public:

private:

	int set_time;  // +0xba8
	int slow_1;  // +0xbac
	int slow_2;  // +0xbb0
	int slow_3;  // +0xbb4
	int should_stun;  // +0xbb8

	bool m_bStunned;  // +0xbd8
	CDOTA_Modifier_Dazzle_Poison_Touch();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Dazzle_Poison_Touch();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:284
class CDOTA_Ability_Dazzle_Shallow_Grave : public CDOTABaseAbility {
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
	CDOTA_Ability_Dazzle_Shallow_Grave(CDOTA_Ability_Dazzle_Shallow_Grave &);
	CDOTA_Ability_Dazzle_Shallow_Grave(CDOTA_Ability_Dazzle_Shallow_Grave &);
	CDOTA_Ability_Dazzle_Shallow_Grave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Dazzle_Shallow_Grave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[211] GetGestureBasedActivity
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:321
class CDOTA_Modifier_Dazzle_Shallow_Grave : public CDOTA_Buff {
public:

	CDOTA_Modifier_Dazzle_Shallow_Grave();
	ModifierVariant_t GetMinHealth(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Dazzle_Shallow_Grave();

	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:368
class CDOTA_Ability_Dazzle_ShadowWave : public CDOTABaseAbility {
public:

private:

	int m_iCurJumpCount;  // +0x390
	int bounce_radius;  // +0x3b8
	int damage_radius;  // +0x3bc
	int damage;  // +0x3c0
	int max_targets;  // +0x3c4
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
	CDOTA_Ability_Dazzle_ShadowWave(CDOTA_Ability_Dazzle_ShadowWave &);
	CDOTA_Ability_Dazzle_ShadowWave(CDOTA_Ability_Dazzle_ShadowWave &);
	CDOTA_Ability_Dazzle_ShadowWave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	void DoHealAndDamage(CDOTA_BaseNPC *);
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Dazzle_ShadowWave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:617
class CDOTA_Ability_Dazzle_Weave : public CDOTABaseAbility {
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
	CDOTA_Ability_Dazzle_Weave(CDOTA_Ability_Dazzle_Weave &);
	CDOTA_Ability_Dazzle_Weave(CDOTA_Ability_Dazzle_Weave &);
	CDOTA_Ability_Dazzle_Weave();
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
	virtual ~CDOTA_Ability_Dazzle_Weave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:634
class C_CDOTA_Ability_Dazzle_Weave_MapInstall {
	C_CDOTA_Ability_Dazzle_Weave_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dazzle.cpp:701
class CDOTA_Modifier_Dazzle_Weave_Armor : public CDOTA_Buff {
public:

private:

	float armor_per_second;  // +0xba8
	float armor_per_second_scepter;  // +0xbac
	int m_nFXIndex;  // +0xbb0
	CDOTA_Modifier_Dazzle_Weave_Armor();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Dazzle_Weave_Armor();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Dazzle::~CDOTA_Unit_Hero_Dazzle  (line 40, @0x0000000002ba2880, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Dazzle::~CDOTA_Unit_Hero_Dazzle(CDOTA_Unit_Hero_Dazzle *const this)
{
  this->_vptr_IHandleEntity = &off_44C9610;
  this->_vptr_INextBotEventResponder = &off_44CA5F0;
  this->_vptr_CObstructionObject = &off_44CA920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Dazzle::~CDOTA_Unit_Hero_Dazzle  (line 40, @0x0000000002ba28c0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Dazzle
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Dazzle::~CDOTA_Unit_Hero_Dazzle(CDOTA_Unit_Hero_Dazzle *const this)
{
  this->_vptr_IHandleEntity = &off_44C9610;
  this->_vptr_INextBotEventResponder = &off_44CA5F0;
  this->_vptr_CObstructionObject = &off_44CA920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Dazzle::Schema_DynamicBinding  (line 42, @0x0000000002b8f370, libserver.so)
// globals: CDOTA_Unit_Hero_Dazzle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Dazzle::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Dazzle *const this)
{
  return CDOTA_Unit_Hero_Dazzle::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 42, @0x0000000002b8f3a0, libserver.so)
// globals: CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::DestructInstance  (line 42, @0x0000000002b8f3b0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Dazzle>
void __fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::FreeInstance  (line 42, @0x0000000002b8f3d0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::CanAllocate  (line 42, @0x0000000002b8f3f0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 42, @0x0000000002b8f400, libserver.so)
// globals: CDOTA_Unit_Hero_Dazzle::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Dazzle::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::AllocateInstance  (line 42, @0x0000000002b976a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::ConstructInstance  (line 42, @0x0000000002b9c520, libserver.so)  // inlines: CDOTA_Unit_Hero_Dazzle, Construct<CDOTA_Unit_Hero_Dazzle>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44C9610;
    *(p + 236) = &off_44CA5F0;
    *(p + 257) = &off_44CA920;
  }
  return p;
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002babe10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 42, @0x0000000002bac430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal  (line 42, @0x0000000002bcdd90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_dazzle", "CDOTA_Unit_Hero_Dazzle"
// globals: `guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass, CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass, __dso_handle, CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo, CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass);
    CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass._vptr_CEntityClass = off_44C9590;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Dazzle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DazzleClass != 0 )
    return &CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo,
      "CDOTA_Unit_Hero_Dazzle",
      "npc_dota_hero_dazzle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo);
  }
  CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass.m_pClassInfo = &CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo;
  CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DazzleClass = &CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass;
  CDOTA_Unit_Hero_Dazzle::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DazzleClassInfo.m_pClass = &CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass;
  CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DazzleClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Dazzle::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DazzleClass;
}


// CDOTA_Unit_Hero_Dazzle::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002b34cc0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Dazzle::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Dazzle *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Dazzle::GetServerClass  (line 47, @0x0000000002b4bde0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Dazzle::GetServerClass(CDOTA_Unit_Hero_Dazzle *const this)
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


// CDOTA_Ability_Dazzle_Poison_Touch::~CDOTA_Ability_Dazzle_Poison_Touch  (line 61, @0x0000000002ba0d60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::~CDOTA_Ability_Dazzle_Poison_Touch(
        CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  this->_vptr_IHandleEntity = &off_44CA9F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Dazzle_Poison_Touch::~CDOTA_Ability_Dazzle_Poison_Touch  (line 61, @0x0000000002ba0d80, libserver.so)  // inlines: ~CDOTA_Ability_Dazzle_Poison_Touch
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::~CDOTA_Ability_Dazzle_Poison_Touch(
        CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  this->_vptr_IHandleEntity = &off_44CA9F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Dazzle_Poison_Touch::Schema_DynamicBinding  (line 63, @0x0000000002b8f410, libserver.so)
// globals: CDOTA_Ability_Dazzle_Poison_Touch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  return CDOTA_Ability_Dazzle_Poison_Touch::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 63, @0x0000000002b8f420, libserver.so)
// globals: CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::DestructInstance  (line 63, @0x0000000002b8f430, libserver.so)  // inlines: Destruct<CDOTA_Ability_Dazzle_Poison_Touch>
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::FreeInstance  (line 63, @0x0000000002b8f450, libserver.so)
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::CanAllocate  (line 63, @0x0000000002b8f470, libserver.so)
bool __fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 63, @0x0000000002b8f480, libserver.so)
// globals: CDOTA_Ability_Dazzle_Poison_Touch::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Poison_Touch::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::AllocateInstance  (line 63, @0x0000000002b976e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::ConstructInstance  (line 63, @0x0000000002b9d050, libserver.so)  // inlines: CDOTA_Ability_Dazzle_Poison_Touch, Construct<CDOTA_Ability_Dazzle_Poison_Touch>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44CA9F0;
  }
  return p;
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002baa520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002baa540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal  (line 63, @0x0000000002bc7730, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Dazzle_Poison_Touch"
// globals: `guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass, CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass, __dso_handle, CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo, CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo
CEntityClass *__cdecl CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass);
    CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass._vptr_CEntityClass = off_44CA970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass);
    __cxa_atexit(
      CDOTA_Ability_Dazzle_Poison_Touch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Dazzle_Poison_TouchClass != 0 )
    return &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass;
  if ( `guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo,
      "CDOTA_Ability_Dazzle_Poison_Touch",
      "dazzle_poison_touch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo);
  }
  CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass.m_pClassInfo = &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo;
  CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass.m_pBaseClassInfo = CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Dazzle_Poison_TouchClass = &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass;
  CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClassInfo.m_pClass = &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass;
  CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Dazzle_Poison_TouchClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Dazzle_Poison_Touch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Poison_TouchClass;
}


// CDOTA_Ability_Dazzle_Poison_Touch::YouForgotToImplementOrDeclareServerClass  (line 79, @0x0000000002b34cd0, libserver.so)
int __fastcall CDOTA_Ability_Dazzle_Poison_Touch::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  return 0;
}


// CDOTA_Ability_Dazzle_Poison_Touch::GetServerClass  (line 79, @0x0000000002b4c320, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Dazzle_Poison_Touch::GetServerClass(
        CDOTA_Ability_Dazzle_Poison_Touch *const this)
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


// CDOTA_Ability_Dazzle_Poison_Touch::GetCooldown  (line 90, @0x0000000002b69b30, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_dazzle_1"
float __fastcall CDOTA_Ability_Dazzle_Poison_Touch::GetCooldown(
        CDOTA_Ability_Dazzle_Poison_Touch *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_dazzle_1", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Dazzle_Poison_Touch::OnSpellStart  (line 105, @0x0000000002b69bb0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_dazzle/dazzle_poison_touch.vpcf", "Hero_Dazzle.Poison_Cast"
void __fastcall CDOTA_Ability_Dazzle_Poison_Touch::OnSpellStart(CDOTA_Ability_Dazzle_Poison_Touch *const this)
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
  info.pszEffectName = "particles/units/heroes/hero_dazzle/dazzle_poison_touch.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
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
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Dazzle.Poison_Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Dazzle_Poison_Touch::OnProjectileHit  (line 124, @0x0000000002b45890, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_dazzle_poison_touch", "Hero_Dazzle.Poison_Touch"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Dazzle_Poison_Touch::OnProjectileHit(
        CDOTA_Ability_Dazzle_Poison_Touch *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0
            && !m_pInstance->m_bIsWaitingToSpawn.m_Value
            && (m_Value & 0x100) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            KeyValues::KeyValues(&kv, "modifier_dazzle_poison_touch");
            CDOTABaseAbility::GetDuration(this);
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_dazzle_poison_touch", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Dazzle.Poison_Touch", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Dazzle_Poison_Touch::GetAbilityDamageToTargetOverInterval  (line 143, @0x0000000002b3c620, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Dazzle_Poison_Touch::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Dazzle_Poison_Touch *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    fIntervalb = (*(this->_vptr_IHandleEntity + 247))(this) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Dazzle_Poison_Touch::GetSlowDuration  (line 156, @0x0000000002b69de0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Dazzle_Poison_Touch::GetSlowDuration(CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "set_time", -1, 1);
}


// CDOTA_Ability_Dazzle_Poison_Touch::GetStunDuration  (line 163, @0x0000000002b793a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "should_stun"
float __fastcall CDOTA_Ability_Dazzle_Poison_Touch::GetStunDuration(CDOTA_Ability_Dazzle_Poison_Touch *const this)
{
  if ( CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "should_stun", -1, 1) != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
  else
    return 0.0;
}


// CDOTA_Modifier_Dazzle_Poison_Touch::~CDOTA_Modifier_Dazzle_Poison_Touch  (line 172, @0x0000000002b9b0e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::~CDOTA_Modifier_Dazzle_Poison_Touch(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CB4B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Dazzle_Poison_Touch::~CDOTA_Modifier_Dazzle_Poison_Touch  (line 172, @0x0000000002b9b100, libserver.so)  // inlines: ~CDOTA_Modifier_Dazzle_Poison_Touch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::~CDOTA_Modifier_Dazzle_Poison_Touch(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CB4B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Dazzle_Poison_Touch::GetEffectName  (line 182, @0x0000000002b8f490, libserver.so)
// strings: "particles/units/heroes/hero_dazzle/dazzle_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Dazzle_Poison_Touch::GetEffectName(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  return "particles/units/heroes/hero_dazzle/dazzle_poison_debuff.vpcf";
}


// CDOTA_Modifier_Dazzle_Poison_Touch::GetStatusEffectName  (line 183, @0x0000000002b8f4a0, libserver.so)
// strings: "particles/status_fx/status_effect_poison_dazzle.vpcf"
const char *__fastcall CDOTA_Modifier_Dazzle_Poison_Touch::GetStatusEffectName(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  return "particles/status_fx/status_effect_poison_dazzle.vpcf";
}


// CDOTA_Modifier_Dazzle_Poison_Touch::StatusEffectPriority  (line 184, @0x0000000002b8f4b0, libserver.so)
int __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::StatusEffectPriority(CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  return 20;
}


// CDOTA_Modifier_Dazzle_Poison_Touch::GetAttributes  (line 185, @0x0000000002b8f4c0, libserver.so)
int __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::GetAttributes(CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  return 2;
}


// CDOTA_Modifier_Dazzle_Poison_Touch::OnCreated  (line 203, @0x0000000002b6eca0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CountdownTimer::Now, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::StartIntervalThink
// strings: "slow_1", "slow_2", "slow_3", "should_stun", "Hero_Dazzle.Poison_Tick"
void __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::OnCreated(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  double v8; // xmm0_8
  double v9; // xmm1_8
  CDOTA_BaseNPC *Parent; // rax
  float v11; // xmm1_4
  float v12; // [rsp+8h] [rbp-18h]
  float set_time; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->set_time = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "set_time", -1, 0);
  else
    this->set_time = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->slow_1 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_1", -1, 0);
  else
    this->slow_1 = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->slow_2 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "slow_2", -1, 0);
  else
    this->slow_2 = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->slow_3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "slow_3", -1, 0);
  else
    this->slow_3 = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->should_stun = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "should_stun", -1, 0);
  else
    this->should_stun = 0;
  set_time = this->set_time;
  *&v8 = CountdownTimer::Now(&this->m_settime) + set_time;
  if ( *&v8 != this->m_settime.m_timestamp.m_Value )
  {
    v12 = *&v8;
    (*(this->m_settime._vptr_CountdownTimer + 2))(&this->m_settime, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v8 = LODWORD(v12);
    this->m_settime.m_timestamp.m_Value = v12;
  }
  if ( set_time != this->m_settime.m_duration.m_Value )
  {
    (*(this->m_settime._vptr_CountdownTimer + 2))(&this->m_settime, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v8, v9, set_time);
    this->m_settime.m_duration.m_Value = set_time;
  }
  this->m_bStunned = 0;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Dazzle.Poison_Tick", 0.0, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, this->set_time, v11);
}


// CDOTA_Modifier_Dazzle_Poison_Touch::OnIntervalThink  (line 224, @0x0000000002b75440, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, ApplyDamage, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_stunned"
void __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::OnIntervalThink(CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  int v4; // r14d
  CDOTABaseAbility *v5; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm1_4
  CDOTABaseAbility *v10; // r14
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetAbility(this) != 0 )
  {
    CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
    Ability = CDOTA_Buff::GetAbility(this);
    v4 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
    v5 = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, v5, v4, 1, 8);
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
      this->m_bStunned = 1;
    if ( this->should_stun == 1 && !this->m_bStunned )
    {
      KeyValues::KeyValues(&kv, "modifier_stunned");
      v8 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "stun_duration", -1, 0);
      KeyValues::SetFloat(&kv, "duration", v9);
      v10 = CDOTA_Buff::GetAbility(this);
      v11 = CDOTA_Buff::GetCaster(this);
      v12 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v12, v11, v10, "modifier_stunned", &kv, 0);
      this->m_bStunned = 1;
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Dazzle_Poison_Touch::DeclareFunctions  (line 253, @0x0000000002b34ce0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::DeclareFunctions(CDOTA_Modifier_Dazzle_Poison_Touch *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Dazzle_Poison_Touch::GetModifierMoveSpeedBonus_Percentage  (line 260, @0x0000000002b3c940, libserver.so)  // inlines: GetElapsedTime, IsElapsed
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now
ModifierVariant_t __fastcall CDOTA_Modifier_Dazzle_Poison_Touch::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Dazzle_Poison_Touch *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    return 1uLL;
  if ( CountdownTimer::Now(&this->m_settime) < this->m_settime.m_timestamp.m_Value )
  {
    if ( ((CountdownTimer::Now(&this->m_settime) - this->m_settime.m_timestamp.m_Value)
        + this->m_settime.m_duration.m_Value) < 1.0 )
    {
      *v4.m128i_i32 = this->slow_1;
      goto LABEL_5;
    }
    if ( ((CountdownTimer::Now(&this->m_settime) - this->m_settime.m_timestamp.m_Value)
        + this->m_settime.m_duration.m_Value) < 2.0 )
    {
      *v4.m128i_i32 = this->slow_2;
      goto LABEL_5;
    }
    if ( ((CountdownTimer::Now(&this->m_settime) - this->m_settime.m_timestamp.m_Value)
        + this->m_settime.m_duration.m_Value) < 3.0 )
    {
      *v4.m128i_i32 = this->slow_3;
      goto LABEL_5;
    }
  }
  v4 = 0;
LABEL_5:
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::~CDOTA_Ability_Dazzle_Shallow_Grave  (line 284, @0x0000000002ba0db0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::~CDOTA_Ability_Dazzle_Shallow_Grave(
        CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  this->_vptr_IHandleEntity = &off_44CB810;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::~CDOTA_Ability_Dazzle_Shallow_Grave  (line 284, @0x0000000002ba0dd0, libserver.so)  // inlines: ~CDOTA_Ability_Dazzle_Shallow_Grave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::~CDOTA_Ability_Dazzle_Shallow_Grave(
        CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  this->_vptr_IHandleEntity = &off_44CB810;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::Schema_DynamicBinding  (line 286, @0x0000000002b8f4d0, libserver.so)
// globals: CDOTA_Ability_Dazzle_Shallow_Grave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Shallow_Grave::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  return CDOTA_Ability_Dazzle_Shallow_Grave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 286, @0x0000000002b8f4e0, libserver.so)
// globals: CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::DestructInstance  (line 286, @0x0000000002b8f4f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Dazzle_Shallow_Grave>
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::FreeInstance  (line 286, @0x0000000002b8f510, libserver.so)
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::CanAllocate  (line 286, @0x0000000002b8f530, libserver.so)
bool __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 286, @0x0000000002b8f540, libserver.so)
// globals: CDOTA_Ability_Dazzle_Shallow_Grave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Shallow_Grave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::AllocateInstance  (line 286, @0x0000000002b97720, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::ConstructInstance  (line 286, @0x0000000002b9d080, libserver.so)  // inlines: CDOTA_Ability_Dazzle_Shallow_Grave, Construct<CDOTA_Ability_Dazzle_Shallow_Grave>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44CB810;
  }
  return p;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 286, @0x0000000002baa570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 286, @0x0000000002baa590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal  (line 286, @0x0000000002bc7880, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Dazzle_Shallow_Grave"
// globals: `guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass, CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass, __dso_handle, CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo, CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass);
    CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass._vptr_CEntityClass = off_44CB790;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass);
    __cxa_atexit(
      CDOTA_Ability_Dazzle_Shallow_Grave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Dazzle_Shallow_GraveClass != 0 )
    return &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass;
  if ( `guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo,
      "CDOTA_Ability_Dazzle_Shallow_Grave",
      "dazzle_shallow_grave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo);
  }
  CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass.m_pClassInfo = &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo;
  CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass.m_pBaseClassInfo = CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Dazzle_Shallow_GraveClass = &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass;
  CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClassInfo.m_pClass = &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass;
  CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Dazzle_Shallow_GraveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Dazzle_Shallow_Grave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_Shallow_GraveClass;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::GetConceptRecipientType  (line 290, @0x0000000002b8f550, libserver.so)
int __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::GetConceptRecipientType(
        CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  return 3;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::GetGestureBasedActivity  (line 293, @0x0000000002b8f560, libserver.so)
Activity __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::GetGestureBasedActivity(
        CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  return 1670;
}


// CDOTA_Ability_Dazzle_Shallow_Grave::OnSpellStart  (line 301, @0x0000000002b3aaa0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_dazzle_shallow_grave", "Hero_Dazzle.Shallow_Grave"
void __fastcall CDOTA_Ability_Dazzle_Shallow_Grave::OnSpellStart(CDOTA_Ability_Dazzle_Shallow_Grave *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_dazzle_shallow_grave");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_dazzle_shallow_grave", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Dazzle.Shallow_Grave", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::~CDOTA_Modifier_Dazzle_Shallow_Grave  (line 321, @0x0000000002b9b090, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::~CDOTA_Modifier_Dazzle_Shallow_Grave(
        CDOTA_Modifier_Dazzle_Shallow_Grave *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CC2D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::~CDOTA_Modifier_Dazzle_Shallow_Grave  (line 321, @0x0000000002b9b0b0, libserver.so)  // inlines: ~CDOTA_Modifier_Dazzle_Shallow_Grave
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::~CDOTA_Modifier_Dazzle_Shallow_Grave(
        CDOTA_Modifier_Dazzle_Shallow_Grave *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CC2D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::IsPurgable  (line 329, @0x0000000002b8f570, libserver.so)
bool __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::IsPurgable(CDOTA_Modifier_Dazzle_Shallow_Grave *const this)
{
  return 0;
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::GetEffectName  (line 331, @0x0000000002b8f580, libserver.so)
// strings: "particles/units/heroes/hero_dazzle/dazzle_shallow_grave.vpcf"
const char *__fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::GetEffectName(
        CDOTA_Modifier_Dazzle_Shallow_Grave *const this)
{
  return "particles/units/heroes/hero_dazzle/dazzle_shallow_grave.vpcf";
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::DeclareFunctions  (line 338, @0x0000000002b34d00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Dazzle_Shallow_Grave::GetMinHealth(CModifierParams const&), CDOTA_Modifier_Dazzle_Shallow_Grave::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::DeclareFunctions(CDOTA_Modifier_Dazzle_Shallow_Grave *const this)
{
  this->m_Functions[102].__pfn = CDOTA_Modifier_Dazzle_Shallow_Grave::GetMinHealth;
  this->m_Functions[102].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Dazzle_Shallow_Grave::OnTakeDamage;
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::GetMinHealth  (line 344, @0x0000000002b34d40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::GetMinHealth(
        CDOTA_Modifier_Dazzle_Shallow_Grave *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Dazzle_Shallow_Grave::OnTakeDamage  (line 351, @0x0000000002b45780, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddHeroSavedEvent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Dazzle_Shallow_Grave::OnTakeDamage(
        CDOTA_Modifier_Dazzle_Shallow_Grave *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float fOriginalDamage; // ebx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTABaseAbility *Ability; // rax

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
          fOriginalDamage = params->fOriginalDamage;
          Parent = CDOTA_Buff::GetParent(this);
          if ( fOriginalDamage >= CBaseEntity::GetHealth(Parent) )
          {
            v11 = CDOTA_Buff::GetParent(this);
            if ( (*(v11->_vptr_IHandleEntity + 408))(v11) != 0 )
            {
              v12 = CDOTA_Buff::GetParent(this);
              Caster = CDOTA_Buff::GetCaster(this);
              Ability = CDOTA_Buff::GetAbility(this);
              CDOTA_CombatLog::AddHeroSavedEvent(&g_DOTACombatLog, Ability, Caster, v12, 0);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Dazzle_ShadowWave::~CDOTA_Ability_Dazzle_ShadowWave  (line 368, @0x0000000002bc3be0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::~CDOTA_Ability_Dazzle_ShadowWave(
        CDOTA_Ability_Dazzle_ShadowWave *const this)
{
  this->_vptr_IHandleEntity = &off_44CC630;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Dazzle_ShadowWave::~CDOTA_Ability_Dazzle_ShadowWave  (line 368, @0x0000000002bc4040, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Dazzle_ShadowWave, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::~CDOTA_Ability_Dazzle_ShadowWave(
        CDOTA_Ability_Dazzle_ShadowWave *const this)
{
  this->_vptr_IHandleEntity = &off_44CC630;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Dazzle_ShadowWave::Schema_DynamicBinding  (line 370, @0x0000000002b8f590, libserver.so)
// globals: CDOTA_Ability_Dazzle_ShadowWave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_ShadowWave::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_ShadowWave *const this)
{
  return CDOTA_Ability_Dazzle_ShadowWave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 370, @0x0000000002b8f5a0, libserver.so)
// globals: CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::DestructInstance  (line 370, @0x0000000002b8f5b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Dazzle_ShadowWave>
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::FreeInstance  (line 370, @0x0000000002b8f5d0, libserver.so)
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::CanAllocate  (line 370, @0x0000000002b8f5f0, libserver.so)
bool __fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 370, @0x0000000002b8f600, libserver.so)
// globals: CDOTA_Ability_Dazzle_ShadowWave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_ShadowWave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::AllocateInstance  (line 370, @0x0000000002b97760, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::ConstructInstance  (line 370, @0x0000000002ba8660, libserver.so)  // inlines: CDOTA_Ability_Dazzle_ShadowWave, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Dazzle_ShadowWave>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 232) = 0;
    *p = &off_44CC630;
    *(p + 117) = 0;
    *(p + 236) = 0;
    *(p + 237) = 0;
  }
  return p;
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 370, @0x0000000002baa5c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 370, @0x0000000002baa5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal  (line 370, @0x0000000002bc79d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dazzle_shadow_wave", "CDOTA_Ability_Dazzle_ShadowWave"
// globals: `guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass, CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass, __dso_handle, CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo, CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass);
    CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass._vptr_CEntityClass = off_44CC5B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass);
    __cxa_atexit(
      CDOTA_Ability_Dazzle_ShadowWave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Dazzle_ShadowWaveClass != 0 )
    return &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass;
  if ( `guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo,
      "CDOTA_Ability_Dazzle_ShadowWave",
      "dazzle_shadow_wave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo);
  }
  CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass.m_pClassInfo = &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo;
  CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass.m_pBaseClassInfo = CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Dazzle_ShadowWaveClass = &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass;
  CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClassInfo.m_pClass = &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass;
  CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Dazzle_ShadowWaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Dazzle_ShadowWave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_ShadowWaveClass;
}


// CDOTA_Ability_Dazzle_ShadowWave::GetConceptRecipientType  (line 376, @0x0000000002b8f610, libserver.so)
int __fastcall CDOTA_Ability_Dazzle_ShadowWave::GetConceptRecipientType(CDOTA_Ability_Dazzle_ShadowWave *const this)
{
  return 3;
}


// CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage  (line 395, @0x0000000002b6b6e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, ApplyDamage, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle (18 total)
// callers: CDOTA_Ability_Dazzle_ShadowWave::OnSpellStart
// strings: "special_bonus_unique_dazzle_2", "particles/units/heroes/hero_dazzle/dazzle_shadow_wave_impact_damage.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage(
        CDOTA_Ability_Dazzle_ShadowWave *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v5; // xmm4
  float v6; // r12d
  CDOTA_BaseNPC *v7; // rbx
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rbx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r13
  const Vector *v19; // rax
  vec_t v20; // xmm1_4
  vec_t v21; // xmm0_4
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTAPlayer *v29; // rax
  CDOTAPlayer *v30; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  Vector vCastDir; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  flDamage = this->damage;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_dazzle_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  CDOTA_BaseNPC::Heal(pTarget, flDamage, this, 0, 1);
  if ( (pTarget->m_iUnitType & 1) != 0 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    v29 = (*(v28->_vptr_IHandleEntity + 413))(v28);
    SendOverheadEventMessage(v29, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pTarget, flDamage, 0);
    if ( pTarget != CDOTABaseAbility::GetCaster(this) )
    {
      v30 = (*(pTarget->_vptr_IHandleEntity + 413))(pTarget);
      SendOverheadEventMessage(v30, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, pTarget, flDamage, 0);
    }
  }
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  *v5.m128i_i32 = this->damage_radius;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  v7 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
  v9 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v9->m_iTeamNum.m_Value, AbsOrigin, v7, v6, &hEntities, 2, 3, 16, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v11 = &hEntities.m_Memory.m_pMemory[v10];
        m_Index = v11->m_Index;
        if ( v11->m_Index + 2 > 1 )
        {
          v13 = v11->m_Index;
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v13 & 0x1FF];
            if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hEntities.m_Size <= ++v10 )
          goto LABEL_17;
      }
      v17 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v17, m_pInstance, this, flDamage, 1, 8);
      v18 = CBaseEntity::GetAbsOrigin(pTarget);
      v19 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v20 = v19->x - v18->x;
      v21 = v19->y - v18->y;
      vCastDir.z = 0.0;
      vCastDir.x = v20;
      vCastDir.y = v21;
      if ( VectorNormalize(&vCastDir) < 0.0099999998 )
      {
        AbsAngles = CBaseEntity::GetAbsAngles(pTarget);
        AngleVectors(AbsAngles, &vCastDir, 0, 0);
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_dazzle/dazzle_shadow_wave_impact_damage.vpcf",
                   2,
                   m_pInstance,
                   0,
                   0);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v26, Particle, 1, *&vCastDir.x, vCastDir.z);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
      ++v10;
    }
    while ( hEntities.m_Size > v10 );
  }
LABEL_17:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Dazzle_ShadowWave::OnSpellStart  (line 451, @0x0000000002b85110, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::AddToTail (22 total)
// strings: "bounce_radius", "max_targets", "particles/units/heroes/hero_dazzle/dazzle_shadow_wave.vpcf", "attach_attack1", "attach_hitloc", "Hero_Dazzle.Shadow_Wave"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Dazzle_ShadowWave::OnSpellStart(CDOTA_Ability_Dazzle_ShadowWave *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v2; // rbx
  int LevelSpecialValue; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  const Vector *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  unsigned int v12; // xmm0_4
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v20; // cx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // r12
  CDOTA_ParticleManager *v23; // rax
  int v24; // r13d
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r12
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // r15
  CDOTA_ParticleManager *v29; // rax
  __int64 v30; // r14
  vec_t z; // r12d
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  __m128i v36; // xmm2
  CDOTA_ParticleManager *v37; // rax
  int v38; // r13d
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  unsigned int v41; // xmm0_4
  CDOTA_ParticleManager *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  const Vector *v45; // rax
  vec_t v46; // xmm0_4
  CEntityIdentity *v47; // rdx
  int v48; // eax
  __int16 v49; // cx
  int m_iCurJumpCount; // eax
  float v51; // r12d
  CDOTA_BaseNPC *v52; // rbx
  CDOTA_BaseNPC *v53; // rax
  CEntityInstance *v54; // r13
  int v55; // ebx
  CHandle<CBaseEntity> *v56; // rdx
  uint32 m_Index; // eax
  __int16 v58; // cx
  CEntityIdentity *v59; // rdx
  CEntityIdentity *v60; // rdx
  CEntityInstance *m_pInstance; // r12
  CEntityIdentity *v62; // rdx
  int v63; // eax
  __int16 v64; // cx
  char v65; // r14
  __int64 v66; // r15
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r15
  int v70; // eax
  __int64 v71; // rcx
  CDOTA_ParticleManager *v72; // rax
  int v73; // ebx
  CDOTA_ParticleManager *v74; // rax
  CDOTA_ParticleManager *v75; // rax
  unsigned int v76; // xmm0_4
  CDOTA_ParticleManager *v77; // rax
  CDOTA_ParticleManager *v78; // rax
  CDOTA_ParticleManager *v79; // rax
  const Vector *v80; // rax
  vec_t v81; // xmm0_4
  CEntityIdentity *v82; // rax
  int v83; // edx
  __int16 v84; // cx
  __int64 m_Size; // rbx
  int v86; // eax
  CHandle<CBaseEntity> *v87; // rax
  __int64 v88; // r15
  int v89; // eax
  __int64 v90; // rcx
  int Health; // r15d
  __int64 v92; // r14
  int v93; // eax
  __int64 v94; // rcx
  int v95; // r14d
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hHitEntities; // [rsp+40h] [rbp-70h]
  double v98; // [rsp+50h] [rbp-60h] BYREF
  float v99; // [rsp+58h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-50h] BYREF
  Vector v101; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v102; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v103; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v104; // 0:xmm0_8.8,8:xmm1_4.4

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v2 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    this->bounce_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounce_radius", -1, 0);
    this->damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_radius", -1, 0);
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_targets", -1, 0);
    this->m_iCurJumpCount = 1;
    this->max_targets = LevelSpecialValue;
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_dazzle/dazzle_shadow_wave.vpcf",
                 2,
                 0,
                 0,
                 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 0, v8, 5, "attach_attack1", *AbsOrigin, 1);
    v10 = CBaseEntity::GetAbsOrigin(v2);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 1, v2, 5, "attach_hitloc", *v10, 1);
    *&v12 = this->damage_radius;
    LODWORD(hEntities.m_Memory.m_pMemory) = 0;
    *&hEntities.m_Size = v12;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v13, Particle, 2, *&hEntities.m_Size, 0.0);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, Particle, 3, v2, 1, 0, vec3_invalid, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
    p_m_hHitEntities = &this->m_hHitEntities;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
    v16 = CDOTABaseAbility::GetCaster(this);
    this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(v16);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage(this, v17);
    v18 = CDOTABaseAbility::GetCaster(this);
    hEntities.m_Size = -1;
    if ( v18 != 0 )
    {
      m_pEntity = v18->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v20 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hEntities.m_Size = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(p_m_hHitEntities, &hEntities);
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v21, "Hero_Dazzle.Shadow_Wave", 0.0, 0, 0);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    v24 = CDOTA_ParticleManager::CreateParticle(
            v23,
            "particles/units/heroes/hero_dazzle/dazzle_shadow_wave.vpcf",
            2,
            v22,
            0,
            0);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = CBaseEntity::GetAbsOrigin(v25);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v27, v24, 0, *&v26->x, v26->z);
    v28 = CDOTABaseAbility::GetCaster(this);
    v29 = GetParticleManager();
    v30 = *&vec3_invalid.x;
    z = vec3_invalid.z;
    *&v101.x = *&vec3_invalid.x;
    v101.z = z;
    CDOTA_ParticleManager::SetParticleControlEnt(v29, v24, 1, v28, 5, "attach_hitloc", v101, 1);
    *(&hEntities.m_Size + 1) = 0;
    *&hEntities.m_Size = this->damage_radius;
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v32, v24, 2, *&hEntities.m_Size, *&hEntities.m_Memory.m_pMemory);
    v33 = CDOTABaseAbility::GetCaster(this);
    v34 = GetParticleManager();
    *&v102.x = v30;
    v102.z = z;
    CDOTA_ParticleManager::SetParticleControlEnt(v34, v24, 3, v33, 1, 0, v102, 1);
    v35 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v35, v24);
    this->m_vCurTargetLoc = *CBaseEntity::GetAbsOrigin(v2);
    if ( v2 == CDOTABaseAbility::GetCaster(this) )
    {
      m_iCurJumpCount = this->m_iCurJumpCount - 1;
      this->m_iCurJumpCount = m_iCurJumpCount;
    }
    else
    {
      CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage(this, v2);
      v37 = GetParticleManager();
      v38 = CDOTA_ParticleManager::CreateParticle(
              v37,
              "particles/units/heroes/hero_dazzle/dazzle_shadow_wave.vpcf",
              2,
              v2,
              0,
              0);
      v39 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v39, v38, 0, *&this->m_vCurTargetLoc.x, this->m_vCurTargetLoc.z);
      v40 = GetParticleManager();
      v103.z = z;
      *&v103.x = v30;
      CDOTA_ParticleManager::SetParticleControlEnt(v40, v38, 1, v2, 5, "attach_hitloc", v103, 1);
      *&v41 = this->damage_radius;
      LODWORD(hEntities.m_Memory.m_pMemory) = 0;
      *&hEntities.m_Size = v41;
      v42 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v42, v38, 2, *&hEntities.m_Size, *&hEntities.m_Memory.m_pMemory);
      v43 = GetParticleManager();
      *&v104.x = v30;
      v104.z = z;
      CDOTA_ParticleManager::SetParticleControlEnt(v43, v38, 3, v2, 1, 0, v104, 1);
      v44 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v44, v38);
      v45 = CBaseEntity::GetAbsOrigin(v2);
      this->m_vCurTargetLoc.x = v45->x;
      this->m_vCurTargetLoc.y = v45->y;
      v46 = v45->z;
      hEntities.m_Size = -1;
      this->m_vCurTargetLoc.z = v46;
      v47 = v2->m_pEntity;
      if ( v47 != 0 )
      {
        v48 = (v47->m_EHandle.m_Index >> 15) - (v47->m_flags & 1);
        v49 = 0x7FFF;
        if ( v47->m_EHandle.m_Index != -1 )
          v49 = v47->m_EHandle.m_Index & 0x7FFF;
        LOWORD(hEntities.m_Size) = v49 | hEntities.m_Size & 0x8000;
        hEntities.m_Size = (v48 << 15) | hEntities.m_Size & 0x7FFF;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(p_m_hHitEntities, &hEntities);
      m_iCurJumpCount = this->m_iCurJumpCount;
    }
    if ( this->max_targets > m_iCurJumpCount )
    {
      do
      {
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        *v36.m128i_i32 = this->bounce_radius;
        v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
        v52 = CDOTABaseAbility::GetCaster(this);
        v53 = CDOTABaseAbility::GetCaster(this);
        FindUnitsInRadius(v53->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, v52, v51, &hEntities, 1, 19, 64, 0, 0);
        v54 = 0;
        while ( hEntities.m_Size > 0 )
        {
          v55 = RandomInt(0, (hEntities.m_Size - 1));
          v56 = &hEntities.m_Memory.m_pMemory[v55];
          m_Index = v56->m_Index;
          if ( v56->m_Index + 2 > 1 )
          {
            v58 = v56->m_Index;
            v59 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v56->m_Index) >> 9) & 0x3F];
            if ( v59 != 0 )
            {
              v60 = &v59[v58 & 0x1FF];
              if ( v60 != 0 && m_Index == v60->m_EHandle.m_Index )
              {
                m_pInstance = v60->m_pInstance;
                if ( v60->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  LODWORD(v98) = -1;
                  v62 = m_pInstance->m_pEntity;
                  if ( v62 != 0 )
                  {
                    v63 = (v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1);
                    v64 = 0x7FFF;
                    if ( v62->m_EHandle.m_Index != -1 )
                      v64 = v62->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(v98) = v64 | LOWORD(v98) & 0x8000;
                    LODWORD(v98) = (v63 << 15) | LOWORD(v98) & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         p_m_hHitEntities,
                         &v98) < 0 )
                  {
                    if ( v54 == 0 )
                      goto LABEL_41;
                    v65 = 0;
                    if ( (v54[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                      v65 = LOBYTE(v54[71].m_pEntity) ^ 1;
                    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
                      || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                    {
                      v88 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                      v89 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                      v90 = 1;
                      if ( v89 > 0 )
                        v90 = v89;
                      if ( (v88 / v90) <= 99 )
                      {
                        Health = CBaseEntity::GetHealth(m_pInstance);
                        if ( Health < CBaseEntity::GetHealth(v54) )
                        {
                          if ( v65 == 0 )
                            goto LABEL_41;
                          v92 = 100LL * CBaseEntity::GetHealth(v54);
                          v93 = (*(v54->_vptr_IHandleEntity + 156))(v54);
                          v94 = 1;
                          if ( v93 > 0 )
                            v94 = v93;
                          if ( (v92 / v94) == 100 )
LABEL_41:
                            v54 = m_pInstance;
                        }
                      }
                    }
                    else
                    {
                      v66 = 100LL * CBaseEntity::GetHealth(v54);
                      v67 = (*(v54->_vptr_IHandleEntity + 156))(v54);
                      v68 = 1;
                      if ( v67 > 0 )
                        v68 = v67;
                      if ( (v66 / v68) == 100 )
                        goto LABEL_41;
                      v69 = 100LL * CBaseEntity::GetHealth(m_pInstance);
                      v70 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
                      v71 = 1;
                      if ( v70 > 0 )
                        v71 = v70;
                      if ( (v69 / v71) <= 99 )
                      {
                        if ( v65 == 0 )
                          goto LABEL_41;
                        v95 = CBaseEntity::GetHealth(m_pInstance);
                        if ( v95 < CBaseEntity::GetHealth(v54) )
                          goto LABEL_41;
                      }
                    }
                  }
                }
              }
            }
          }
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, v55);
        }
        if ( v54 != 0 )
        {
          CDOTA_Ability_Dazzle_ShadowWave::DoHealAndDamage(this, v54);
          v72 = GetParticleManager();
          v73 = CDOTA_ParticleManager::CreateParticle(
                  v72,
                  "particles/units/heroes/hero_dazzle/dazzle_shadow_wave.vpcf",
                  2,
                  v54,
                  0,
                  0);
          v74 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v74, v73, 0, *&this->m_vCurTargetLoc.x, this->m_vCurTargetLoc.z);
          v75 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v75, v73, 1, v54, 5, "attach_hitloc", vec3_invalid, 1);
          *&v76 = this->damage_radius;
          v99 = 0.0;
          *&v98 = v76;
          v77 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v77, v73, 2, v98, v99);
          v78 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v78, v73, 3, v54, 1, 0, vec3_invalid, 1);
          v79 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v79, v73);
          v80 = CBaseEntity::GetAbsOrigin(v54);
          this->m_vCurTargetLoc.x = v80->x;
          this->m_vCurTargetLoc.y = v80->y;
          v81 = v80->z;
          LODWORD(v98) = -1;
          this->m_vCurTargetLoc.z = v81;
          v82 = v54->m_pEntity;
          if ( v82 != 0 )
          {
            v83 = (v82->m_EHandle.m_Index >> 15) - (v82->m_flags & 1);
            v84 = 0x7FFF;
            if ( v82->m_EHandle.m_Index != -1 )
              v84 = v82->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v98) = v84 | LOWORD(v98) & 0x8000;
            LODWORD(v98) = (v83 << 15) | LOWORD(v98) & 0x7FFF;
          }
          m_Size = this->m_hHitEntities.m_Size;
          v86 = this->m_hHitEntities.m_Size;
          if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
            v86 = this->m_hHitEntities.m_Size;
          }
          this->m_hHitEntities.m_Size = v86 + 1;
          v87 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
          if ( v87 != 0 )
            v87->m_Index = LODWORD(v98);
        }
        ++this->m_iCurJumpCount;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
        if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
          if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
        }
      }
      while ( this->m_iCurJumpCount < this->max_targets );
    }
  }
}


// CDOTA_Ability_Dazzle_ShadowWave::GetAbilityDamageToTargetOverInterval  (line 600, @0x0000000002b66b10, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Dazzle_ShadowWave::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Dazzle_ShadowWave *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    this->damage = LevelSpecialValue;
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Ability_Dazzle_Weave::~CDOTA_Ability_Dazzle_Weave  (line 617, @0x0000000002ba0e00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Dazzle_Weave::~CDOTA_Ability_Dazzle_Weave(CDOTA_Ability_Dazzle_Weave *const this)
{
  this->_vptr_IHandleEntity = &off_44CD130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Dazzle_Weave::~CDOTA_Ability_Dazzle_Weave  (line 617, @0x0000000002ba0e20, libserver.so)  // inlines: ~CDOTA_Ability_Dazzle_Weave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Dazzle_Weave::~CDOTA_Ability_Dazzle_Weave(CDOTA_Ability_Dazzle_Weave *const this)
{
  this->_vptr_IHandleEntity = &off_44CD130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Dazzle_Weave::Schema_DynamicBinding  (line 619, @0x0000000002b8f620, libserver.so)
// globals: CDOTA_Ability_Dazzle_Weave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Weave::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Weave *const this)
{
  return CDOTA_Ability_Dazzle_Weave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 619, @0x0000000002b8f630, libserver.so)
// globals: CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::DestructInstance  (line 619, @0x0000000002b8f640, libserver.so)  // inlines: Destruct<CDOTA_Ability_Dazzle_Weave>
void __fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::FreeInstance  (line 619, @0x0000000002b8f660, libserver.so)
void __fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::CanAllocate  (line 619, @0x0000000002b8f680, libserver.so)
bool __fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 619, @0x0000000002b8f690, libserver.so)
// globals: CDOTA_Ability_Dazzle_Weave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Dazzle_Weave::s_pSchemaBinding;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::AllocateInstance  (line 619, @0x0000000002b977a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::ConstructInstance  (line 619, @0x0000000002b9d0b0, libserver.so)  // inlines: CDOTA_Ability_Dazzle_Weave, Construct<CDOTA_Ability_Dazzle_Weave>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44CD130;
  }
  return p;
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 619, @0x0000000002baa610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 619, @0x0000000002baa630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal  (line 619, @0x0000000002bc7b20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dazzle_weave", "CDOTA_Ability_Dazzle_Weave"
// globals: `guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass, CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass, __dso_handle, CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo, CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass);
    CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass._vptr_CEntityClass = off_44CD0B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass);
    __cxa_atexit(
      CDOTA_Ability_Dazzle_Weave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Dazzle_WeaveClass != 0 )
    return &CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass;
  if ( `guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo,
      "CDOTA_Ability_Dazzle_Weave",
      "dazzle_weave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo);
  }
  CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass.m_pClassInfo = &CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo;
  CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass.m_pBaseClassInfo = CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Dazzle_WeaveClass = &CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass;
  CDOTA_Ability_Dazzle_Weave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClassInfo.m_pClass = &CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass;
  CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Dazzle_WeaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Dazzle_Weave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Dazzle_WeaveClass;
}


// CDOTA_Ability_Dazzle_Weave::GetConceptRecipientType  (line 631, @0x0000000002b8f6a0, libserver.so)
int __fastcall CDOTA_Ability_Dazzle_Weave::GetConceptRecipientType(CDOTA_Ability_Dazzle_Weave *const this)
{
  return 4;
}


// CDOTA_Ability_Dazzle_Weave::YouForgotToImplementOrDeclareServerClass  (line 634, @0x0000000002b34d60, libserver.so)
int __fastcall CDOTA_Ability_Dazzle_Weave::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Dazzle_Weave *const this)
{
  return 0;
}


// CDOTA_Ability_Dazzle_Weave::GetServerClass  (line 634, @0x0000000002b4c120, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Dazzle_Weave::GetServerClass(CDOTA_Ability_Dazzle_Weave *const this)
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


// CDOTA_Ability_Dazzle_Weave::OnSpellStart  (line 644, @0x0000000002b7c7a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCursorPosition, CDOTAFogOfWarSystem::AddTempViewer, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, KeyValues::KeyValues, KeyValues::SetFloat (22 total)
// strings: "particles/units/heroes/hero_dazzle/dazzle_weave.vpcf", "modifier_dazzle_weave_armor", "Hero_Dazzle.Weave"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Dazzle_Weave::OnSpellStart(CDOTA_Ability_Dazzle_Weave *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  __m128i v4; // xmm3
  float v5; // ebx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r12
  int v13; // ebx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm3_4
  Vector vPosition; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]
  Vector CursorPosition; // 0:kr20_12.12

  v30 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_scepter", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration_scepter", -1, 0);
  }
  *v4.m128i_i32 = LevelSpecialValue;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  *&entities.m_Size = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_DAZZLEWEAVE,
    v6->m_iTeamNum.m_Value,
    &entities,
    v5,
    3.0,
    1);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v7 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, &vPosition, v7, v5, &entities, 3, 1, 80, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_dazzle/dazzle_weave.vpcf",
                  2,
                  0,
                  0,
                  0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, v7, 0, *&CursorPosition.x, CursorPosition.z);
  vPosition.x = v5;
  vPosition.y = v5;
  vPosition.z = v5;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v7, 1, *&vPosition.x, vPosition.z);
  if ( entities.m_Size > 0 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &entities.m_Memory.m_pMemory[v12];
        m_Index = entities.m_Memory.m_pMemory[v12].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v16 = v14->m_Index;
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v16 & 0x1FF];
            if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        ++v13;
        ++v12;
        if ( entities.m_Size <= v13 )
          goto LABEL_13;
      }
      KeyValues::KeyValues(&kv, "modifier_dazzle_weave_armor");
      KeyValues::SetFloat(&kv, "duration", v20);
      v21 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_dazzle_weave_armor", &kv, 0);
      ++v13;
      ++v12;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v13 );
  }
LABEL_13:
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Dazzle.Weave", 0.0, 0, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v25 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v25,
    0,
    m_iAbilityID,
    0,
    0,
    *&vPosition.x,
    vPosition.z,
    -1.0,
    v26);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Dazzle_Weave_Armor::~CDOTA_Modifier_Dazzle_Weave_Armor  (line 701, @0x0000000002b9b040, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::~CDOTA_Modifier_Dazzle_Weave_Armor(
        CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CDBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Dazzle_Weave_Armor::~CDOTA_Modifier_Dazzle_Weave_Armor  (line 701, @0x0000000002b9b060, libserver.so)  // inlines: ~CDOTA_Modifier_Dazzle_Weave_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::~CDOTA_Modifier_Dazzle_Weave_Armor(
        CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_44CDBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Dazzle_Weave_Armor::IsPurgable  (line 710, @0x0000000002b8f6b0, libserver.so)
bool __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::IsPurgable(CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  return 0;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::GetAttributes  (line 712, @0x0000000002b9c280, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::GetAttributes(CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 6;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::GetStatusEffectName  (line 714, @0x0000000002b8f6c0, libserver.so)
// strings: "particles/status_fx/status_effect_armor_dazzle.vpcf"
const char *__fastcall CDOTA_Modifier_Dazzle_Weave_Armor::GetStatusEffectName(
        CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  return "particles/status_fx/status_effect_armor_dazzle.vpcf";
}


// CDOTA_Modifier_Dazzle_Weave_Armor::StatusEffectPriority  (line 715, @0x0000000002b8f6d0, libserver.so)
int __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::StatusEffectPriority(CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  return 25;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::OnCreated  (line 726, @0x0000000002b7db10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "armor_per_second", "armor_per_second_scepter"
void __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::OnCreated(
        CDOTA_Modifier_Dazzle_Weave_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->armor_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "armor_per_second", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->armor_per_second_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                         v4,
                                         "armor_per_second_scepter",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->armor_per_second = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->armor_per_second_scepter = 0.0;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::OnIntervalThink  (line 753, @0x0000000002b34d70, libserver.so)
void __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::OnIntervalThink(CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  ;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::DeclareFunctions  (line 765, @0x0000000002b34d80, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::DeclareFunctions(CDOTA_Modifier_Dazzle_Weave_Armor *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Dazzle_Weave_Armor::GetModifierPhysicalArmorBonus  (line 771, @0x0000000002b39390, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, floorf, CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Dazzle_Weave_Armor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Dazzle_Weave_Armor *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  float armor_per_second; // xmm1_4
  __m128i v6; // xmm0
  float v7; // r12d
  float v8; // xmm0_4
  float v9; // xmm3_4
  unsigned __int8 m_Value; // r12
  float flArmor; // [rsp+Ch] [rbp-14h]
  float flArmora; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  armor_per_second = this->armor_per_second;
  if ( HasScepter )
    armor_per_second = this->armor_per_second_scepter;
  flArmor = armor_per_second;
  *v6.m128i_i64 = (*(this->_vptr_CDOTA_Buff + 31))(this, COERCE_DOUBLE(LODWORD(this->armor_per_second_scepter)));
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  (*(this->_vptr_CDOTA_Buff + 30))(this);
  v9 = 0.0;
  if ( g_pGameRules != 0 )
    v9 = *&g_pGameRules[18].m_szQuestName[20];
  flArmora = floorf((v7 - (v8 - v9)) * flArmor);
  m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  if ( m_Value == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(LODWORD(flArmora)) << 32) | 1;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = ((LODWORD(flArmora) ^ 0x80000000LL) << 32) | 1;
  }
  return result;
}


