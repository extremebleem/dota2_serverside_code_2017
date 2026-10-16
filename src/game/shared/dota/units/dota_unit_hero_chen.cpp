// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:32
class CDOTA_Unit_Hero_Chen : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Chen(CDOTA_Unit_Hero_Chen &);
	CDOTA_Unit_Hero_Chen(CDOTA_Unit_Hero_Chen &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Event_Killed(const CTakeDamageInfo &);
	CDOTA_Unit_Hero_Chen();
	virtual ~CDOTA_Unit_Hero_Chen();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:47
class C_CDOTA_Unit_Hero_Chen_MapInstall {
	C_CDOTA_Unit_Hero_Chen_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:60
class CDOTA_Ability_Chen_Penitence : public CDOTABaseAbility {
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
	CDOTA_Ability_Chen_Penitence(CDOTA_Ability_Chen_Penitence &);
	CDOTA_Ability_Chen_Penitence(CDOTA_Ability_Chen_Penitence &);
	CDOTA_Ability_Chen_Penitence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_Chen_Penitence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:131
class CDOTA_Modifier_Chen_Penitence : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_damage_taken;  // +0xbac
	CDOTA_Modifier_Chen_Penitence();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Chen_Penitence();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierIncomingDamage_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:199
class CDOTA_Ability_Chen_TestOfFaith : public CDOTABaseAbility {
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
	CDOTA_Ability_Chen_TestOfFaith(CDOTA_Ability_Chen_TestOfFaith &);
	CDOTA_Ability_Chen_TestOfFaith(CDOTA_Ability_Chen_TestOfFaith &);
	CDOTA_Ability_Chen_TestOfFaith();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Chen_TestOfFaith();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:277
class CDOTA_Ability_Chen_HolyPersuasion : public CDOTABaseAbility {
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
	CDOTA_Ability_Chen_HolyPersuasion(CDOTA_Ability_Chen_HolyPersuasion &);
	CDOTA_Ability_Chen_HolyPersuasion(CDOTA_Ability_Chen_HolyPersuasion &);
	CDOTA_Ability_Chen_HolyPersuasion();
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
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual void OnUnStolen();
	void DestroyDominated();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual ~CDOTA_Ability_Chen_HolyPersuasion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[308] OnUnStolen
	// vtable[159] ModifyOrAppendCriteria
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:310
class C_CDOTA_Ability_Chen_HolyPersuasion_MapInstall {
	C_CDOTA_Ability_Chen_HolyPersuasion_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:485
class CDOTA_Modifier_Chen_HolyPersuasion : public CDOTA_Buff {
public:

private:

	int health_min;  // +0xba8
	int new_max;  // +0xbac
	int health_bonus;  // +0xbb0
	CDOTA_Modifier_Chen_HolyPersuasion();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Chen_HolyPersuasion();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:540
class CDOTA_Ability_Chen_TestOfFaithTeleport : public CDOTABaseAbility {
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
	CDOTA_Ability_Chen_TestOfFaithTeleport(CDOTA_Ability_Chen_TestOfFaithTeleport &);
	CDOTA_Ability_Chen_TestOfFaithTeleport(CDOTA_Ability_Chen_TestOfFaithTeleport &);
	CDOTA_Ability_Chen_TestOfFaithTeleport();
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
	virtual void OnUpgrade();
	virtual EAbilityAbuseType GetPotentialAbuseType();
	virtual ~CDOTA_Ability_Chen_TestOfFaithTeleport();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[268] OnUpgrade
	// vtable[240] GetPotentialAbuseType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:558
class C_CDOTA_Ability_Chen_TestOfFaithTeleport_MapInstall {
	C_CDOTA_Ability_Chen_TestOfFaithTeleport_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:676
class CDOTA_Modifier_Chen_TestOfFaith_Teleport : public CDOTA_Buff {
public:

private:

	bool bToChen;  // +0xba8

	CDOTA_Modifier_Chen_TestOfFaith_Teleport();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Chen_TestOfFaith_Teleport();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:793
class CDOTA_Ability_Chen_HandOfGod : public CDOTABaseAbility {
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
	CDOTA_Ability_Chen_HandOfGod(CDOTA_Ability_Chen_HandOfGod &);
	CDOTA_Ability_Chen_HandOfGod(CDOTA_Ability_Chen_HandOfGod &);
	CDOTA_Ability_Chen_HandOfGod();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool IsHiddenWhenStolen();
	virtual int GetConceptRecipientType();
	virtual ~CDOTA_Ability_Chen_HandOfGod();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// vtable[299] GetConceptRecipientType
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chen.cpp:806
class C_CDOTA_Ability_Chen_HandOfGod_MapInstall {
	C_CDOTA_Ability_Chen_HandOfGod_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Chen::~CDOTA_Unit_Hero_Chen  (line 32, @0x0000000002ba26a0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Chen::~CDOTA_Unit_Hero_Chen(CDOTA_Unit_Hero_Chen *const this)
{
  this->_vptr_IHandleEntity = &off_44B8E50;
  this->_vptr_INextBotEventResponder = &off_44B9E30;
  this->_vptr_CObstructionObject = &off_44BA160;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Chen::~CDOTA_Unit_Hero_Chen  (line 32, @0x0000000002ba26e0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Chen
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Chen::~CDOTA_Unit_Hero_Chen(CDOTA_Unit_Hero_Chen *const this)
{
  this->_vptr_IHandleEntity = &off_44B8E50;
  this->_vptr_INextBotEventResponder = &off_44B9E30;
  this->_vptr_CObstructionObject = &off_44BA160;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Chen::Schema_DynamicBinding  (line 34, @0x0000000002b8e890, libserver.so)
// globals: CDOTA_Unit_Hero_Chen::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Chen::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Chen *const this)
{
  return CDOTA_Unit_Hero_Chen::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002b8e8c0, libserver.so)
// globals: CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002b8e8d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Chen>
void __fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002b8e8f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002b8e910, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002b8e920, libserver.so)
// globals: CDOTA_Unit_Hero_Chen::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Chen::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002b972a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002b9c430, libserver.so)  // inlines: CDOTA_Unit_Hero_Chen, Construct<CDOTA_Unit_Hero_Chen>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44B8E50;
    *(p + 236) = &off_44B9E30;
    *(p + 257) = &off_44BA160;
  }
  return p;
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002bac0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002bac370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Chen::GetEntityClassInternal  (line 34, @0x0000000002bce960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_chen", "CDOTA_Unit_Hero_Chen"
// globals: `guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass, CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass, __dso_handle, CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo, CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Chen::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass);
    CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass._vptr_CEntityClass = off_44B8DD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Chen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ChenClass != 0 )
    return &CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo,
      "CDOTA_Unit_Hero_Chen",
      "npc_dota_hero_chen",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo);
  }
  CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass.m_pClassInfo = &CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo;
  CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ChenClass = &CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass;
  CDOTA_Unit_Hero_Chen::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChenClassInfo.m_pClass = &CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass;
  CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ChenClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Chen::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChenClass;
}


// CDOTA_Unit_Hero_Chen::YouForgotToImplementOrDeclareServerClass  (line 47, @0x0000000002b34820, libserver.so)
int __fastcall CDOTA_Unit_Hero_Chen::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Chen *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Chen::GetServerClass  (line 47, @0x0000000002b4c360, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Chen::GetServerClass(CDOTA_Unit_Hero_Chen *const this)
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


// CDOTA_Ability_Chen_Penitence::~CDOTA_Ability_Chen_Penitence  (line 60, @0x0000000002ba09a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Chen_Penitence::~CDOTA_Ability_Chen_Penitence(CDOTA_Ability_Chen_Penitence *const this)
{
  this->_vptr_IHandleEntity = &off_44BA230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Chen_Penitence::~CDOTA_Ability_Chen_Penitence  (line 60, @0x0000000002ba09c0, libserver.so)  // inlines: ~CDOTA_Ability_Chen_Penitence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Chen_Penitence::~CDOTA_Ability_Chen_Penitence(CDOTA_Ability_Chen_Penitence *const this)
{
  this->_vptr_IHandleEntity = &off_44BA230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Chen_Penitence::Schema_DynamicBinding  (line 62, @0x0000000002b8e930, libserver.so)
// globals: CDOTA_Ability_Chen_Penitence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_Penitence::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_Penitence *const this)
{
  return CDOTA_Ability_Chen_Penitence::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 62, @0x0000000002b8e940, libserver.so)
// globals: CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::DestructInstance  (line 62, @0x0000000002b8e950, libserver.so)  // inlines: Destruct<CDOTA_Ability_Chen_Penitence>
void __fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::FreeInstance  (line 62, @0x0000000002b8e970, libserver.so)
void __fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::CanAllocate  (line 62, @0x0000000002b8e990, libserver.so)
bool __fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 62, @0x0000000002b8e9a0, libserver.so)
// globals: CDOTA_Ability_Chen_Penitence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_Penitence::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::AllocateInstance  (line 62, @0x0000000002b972e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::ConstructInstance  (line 62, @0x0000000002b9ce10, libserver.so)  // inlines: CDOTA_Ability_Chen_Penitence, Construct<CDOTA_Ability_Chen_Penitence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44BA230;
  }
  return p;
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 62, @0x0000000002baa110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 62, @0x0000000002baa130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Chen_Penitence::GetEntityClassInternal  (line 62, @0x0000000002bc6770, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Chen_Penitence"
// globals: `guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass, CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass, __dso_handle, CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo, CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Chen_Penitence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass);
    CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass._vptr_CEntityClass = off_44BA1B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass);
    __cxa_atexit(
      CDOTA_Ability_Chen_Penitence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Chen_PenitenceClass != 0 )
    return &CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass;
  if ( `guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo,
      "CDOTA_Ability_Chen_Penitence",
      "chen_penitence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo);
  }
  CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass.m_pClassInfo = &CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo;
  CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass.m_pBaseClassInfo = CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Chen_PenitenceClass = &CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass;
  CDOTA_Ability_Chen_Penitence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_PenitenceClassInfo.m_pClass = &CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass;
  CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Chen_PenitenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Chen_Penitence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_PenitenceClass;
}


// CDOTA_Ability_Chen_Penitence::GetConceptRecipientType  (line 68, @0x0000000002b8e9b0, libserver.so)
int __fastcall CDOTA_Ability_Chen_Penitence::GetConceptRecipientType(CDOTA_Ability_Chen_Penitence *const this)
{
  return 4;
}


// CDOTA_Ability_Chen_Penitence::OnSpellStart  (line 76, @0x0000000002b76e10, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, InState, IsInvulnerable, IsMagicImmune, Set, ToDOTABaseNPC, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues (17 total)
// strings: "particles/units/heroes/hero_chen/chen_cast_1.vpcf", "attach_attack1", "Hero_Chen.PenitenceCast", "modifier_chen_penitence"
void __fastcall CDOTA_Ability_Chen_Penitence::OnSpellStart(CDOTA_Ability_Chen_Penitence *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int LevelSpecialValue; // eax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  CEntityIdentity *v17; // rax
  __int16 v18; // cx
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  KeyValues kv; // [rsp+10h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-90h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x200) == 0
      && !v3->m_bIsWaitingToSpawn.m_Value
      && (v4 & 0x100) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_chen/chen_cast_1.vpcf",
                          2,
                          Caster,
                          0,
                          0);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v8, Caster, 0, v7, 5, "attach_attack1", vec3_invalid, 1);
      v9 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v9, Caster);
      v10 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Chen.PenitenceCast", 0.0, 0, 0);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.pAttackRecord = 0;
      info.pszEffectName = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.iSourceAttachment = 1;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.bProvidesVision = 0;
      info.vSourceLoc.z = z;
      info.iVisionTeamNumber = -1;
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
      info.pAbility = this;
      info.iMoveSpeed = LevelSpecialValue;
      v14 = CDOTABaseAbility::GetCaster(this);
      if ( v14 != 0 && (m_pEntity = v14->m_pEntity) != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      v17 = v3->m_pEntity;
      if ( v17 != 0 )
      {
        v18 = 0x7FFF;
        if ( v17->m_EHandle.m_Index != -1 )
          v18 = v17->m_EHandle.m_Index & 0x7FFF;
        info.hTarget.m_Index = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15) | v18 & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_chen_penitence");
      KeyValues::SetFloat(&kv, "duration", v19);
      v20 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v20, this, "modifier_chen_penitence", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Chen_Penitence::OnProjectileHit  (line 112, @0x0000000002b45b20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_chen/chen_penitence.vpcf", "Hero_Chen.PenitenceImpact"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Chen_Penitence::OnProjectileHit(
        CDOTA_Ability_Chen_Penitence *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v9; // rax

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1;
  v4 = &v3[*hTarget & 0x1FF];
  if ( v4 == 0 || *hTarget != v4->m_EHandle.m_Index )
    return 1;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_chen/chen_penitence.vpcf",
                 0,
                 m_pInstance,
                 0,
                 0);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Chen.PenitenceImpact", 0.0, 0, 0);
  }
  return 1;
}


// CDOTA_Modifier_Chen_Penitence::~CDOTA_Modifier_Chen_Penitence  (line 131, @0x0000000002b9b420, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Chen_Penitence::~CDOTA_Modifier_Chen_Penitence(
        CDOTA_Modifier_Chen_Penitence *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BACF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Chen_Penitence::~CDOTA_Modifier_Chen_Penitence  (line 131, @0x0000000002b9b440, libserver.so)  // inlines: ~CDOTA_Modifier_Chen_Penitence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Chen_Penitence::~CDOTA_Modifier_Chen_Penitence(
        CDOTA_Modifier_Chen_Penitence *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BACF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Chen_Penitence::IsDebuff  (line 136, @0x0000000002b8e9c0, libserver.so)
bool __fastcall CDOTA_Modifier_Chen_Penitence::IsDebuff(CDOTA_Modifier_Chen_Penitence *const this)
{
  return 1;
}


// CDOTA_Modifier_Chen_Penitence::GetEffectName  (line 140, @0x0000000002b8e9d0, libserver.so)
// strings: "particles/units/heroes/hero_chen/chen_penitence_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Chen_Penitence::GetEffectName(CDOTA_Modifier_Chen_Penitence *const this)
{
  return "particles/units/heroes/hero_chen/chen_penitence_debuff.vpcf";
}


// CDOTA_Modifier_Chen_Penitence::OnCreated  (line 157, @0x0000000002b6d620, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_taken"
void __fastcall CDOTA_Modifier_Chen_Penitence::OnCreated(CDOTA_Modifier_Chen_Penitence *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage_taken = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage_taken", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_damage_taken = 0;
}


// CDOTA_Modifier_Chen_Penitence::DeclareFunctions  (line 165, @0x0000000002b34830, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Chen_Penitence::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Chen_Penitence::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Chen_Penitence::DeclareFunctions(CDOTA_Modifier_Chen_Penitence *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Chen_Penitence::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[36].__pfn = (&stru_10 + 697);
  this->m_Functions[36].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Chen_Penitence::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Chen_Penitence::GetModifierMoveSpeedBonus_Percentage  (line 174, @0x0000000002b34880, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Chen_Penitence::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Chen_Penitence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Chen_Penitence::GetModifierIncomingDamage_Percentage  (line 181, @0x0000000002b348a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Chen_Penitence::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Chen_Penitence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_taken;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Chen_Penitence::OnTooltip  (line 188, @0x0000000002b348c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Chen_Penitence::OnTooltip(
        CDOTA_Modifier_Chen_Penitence *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_taken;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Chen_TestOfFaith::~CDOTA_Ability_Chen_TestOfFaith  (line 199, @0x0000000002ba09f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Chen_TestOfFaith::~CDOTA_Ability_Chen_TestOfFaith(
        CDOTA_Ability_Chen_TestOfFaith *const this)
{
  this->_vptr_IHandleEntity = &off_44BB050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Chen_TestOfFaith::~CDOTA_Ability_Chen_TestOfFaith  (line 199, @0x0000000002ba0a10, libserver.so)  // inlines: ~CDOTA_Ability_Chen_TestOfFaith
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Chen_TestOfFaith::~CDOTA_Ability_Chen_TestOfFaith(
        CDOTA_Ability_Chen_TestOfFaith *const this)
{
  this->_vptr_IHandleEntity = &off_44BB050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Chen_TestOfFaith::Schema_DynamicBinding  (line 201, @0x0000000002b8e9e0, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaith::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_TestOfFaith::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_TestOfFaith *const this)
{
  return CDOTA_Ability_Chen_TestOfFaith::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 201, @0x0000000002b8e9f0, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::DestructInstance  (line 201, @0x0000000002b8ea00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Chen_TestOfFaith>
void __fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::FreeInstance  (line 201, @0x0000000002b8ea20, libserver.so)
void __fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::CanAllocate  (line 201, @0x0000000002b8ea40, libserver.so)
bool __fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 201, @0x0000000002b8ea50, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaith::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_TestOfFaith::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::AllocateInstance  (line 201, @0x0000000002b97320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::ConstructInstance  (line 201, @0x0000000002b9ce40, libserver.so)  // inlines: CDOTA_Ability_Chen_TestOfFaith, Construct<CDOTA_Ability_Chen_TestOfFaith>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44BB050;
  }
  return p;
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002baa160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002baa180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal  (line 201, @0x0000000002bc68c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "chen_test_of_faith", "CDOTA_Ability_Chen_TestOfFaith"
// globals: `guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass, CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass, __dso_handle, CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo, CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo
CEntityClass *__cdecl CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass);
    CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass._vptr_CEntityClass = off_44BAFD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass);
    __cxa_atexit(
      CDOTA_Ability_Chen_TestOfFaith::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Chen_TestOfFaithClass != 0 )
    return &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass;
  if ( `guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo,
      "CDOTA_Ability_Chen_TestOfFaith",
      "chen_test_of_faith",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo);
  }
  CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass.m_pClassInfo = &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo;
  CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass.m_pBaseClassInfo = CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Chen_TestOfFaithClass = &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass;
  CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClassInfo.m_pClass = &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass;
  CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Chen_TestOfFaithClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Chen_TestOfFaith::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithClass;
}


// CDOTA_Ability_Chen_TestOfFaith::OnSpellStart  (line 216, @0x0000000002b66940, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, InState, IsInvulnerable, IsMagicImmune, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, RandomInt, SendOverheadEventMessage, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_chen/chen_cast_2.vpcf", "attach_attack1", "particles/units/heroes/hero_chen/chen_test_of_faith.vpcf", "damage_min", "damage_max", "Hero_Chen.TestOfFaith.Target"
void __fastcall CDOTA_Ability_Chen_TestOfFaith::OnSpellStart(CDOTA_Ability_Chen_TestOfFaith *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // r14
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  unsigned __int64 m_Value; // rax
  unsigned int LevelSpecialValue; // r13d
  unsigned int v13; // eax
  CDOTA_BaseNPC *v14; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        ParticleManager,
                        "particles/units/heroes/hero_chen/chen_cast_2.vpcf",
                        2,
                        Caster,
                        0,
                        0);
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v7, Caster, 0, v6, 5, "attach_attack1", vec3_invalid, 1);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v8, Caster);
    v9 = GetParticleManager();
    LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                        v9,
                        "particles/units/heroes/hero_chen/chen_test_of_faith.vpcf",
                        0,
                        v3,
                        0,
                        0);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, Caster);
    m_Value = v3->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0
      && !v3->m_bIsWaitingToSpawn.m_Value
      && (m_Value & 0x100) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 0);
      v13 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_max", -1, 0);
      flDamage = RandomInt(LevelSpecialValue, v13);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v3, flDamage, 0);
      v14 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v14, v3, this, flDamage, 4, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Chen.TestOfFaith.Target", 0.0, 0, 0);
    }
  }
}


// CDOTA_Ability_Chen_TestOfFaith::OnUpgrade  (line 249, @0x0000000002b37d50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "chen_test_of_faith_teleport"
void __fastcall CDOTA_Ability_Chen_TestOfFaith::OnUpgrade(CDOTA_Ability_Chen_TestOfFaith *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "chen_test_of_faith_teleport", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Chen_TestOfFaith::GetAbilityDamageToTargetOverInterval  (line 263, @0x0000000002b697d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_min", "damage_max"
__int64 __fastcall CDOTA_Ability_Chen_TestOfFaith::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Chen_TestOfFaith *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 1);
    return ((LevelSpecialValue + CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_max", -1, 1)) / 2);
  }
  return result;
}


// CDOTA_Ability_Chen_HolyPersuasion::~CDOTA_Ability_Chen_HolyPersuasion  (line 277, @0x0000000002bc3b70, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::~CDOTA_Ability_Chen_HolyPersuasion(
        CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  this->_vptr_IHandleEntity = &off_44BBB50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDominatedUnits);
  if ( (this->m_hDominatedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDominatedUnits.m_Memory),
        (this->m_hDominatedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDominatedUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Chen_HolyPersuasion::~CDOTA_Ability_Chen_HolyPersuasion  (line 277, @0x0000000002bc3fd0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Chen_HolyPersuasion, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::~CDOTA_Ability_Chen_HolyPersuasion(
        CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  this->_vptr_IHandleEntity = &off_44BBB50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDominatedUnits);
  if ( (this->m_hDominatedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDominatedUnits.m_Memory);
    if ( (this->m_hDominatedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDominatedUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Chen_HolyPersuasion::Schema_DynamicBinding  (line 279, @0x0000000002b8ea60, libserver.so)
// globals: CDOTA_Ability_Chen_HolyPersuasion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_HolyPersuasion::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  return CDOTA_Ability_Chen_HolyPersuasion::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 279, @0x0000000002b8ea70, libserver.so)
// globals: CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::DestructInstance  (line 279, @0x0000000002b8ea80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Chen_HolyPersuasion>
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::FreeInstance  (line 279, @0x0000000002b8eaa0, libserver.so)
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::CanAllocate  (line 279, @0x0000000002b8eac0, libserver.so)
bool __fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 279, @0x0000000002b8ead0, libserver.so)
// globals: CDOTA_Ability_Chen_HolyPersuasion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_HolyPersuasion::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::AllocateInstance  (line 279, @0x0000000002b97360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::ConstructInstance  (line 279, @0x0000000002ba8600, libserver.so)  // inlines: CDOTA_Ability_Chen_HolyPersuasion, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Chen_HolyPersuasion>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_44BBB50;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 279, @0x0000000002baa1b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 279, @0x0000000002baa1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal  (line 279, @0x0000000002bc6a10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Chen_HolyPersuasion"
// globals: `guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass, CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass, __dso_handle, CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo, CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass);
    CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass._vptr_CEntityClass = off_44BBAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass);
    __cxa_atexit(
      CDOTA_Ability_Chen_HolyPersuasion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Chen_HolyPersuasionClass != 0 )
    return &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass;
  if ( `guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo,
      "CDOTA_Ability_Chen_HolyPersuasion",
      "chen_holy_persuasion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo);
  }
  CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass.m_pClassInfo = &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo;
  CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass.m_pBaseClassInfo = CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Chen_HolyPersuasionClass = &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass;
  CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClassInfo.m_pClass = &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass;
  CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Chen_HolyPersuasionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Chen_HolyPersuasion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HolyPersuasionClass;
}


// CDOTA_Ability_Chen_HolyPersuasion::GetAssociatedSecondaryAbilities  (line 287, @0x0000000002b8eae0, libserver.so)
// strings: "chen_hand_of_god"
const char *__fastcall CDOTA_Ability_Chen_HolyPersuasion::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  return "chen_hand_of_god";
}


// CDOTA_Ability_Chen_HolyPersuasion::ModifyOrAppendCriteria  (line 296, @0x0000000002bad3f0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CBaseEntity::ModifyOrAppendCriteria, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CResponseCriteriaSet::AppendCriteria
// strings: "persuasion_target"
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::ModifyOrAppendCriteria(
        CDOTA_Ability_Chen_HolyPersuasion *const this,
        CResponseCriteriaSet *const set)
{
  CBaseEntity *CursorTarget; // rax
  unsigned __int16 v5; // dx
  int v6; // esi
  CDOTA_BaseNPC *m_pInstance; // r13
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && (CursorTarget[2].m_hEffectEntity.m_Value.m_Index & 1) == 0 )
  {
    if ( CursorTarget->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v5 = 0x7FFF;
      v6 = 0x7FFF;
    }
    else
    {
      v5 = CursorTarget->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v6 = v5;
    }
    m_pInstance = 0;
    v8 = (CursorTarget->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v6 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
          m_pInstance = v10->m_pInstance;
      }
    }
    if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
      CResponseCriteriaSet::AppendCriteria(set, "persuasion_target", "1", 1.0);
  }
}


// CDOTA_Ability_Chen_HolyPersuasion::YouForgotToImplementOrDeclareServerClass  (line 310, @0x0000000002b348e0, libserver.so)
int __fastcall CDOTA_Ability_Chen_HolyPersuasion::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  return 0;
}


// CDOTA_Ability_Chen_HolyPersuasion::GetServerClass  (line 310, @0x0000000002b4c160, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Chen_HolyPersuasion::GetServerClass(
        CDOTA_Ability_Chen_HolyPersuasion *const this)
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


// CDOTA_Ability_Chen_HolyPersuasion::CastFilterResult  (line 317, @0x0000000002b3a2a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, UnitFilter
int __fastcall CDOTA_Ability_Chen_HolyPersuasion::CastFilterResult(
        CDOTA_Ability_Chen_HolyPersuasion *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx
  CDOTA_BaseNPC *v6; // rax
  int v7; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = -!CDOTA_BaseNPC::HasScepter(Caster);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = UnitFilter(pTarget, 2, 2, (v5 & 0x200) + 131088, v6->m_iTeamNum.m_Value);
  if ( (*(pTarget->_vptr_IHandleEntity + 405))(pTarget) != 0 || (pTarget->m_iUnitType & 0x800) != 0 )
    return 23;
  else
    return v7;
}


// CDOTA_Ability_Chen_HolyPersuasion::GetCustomCastError  (line 336, @0x0000000002b348f0, libserver.so)
// strings: "#dota_hud_error_cannot_dominate", "#dota_hud_error_cant_cast_on_roshan"
const char *__fastcall CDOTA_Ability_Chen_HolyPersuasion::GetCustomCastError(
        CDOTA_Ability_Chen_HolyPersuasion *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_cannot_dominate";
  if ( pTarget->m_bCanBeDominated.m_Value )
    return "#dota_hud_error_cant_cast_on_roshan";
  return result;
}


// CDOTA_Ability_Chen_HolyPersuasion::OnSpellStart  (line 346, @0x0000000002b86560, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetLevel, GetLevelSpecialValueFor<int>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, IsAncient, IsConsideredHero, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator->, operator==<CBaseEntity>, operator[]
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance* (26 total)
// strings: "chen_hand_of_god", "particles/units/heroes/hero_chen/chen_holy_persuasion.vpcf", "particles/units/heroes/hero_chen/chen_cast_3.vpcf", "attach_attack1", "Hero_Chen.HolyPersuasionCast", "Hero_Chen.HolyPersuasionEnemy" (10 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::OnSpellStart(CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // r13
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  char v17; // al
  int v18; // r12d
  int v19; // r13d
  __int64 v20; // r14
  int v21; // esi
  CHandle<CBaseEntity> *v22; // rdx
  uint32 m_Index; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CEntityInstance *v27; // rax
  int v28; // ecx
  unsigned __int16 v29; // dx
  int v30; // edi
  __int16 v31; // ax
  int v32; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  int v34; // eax
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CEntityIdentity *v37; // rax
  CEntityIdentity *v38; // rax
  CEntityInstance *v39; // rax
  int v40; // r13d
  void (__fastcall *v41)(CBaseEntity *, _QWORD); // r12
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  int v44; // eax
  void (__fastcall *v45)(CBaseEntity *, CDOTA_BaseNPC *); // r12
  CDOTA_BaseNPC *v46; // rax
  float v47; // xmm1_4
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v51; // cx
  __int64 m_Size; // r12
  int v53; // eax
  int v54; // edx
  CHandle<CBaseEntity> *m_pMemory; // rax
  CHandle<CBaseEntity> *v56; // rax
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *v58; // rax
  CDOTABaseAbility *v59; // rax
  CDOTA_BaseNPC *v60; // rax
  CDOTA_ParticleManager *v61; // rax
  CDOTA_ParticleManager *v62; // rax
  int v63; // r12d
  CHandle<CBaseEntity> *v64; // rax
  uint32 v65; // ecx
  __int16 v66; // dx
  CEntityIdentity *v67; // rax
  CEntityIdentity *v68; // rax
  CDOTA_BaseNPC *v69; // rdi
  int v70; // esi
  CHandle<CBaseEntity> *v71; // [rsp+18h] [rbp-78h]
  vec_t vecFallbackPositiona; // [rsp+20h] [rbp-70h]
  CDOTA_BaseNPC *vecFallbackPosition; // [rsp+20h] [rbp-70h]
  int nFXIndex; // [rsp+28h] [rbp-68h]
  int nMaxAncients; // [rsp+2Ch] [rbp-64h]
  __int16 v76; // [rsp+30h] [rbp-60h]
  int v77; // [rsp+30h] [rbp-60h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+58h] [rbp-38h]
  Vector v80; // 0:xmm0_8.8,8:xmm1_4.4

  v79 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "chen_hand_of_god", 0);
    if ( AbilityByName != 0 )
      nMaxAncients = AbilityByName->m_iLevel.m_Value;
    else
      nMaxAncients = 0;
    ParticleManager = GetParticleManager();
    nFXIndex = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_chen/chen_holy_persuasion.vpcf",
                 2,
                 0,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v8, nFXIndex, 0, *&AbsOrigin->x, AbsOrigin->z);
    v9 = GetParticleManager();
    v10 = *&vec3_invalid.x;
    vecFallbackPositiona = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v9, nFXIndex, 1, v3, 1, 0, vec3_invalid, 1);
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = GetParticleManager();
    LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                     v12,
                     "particles/units/heroes/hero_chen/chen_cast_3.vpcf",
                     2,
                     v11,
                     0,
                     0);
    v13 = CDOTABaseAbility::GetCaster(this);
    v14 = GetParticleManager();
    *&v80.x = v10;
    v80.z = vecFallbackPositiona;
    CDOTA_ParticleManager::SetParticleControlEnt(v14, v11, 0, v13, 5, "attach_attack1", v80, 1);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v15, v11);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_Chen.HolyPersuasionCast", 0.0, 0, 0);
    if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 3) == 0 )
    {
      v17 = BYTE1(v3[2].m_DamageModifiers.m_LastAlloc.index);
      if ( v17 == 0 || nMaxAncients > 0 )
      {
        v18 = this->m_hDominatedUnits.m_Size - 1;
        if ( v18 < 0 )
        {
          v19 = 0;
        }
        else
        {
          v19 = 0;
          v20 = v18;
          do
          {
            while ( 1 )
            {
              v22 = &this->m_hDominatedUnits.m_Memory.m_pMemory[v20];
              m_Index = v22->m_Index;
              if ( v22->m_Index + 2 > 1 )
              {
                v24 = v22->m_Index;
                v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v22->m_Index) >> 9) & 0x3F];
                if ( v25 != 0 )
                {
                  v26 = &v25[v24 & 0x1FF];
                  if ( v26 != 0
                    && m_Index == v26->m_EHandle.m_Index
                    && v26->m_pInstance != 0
                    && (*(v26->m_pInstance->_vptr_IHandleEntity + 139))(v26->m_pInstance) != 0 )
                  {
                    vecFallbackPosition = CDOTABaseAbility::GetCaster(this);
                    v71 = &this->m_hDominatedUnits.m_Memory.m_pMemory[v20];
                    v27 = CEntityHandle::operator CEntityInstance *(v71);
                    v28 = HIDWORD(v27[11].m_pEntity) >> 15;
                    if ( HIDWORD(v27[11].m_pEntity) == -1 )
                    {
                      v29 = 0x7FFF;
                      v30 = 0x7FFF;
                    }
                    else
                    {
                      v29 = WORD2(v27[11].m_pEntity) & 0x7FFF;
                      v30 = v29;
                    }
                    v31 = v29 | v76 & 0x8000;
                    v32 = v28;
                    m_pInstance = 0;
                    v34 = (v32 << 15) | v31 & 0x7FFF;
                    v76 = v34;
                    if ( (v34 + 2) > 1 )
                    {
                      v35 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v30 >> 9];
                      if ( v35 != 0 )
                      {
                        v36 = &v35[v30 & 0x1FF];
                        if ( v36 != 0 && v34 == v36->m_EHandle.m_Index )
                          m_pInstance = v36->m_pInstance;
                      }
                    }
                    if ( vecFallbackPosition == m_pInstance )
                      break;
                  }
                }
              }
              v21 = v18--;
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                &this->m_hDominatedUnits,
                v21);
              --v20;
              if ( v18 == -1 )
                goto LABEL_30;
            }
            if ( v71->m_Index + 2 <= 1
              || (v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v71->m_Index) >> 9) & 0x3F]) == 0
              || (v38 = &v37[v71->m_Index & 0x1FF]) == 0
              || v71->m_Index != v38->m_EHandle.m_Index
              || (v39 = v38->m_pInstance) == 0
              || BYTE3(v39[7]._vptr_IHandleEntity) == 0 )
            {
              v39 = 0;
            }
            v19 -= (BYTE5(v39[45]._vptr_IHandleEntity) == 0) - 1;
            --v18;
            --v20;
          }
          while ( v18 != -1 );
LABEL_30:
          v17 = BYTE1(v3[2].m_DamageModifiers.m_LastAlloc.index);
        }
        v40 = v19 - ((v17 == 0) - 1);
        Purge(v3, this, 6);
        CDOTA_BaseNPC::Interrupt(v3);
        v41 = *(v3->_vptr_IHandleEntity + 70);
        v42 = CDOTABaseAbility::GetCaster(this);
        v41(v3, v42->m_iTeamNum.m_Value);
        CDOTA_BaseNPC::ResetPlayerControls(v3);
        v43 = CDOTABaseAbility::GetCaster(this);
        v44 = (*(v43->_vptr_IHandleEntity + 414))(v43);
        CDOTA_BaseNPC::SetControllableByPlayer(v3, v44, 0);
        v45 = *(v3->_vptr_IHandleEntity + 40);
        v46 = CDOTABaseAbility::GetCaster(this);
        v45(v3, v46);
        (*(v3->_vptr_IHandleEntity + 389))(v3);
        CDOTA_BaseNPC::SetMana(v3, *&v3[2].m_DamageModifiers.m_Head, v47);
        CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Chen.HolyPersuasionEnemy", 0.0, 0, 0);
        KeyValues::KeyValues(&kv, "modifier_chen_holy_persuasion");
        v48 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v48, this, "modifier_chen_holy_persuasion", &kv, 0);
        v49 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v49, this, "modifier_dominated", &kv, 0);
        v77 = -1;
        m_pEntity = v3->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v51 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v51 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v77 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v51 & 0x7FFF;
        }
        m_Size = this->m_hDominatedUnits.m_Size;
        v53 = this->m_hDominatedUnits.m_Size;
        if ( m_Size == this->m_hDominatedUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hDominatedUnits.m_Memory, 1);
          v53 = this->m_hDominatedUnits.m_Size;
        }
        v54 = v53 + 1;
        m_pMemory = this->m_hDominatedUnits.m_Memory.m_pMemory;
        this->m_hDominatedUnits.m_Size = v54;
        v56 = &m_pMemory[m_Size];
        if ( v56 != 0 )
        {
          v56->m_Index = v77;
          v54 = this->m_hDominatedUnits.m_Size;
        }
        if ( v54 > 0 && nMaxAncients < v40 )
        {
          v63 = 0;
          do
          {
            v64 = &this->m_hDominatedUnits.m_Memory.m_pMemory[v63];
            v65 = v64->m_Index;
            if ( v64->m_Index + 2 > 1 )
            {
              v66 = v64->m_Index;
              v67 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v64->m_Index) >> 9) & 0x3F];
              if ( v67 != 0 )
              {
                v68 = &v67[v66 & 0x1FF];
                if ( v68 != 0 && v65 == v68->m_EHandle.m_Index )
                {
                  v69 = v68->m_pInstance;
                  if ( v68->m_pInstance != 0 && v69->m_bIsDOTANPC && v69->m_bIsAncient.m_Value )
                  {
                    CDOTA_BaseNPC::ForceKill(v69, 0);
                    v70 = v63--;
                    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(
                      &this->m_hDominatedUnits,
                      v70);
                    --v40;
                  }
                }
              }
            }
            ++v63;
          }
          while ( this->m_hDominatedUnits.m_Size > v63 && nMaxAncients < v40 );
        }
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_units", -1, 0);
        v58 = CDOTABaseAbility::GetCaster(this);
        v59 = CDOTA_BaseNPC::FindAbilityByName(v58, "special_bonus_unique_chen_1", 0);
        if ( v59 != 0 && v59->m_iLevel.m_Value > 0 )
          LevelSpecialValue = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(v59, "value", 1, 1) + LevelSpecialValue);
        if ( this->m_hDominatedUnits.m_Size > LevelSpecialValue
          && (v60 = CEntityHandle::operator CEntityInstance *(this->m_hDominatedUnits.m_Memory.m_pMemory)) != 0
          && v60->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::ForceKill(v60, 0);
          KeyValues::~KeyValues(&kv);
        }
        else
        {
          KeyValues::~KeyValues(&kv);
        }
      }
    }
    v61 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v61, nFXIndex, 2, *&vec3_origin.x, vec3_origin.z);
    v62 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v62, nFXIndex);
  }
}


// CDOTA_Ability_Chen_HolyPersuasion::OnUnStolen  (line 456, @0x0000000002b51d50, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::OnUnStolen(CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
  CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated(this);
}


// CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated  (line 467, @0x0000000002b51c90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Ability_Chen_HolyPersuasion::OnUnStolen, CDOTA_Unit_Hero_Chen::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated(CDOTA_Ability_Chen_HolyPersuasion *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  v2 = 0;
  for ( i = 0; this->m_hDominatedUnits.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &this->m_hDominatedUnits.m_Memory.m_pMemory[v2];
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
            if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v2;
      if ( this->m_hDominatedUnits.m_Size <= i )
        return;
    }
    ++v2;
    CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
  }
}


// CDOTA_Modifier_Chen_HolyPersuasion::~CDOTA_Modifier_Chen_HolyPersuasion  (line 485, @0x0000000002b9b3d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Chen_HolyPersuasion::~CDOTA_Modifier_Chen_HolyPersuasion(
        CDOTA_Modifier_Chen_HolyPersuasion *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BC610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Chen_HolyPersuasion::~CDOTA_Modifier_Chen_HolyPersuasion  (line 485, @0x0000000002b9b3f0, libserver.so)  // inlines: ~CDOTA_Modifier_Chen_HolyPersuasion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Chen_HolyPersuasion::~CDOTA_Modifier_Chen_HolyPersuasion(
        CDOTA_Modifier_Chen_HolyPersuasion *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BC610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Chen_HolyPersuasion::OnCreated  (line 506, @0x0000000002b6e0a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, SetBaseMaxHealth
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Heal
// strings: "health_min"
void __fastcall CDOTA_Modifier_Chen_HolyPersuasion::OnCreated(
        CDOTA_Modifier_Chen_HolyPersuasion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v5; // eax
  int health_min; // edx
  int v7; // r12d
  CDOTA_BaseNPC *v8; // rax
  int v9; // eax
  __m128i v10; // xmm1
  CDOTABaseAbility *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  float health_bonus; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_min = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_min", -1, 0);
  else
    this->health_min = 0;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
    health_min = this->health_min;
    if ( v5 >= health_min )
      health_min = v5;
    this->new_max = health_min;
    v7 = health_min;
    v8 = CDOTA_Buff::GetParent(this);
    v9 = (*(v8->_vptr_IHandleEntity + 156))(v8);
    *v10.m128i_i32 = this->new_max;
    this->health_bonus = v7 - v9;
    LODWORD(CDOTA_Buff::GetParent(this)->m_flBaseMaxHealth) = _mm_cvtsi128_si32(v10);
    v11 = CDOTA_Buff::GetAbility(this);
    health_bonus = this->health_bonus;
    v12 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v12, health_bonus, v11, 0, 1);
  }
}


// CDOTA_Modifier_Chen_HolyPersuasion::DeclareFunctions  (line 522, @0x0000000002b34910, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Chen_HolyPersuasion::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Chen_HolyPersuasion::DeclareFunctions(CDOTA_Modifier_Chen_HolyPersuasion *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Chen_HolyPersuasion::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
}


// CDOTA_Modifier_Chen_HolyPersuasion::GetModifierHealthBonus  (line 529, @0x0000000002b34930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Chen_HolyPersuasion::GetModifierHealthBonus(
        CDOTA_Modifier_Chen_HolyPersuasion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->health_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::~CDOTA_Ability_Chen_TestOfFaithTeleport  (line 540, @0x0000000002ba0a40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::~CDOTA_Ability_Chen_TestOfFaithTeleport(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_44BC970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::~CDOTA_Ability_Chen_TestOfFaithTeleport  (line 540, @0x0000000002ba0a60, libserver.so)  // inlines: ~CDOTA_Ability_Chen_TestOfFaithTeleport
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::~CDOTA_Ability_Chen_TestOfFaithTeleport(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  this->_vptr_IHandleEntity = &off_44BC970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::Schema_DynamicBinding  (line 542, @0x0000000002b8eaf0, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaithTeleport::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  return CDOTA_Ability_Chen_TestOfFaithTeleport::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 542, @0x0000000002b8eb00, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::DestructInstance  (line 542, @0x0000000002b8eb10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Chen_TestOfFaithTeleport>
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::FreeInstance  (line 542, @0x0000000002b8eb30, libserver.so)
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::CanAllocate  (line 542, @0x0000000002b8eb50, libserver.so)
bool __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 542, @0x0000000002b8eb60, libserver.so)
// globals: CDOTA_Ability_Chen_TestOfFaithTeleport::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_TestOfFaithTeleport::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::AllocateInstance  (line 542, @0x0000000002b973a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::ConstructInstance  (line 542, @0x0000000002b9ce70, libserver.so)  // inlines: CDOTA_Ability_Chen_TestOfFaithTeleport, Construct<CDOTA_Ability_Chen_TestOfFaithTeleport>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44BC970;
  }
  return p;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 542, @0x0000000002baa200, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 542, @0x0000000002baa220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal  (line 542, @0x0000000002bc6b60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "chen_test_of_faith_teleport", "CDOTA_Ability_Chen_TestOfFaithTeleport"
// globals: `guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass, CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass, __dso_handle, CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo, CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo
CEntityClass *__cdecl CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass);
    CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass._vptr_CEntityClass = off_44BC8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass);
    __cxa_atexit(
      CDOTA_Ability_Chen_TestOfFaithTeleport::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Chen_TestOfFaithTeleportClass != 0 )
    return &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass;
  if ( `guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo,
      "CDOTA_Ability_Chen_TestOfFaithTeleport",
      "chen_test_of_faith_teleport",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo);
  }
  CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass.m_pClassInfo = &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo;
  CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass.m_pBaseClassInfo = CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Chen_TestOfFaithTeleportClass = &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass;
  CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClassInfo.m_pClass = &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass;
  CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Chen_TestOfFaithTeleportClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Chen_TestOfFaithTeleport::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_TestOfFaithTeleportClass;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::GetPotentialAbuseType  (line 554, @0x0000000002b8eb70, libserver.so)
EAbilityAbuseType __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::GetPotentialAbuseType(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  return EAbilityAbuseType::k_EAbilityAbuseType_Chen_Test_Of_Faith;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::YouForgotToImplementOrDeclareServerClass  (line 558, @0x0000000002b34950, libserver.so)
int __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  return 0;
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::GetServerClass  (line 558, @0x0000000002b4c560, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::GetServerClass(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
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


// CDOTA_Ability_Chen_TestOfFaithTeleport::OnSpellStart  (line 568, @0x0000000002b72960, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, LookupEntity, Set, SetBool, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (21 total)
// strings: "hero_teleport_delay", "modifier_chen_test_of_faith_teleport", "tochen", "particles/units/heroes/hero_chen/chen_teleport_cast.vpcf", "attach_attack1", "Hero_Chen.TestOfFaith.Cast" (7 total)
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::OnSpellStart(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  unsigned __int16 v4; // dx
  int v5; // esi
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r14
  CDOTA_BaseNPC *v16; // r15
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rbx
  unsigned __int8 m_Value; // r14
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *EntityByClassname; // rax
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *Fountain; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v35; // cx
  CDOTA_BaseNPC *pEnt; // [rsp+8h] [rbp-78h]
  int iCasterPlayerID; // [rsp+10h] [rbp-70h]
  int iIndex; // [rsp+14h] [rbp-6Ch]
  EHANDLE hTarget; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    if ( CursorTarget == CDOTABaseAbility::GetCaster(this) )
    {
      v20 = 0;
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      iCasterPlayerID = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      while ( 1 )
      {
        EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v20, "npc_dota*");
        v20 = EntityByClassname;
        if ( EntityByClassname == 0 )
          break;
        if ( m_Value == EntityByClassname->m_iTeamNum.m_Value
          && EntityByClassname->m_bIsDOTANPC
          && SLOBYTE(EntityByClassname[2].m_hEffectEntity.m_Value.m_Index) < 0
          && iCasterPlayerID == (*(EntityByClassname->_vptr_IHandleEntity + 414))(EntityByClassname)
          && (*(v20->_vptr_IHandleEntity + 405))(v20) == 0 )
        {
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_teleport_delay", -1, 0);
          KeyValues::KeyValues(&kv, "modifier_chen_test_of_faith_teleport");
          KeyValues::SetFloat(&kv, "duration", v24);
          KeyValues::SetInt(&kv, "tochen", 1);
          v25 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v20, v25, this, "modifier_chen_test_of_faith_teleport", &kv, 0);
          v26 = CDOTABaseAbility::GetCaster(this);
          ParticleManager = GetParticleManager();
          iIndex = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_chen/chen_teleport_cast.vpcf",
                     2,
                     v26,
                     0,
                     0);
          v28 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
          pEnt = CDOTABaseAbility::GetCaster(this);
          v30 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v30, iIndex, 0, pEnt, 5, "attach_attack1", *AbsOrigin, 1);
          v31 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v31, iIndex);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
    else
    {
      if ( v3->m_hOwnerEntity.m_Value.m_Index == -1 )
      {
        v4 = 0x7FFF;
        v5 = 0x7FFF;
      }
      else
      {
        v4 = v3->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
        v5 = v4;
      }
      m_pInstance = 0;
      v7 = (v3->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
      hTarget.m_Index = v7;
      if ( v7 + 2 > 1 )
      {
        v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
        if ( v8 != 0 )
        {
          v9 = &v8[v5 & 0x1FF];
          if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
        }
      }
      if ( CDOTABaseAbility::GetCaster(this) == m_pInstance )
      {
        v32 = CDOTABaseAbility::GetCaster(this);
        Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v32->m_iTeamNum.m_Value);
        if ( Fountain != 0 )
        {
          FindClearSpaceForUnitAroundEntity(Fountain, v3);
          CDOTA_BaseNPC::Interrupt(v3);
          hTarget.m_Index = -1;
          m_pEntity = v3->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v35 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v35 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v35 & 0x7FFF;
          }
          CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
        }
      }
      else
      {
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_teleport_delay", -1, 0);
        KeyValues::KeyValues(&kv, "modifier_chen_test_of_faith_teleport");
        KeyValues::SetFloat(&kv, "duration", v10);
        KeyValues::SetInt(&kv, "tochen", 0);
        v11 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v11, this, "modifier_chen_test_of_faith_teleport", &kv, 0);
        v12 = CDOTABaseAbility::GetCaster(this);
        v13 = GetParticleManager();
        LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                         v13,
                         "particles/units/heroes/hero_chen/chen_teleport_cast.vpcf",
                         2,
                         v12,
                         0,
                         0);
        v14 = CDOTABaseAbility::GetCaster(this);
        v15 = CBaseEntity::GetAbsOrigin(v14);
        v16 = CDOTABaseAbility::GetCaster(this);
        v17 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v17, v12, 0, v16, 5, "attach_attack1", *v15, 1);
        v18 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v18, v12);
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_Chen.TestOfFaith.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::CastFilterResult  (line 635, @0x0000000002b3a440, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::CastFilterResult, CDOTABaseAbility::GetCaster, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
int __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::CastFilterResult(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this,
        CDOTA_BaseNPC *pTarget)
{
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Caster; // rax

  if ( (pTarget->m_iUnitType & 1) != 0
    && (m_Value = pTarget->m_iTeamNum.m_Value) == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
    && (Caster = CDOTABaseAbility::GetCaster(this),
        CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
          g_pDOTAPlayerResource,
          pTarget->m_nControllingPlayerID,
          Caster->m_nControllingPlayerID)) )
  {
    return 25;
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
}


// CDOTA_Ability_Chen_TestOfFaithTeleport::GetCustomCastError  (line 651, @0x0000000002b36c40, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::GetCustomCastError(
        CDOTA_Ability_Chen_TestOfFaithTeleport *const this,
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


// CDOTA_Ability_Chen_TestOfFaithTeleport::OnUpgrade  (line 661, @0x0000000002b37da0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "chen_test_of_faith"
void __fastcall CDOTA_Ability_Chen_TestOfFaithTeleport::OnUpgrade(CDOTA_Ability_Chen_TestOfFaithTeleport *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "chen_test_of_faith", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::~CDOTA_Modifier_Chen_TestOfFaith_Teleport  (line 676, @0x0000000002b9b380, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::~CDOTA_Modifier_Chen_TestOfFaith_Teleport(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BD430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::~CDOTA_Modifier_Chen_TestOfFaith_Teleport  (line 676, @0x0000000002b9b3a0, libserver.so)  // inlines: ~CDOTA_Modifier_Chen_TestOfFaith_Teleport
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::~CDOTA_Modifier_Chen_TestOfFaith_Teleport(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this)
{
  this->_vptr_CDOTA_Buff = &off_44BD430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::GetEffectName  (line 690, @0x0000000002b8eb80, libserver.so)
// strings: "particles/units/heroes/hero_chen/chen_teleport.vpcf"
const char *__fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::GetEffectName(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this)
{
  return "particles/units/heroes/hero_chen/chen_teleport.vpcf";
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnCreated  (line 702, @0x0000000002b37160, libserver.so)  // inlines: GetBool
// calls: KeyValues::GetInt, CDOTA_Buff::StartIntervalThink
// strings: "tochen"
void __fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnCreated(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this,
        KeyValues *pKV)
{
  bool v3; // zf
  int (**vptr_CDOTA_Buff)(...); // rax
  float v5; // xmm0_4
  float v6; // xmm1_4

  v3 = KeyValues::GetInt(pKV, "tochen", 0) == 0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->bToChen = !v3;
  v5 = (vptr_CDOTA_Buff[31])(this);
  CDOTA_Buff::StartIntervalThink(this, v5, v6);
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink  (line 714, @0x0000000002b5e660, libserver.so)  // inlines: CEntityHandle, CEntityIndex, CHandle, CModifierParams, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, ClearAlertTarget, EmitSound_t, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Purge, RemoveAll, Set, SetUnit, SoundEventGuid_t, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTA_Buff::GetParent, CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CBaseEntity::EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControlEnt (28 total)
// strings: "Hero_Chen.TeleportOut", "particles/units/heroes/hero_chen/chen_teleport_flash.vpcf", "modifier_life_stealer_infest", "modifier_life_stealer_assimilate", "Hero_Chen.TeleportIn"
void __fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnIntervalThink(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Fountain; // r15
  float v5; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  const Vector *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTALocomotor *v14; // rax
  CEntityIdentity *m_pEntity; // rax
  int v16; // edx
  __int16 v17; // cx
  CEntityIdentity *v18; // rax
  __int16 v19; // cx
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *v22; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTAHLTVDirector *v25; // rax
  bool v26; // zf
  CDOTA_BaseNPC *Caster; // rax
  int nFX2Index; // [rsp+1Ch] [rbp-284h]
  int nFX2Indexa; // [rsp+1Ch] [rbp-284h]
  EHANDLE hTarget; // [rsp+20h] [rbp-280h] BYREF
  Vector vPos; // [rsp+30h] [rbp-270h] BYREF
  EmitSound_t ep; // [rsp+40h] [rbp-260h] BYREF
  CModifierParams params; // [rsp+A0h] [rbp-200h] BYREF
  CPASAttenuationFilter filter; // [rsp+130h] [rbp-170h] BYREF
  unsigned __int64 v35; // [rsp+268h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  v3 = Parent;
  if ( Parent != 0 && (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v3->m_iTeamNum.m_Value);
    if ( Fountain != 0 )
    {
      vPos = *CBaseEntity::GetAbsOrigin(v3);
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v5);
      ep.m_pSoundName = "Hero_Chen.TeleportOut";
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
      ep.m_pOrigin = &vPos;
      CBaseEntity::EmitSound(&filter, 0, &ep);
      ParticleManager = GetParticleManager();
      nFX2Index = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_chen/chen_teleport_flash.vpcf",
                    2,
                    0,
                    0,
                    0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
      v8 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v8, nFX2Index, 0, *&AbsOrigin->x, AbsOrigin->z);
      v9 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v9, nFX2Index);
      CBaseEntity::GetAbsOrigin(v3);
      v10 = GetParticleManager();
      nFX2Indexa = CDOTA_ParticleManager::CreateParticle(
                     v10,
                     "particles/units/heroes/hero_chen/chen_teleport_flash.vpcf",
                     2,
                     0,
                     0,
                     0);
      v11 = CBaseEntity::GetAbsOrigin(v3);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v12, nFX2Indexa, 0, v3, 0, 0, *v11, 1);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v13, nFX2Indexa);
      CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_life_stealer_infest");
      CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_life_stealer_assimilate");
      v14 = (*(v3->_vptr_IHandleEntity + 376))(v3);
      CDOTALocomotor::InterruptMotionControllers(v14, 0);
      params.fOriginalDamage = 0.0;
      params.nActivity = -1;
      params.bTooltip = 0;
      params.nTooltipParam = 0;
      params.bIgnoreInvis = 0;
      params.bNoCooldown = 0;
      params.bReincarnate = 0;
      params.bDoNotConsume = 0;
      params.fDistance = 0.0;
      params.inflictor.m_Index = -1;
      params.nDamageflags = 0;
      params.nDamageCategory = 0;
      memset(&params.pOrb, 0, 24);
      params.bCraniumBasherTested = 0;
      params.bHeartRegenApplied = 0;
      params.bDiffusalApplied = 0;
      params.bChainLightningConsidered = 0;
      params.bSuppressDamage = 0;
      params.bRangedAttack = 0;
      params.nPlayerids_stick = 0;
      params.hattacker.m_Index = -1;
      params.htarget.m_Index = -1;
      params.hunit.m_Index = -1;
      params.ability.m_Index = -1;
      m_pEntity = v3->m_pEntity;
      params.fDamage = 0.0;
      if ( m_pEntity != 0 )
      {
        v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v17 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(params.hunit.m_Index) = v17 | params.hunit.m_Index & 0x8000;
        params.hunit.m_Index = (v16 << 15) | params.hunit.m_Index & 0x7FFF;
      }
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TELEPORTED, &params);
      if ( this->bToChen )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        FindClearRandomPositionAroundUnit(v3, Caster, 75);
      }
      else
      {
        FindClearSpaceForUnitAroundEntity(Fountain, v3);
      }
      hTarget.m_Index = -1;
      v18 = v3->m_pEntity;
      if ( v18 != 0 )
      {
        v19 = 0x7FFF;
        if ( v18->m_EHandle.m_Index != -1 )
          v19 = v18->m_EHandle.m_Index & 0x7FFF;
        hTarget.m_Index = (((v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1)) << 15) | v19 & 0x7FFF;
      }
      CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
      CDOTA_BaseNPC::Interrupt(v3);
      v20 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v20, "Hero_Chen.TeleportIn", 0.0, 0, 0);
      v21 = CDOTA_Buff::GetParent(this);
      hTarget.m_Index = -1;
      if ( v21 != 0 )
      {
        v22 = v21->m_pEntity;
        if ( v22 != 0 )
        {
          v23 = (v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1);
          v24 = 0x7FFF;
          if ( v22->m_EHandle.m_Index != -1 )
            v24 = v22->m_EHandle.m_Index & 0x7FFF;
          LOWORD(hTarget.m_Index) = v24 | hTarget.m_Index & 0x8000;
          hTarget.m_Index = (v23 << 15) | hTarget.m_Index & 0x7FFF;
        }
      }
      v25 = DOTAHLTVDirector();
      CDOTAHLTVDirector::TryToGenerateTeleportEvent(v25, &hTarget);
      v26 = (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->m_hAlertTarget.m_Index = -1;
      ep.m_UtlVecSoundOrigin.m_Size = 0;
      if ( v26 )
      {
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
        if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnDestroy  (line 780, @0x0000000002b34960, libserver.so)
void __fastcall CDOTA_Modifier_Chen_TestOfFaith_Teleport::OnDestroy(
        CDOTA_Modifier_Chen_TestOfFaith_Teleport *const this)
{
  ;
}


// CDOTA_Ability_Chen_HandOfGod::~CDOTA_Ability_Chen_HandOfGod  (line 793, @0x0000000002ba0a90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Chen_HandOfGod::~CDOTA_Ability_Chen_HandOfGod(CDOTA_Ability_Chen_HandOfGod *const this)
{
  this->_vptr_IHandleEntity = &off_44BD790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Chen_HandOfGod::~CDOTA_Ability_Chen_HandOfGod  (line 793, @0x0000000002ba0ab0, libserver.so)  // inlines: ~CDOTA_Ability_Chen_HandOfGod
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Chen_HandOfGod::~CDOTA_Ability_Chen_HandOfGod(CDOTA_Ability_Chen_HandOfGod *const this)
{
  this->_vptr_IHandleEntity = &off_44BD790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Chen_HandOfGod::Schema_DynamicBinding  (line 795, @0x0000000002b8eb90, libserver.so)
// globals: CDOTA_Ability_Chen_HandOfGod::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_HandOfGod::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_HandOfGod *const this)
{
  return CDOTA_Ability_Chen_HandOfGod::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 795, @0x0000000002b8eba0, libserver.so)
// globals: CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::DestructInstance  (line 795, @0x0000000002b8ebb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Chen_HandOfGod>
void __fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::FreeInstance  (line 795, @0x0000000002b8ebd0, libserver.so)
void __fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::CanAllocate  (line 795, @0x0000000002b8ebf0, libserver.so)
bool __fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 795, @0x0000000002b8ec00, libserver.so)
// globals: CDOTA_Ability_Chen_HandOfGod::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Chen_HandOfGod::s_pSchemaBinding;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::AllocateInstance  (line 795, @0x0000000002b973e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::ConstructInstance  (line 795, @0x0000000002b9cea0, libserver.so)  // inlines: CDOTA_Ability_Chen_HandOfGod, Construct<CDOTA_Ability_Chen_HandOfGod>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44BD790;
  }
  return p;
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 795, @0x0000000002baa250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 795, @0x0000000002baa270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal  (line 795, @0x0000000002bc6cb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "chen_hand_of_god", "CDOTA_Ability_Chen_HandOfGod"
// globals: `guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass, CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass, __dso_handle, CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo, CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo
CEntityClass *__cdecl CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass);
    CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass._vptr_CEntityClass = off_44BD710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass);
    __cxa_atexit(
      CDOTA_Ability_Chen_HandOfGod::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Chen_HandOfGodClass != 0 )
    return &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass;
  if ( `guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo,
      "CDOTA_Ability_Chen_HandOfGod",
      "chen_hand_of_god",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo);
  }
  CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass.m_pClassInfo = &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo;
  CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass.m_pBaseClassInfo = CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Chen_HandOfGodClass = &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass;
  CDOTA_Ability_Chen_HandOfGod::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClassInfo.m_pClass = &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass;
  CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Chen_HandOfGodClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Chen_HandOfGod::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Chen_HandOfGodClass;
}


// CDOTA_Ability_Chen_HandOfGod::IsHiddenWhenStolen  (line 801, @0x0000000002b8ec10, libserver.so)
bool __fastcall CDOTA_Ability_Chen_HandOfGod::IsHiddenWhenStolen(CDOTA_Ability_Chen_HandOfGod *const this)
{
  return 1;
}


// CDOTA_Ability_Chen_HandOfGod::GetConceptRecipientType  (line 803, @0x0000000002b8ec20, libserver.so)
int __fastcall CDOTA_Ability_Chen_HandOfGod::GetConceptRecipientType(CDOTA_Ability_Chen_HandOfGod *const this)
{
  return 2;
}


// CDOTA_Ability_Chen_HandOfGod::YouForgotToImplementOrDeclareServerClass  (line 806, @0x0000000002b34970, libserver.so)
int __fastcall CDOTA_Ability_Chen_HandOfGod::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Chen_HandOfGod *const this)
{
  return 0;
}


// CDOTA_Ability_Chen_HandOfGod::GetServerClass  (line 806, @0x0000000002b4bbe0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Chen_HandOfGod::GetServerClass(CDOTA_Ability_Chen_HandOfGod *const this)
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


// CDOTA_Ability_Chen_HandOfGod::OnSpellStart  (line 815, @0x0000000002b77170, libserver.so)  // inlines: Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::Heal, SendOverheadEventMessage, CDOTA_BaseNPC::UnitEmitSound (17 total)
// strings: "special_bonus_unique_chen_2", "particles/units/heroes/hero_chen/chen_cast_4.vpcf", "attach_attack1", "particles/units/heroes/hero_chen/chen_hand_of_god.vpcf", "Hero_Chen.HandOfGodHealHero", "npc_dota*" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Chen_HandOfGod::OnSpellStart(CDOTA_Ability_Chen_HandOfGod *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v6; // r12
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  __int64 v11; // r12
  int v12; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r15
  CDOTA_BaseNPC *v19; // rax
  CDOTAPlayer *v20; // rax
  CDOTAPlayer *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *v26; // rax
  int v27; // r15d
  CBaseEntity *EntityByClassname; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v33; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm3_4
  CDOTA_BaseNPC *v37; // rax
  int nEnemyTeam; // [rsp+Ch] [rbp-44h]
  char iIndex; // [rsp+10h] [rbp-40h]
  int iIndexa; // [rsp+10h] [rbp-40h]
  int iIndexb; // [rsp+10h] [rbp-40h]
  int iIndexc[2]; // [rsp+10h] [rbp-40h]
  int heal_amount; // [rsp+18h] [rbp-38h]
  bool bCanBeSeenByEnemy; // [rsp+1Fh] [rbp-31h]

  heal_amount = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal_amount", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_chen_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    heal_amount = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1) + heal_amount);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_chen/chen_cast_4.vpcf",
               2,
               this,
               0,
               0);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Particle, 0, v6, 5, "attach_attack1", vec3_invalid, 1);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, Particle);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  nEnemyTeam = (OwnerEntity->m_iTeamNum.m_Value == 2) + 2;
  if ( g_HeroList.m_hHeroList.m_Size <= 0 )
  {
    bCanBeSeenByEnemy = 0;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    bCanBeSeenByEnemy = 0;
    do
    {
      while ( 1 )
      {
        v13 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v11];
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
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v17->m_pInstance) != 0 )
              {
                iIndex = HIBYTE(m_pInstance[7].m_CScriptComponent);
                if ( iIndex == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
                {
                  if ( LOBYTE(m_pInstance[71].m_pEntity) == 0
                    || (*iIndexc = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance),
                        v37 = CDOTABaseAbility::GetCaster(this),
                        *iIndexc == (*(v37->_vptr_IHandleEntity + 413))(v37)) )
                  {
                    CDOTA_BaseNPC::Heal(m_pInstance, heal_amount, this, 0, 1);
                    v19 = CDOTABaseAbility::GetCaster(this);
                    v20 = (*(v19->_vptr_IHandleEntity + 413))(v19);
                    SendOverheadEventMessage(v20, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, m_pInstance, heal_amount, 0);
                    if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
                    {
                      v21 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                      SendOverheadEventMessage(
                        v21,
                        DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL,
                        m_pInstance,
                        heal_amount,
                        0);
                    }
                    v22 = GetParticleManager();
                    iIndexa = CDOTA_ParticleManager::CreateParticle(
                                v22,
                                "particles/units/heroes/hero_chen/chen_hand_of_god.vpcf",
                                1,
                                m_pInstance,
                                0,
                                0);
                    v23 = GetParticleManager();
                    CDOTA_ParticleManager::ReleaseParticleIndex(v23, iIndexa);
                    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Chen.HandOfGodHealHero", 0.0, 0, 0);
                    if ( !bCanBeSeenByEnemy )
                      break;
                  }
                }
              }
            }
          }
        }
        ++v12;
        ++v11;
        if ( v12 >= g_HeroList.m_hHeroList.m_Size )
          goto LABEL_22;
      }
      ++v12;
      ++v11;
      bCanBeSeenByEnemy = CBaseModelEntity::CanBeSeenByTeam(m_pInstance, nEnemyTeam);
    }
    while ( v12 < g_HeroList.m_hHeroList.m_Size );
  }
LABEL_22:
  v24 = 0;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = (*(v26->_vptr_IHandleEntity + 414))(v26);
  while ( 1 )
  {
    EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v24, "npc_dota*");
    v24 = EntityByClassname;
    if ( EntityByClassname == 0 )
      break;
    if ( m_Value == EntityByClassname->m_iTeamNum.m_Value
      && EntityByClassname->m_bIsDOTANPC
      && SLOBYTE(EntityByClassname[2].m_hEffectEntity.m_Value.m_Index) < 0
      && v27 == (*(EntityByClassname->_vptr_IHandleEntity + 414))(EntityByClassname) )
    {
      CDOTA_BaseNPC::Heal(v24, heal_amount, this, 0, 1);
      v29 = GetParticleManager();
      iIndexb = CDOTA_ParticleManager::CreateParticle(
                  v29,
                  "particles/units/heroes/hero_chen/chen_hand_of_god.vpcf",
                  1,
                  v24,
                  0,
                  0);
      v30 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v30, iIndexb);
      CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Chen.HandOfGodHealCreep", 0.0, 0, 0);
      if ( !bCanBeSeenByEnemy )
        bCanBeSeenByEnemy = CBaseModelEntity::CanBeSeenByTeam(v24, nEnemyTeam);
    }
  }
  if ( bCanBeSeenByEnemy )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v33 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v33);
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v35,
      0,
      m_iAbilityID,
      1,
      0,
      *&AbsOrigin->x,
      AbsOrigin->z,
      -1.0,
      v36);
  }
}


// CDOTA_Unit_Hero_Chen::Event_Killed  (line 892, @0x0000000002b51d70, libserver.so)  // inlines: GetGameMode
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated
void __fastcall CDOTA_Unit_Hero_Chen::Event_Killed(CDOTA_Unit_Hero_Chen *const this, const CTakeDamageInfo *const info)
{
  CDOTA_Ability_Chen_HolyPersuasion *AbilityByName; // rax

  if ( *&g_pGameRules[6].m_szQuestName[68] == 20
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "chen_holy_persuasion", 0)) != 0 )
  {
    CDOTA_Ability_Chen_HolyPersuasion::DestroyDominated(AbilityByName);
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
}


