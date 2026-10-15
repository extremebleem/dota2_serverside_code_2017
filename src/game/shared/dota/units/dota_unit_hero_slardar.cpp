// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:33
class CDOTA_Unit_Hero_Slardar : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Slardar(CDOTA_Unit_Hero_Slardar &);
	CDOTA_Unit_Hero_Slardar(CDOTA_Unit_Hero_Slardar &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Slardar();
	virtual ~CDOTA_Unit_Hero_Slardar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:48
class C_CDOTA_Unit_Hero_Slardar_MapInstall {
	C_CDOTA_Unit_Hero_Slardar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:61
class CDOTA_Ability_Slardar_Sprint : public CDOTABaseAbility {
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
	CDOTA_Ability_Slardar_Sprint(CDOTA_Ability_Slardar_Sprint &);
	CDOTA_Ability_Slardar_Sprint(CDOTA_Ability_Slardar_Sprint &);
	CDOTA_Ability_Slardar_Sprint();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Slardar_Sprint();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:93
class CDOTA_Modifier_Slardar_Sprint : public CDOTA_Buff {
public:

	int bonus_damage;  // +0xba8
	int bonus_speed;  // +0xbac
	CDOTA_Modifier_Slardar_Sprint();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slardar_Sprint();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierIncomingDamage_Percentage
	// vtable[90] GetModifierMoveSpeedBonus_Percentage
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:186
class CDOTA_Ability_Slardar_Slithereen_Crush : public CDOTABaseAbility {
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
	CDOTA_Ability_Slardar_Slithereen_Crush(CDOTA_Ability_Slardar_Slithereen_Crush &);
	CDOTA_Ability_Slardar_Slithereen_Crush(CDOTA_Ability_Slardar_Slithereen_Crush &);
	CDOTA_Ability_Slardar_Slithereen_Crush();
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
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Slardar_Slithereen_Crush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:204
class C_CDOTA_Ability_Slardar_Slithereen_Crush_MapInstall {
	C_CDOTA_Ability_Slardar_Slithereen_Crush_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:288
class CDOTA_Modifier_Slardar_Slithereen_Crush : public CDOTA_Buff {
public:

	int crush_extra_slow;  // +0xba8
	CDOTA_Modifier_Slardar_Slithereen_Crush();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Slardar_Slithereen_Crush();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:350
class CDOTA_Ability_Slardar_Bash : public CDOTABaseAbility {
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
	CDOTA_Ability_Slardar_Bash(CDOTA_Ability_Slardar_Bash &);
	CDOTA_Ability_Slardar_Bash(CDOTA_Ability_Slardar_Bash &);
	CDOTA_Ability_Slardar_Bash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Slardar_Bash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:378
class CDOTA_Modifier_Slardar_Bash : public CDOTA_Buff {
public:

private:

	int chance;  // +0xba8
	int bonus_damage;  // +0xbac
	float duration;  // +0xbb0
	float duration_creep;  // +0xbb4
	CDOTA_Modifier_Slardar_Bash();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slardar_Bash();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:505
class CDOTA_Ability_Slardar_Amplify_Damage : public CDOTABaseAbility {
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
	CDOTA_Ability_Slardar_Amplify_Damage(CDOTA_Ability_Slardar_Amplify_Damage &);
	CDOTA_Ability_Slardar_Amplify_Damage(CDOTA_Ability_Slardar_Amplify_Damage &);
	CDOTA_Ability_Slardar_Amplify_Damage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Slardar_Amplify_Damage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:514
class C_CDOTA_Ability_Slardar_Amplify_Damage_MapInstall {
	C_CDOTA_Ability_Slardar_Amplify_Damage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slardar.cpp:561
class CDOTA_Modifier_Slardar_Amplify_Damage : public CDOTA_Buff {
public:

	int armor_reduction;  // +0xba8
	CDOTA_Modifier_Slardar_Amplify_Damage();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Slardar_Amplify_Damage();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[6] GetPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Slardar::~CDOTA_Unit_Hero_Slardar  (line 33, @0x0000000002ac6b70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Slardar::~CDOTA_Unit_Hero_Slardar(CDOTA_Unit_Hero_Slardar *const this)
{
  this->_vptr_IHandleEntity = &off_441F170;
  this->_vptr_INextBotEventResponder = &off_4420150;
  this->_vptr_CObstructionObject = &off_4420480;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Slardar::~CDOTA_Unit_Hero_Slardar  (line 33, @0x0000000002ac6bb0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Slardar
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Slardar::~CDOTA_Unit_Hero_Slardar(CDOTA_Unit_Hero_Slardar *const this)
{
  this->_vptr_IHandleEntity = &off_441F170;
  this->_vptr_INextBotEventResponder = &off_4420150;
  this->_vptr_CObstructionObject = &off_4420480;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Slardar::Schema_DynamicBinding  (line 35, @0x0000000002abac70, libserver.so)
// globals: CDOTA_Unit_Hero_Slardar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Slardar::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Slardar *const this)
{
  return CDOTA_Unit_Hero_Slardar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002abaca0, libserver.so)
// globals: CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002abacb0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Slardar>
void __fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002abacd0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002abacf0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002abad00, libserver.so)
// globals: CDOTA_Unit_Hero_Slardar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Slardar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002abf6c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002ac4ae0, libserver.so)  // inlines: CDOTA_Unit_Hero_Slardar, Construct<CDOTA_Unit_Hero_Slardar>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_441F170;
    *(p + 236) = &off_4420150;
    *(p + 257) = &off_4420480;
  }
  return p;
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002acd170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002acd500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Slardar::GetEntityClassInternal  (line 35, @0x0000000002ae1a00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_slardar", "CDOTA_Unit_Hero_Slardar"
// globals: `guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass, CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass, __dso_handle, CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo, CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Slardar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass);
    CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass._vptr_CEntityClass = off_441F0F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Slardar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SlardarClass != 0 )
    return &CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo,
      "CDOTA_Unit_Hero_Slardar",
      "npc_dota_hero_slardar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo);
  }
  CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass.m_pClassInfo = &CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo;
  CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SlardarClass = &CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass;
  CDOTA_Unit_Hero_Slardar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlardarClassInfo.m_pClass = &CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass;
  CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SlardarClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Slardar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlardarClass;
}


// CDOTA_Unit_Hero_Slardar::YouForgotToImplementOrDeclareServerClass  (line 48, @0x0000000002a78990, libserver.so)
int __fastcall CDOTA_Unit_Hero_Slardar::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Slardar *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Slardar::GetServerClass  (line 48, @0x0000000002a89ab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Slardar::GetServerClass(CDOTA_Unit_Hero_Slardar *const this)
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


// CDOTA_Ability_Slardar_Sprint::~CDOTA_Ability_Slardar_Sprint  (line 61, @0x0000000002ac5e30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slardar_Sprint::~CDOTA_Ability_Slardar_Sprint(CDOTA_Ability_Slardar_Sprint *const this)
{
  this->_vptr_IHandleEntity = &off_4420550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slardar_Sprint::~CDOTA_Ability_Slardar_Sprint  (line 61, @0x0000000002ac5e50, libserver.so)  // inlines: ~CDOTA_Ability_Slardar_Sprint
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slardar_Sprint::~CDOTA_Ability_Slardar_Sprint(CDOTA_Ability_Slardar_Sprint *const this)
{
  this->_vptr_IHandleEntity = &off_4420550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slardar_Sprint::Schema_DynamicBinding  (line 63, @0x0000000002abad10, libserver.so)
// globals: CDOTA_Ability_Slardar_Sprint::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Sprint::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Sprint *const this)
{
  return CDOTA_Ability_Slardar_Sprint::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 63, @0x0000000002abad20, libserver.so)
// globals: CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::DestructInstance  (line 63, @0x0000000002abad30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slardar_Sprint>
void __fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::FreeInstance  (line 63, @0x0000000002abad50, libserver.so)
void __fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::CanAllocate  (line 63, @0x0000000002abad70, libserver.so)
bool __fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 63, @0x0000000002abad80, libserver.so)
// globals: CDOTA_Ability_Slardar_Sprint::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Sprint::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::AllocateInstance  (line 63, @0x0000000002abf700, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::ConstructInstance  (line 63, @0x0000000002ac2fd0, libserver.so)  // inlines: CDOTA_Ability_Slardar_Sprint, Construct<CDOTA_Ability_Slardar_Sprint>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4420550;
  }
  return p;
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002acc830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 63, @0x0000000002acc850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal  (line 63, @0x0000000002ae1b50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Slardar_Sprint"
// globals: `guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass, CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass, __dso_handle, CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo, CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass);
    CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass._vptr_CEntityClass = off_44204D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass);
    __cxa_atexit(
      CDOTA_Ability_Slardar_Sprint::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slardar_SprintClass != 0 )
    return &CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass;
  if ( `guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo,
      "CDOTA_Ability_Slardar_Sprint",
      "slardar_sprint",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo);
  }
  CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass.m_pClassInfo = &CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo;
  CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass.m_pBaseClassInfo = CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slardar_SprintClass = &CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass;
  CDOTA_Ability_Slardar_Sprint::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_SprintClassInfo.m_pClass = &CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass;
  CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slardar_SprintClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slardar_Sprint::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_SprintClass;
}


// CDOTA_Ability_Slardar_Sprint::OnSpellStart  (line 73, @0x0000000002a9ac40, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slardar_sprint", "Hero_Slardar.Sprint"
void __fastcall CDOTA_Ability_Slardar_Sprint::OnSpellStart(CDOTA_Ability_Slardar_Sprint *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_slardar_sprint");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_slardar_sprint", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Slardar.Sprint", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Slardar_Sprint::~CDOTA_Modifier_Slardar_Sprint  (line 93, @0x0000000002ac0d80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slardar_Sprint::~CDOTA_Modifier_Slardar_Sprint(
        CDOTA_Modifier_Slardar_Sprint *const this)
{
  this->_vptr_CDOTA_Buff = &off_4421010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slardar_Sprint::~CDOTA_Modifier_Slardar_Sprint  (line 93, @0x0000000002ac0da0, libserver.so)  // inlines: ~CDOTA_Modifier_Slardar_Sprint
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slardar_Sprint::~CDOTA_Modifier_Slardar_Sprint(
        CDOTA_Modifier_Slardar_Sprint *const this)
{
  this->_vptr_CDOTA_Buff = &off_4421010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slardar_Sprint::GetEffectName  (line 107, @0x0000000002abad90, libserver.so)
// strings: "particles/units/heroes/hero_slardar/slardar_sprint.vpcf"
const char *__fastcall CDOTA_Modifier_Slardar_Sprint::GetEffectName(CDOTA_Modifier_Slardar_Sprint *const this)
{
  return "particles/units/heroes/hero_slardar/slardar_sprint.vpcf";
}


// CDOTA_Modifier_Slardar_Sprint::CheckState  (line 121, @0x0000000002a789a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Slardar_Sprint::CheckState(
        CDOTA_Modifier_Slardar_Sprint *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Slardar_Sprint::OnCreated  (line 130, @0x0000000002aaa940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_Slardar_Sprint::OnCreated(CDOTA_Modifier_Slardar_Sprint *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_speed = 0;
}


// CDOTA_Modifier_Slardar_Sprint::OnRefresh  (line 144, @0x0000000002aaa820, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_speed"
void __fastcall CDOTA_Modifier_Slardar_Sprint::OnRefresh(CDOTA_Modifier_Slardar_Sprint *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_speed = 0;
}


// CDOTA_Modifier_Slardar_Sprint::DeclareFunctions  (line 152, @0x0000000002a789c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slardar_Sprint::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slardar_Sprint::DeclareFunctions(CDOTA_Modifier_Slardar_Sprint *const this)
{
  this->m_Functions[36].__pfn = (&stru_10 + 697);
  this->m_Functions[36].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 705);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Slardar_Sprint::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Slardar_Sprint::GetActivityTranslationModifiers  (line 161, @0x0000000002a78a10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Sprint::GetActivityTranslationModifiers(
        CDOTA_Modifier_Slardar_Sprint *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "sprint";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Slardar_Sprint::GetModifierIncomingDamage_Percentage  (line 168, @0x0000000002a78a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Sprint::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Slardar_Sprint *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slardar_Sprint::GetModifierMoveSpeedBonus_Percentage  (line 175, @0x0000000002a78a50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Sprint::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Slardar_Sprint *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::~CDOTA_Ability_Slardar_Slithereen_Crush  (line 186, @0x0000000002ac5e80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::~CDOTA_Ability_Slardar_Slithereen_Crush(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  this->_vptr_IHandleEntity = &off_4421390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::~CDOTA_Ability_Slardar_Slithereen_Crush  (line 186, @0x0000000002ac5ea0, libserver.so)  // inlines: ~CDOTA_Ability_Slardar_Slithereen_Crush
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::~CDOTA_Ability_Slardar_Slithereen_Crush(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  this->_vptr_IHandleEntity = &off_4421390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::Schema_DynamicBinding  (line 188, @0x0000000002abada0, libserver.so)
// globals: CDOTA_Ability_Slardar_Slithereen_Crush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  return CDOTA_Ability_Slardar_Slithereen_Crush::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 188, @0x0000000002abadb0, libserver.so)
// globals: CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::DestructInstance  (line 188, @0x0000000002abadc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slardar_Slithereen_Crush>
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::FreeInstance  (line 188, @0x0000000002abade0, libserver.so)
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::CanAllocate  (line 188, @0x0000000002abae00, libserver.so)
bool __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 188, @0x0000000002abae10, libserver.so)
// globals: CDOTA_Ability_Slardar_Slithereen_Crush::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Slithereen_Crush::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::AllocateInstance  (line 188, @0x0000000002abf740, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::ConstructInstance  (line 188, @0x0000000002ac3000, libserver.so)  // inlines: CDOTA_Ability_Slardar_Slithereen_Crush, Construct<CDOTA_Ability_Slardar_Slithereen_Crush>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4421390;
  }
  return p;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 188, @0x0000000002acc880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 188, @0x0000000002acc8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal  (line 188, @0x0000000002ae1ca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "slardar_slithereen_crush", "CDOTA_Ability_Slardar_Slithereen_Crush"
// globals: `guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass, CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass, __dso_handle, CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo, CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass);
    CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass._vptr_CEntityClass = off_4421310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass);
    __cxa_atexit(
      CDOTA_Ability_Slardar_Slithereen_Crush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slardar_Slithereen_CrushClass != 0 )
    return &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass;
  if ( `guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo,
      "CDOTA_Ability_Slardar_Slithereen_Crush",
      "slardar_slithereen_crush",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo);
  }
  CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass.m_pClassInfo = &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo;
  CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass.m_pBaseClassInfo = CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slardar_Slithereen_CrushClass = &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass;
  CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClassInfo.m_pClass = &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass;
  CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slardar_Slithereen_CrushClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slardar_Slithereen_Crush::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Slithereen_CrushClass;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::GetAOERadius  (line 195, @0x0000000002ae6710, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crush_radius"
float __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::GetAOERadius(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crush_radius", -1, 0);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::YouForgotToImplementOrDeclareServerClass  (line 204, @0x0000000002a78a70, libserver.so)
int __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  return 0;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::GetServerClass  (line 204, @0x0000000002a89eb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Slardar_Slithereen_Crush::GetServerClass(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
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


// CDOTA_Ability_Slardar_Slithereen_Crush::OnAbilityPhaseStart  (line 214, @0x0000000002a78a80, libserver.so)
bool __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::OnAbilityPhaseStart(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  return 1;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::OnSpellStart  (line 224, @0x0000000002aa69f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, KeyValues::~KeyValues, CGameSceneNode::GetOwnerEntity (20 total)
// strings: "crush_radius", "crush_extra_slow_duration", "slardar_slithereen_crush", "modifier_stunned", "modifier_slithereen_crush", "particles/units/heroes/hero_slardar/slardar_crush.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::OnSpellStart(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r13
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CBaseEntity *OwnerEntity; // r12
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  float flRadius; // [rsp+24h] [rbp-8Ch]
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v28; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crush_radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "crush_extra_slow_duration", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &entities.m_Memory.m_pMemory[v7];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v7 )
          goto LABEL_13;
      }
      KeyValues::KeyValues(&kv, "slardar_slithereen_crush");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v14);
      if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
      {
        v15 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, this, "modifier_stunned", &kv, 0);
        CDOTABaseAbility::GetDuration(this);
        KeyValues::SetFloat(&kv, "duration", v16);
        v17 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_slithereen_crush", &kv, 0);
      }
      flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
      v18 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v18, m_pInstance, this, flDamage, 1, 8);
      KeyValues::~KeyValues(&kv);
      ++v7;
    }
    while ( entities.m_Size > v7 );
  }
LABEL_13:
  OwnerEntity = 0;
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_slardar/slardar_crush.vpcf",
               1,
               OwnerEntity,
               0,
               0);
  *&v28 = flRadius;
  *(&v28 + 1) = flRadius;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, Particle, 1, v28, flRadius);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
  v25 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v25, "Hero_Slardar.Slithereen_Crush", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Slardar_Slithereen_Crush::GetAbilityDamageToTargetOverInterval  (line 269, @0x0000000002a7c980, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Ability_Slardar_Slithereen_Crush::GetStunDuration  (line 279, @0x0000000002a7b2e0, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Slardar_Slithereen_Crush::GetStunDuration(
        CDOTA_Ability_Slardar_Slithereen_Crush *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::~CDOTA_Modifier_Slardar_Slithereen_Crush  (line 288, @0x0000000002ac0d30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::~CDOTA_Modifier_Slardar_Slithereen_Crush(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this)
{
  this->_vptr_CDOTA_Buff = &off_4421E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::~CDOTA_Modifier_Slardar_Slithereen_Crush  (line 288, @0x0000000002ac0d50, libserver.so)  // inlines: ~CDOTA_Modifier_Slardar_Slithereen_Crush
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::~CDOTA_Modifier_Slardar_Slithereen_Crush(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this)
{
  this->_vptr_CDOTA_Buff = &off_4421E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::GetStatusEffectName  (line 298, @0x0000000002abae20, libserver.so)
// strings: "particles/status_fx/status_effect_slardar_crush.vpcf"
const char *__fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::GetStatusEffectName(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this)
{
  return "particles/status_fx/status_effect_slardar_crush.vpcf";
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::StatusEffectPriority  (line 299, @0x0000000002abae30, libserver.so)
int __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::StatusEffectPriority(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this)
{
  return 10;
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::OnCreated  (line 308, @0x0000000002aa9f20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crush_extra_slow"
void __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::OnCreated(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->crush_extra_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crush_extra_slow", -1, 0);
  else
    this->crush_extra_slow = 0;
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::DeclareFunctions  (line 323, @0x0000000002a78a90, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::DeclareFunctions(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::GetModifierMoveSpeedBonus_Percentage  (line 331, @0x0000000002a78ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->crush_extra_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slardar_Slithereen_Crush::GetModifierAttackSpeedBonus_Constant  (line 338, @0x0000000002a78af0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Slithereen_Crush::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Slardar_Slithereen_Crush *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->crush_extra_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Slardar_Bash::~CDOTA_Ability_Slardar_Bash  (line 350, @0x0000000002ac5ed0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slardar_Bash::~CDOTA_Ability_Slardar_Bash(CDOTA_Ability_Slardar_Bash *const this)
{
  this->_vptr_IHandleEntity = &off_44221D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slardar_Bash::~CDOTA_Ability_Slardar_Bash  (line 350, @0x0000000002ac5ef0, libserver.so)  // inlines: ~CDOTA_Ability_Slardar_Bash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slardar_Bash::~CDOTA_Ability_Slardar_Bash(CDOTA_Ability_Slardar_Bash *const this)
{
  this->_vptr_IHandleEntity = &off_44221D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slardar_Bash::Schema_DynamicBinding  (line 352, @0x0000000002abae40, libserver.so)
// globals: CDOTA_Ability_Slardar_Bash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Bash::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Bash *const this)
{
  return CDOTA_Ability_Slardar_Bash::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 352, @0x0000000002abae50, libserver.so)
// globals: CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::DestructInstance  (line 352, @0x0000000002abae60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slardar_Bash>
void __fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::FreeInstance  (line 352, @0x0000000002abae80, libserver.so)
void __fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::CanAllocate  (line 352, @0x0000000002abaea0, libserver.so)
bool __fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 352, @0x0000000002abaeb0, libserver.so)
// globals: CDOTA_Ability_Slardar_Bash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Bash::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::AllocateInstance  (line 352, @0x0000000002abf780, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::ConstructInstance  (line 352, @0x0000000002ac3030, libserver.so)  // inlines: CDOTA_Ability_Slardar_Bash, Construct<CDOTA_Ability_Slardar_Bash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44221D0;
  }
  return p;
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 352, @0x0000000002acc8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 352, @0x0000000002acc8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slardar_Bash::GetEntityClassInternal  (line 352, @0x0000000002ae1df0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Slardar_Bash"
// globals: `guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass, CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass, __dso_handle, CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo, CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slardar_Bash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass);
    CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass._vptr_CEntityClass = off_4422150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass);
    __cxa_atexit(
      CDOTA_Ability_Slardar_Bash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slardar_BashClass != 0 )
    return &CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass;
  if ( `guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo,
      "CDOTA_Ability_Slardar_Bash",
      "slardar_bash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo);
  }
  CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass.m_pClassInfo = &CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo;
  CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass.m_pBaseClassInfo = CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slardar_BashClass = &CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass;
  CDOTA_Ability_Slardar_Bash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_BashClassInfo.m_pClass = &CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass;
  CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slardar_BashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slardar_Bash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_BashClass;
}


// CDOTA_Ability_Slardar_Bash::GetIntrinsicModifierName  (line 355, @0x0000000002abaec0, libserver.so)
// strings: "modifier_slardar_bash"
const char *__fastcall CDOTA_Ability_Slardar_Bash::GetIntrinsicModifierName(CDOTA_Ability_Slardar_Bash *const this)
{
  return "modifier_slardar_bash";
}


// CDOTA_Ability_Slardar_Bash::GetAbilityDamageToTargetOverInterval  (line 364, @0x0000000002aa2390, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Slardar_Bash::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Slardar_Bash *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "chance", -1, 0) / 100.0) * fNumAttacksa;
    fNumAttacksc = fNumAttacksb * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fNumAttacksc);
  }
  return result;
}


// CDOTA_Modifier_Slardar_Bash::~CDOTA_Modifier_Slardar_Bash  (line 378, @0x0000000002ac0ce0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slardar_Bash::~CDOTA_Modifier_Slardar_Bash(CDOTA_Modifier_Slardar_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4422C90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slardar_Bash::~CDOTA_Modifier_Slardar_Bash  (line 378, @0x0000000002ac0d00, libserver.so)  // inlines: ~CDOTA_Modifier_Slardar_Bash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slardar_Bash::~CDOTA_Modifier_Slardar_Bash(CDOTA_Modifier_Slardar_Bash *const this)
{
  this->_vptr_CDOTA_Buff = &off_4422C90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slardar_Bash::IsHidden  (line 385, @0x0000000002abaed0, libserver.so)
bool __fastcall CDOTA_Modifier_Slardar_Bash::IsHidden(CDOTA_Modifier_Slardar_Bash *const this)
{
  return 1;
}


// CDOTA_Modifier_Slardar_Bash::OnCreated  (line 403, @0x0000000002aabb60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Slardar_Bash::OnCreated(CDOTA_Modifier_Slardar_Bash *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->duration = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->duration_creep = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "duration_creep", -1, 0);
    return;
  }
LABEL_9:
  this->duration_creep = 0.0;
}


// CDOTA_Modifier_Slardar_Bash::OnRefresh  (line 411, @0x0000000002aaba30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Slardar_Bash::OnRefresh(CDOTA_Modifier_Slardar_Bash *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->duration = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->duration_creep = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "duration_creep", -1, 0);
    return;
  }
LABEL_9:
  this->duration_creep = 0.0;
}


// CDOTA_Modifier_Slardar_Bash::DeclareFunctions  (line 421, @0x0000000002a78b10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack(CModifierParams const&), CDOTA_Modifier_Slardar_Bash::GetModifierProcAttack_BonusDamage_Physical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slardar_Bash::DeclareFunctions(CDOTA_Modifier_Slardar_Bash *const this)
{
  this->m_Functions[8].__pfn = CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack;
  this->m_Functions[8].__delta = 0;
  this->m_Functions[4].__delta = 0;
  this->m_Functions[4].__pfn = CDOTA_Modifier_Slardar_Bash::GetModifierProcAttack_BonusDamage_Physical;
}


// CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack  (line 429, @0x0000000002aa2450, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, RollPseudoRandomPercentage, UnitFilter, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_BaseNPC::PreventCritOrBashAnimations, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy
// strings: "special_bonus_unique_slardar"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Bash::GetModifierPreAttack(
        CDOTA_Modifier_Slardar_Bash *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *v15; // r14
  CDOTA_BaseNPC *v16; // rax
  __int64 iRecord; // r12
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_AttackRecord *v20; // r12
  ModifierVariant_t result; // 0:rax.16

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_slardar", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( RollPseudoRandomPercentage(this->chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_SLARDAR_BASH, Parent) )
    {
      result.m_szVal = CDOTA_Buff::GetParent(this);
      *&result.m_eType = 1;
      if ( (result.m_szVal[2787] & 0x10) != 0 )
        goto LABEL_6;
      m_Index = params->htarget.m_Index;
      if ( m_Index + 2 <= 1
        || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
        || m_Index != v10->m_EHandle.m_Index
        || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v12 = params->hattacker.m_Index;
      if ( v12 + 2 <= 1
        || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v14 = &v13[params->hattacker.m_Index & 0x1FF]) == 0
        || v12 != v14->m_EHandle.m_Index
        || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
        || !v15->m_bIsDOTANPC )
      {
        v15 = 0;
      }
      if ( m_pInstance != 0 && (m_pInstance->m_iUnitType & 0x193) != 0 )
      {
        v16 = CDOTA_Buff::GetParent(this);
        if ( UnitFilter(m_pInstance, 2, 19, 16, v16->m_iTeamNum.m_Value) == 0 )
        {
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          v20 = RecordByIndex;
          if ( RecordByIndex != 0 && RecordByIndex->m_nBashSource == 0 )
          {
            RecordByIndex->m_nBashSource = this->m_iSerialNumber;
            if ( !CDOTA_BaseNPC::PreventCritOrBashAnimations(v15)
              && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(v15, 1705).m_Data != -1 )
            {
              v20->m_animation = 1705;
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


// CDOTA_Modifier_Slardar_Bash::GetModifierProcAttack_BonusDamage_Physical  (line 467, @0x0000000002a857f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, UnitFilter, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle (16 total)
// strings: "CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPostAttack", "modifier_bashed", "Hero_Slardar.Bash", "particles/generic_gameplay/generic_minibash.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Bash::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Slardar_Bash *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CBaseEntity *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  __int64 iRecord; // r12
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __m128i v17; // xmm1
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v24; // rax
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v26 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    goto LABEL_2;
  }
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  if ( m_pInstance != 0
    && (m_pInstance->m_iUnitType & 0x193) != 0
    && (v13 = CDOTA_Buff::GetParent(this), UnitFilter(m_pInstance, 2, 19, 16, v13->m_iTeamNum.m_Value) == 0)
    && (iRecord = params->iRecord,
        AttackRecordsManager = GetAttackRecordsManager(),
        (RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord)) != 0)
    && RecordByIndex->m_nBashSource == this->m_iSerialNumber )
  {
    if ( !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    {
      KeyValues::KeyValues(&kv, "CDOTA_Modifier_Item_MonkeyKingBar::GetModifierPostAttack");
      KeyValues::SetFloat(&kv, "duration", v18);
      Ability = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Parent, Ability, "modifier_bashed", &kv, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Slardar.Bash", 0.0, 0, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_gameplay/generic_minibash.vpcf",
                   7,
                   m_pInstance,
                   0,
                   v12);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
      KeyValues::~KeyValues(&kv);
    }
    *v17.m128i_i32 = this->bonus_damage;
    *&result.m_eType = (_mm_cvtsi128_si32(v17) << 32) | 1;
  }
  else
  {
LABEL_2:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Slardar_Amplify_Damage::~CDOTA_Ability_Slardar_Amplify_Damage  (line 505, @0x0000000002ac5f20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::~CDOTA_Ability_Slardar_Amplify_Damage(
        CDOTA_Ability_Slardar_Amplify_Damage *const this)
{
  this->_vptr_IHandleEntity = &off_4422FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slardar_Amplify_Damage::~CDOTA_Ability_Slardar_Amplify_Damage  (line 505, @0x0000000002ac5f40, libserver.so)  // inlines: ~CDOTA_Ability_Slardar_Amplify_Damage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::~CDOTA_Ability_Slardar_Amplify_Damage(
        CDOTA_Ability_Slardar_Amplify_Damage *const this)
{
  this->_vptr_IHandleEntity = &off_4422FF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slardar_Amplify_Damage::Schema_DynamicBinding  (line 507, @0x0000000002abaee0, libserver.so)
// globals: CDOTA_Ability_Slardar_Amplify_Damage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Amplify_Damage *const this)
{
  return CDOTA_Ability_Slardar_Amplify_Damage::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 507, @0x0000000002abaef0, libserver.so)
// globals: CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::DestructInstance  (line 507, @0x0000000002abaf00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slardar_Amplify_Damage>
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::FreeInstance  (line 507, @0x0000000002abaf20, libserver.so)
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::CanAllocate  (line 507, @0x0000000002abaf40, libserver.so)
bool __fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 507, @0x0000000002abaf50, libserver.so)
// globals: CDOTA_Ability_Slardar_Amplify_Damage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slardar_Amplify_Damage::s_pSchemaBinding;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::AllocateInstance  (line 507, @0x0000000002abf7c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::ConstructInstance  (line 507, @0x0000000002ac3060, libserver.so)  // inlines: CDOTA_Ability_Slardar_Amplify_Damage, Construct<CDOTA_Ability_Slardar_Amplify_Damage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4422FF0;
  }
  return p;
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002acc920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002acc940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal  (line 507, @0x0000000002ae1f40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "slardar_amplify_damage", "CDOTA_Ability_Slardar_Amplify_Damage"
// globals: `guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass, CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass, __dso_handle, CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo, CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass);
    CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass._vptr_CEntityClass = off_4422F70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass);
    __cxa_atexit(
      CDOTA_Ability_Slardar_Amplify_Damage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slardar_Amplify_DamageClass != 0 )
    return &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass;
  if ( `guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo,
      "CDOTA_Ability_Slardar_Amplify_Damage",
      "slardar_amplify_damage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo);
  }
  CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass.m_pClassInfo = &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo;
  CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass.m_pBaseClassInfo = CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slardar_Amplify_DamageClass = &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass;
  CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClassInfo.m_pClass = &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass;
  CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slardar_Amplify_DamageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slardar_Amplify_Damage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slardar_Amplify_DamageClass;
}


// CDOTA_Ability_Slardar_Amplify_Damage::YouForgotToImplementOrDeclareServerClass  (line 514, @0x0000000002a78b50, libserver.so)
int __fastcall CDOTA_Ability_Slardar_Amplify_Damage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Slardar_Amplify_Damage *const this)
{
  return 0;
}


// CDOTA_Ability_Slardar_Amplify_Damage::GetServerClass  (line 514, @0x0000000002a89830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Slardar_Amplify_Damage::GetServerClass(
        CDOTA_Ability_Slardar_Amplify_Damage *const this)
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


// CDOTA_Ability_Slardar_Amplify_Damage::OnSpellStart  (line 524, @0x0000000002a9ad30, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetLevelSpecialValueFor<float>, InState, IsInvulnerable, SpeakConcept, String, ToDOTABaseNPC, entindex
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_Speech::SpeakConcept (18 total)
// strings: "slardar_amplify_damage", "modifier_slardar_amplify_damage", "Hero_Slardar.Amplify_Damage", "IsAmpDamage", "IsInvisible", "targetclassname"
void __fastcall CDOTA_Ability_Slardar_Amplify_Damage::OnSpellStart(CDOTA_Ability_Slardar_Amplify_Damage *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm2_4
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm2_4
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v12; // rax
  CEntityIndex v13; // eax
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "slardar_amplify_damage");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_slardar_amplify_damage", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Slardar.Amplify_Damage", 0.0, 0, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "IsAmpDamage", 1.0, v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::IsInvisibleTo(v3, v7);
    CResponseCriteriaSet::AppendCriteria(&criteria, "IsInvisible", 1.0, v8);
    m_pEntity = v3->m_pEntity;
    m_pAsString = "";
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(&criteria, "targetclassname", m_pAsString, 1.0);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    KeyValues::~KeyValues(&kv);
  }
  v12 = CDOTABaseAbility::GetCaster(this);
  v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CreateUnitEvent(v13, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
}


// CDOTA_Modifier_Slardar_Amplify_Damage::~CDOTA_Modifier_Slardar_Amplify_Damage  (line 561, @0x0000000002ac0c90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::~CDOTA_Modifier_Slardar_Amplify_Damage(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4423AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slardar_Amplify_Damage::~CDOTA_Modifier_Slardar_Amplify_Damage  (line 561, @0x0000000002ac0cb0, libserver.so)  // inlines: ~CDOTA_Modifier_Slardar_Amplify_Damage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::~CDOTA_Modifier_Slardar_Amplify_Damage(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  this->_vptr_CDOTA_Buff = &off_4423AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slardar_Amplify_Damage::GetStatusEffectName  (line 571, @0x0000000002abaf60, libserver.so)
// strings: "particles/status_fx/status_effect_slardar_amp_damage.vpcf"
const char *__fastcall CDOTA_Modifier_Slardar_Amplify_Damage::GetStatusEffectName(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  return "particles/status_fx/status_effect_slardar_amp_damage.vpcf";
}


// CDOTA_Modifier_Slardar_Amplify_Damage::StatusEffectPriority  (line 572, @0x0000000002abaf70, libserver.so)
int __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::StatusEffectPriority(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  return 13;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::IsHidden  (line 574, @0x0000000002abaf80, libserver.so)
bool __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::IsHidden(CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  return 0;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::GetPriority  (line 579, @0x0000000002abaf90, libserver.so)
int __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::GetPriority(CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  return 2;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::OnCreated  (line 590, @0x0000000002aa9c20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::OnCreated(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::OnRefresh  (line 610, @0x0000000002aaa100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::OnRefresh(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::DeclareFunctions  (line 617, @0x0000000002a78b60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::DeclareFunctions(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[158].__pfn = CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierPhysicalArmorBonus  (line 625, @0x0000000002a78ba0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierProvidesFOWVision  (line 633, @0x0000000002a82f20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Target, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_shadow_dance"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this,
        const CModifierParams *const params)
{
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *Parent; // rax
  bool v5; // zf
  ModifierVariant_t result; // 0:rax.16

  result.m_eType = params->htarget.m_Index;
  if ( (result.m_eType + 2) > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (result.m_szVal = &v3[params->htarget.m_Index & 0x1FF], result.m_szVal != 0)
    && result.m_eType == *(result.m_szVal + 4)
    && *result.m_szVal != 0
    && (*&result.m_eType = 1, this->m_iTeam != *(*result.m_szVal + 383LL)) )
  {
    result.m_szVal = 0;
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_shadow_dance", 0) == 0;
    *&result.m_eType = 0x3F80000000000001LL;
    if ( !v5 )
      *&result.m_eType = 1;
    result.m_szVal = 0;
  }
  return result;
}


// CDOTA_Modifier_Slardar_Amplify_Damage::CheckState  (line 647, @0x0000000002a78bc0, libserver.so)  // inlines: Disable
void __fastcall CDOTA_Modifier_Slardar_Amplify_Damage::CheckState(
        CDOTA_Modifier_Slardar_Amplify_Damage *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


