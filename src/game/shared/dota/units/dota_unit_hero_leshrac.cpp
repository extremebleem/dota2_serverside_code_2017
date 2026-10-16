// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:35
class CDOTA_Unit_Hero_Leshrac : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Leshrac(CDOTA_Unit_Hero_Leshrac &);
	CDOTA_Unit_Hero_Leshrac(CDOTA_Unit_Hero_Leshrac &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Leshrac();
	virtual ~CDOTA_Unit_Hero_Leshrac();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:46
class C_CDOTA_Unit_Hero_Leshrac_MapInstall {
	C_CDOTA_Unit_Hero_Leshrac_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:59
class CDOTA_Ability_Leshrac_Split_Earth : public CDOTABaseAbility {
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
	CDOTA_Ability_Leshrac_Split_Earth(CDOTA_Ability_Leshrac_Split_Earth &);
	CDOTA_Ability_Leshrac_Split_Earth(CDOTA_Ability_Leshrac_Split_Earth &);
	CDOTA_Ability_Leshrac_Split_Earth();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Leshrac_Split_Earth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:73
class C_CDOTA_Ability_Leshrac_Split_Earth_MapInstall {
	C_CDOTA_Ability_Leshrac_Split_Earth_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:110
class CDOTA_Modifier_Leshrac_Split_Earth_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Leshrac_Split_Earth_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Leshrac_Split_Earth_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:199
class CDOTA_Ability_Leshrac_Diabolic_Edict : public CDOTABaseAbility {
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
	CDOTA_Ability_Leshrac_Diabolic_Edict(CDOTA_Ability_Leshrac_Diabolic_Edict &);
	CDOTA_Ability_Leshrac_Diabolic_Edict(CDOTA_Ability_Leshrac_Diabolic_Edict &);
	CDOTA_Ability_Leshrac_Diabolic_Edict();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Leshrac_Diabolic_Edict();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:212
class C_CDOTA_Ability_Leshrac_Diabolic_Edict_MapInstall {
	C_CDOTA_Ability_Leshrac_Diabolic_Edict_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:248
class CDOTA_Modifier_Leshrac_Diabolic_Edict : public CDOTA_Buff {
public:

private:

	int num_explosions;  // +0xba8
	int radius;  // +0xbac
	float m_fExplosions;  // +0xbb0
	float tower_bonus;  // +0xbb4
	CDOTA_Modifier_Leshrac_Diabolic_Edict();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual ~CDOTA_Modifier_Leshrac_Diabolic_Edict();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:382
class CDOTA_Ability_Leshrac_Lightning_Storm : public CDOTABaseAbility {
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
	CDOTA_Ability_Leshrac_Lightning_Storm(CDOTA_Ability_Leshrac_Lightning_Storm &);
	CDOTA_Ability_Leshrac_Lightning_Storm(CDOTA_Ability_Leshrac_Lightning_Storm &);
	CDOTA_Ability_Leshrac_Lightning_Storm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Leshrac_Lightning_Storm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:432
class CDOTA_Modifier_Leshrac_Lightning_Storm : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int jump_count;  // +0xbac
	float slow_duration;  // +0xbb0
	float jump_delay;  // +0xbb4
	EHANDLE hInitialTarget;  // +0xbb8
	int m_iCurJumpCount;  // +0xbbc

	CDOTA_Modifier_Leshrac_Lightning_Storm();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual bool RemoveOnDeath();
	virtual ~CDOTA_Modifier_Leshrac_Lightning_Storm();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[54] RemoveOnDeath
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:592
class CDOTA_Modifier_Leshrac_Lightning_Storm_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed;  // +0xba8
	CDOTA_Modifier_Leshrac_Lightning_Storm_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual bool IsDebuff();
	virtual bool IsVisible();
	virtual ~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[89] IsVisible
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:648
class CDOTA_Ability_Leshrac_Pulse_Nova : public CDOTABaseAbility {
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
	CDOTA_Ability_Leshrac_Pulse_Nova(CDOTA_Ability_Leshrac_Pulse_Nova &);
	CDOTA_Ability_Leshrac_Pulse_Nova(CDOTA_Ability_Leshrac_Pulse_Nova &);
	CDOTA_Ability_Leshrac_Pulse_Nova();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual bool ProcsMagicStick();
	virtual void OnToggle();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Leshrac_Pulse_Nova();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[239] ProcsMagicStick
	// vtable[270] OnToggle
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:663
class C_CDOTA_Ability_Leshrac_Pulse_Nova_MapInstall {
	C_CDOTA_Ability_Leshrac_Pulse_Nova_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_leshrac.cpp:707
class CDOTA_Modifier_Leshrac_Pulse_Nova : public CDOTA_Buff {
public:

private:

	CDOTA_Modifier_Leshrac_Pulse_Nova();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Leshrac_Pulse_Nova();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Leshrac::~CDOTA_Unit_Hero_Leshrac  (line 35, @0x0000000002ba2e20, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Leshrac::~CDOTA_Unit_Hero_Leshrac(CDOTA_Unit_Hero_Leshrac *const this)
{
  this->_vptr_IHandleEntity = &off_450D650;
  this->_vptr_INextBotEventResponder = &off_450E630;
  this->_vptr_CObstructionObject = &off_450E960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Leshrac::~CDOTA_Unit_Hero_Leshrac  (line 35, @0x0000000002ba2e60, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Leshrac
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Leshrac::~CDOTA_Unit_Hero_Leshrac(CDOTA_Unit_Hero_Leshrac *const this)
{
  this->_vptr_IHandleEntity = &off_450D650;
  this->_vptr_INextBotEventResponder = &off_450E630;
  this->_vptr_CObstructionObject = &off_450E960;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Leshrac::Schema_DynamicBinding  (line 37, @0x0000000002b924a0, libserver.so)
// globals: CDOTA_Unit_Hero_Leshrac::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Leshrac::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Leshrac *const this)
{
  return CDOTA_Unit_Hero_Leshrac::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002b924d0, libserver.so)
// globals: CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002b924e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Leshrac>
void __fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002b92500, libserver.so)
void __fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002b92520, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002b92530, libserver.so)
// globals: CDOTA_Unit_Hero_Leshrac::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Leshrac::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002b98660, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002b9c7f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Leshrac, Construct<CDOTA_Unit_Hero_Leshrac>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_450D650;
    *(p + 236) = &off_450E630;
    *(p + 257) = &off_450E960;
  }
  return p;
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002babf10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002bac340, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal  (line 37, @0x0000000002bced50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_leshrac", "CDOTA_Unit_Hero_Leshrac"
// globals: `guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass, CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass, __dso_handle, CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo, CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass);
    CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass._vptr_CEntityClass = off_450D5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Leshrac::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LeshracClass != 0 )
    return &CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo,
      "CDOTA_Unit_Hero_Leshrac",
      "npc_dota_hero_leshrac",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo);
  }
  CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass.m_pClassInfo = &CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo;
  CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LeshracClass = &CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass;
  CDOTA_Unit_Hero_Leshrac::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LeshracClassInfo.m_pClass = &CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass;
  CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LeshracClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Leshrac::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LeshracClass;
}


// CDOTA_Unit_Hero_Leshrac::YouForgotToImplementOrDeclareServerClass  (line 46, @0x0000000002b35e10, libserver.so)
int __fastcall CDOTA_Unit_Hero_Leshrac::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Leshrac *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Leshrac::GetServerClass  (line 46, @0x0000000002b4cca0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Leshrac::GetServerClass(CDOTA_Unit_Hero_Leshrac *const this)
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


// CDOTA_Ability_Leshrac_Split_Earth::~CDOTA_Ability_Leshrac_Split_Earth  (line 59, @0x0000000002ba1a50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::~CDOTA_Ability_Leshrac_Split_Earth(
        CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  this->_vptr_IHandleEntity = &off_450EA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Leshrac_Split_Earth::~CDOTA_Ability_Leshrac_Split_Earth  (line 59, @0x0000000002ba1a70, libserver.so)  // inlines: ~CDOTA_Ability_Leshrac_Split_Earth
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::~CDOTA_Ability_Leshrac_Split_Earth(
        CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  this->_vptr_IHandleEntity = &off_450EA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Leshrac_Split_Earth::Schema_DynamicBinding  (line 61, @0x0000000002b92540, libserver.so)
// globals: CDOTA_Ability_Leshrac_Split_Earth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Split_Earth::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  return CDOTA_Ability_Leshrac_Split_Earth::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 61, @0x0000000002b92550, libserver.so)
// globals: CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::DestructInstance  (line 61, @0x0000000002b92560, libserver.so)  // inlines: Destruct<CDOTA_Ability_Leshrac_Split_Earth>
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::FreeInstance  (line 61, @0x0000000002b92580, libserver.so)
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::CanAllocate  (line 61, @0x0000000002b925a0, libserver.so)
bool __fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 61, @0x0000000002b925b0, libserver.so)
// globals: CDOTA_Ability_Leshrac_Split_Earth::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Split_Earth::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::AllocateInstance  (line 61, @0x0000000002b986a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::ConstructInstance  (line 61, @0x0000000002b9d7f0, libserver.so)  // inlines: CDOTA_Ability_Leshrac_Split_Earth, Construct<CDOTA_Ability_Leshrac_Split_Earth>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_450EA30;
  }
  return p;
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002bab5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002bab5d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal  (line 61, @0x0000000002bcb630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "leshrac_split_earth", "CDOTA_Ability_Leshrac_Split_Earth"
// globals: `guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass, CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass, __dso_handle, CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo, CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo
CEntityClass *__cdecl CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass);
    CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass._vptr_CEntityClass = off_450E9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass);
    __cxa_atexit(
      CDOTA_Ability_Leshrac_Split_Earth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Leshrac_Split_EarthClass != 0 )
    return &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass;
  if ( `guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo,
      "CDOTA_Ability_Leshrac_Split_Earth",
      "leshrac_split_earth",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo);
  }
  CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass.m_pClassInfo = &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo;
  CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass.m_pBaseClassInfo = CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Leshrac_Split_EarthClass = &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass;
  CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClassInfo.m_pClass = &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass;
  CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Leshrac_Split_EarthClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Leshrac_Split_Earth::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Split_EarthClass;
}


// CDOTA_Ability_Leshrac_Split_Earth::GetAOERadius  (line 65, @0x0000000002bc43b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Leshrac_Split_Earth::GetAOERadius(CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Leshrac_Split_Earth::YouForgotToImplementOrDeclareServerClass  (line 73, @0x0000000002b35e20, libserver.so)
int __fastcall CDOTA_Ability_Leshrac_Split_Earth::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  return 0;
}


// CDOTA_Ability_Leshrac_Split_Earth::GetServerClass  (line 73, @0x0000000002b4caa0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Leshrac_Split_Earth::GetServerClass(
        CDOTA_Ability_Leshrac_Split_Earth *const this)
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


// CDOTA_Ability_Leshrac_Split_Earth::OnSpellStart  (line 82, @0x0000000002b36e30, libserver.so)  // inlines: GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_leshrac_split_earth_thinker"
void __fastcall CDOTA_Ability_Leshrac_Split_Earth::OnSpellStart(CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_leshrac_split_earth_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_leshrac_split_earth_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Leshrac_Split_Earth::GetAbilityDamageToTargetOverInterval  (line 92, @0x0000000002b3bf60, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Leshrac_Split_Earth::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Leshrac_Split_Earth *const this,
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


// CDOTA_Ability_Leshrac_Split_Earth::GetStunDuration  (line 102, @0x0000000002b76080, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Leshrac_Split_Earth::GetStunDuration(CDOTA_Ability_Leshrac_Split_Earth *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Leshrac_Split_Earth_Thinker::~CDOTA_Modifier_Leshrac_Split_Earth_Thinker  (line 110, @0x0000000002b99b30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Leshrac_Split_Earth_Thinker::~CDOTA_Modifier_Leshrac_Split_Earth_Thinker(
        CDOTA_Modifier_Leshrac_Split_Earth_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450F4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Leshrac_Split_Earth_Thinker::~CDOTA_Modifier_Leshrac_Split_Earth_Thinker  (line 110, @0x0000000002b99b50, libserver.so)  // inlines: ~CDOTA_Modifier_Leshrac_Split_Earth_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Leshrac_Split_Earth_Thinker::~CDOTA_Modifier_Leshrac_Split_Earth_Thinker(
        CDOTA_Modifier_Leshrac_Split_Earth_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450F4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Leshrac_Split_Earth_Thinker::IsHidden  (line 118, @0x0000000002b925c0, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Split_Earth_Thinker::IsHidden(
        CDOTA_Modifier_Leshrac_Split_Earth_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Leshrac_Split_Earth_Thinker::OnCreated  (line 128, @0x0000000002b7d900, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Leshrac_Split_Earth_Thinker::OnCreated(
        CDOTA_Modifier_Leshrac_Split_Earth_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "delay", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
}


// CDOTA_Modifier_Leshrac_Split_Earth_Thinker::OnIntervalThink  (line 140, @0x0000000002b65590, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, EconEntity_OnOwnerKillEaterEvent (25 total)
// strings: "modifier_stun", "modifier_stunned", "particles/units/heroes/hero_leshrac/leshrac_split_earth.vpcf", "Hero_Leshrac.Split_Earth"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Leshrac_Split_Earth_Thinker::OnIntervalThink(
        CDOTA_Modifier_Leshrac_Split_Earth_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v3; // xmm4
  float v4; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r14
  int v10; // r13d
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *v17; // rax
  float v18; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  CDOTA_BaseNPC *v24; // rax
  unsigned int v25; // eax
  __m128i v26; // xmm5
  unsigned int v27; // r13d
  float v28; // r12d
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm3_4
  CDOTA_BaseNPC *v31; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r13
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTABaseAbility *v40; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v42; // r12
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v44; // rax
  const Vector *v45; // r12
  CDOTA_BaseNPC *v46; // rax
  float v47; // xmm3_4
  CDOTA_BaseNPC *v48; // rax
  CDOTABaseAbility *pInflictor; // [rsp+20h] [rbp-A0h]
  CDOTABaseAbility *pAbilitya; // [rsp+28h] [rbp-98h]
  CDOTABaseAbility *pAbility; // [rsp+28h] [rbp-98h]
  int radius; // [rsp+3Ch] [rbp-84h] BYREF
  Vector vPos; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-38h]
  Vector v57; // 0:xmm0_8.8,8:xmm1_4.4

  v56 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  *v3.m128i_i32 = radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Parent = CDOTA_Buff::GetParent(this);
  v6 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Parent, v4, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      while ( 1 )
      {
        v11 = &entities.m_Memory.m_pMemory[v9];
        m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
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
              if ( v15->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        ++v10;
        ++v9;
        if ( entities.m_Size <= v10 )
          goto LABEL_19;
      }
      KeyValues::KeyValues(&kv, "modifier_stun");
      v17 = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetDuration(v17);
      KeyValues::SetFloat(&kv, "duration", v18);
      pAbilitya = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, pAbilitya, "modifier_stunned", &kv, 0);
      v20 = CDOTA_Buff::GetAbility(this);
      *&pAbilitya = (*(v20->_vptr_IHandleEntity + 247))(v20);
      pInflictor = CDOTA_Buff::GetAbility(this);
      v21 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v21, m_pInstance, pInflictor, *&pAbilitya, 2, 0);
      pAbility = 0;
      if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 )
          m_pInstance = 0;
        pAbility = m_pInstance;
      }
      v22 = CDOTA_Buff::GetCaster(this);
      if ( v22 != 0 && (v22->m_iUnitType & 1) != 0 )
        v23 = v22;
      else
        v23 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v23,
        pAbility,
        kill_eater_event_t::kKillEaterEventType_Leshrac_SplitEarthStuns,
        1,
        INVALID_ITEM_DEF_INDEX);
      ++v10;
      ++v9;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v10 );
  }
LABEL_19:
  v24 = CDOTA_Buff::GetCaster(this);
  v25 = (*(v24->_vptr_IHandleEntity + 414))(v24);
  *v26.m128i_i32 = radius;
  v27 = v25;
  v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
  v29 = CDOTA_Buff::GetParent(this);
  v57 = *CBaseEntity::GetAbsOrigin(v29);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v27, v57, v28, v30);
  v31 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v31) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_leshrac/leshrac_split_earth.vpcf",
                   8,
                   0,
                   0,
                   v31);
  v33 = CDOTA_Buff::GetParent(this);
  v34 = CBaseEntity::GetAbsOrigin(v33);
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v35, v31, 0, *&v34->x, v34->z);
  vPos.x = radius;
  vPos.y = radius;
  vPos.z = radius;
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v36, v31, 1, *&vPos.x, vPos.z);
  v37 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v37, v31);
  v38 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v38);
  v39 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Leshrac.Split_Earth", v39);
  v40 = CDOTA_Buff::GetAbility(this);
  m_pAbilityData = v40->m_pAbilityData;
  v42 = v40;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(v40, 0);
    m_pAbilityData = v42->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v44 = CDOTA_Buff::GetParent(this);
  v45 = CBaseEntity::GetAbsOrigin(v44);
  v46 = CDOTA_Buff::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v46, 0, m_iAbilityID, 0, 0, *&v45->x, v45->z, -1.0, v47);
  v48 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v48);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::~CDOTA_Ability_Leshrac_Diabolic_Edict  (line 199, @0x0000000002ba1aa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::~CDOTA_Ability_Leshrac_Diabolic_Edict(
        CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  this->_vptr_IHandleEntity = &off_450F850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::~CDOTA_Ability_Leshrac_Diabolic_Edict  (line 199, @0x0000000002ba1ac0, libserver.so)  // inlines: ~CDOTA_Ability_Leshrac_Diabolic_Edict
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::~CDOTA_Ability_Leshrac_Diabolic_Edict(
        CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  this->_vptr_IHandleEntity = &off_450F850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::Schema_DynamicBinding  (line 201, @0x0000000002b925d0, libserver.so)
// globals: CDOTA_Ability_Leshrac_Diabolic_Edict::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  return CDOTA_Ability_Leshrac_Diabolic_Edict::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 201, @0x0000000002b925e0, libserver.so)
// globals: CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::DestructInstance  (line 201, @0x0000000002b925f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Leshrac_Diabolic_Edict>
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::FreeInstance  (line 201, @0x0000000002b92610, libserver.so)
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::CanAllocate  (line 201, @0x0000000002b92630, libserver.so)
bool __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 201, @0x0000000002b92640, libserver.so)
// globals: CDOTA_Ability_Leshrac_Diabolic_Edict::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Diabolic_Edict::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::AllocateInstance  (line 201, @0x0000000002b986e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::ConstructInstance  (line 201, @0x0000000002b9d820, libserver.so)  // inlines: CDOTA_Ability_Leshrac_Diabolic_Edict, Construct<CDOTA_Ability_Leshrac_Diabolic_Edict>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_450F850;
  }
  return p;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002bab600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 201, @0x0000000002bab620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal  (line 201, @0x0000000002bcb780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "leshrac_diabolic_edict", "CDOTA_Ability_Leshrac_Diabolic_Edict"
// globals: `guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass, CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass, __dso_handle, CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo, CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo
CEntityClass *__cdecl CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass);
    CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass._vptr_CEntityClass = off_450F7D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass);
    __cxa_atexit(
      CDOTA_Ability_Leshrac_Diabolic_Edict::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Leshrac_Diabolic_EdictClass != 0 )
    return &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass;
  if ( `guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo,
      "CDOTA_Ability_Leshrac_Diabolic_Edict",
      "leshrac_diabolic_edict",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo);
  }
  CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass.m_pClassInfo = &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo;
  CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass.m_pBaseClassInfo = CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Leshrac_Diabolic_EdictClass = &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass;
  CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClassInfo.m_pClass = &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass;
  CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Leshrac_Diabolic_EdictClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Leshrac_Diabolic_Edict::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Diabolic_EdictClass;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::GetAOERadius  (line 205, @0x0000000002bc43d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::GetAOERadius(CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::YouForgotToImplementOrDeclareServerClass  (line 212, @0x0000000002b35e30, libserver.so)
int __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  return 0;
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::GetServerClass  (line 212, @0x0000000002b4cea0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::GetServerClass(
        CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
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


// CDOTA_Ability_Leshrac_Diabolic_Edict::OnSpellStart  (line 221, @0x0000000002b3a9e0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_leshrac_diabolic_edict"
void __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::OnSpellStart(CDOTA_Ability_Leshrac_Diabolic_Edict *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_leshrac_diabolic_edict");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_leshrac_diabolic_edict", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Leshrac_Diabolic_Edict::GetAbilityDamageToTargetOverInterval  (line 233, @0x0000000002b6a8d0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "num_explosions"
__int64 __fastcall CDOTA_Ability_Leshrac_Diabolic_Edict::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Leshrac_Diabolic_Edict *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]
  float fIntervald; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    fIntervalb = (*(this->_vptr_IHandleEntity + 247))(this) * fIntervala;
    fIntervalc = fIntervalb * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "num_explosions", -1, 0);
    fIntervald = fIntervalc / CDOTABaseAbility::GetDuration(this);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervald);
  }
  return result;
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::~CDOTA_Modifier_Leshrac_Diabolic_Edict  (line 248, @0x0000000002b99ae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::~CDOTA_Modifier_Leshrac_Diabolic_Edict(
        CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  this->_vptr_CDOTA_Buff = &off_4510310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::~CDOTA_Modifier_Leshrac_Diabolic_Edict  (line 248, @0x0000000002b99b00, libserver.so)  // inlines: ~CDOTA_Modifier_Leshrac_Diabolic_Edict
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::~CDOTA_Modifier_Leshrac_Diabolic_Edict(
        CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  this->_vptr_CDOTA_Buff = &off_4510310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::GetAttributes  (line 262, @0x0000000002b9c290, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::GetAttributes(CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::IsPurgable  (line 263, @0x0000000002b92650, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::IsPurgable(CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::RemoveOnDeath  (line 264, @0x0000000002b92660, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::RemoveOnDeath(CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::OnCreated  (line 278, @0x0000000002b7f940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "num_explosions", "tower_bonus", "special_bonus_unique_leshrac_1"
void __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::OnCreated(
        CDOTA_Modifier_Leshrac_Diabolic_Edict *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int num_explosions; // r12d
  float v9; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->num_explosions = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "num_explosions", -1, 0);
  else
    this->num_explosions = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
  else
    this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->tower_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "tower_bonus", -1, 0);
  else
    this->tower_bonus = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_leshrac_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    num_explosions = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + this->num_explosions;
    this->num_explosions = num_explosions;
  }
  else
  {
    num_explosions = this->num_explosions;
  }
  v9 = (num_explosions - 1) / (*(this->_vptr_CDOTA_Buff + 31))(this);
  this->m_fExplosions = v9;
  CDOTA_Buff::StartIntervalThink(this, 1.0 / v9, v9);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::OnDestroy  (line 302, @0x0000000002b35e40, libserver.so)
void __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::OnDestroy(CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  ;
}


// CDOTA_Modifier_Leshrac_Diabolic_Edict::OnIntervalThink  (line 312, @0x0000000002b60cc0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, RandomVector, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator+=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, RandomInt, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, GetParticleManager, CDOTA_ParticleManager::CreateParticle, Vector::Random, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (17 total)
// strings: "Hero_Leshrac.Diabolic_Edict", "particles/units/heroes/hero_leshrac/leshrac_diabolic_edict.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Leshrac_Diabolic_Edict::OnIntervalThink(
        CDOTA_Modifier_Leshrac_Diabolic_Edict *const this)
{
  float radius; // xmm2_4
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rax
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  int Particle; // r13d
  vec_t v15; // xmm2_4
  float y; // r14d
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  __m128i v20; // xmm6
  float v21; // r14d
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CEntityInstance *m_pInstance; // r13
  CDOTABaseAbility *Ability; // rax
  float v26; // xmm7_4
  CDOTABaseAbility *v27; // r14
  CDOTA_BaseNPC *v28; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v30; // r15
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  unsigned int v34; // [rsp+24h] [rbp-7Ch]
  unsigned int v35; // [rsp+28h] [rbp-78h]
  float vecPositiona; // [rsp+2Ch] [rbp-74h]
  float vecPositionb; // [rsp+2Ch] [rbp-74h]
  float vecPositionc; // [rsp+2Ch] [rbp-74h]
  float vecPosition; // [rsp+2Ch] [rbp-74h]
  Vector v40; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-50h] BYREF

  entities.m_Size = 0;
  radius = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  vecPositiona = radius;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Parent, vecPositiona, &entities, 2, 7, 16, 0, 0);
  if ( entities.m_Size != 0 )
  {
    v7 = &entities.m_Memory.m_pMemory[RandomInt(0, (entities.m_Size - 1))];
    m_Index = v7->m_Index;
    if ( v7->m_Index + 2 > 1 )
    {
      v9 = v7->m_Index;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[v9 & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 405))(v11->m_pInstance) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            v26 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
            vecPosition = v26;
            if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
              vecPosition = ((this->tower_bonus / 100.0) + 1.0) * v26;
            v27 = CDOTA_Buff::GetAbility(this);
            v28 = CDOTA_Buff::GetParent(this);
            ApplyDamage(v28, m_pInstance, v27, vecPosition, 1, 8);
            ParticleManager = GetParticleManager();
            LODWORD(v27) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_leshrac/leshrac_diabolic_edict.vpcf",
                             2,
                             0,
                             0,
                             0);
            v30 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v31 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v31, v27, 0, m_pInstance, 5, "attach_hitloc", *v30, 1);
            v32 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v32, v27, 1, m_pInstance, 1, 0, vec3_invalid, 1);
            v33 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v33, v27);
          }
        }
      }
    }
  }
  else
  {
    v13 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v13,
                 "particles/units/heroes/hero_leshrac/leshrac_diabolic_edict.vpcf",
                 2,
                 0,
                 0,
                 0);
    Vector::Random(&v40, this->radius, v15);
    y = v40.y;
    vecPositionb = v40.x;
    v17 = CDOTA_Buff::GetParent(this);
    v18 = CBaseEntity::GetAbsOrigin(v17);
    *&v35 = vecPositionb + v18->x;
    *&v34 = y + v18->y;
    vecPositionc = v18->z + 48.0;
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v19, Particle, 0, COERCE_DOUBLE(__PAIR64__(v34, v35)), vecPositionc);
    v20 = LODWORD(vecPositionc);
    *v20.m128i_i32 = vecPositionc - 44.0;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v22, Particle, 1, COERCE_DOUBLE(__PAIR64__(v34, v35)), v21);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v23, Particle);
  }
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_Leshrac.Diabolic_Edict", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Leshrac_Lightning_Storm::~CDOTA_Ability_Leshrac_Lightning_Storm  (line 382, @0x0000000002ba1af0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::~CDOTA_Ability_Leshrac_Lightning_Storm(
        CDOTA_Ability_Leshrac_Lightning_Storm *const this)
{
  this->_vptr_IHandleEntity = &off_4510670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::~CDOTA_Ability_Leshrac_Lightning_Storm  (line 382, @0x0000000002ba1b10, libserver.so)  // inlines: ~CDOTA_Ability_Leshrac_Lightning_Storm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::~CDOTA_Ability_Leshrac_Lightning_Storm(
        CDOTA_Ability_Leshrac_Lightning_Storm *const this)
{
  this->_vptr_IHandleEntity = &off_4510670;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::Schema_DynamicBinding  (line 384, @0x0000000002b92670, libserver.so)
// globals: CDOTA_Ability_Leshrac_Lightning_Storm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Lightning_Storm::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Lightning_Storm *const this)
{
  return CDOTA_Ability_Leshrac_Lightning_Storm::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 384, @0x0000000002b92680, libserver.so)
// globals: CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::DestructInstance  (line 384, @0x0000000002b92690, libserver.so)  // inlines: Destruct<CDOTA_Ability_Leshrac_Lightning_Storm>
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::FreeInstance  (line 384, @0x0000000002b926b0, libserver.so)
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::CanAllocate  (line 384, @0x0000000002b926d0, libserver.so)
bool __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 384, @0x0000000002b926e0, libserver.so)
// globals: CDOTA_Ability_Leshrac_Lightning_Storm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Lightning_Storm::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::AllocateInstance  (line 384, @0x0000000002b98720, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::ConstructInstance  (line 384, @0x0000000002b9d850, libserver.so)  // inlines: CDOTA_Ability_Leshrac_Lightning_Storm, Construct<CDOTA_Ability_Leshrac_Lightning_Storm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4510670;
  }
  return p;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 384, @0x0000000002bab650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 384, @0x0000000002bab670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal  (line 384, @0x0000000002bcb8d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "leshrac_lightning_storm", "CDOTA_Ability_Leshrac_Lightning_Storm"
// globals: `guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass, CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass, __dso_handle, CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo, CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo
CEntityClass *__cdecl CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass);
    CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass._vptr_CEntityClass = off_45105F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass);
    __cxa_atexit(
      CDOTA_Ability_Leshrac_Lightning_Storm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Leshrac_Lightning_StormClass != 0 )
    return &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass;
  if ( `guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo,
      "CDOTA_Ability_Leshrac_Lightning_Storm",
      "leshrac_lightning_storm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo);
  }
  CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass.m_pClassInfo = &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo;
  CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass.m_pBaseClassInfo = CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Leshrac_Lightning_StormClass = &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass;
  CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClassInfo.m_pClass = &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass;
  CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Leshrac_Lightning_StormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Leshrac_Lightning_Storm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Lightning_StormClass;
}


// CDOTA_Ability_Leshrac_Lightning_Storm::OnSpellStart  (line 398, @0x0000000002b39cd0, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetPtr, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_leshrac_lightning_storm"
void __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::OnSpellStart(CDOTA_Ability_Leshrac_Lightning_Storm *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    KeyValues::KeyValues(&kv, "modifier_leshrac_lightning_storm");
    KeyValues::SetPtr(&kv, "target", v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, Caster, this, "modifier_leshrac_lightning_storm", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Leshrac_Lightning_Storm::GetAbilityDamageToTargetOverInterval  (line 414, @0x0000000002b3bfc0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Leshrac_Lightning_Storm *const this,
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


// CDOTA_Ability_Leshrac_Lightning_Storm::GetSlowDuration  (line 424, @0x0000000002b760a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Leshrac_Lightning_Storm::GetSlowDuration(
        CDOTA_Ability_Leshrac_Lightning_Storm *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 1);
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::~CDOTA_Modifier_Leshrac_Lightning_Storm  (line 432, @0x0000000002bc3cc0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::~CDOTA_Modifier_Leshrac_Lightning_Storm(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4511130;
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


// CDOTA_Modifier_Leshrac_Lightning_Storm::~CDOTA_Modifier_Leshrac_Lightning_Storm  (line 432, @0x0000000002bc3e10, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Leshrac_Lightning_Storm, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::~CDOTA_Modifier_Leshrac_Lightning_Storm(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  this->_vptr_CDOTA_Buff = &off_4511130;
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


// CDOTA_Modifier_Leshrac_Lightning_Storm::IsHidden  (line 437, @0x0000000002b926f0, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::IsHidden(CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  return 1;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::IsPurgable  (line 441, @0x0000000002b92700, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::IsPurgable(CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::GetAttributes  (line 442, @0x0000000002b92710, libserver.so)
int __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::GetAttributes(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  return 2;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::RemoveOnDeath  (line 443, @0x0000000002b92720, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::RemoveOnDeath(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::OnCreated  (line 463, @0x0000000002b80410, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy
// strings: "jump_count", "jump_delay", "special_bonus_unique_leshrac_2"
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::OnCreated(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Ptr; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v6; // rdi
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v12; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  int v14; // edx
  __int16 v15; // cx

  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  v4 = Ptr;
  if ( Ptr == 0
    || !Ptr->m_bIsDOTANPC
    || (Ability = CDOTA_Buff::GetAbility(this), CDOTA_BaseNPC::TriggerSpellAbsorb(v4, Ability, 1)) )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
  }
  else
  {
    this->radius = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
    {
LABEL_6:
      this->jump_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "jump_count", -1, 0);
      v8 = CDOTA_Buff::GetAbility(this);
      if ( v8 != 0 )
        goto LABEL_7;
LABEL_20:
      this->jump_delay = 0.0;
      v9 = CDOTA_Buff::GetAbility(this);
      if ( v9 != 0 )
        goto LABEL_8;
      goto LABEL_21;
    }
  }
  this->jump_count = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_20;
LABEL_7:
  this->jump_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "jump_delay", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "slow_duration", -1, 0);
    goto LABEL_9;
  }
LABEL_21:
  this->slow_duration = 0.0;
LABEL_9:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_leshrac_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                        + this->slow_duration;
  this->m_iCurJumpCount = 0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  m_pEntity = v4->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v15 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->hInitialTarget.m_Index) = v15 | this->hInitialTarget.m_Index & 0x8000;
    this->hInitialTarget.m_Index = (v14 << 15) | this->hInitialTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->hInitialTarget.m_Index = -1;
  }
  CDOTA_Buff::StartIntervalThink(this, this->jump_delay, v12);
}


// CDOTA_Modifier_Leshrac_Lightning_Storm::OnIntervalThink  (line 497, @0x0000000002b85d40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, GetParticleManager, CDOTA_ParticleManager::CreateParticle (24 total)
// strings: "Hero_Leshrac.Lightning_Storm", "modifier_leshrac_lightning_storm_slow", "particles/units/heroes/hero_leshrac/leshrac_lightning_bolt.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm::OnIntervalThink(
        CDOTA_Modifier_Leshrac_Lightning_Storm *const this)
{
  __m128i v1; // xmm3
  int m_iCurJumpCount; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float v7; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v9; // rax
  int m_Size; // ecx
  CDOTA_BaseNPC *v11; // r12
  CConcreteEntityList *v12; // r15
  CHandle<CBaseEntity> *m_pMemory; // r14
  CDOTABaseAbility *Ability; // rax
  __m128i v15; // xmm4
  float v16; // r15d
  CDOTABaseAbility *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTABaseAbility *v20; // r15
  CDOTA_BaseNPC *v21; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  const Vector *AbsOrigin; // rax
  vec_t v28; // xmm2_4
  vec_t v29; // xmm0_4
  vec_t v30; // xmm1_4
  CEntityIdentity *v31; // rax
  int v32; // edx
  __int16 v33; // cx
  __int64 v34; // r12
  int v35; // eax
  CHandle<CBaseEntity> *v36; // rax
  CEntityIdentity *v37; // rax
  CEntityIdentity *v38; // rax
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rax
  int v41; // esi
  __int16 v42; // di
  int v43; // eax
  CEntityInstance *v44; // r12
  CDOTA_ParticleManager *v45; // rax
  int v46; // r13d
  const Vector *v47; // rax
  int v48; // xmm2_4
  float v49; // xmm0_4
  CDOTA_ParticleManager *v50; // rax
  const Vector *v51; // r14
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  CDOTABaseAbility *v54; // rax
  CDOTABaseAbility *v55; // r13
  CDOTA_BaseNPC *v56; // rax
  float v57; // xmm1_4
  CDOTABaseAbility *v58; // r13
  CDOTA_BaseNPC *v59; // rax
  const Vector *v60; // rax
  vec_t v61; // xmm2_4
  vec_t v62; // xmm0_4
  vec_t v63; // xmm1_4
  CEntityIdentity *v64; // rax
  __int16 v65; // cx
  __int64 v66; // r12
  int v67; // eax
  CHandle<CBaseEntity> *v68; // rax
  CEntityInstance *v69; // [rsp+20h] [rbp-A0h]
  int v70; // [rsp+2Ch] [rbp-94h]
  CHandle<CBaseEntity> v71; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+88h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  m_iCurJumpCount = this->m_iCurJumpCount;
  if ( m_iCurJumpCount != 0 )
  {
    if ( m_iCurJumpCount >= this->jump_count )
      goto LABEL_9;
    *v1.m128i_i32 = this->radius;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    Caster = CDOTA_Buff::GetCaster(this);
    v9 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v9->m_iTeamNum.m_Value, &this->m_vCurTargetLoc, Caster, v7, &hEntities, 2, 19, 384, 1, 0);
LABEL_11:
    m_Size = hEntities.m_Size;
    v11 = 0;
    v12 = CEntityHandle::gm_pEntityList;
    m_pMemory = hEntities.m_Memory.m_pMemory;
    while ( m_Size > 0 )
    {
      if ( v11 != 0 )
        goto LABEL_14;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v37 = v12->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v37 != 0 )
        {
          v38 = &v37[m_pMemory->m_Index & 0x1FF];
          if ( v38 != 0 && m_pMemory->m_Index == v38->m_EHandle.m_Index )
          {
            m_pInstance = v38->m_pInstance;
            if ( v38->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              v71.m_Index = -1;
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v41 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v42 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v42 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v71.m_Index) = v42 | v71.m_Index & 0x8000;
                v71.m_Index = (v41 << 15) | v71.m_Index & 0x7FFF;
              }
              v69 = m_pInstance;
              v70 = m_Size;
              v43 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                      &this->m_hHitEntities,
                      &v71);
              m_Size = v70;
              if ( v43 >= 0 )
              {
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
                goto LABEL_11;
              }
              v11 = v69;
            }
          }
        }
      }
    }
    if ( v11 == 0 )
      goto LABEL_25;
LABEL_14:
    CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Leshrac.Lightning_Storm", 0.0, 0, 0);
    Ability = CDOTA_Buff::GetAbility(this);
    *v15.m128i_i32 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    v17 = CDOTA_Buff::GetAbility(this);
    v18 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v18, v11, v17, v16, 2, 0);
    if ( (v11->m_nUnitState64.m_Value & 0x200) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_leshrac_lightning_storm_slow");
      KeyValues::SetFloat(&kv, "duration", v19);
      v20 = CDOTA_Buff::GetAbility(this);
      v21 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v11, v21, v20, "modifier_leshrac_lightning_storm_slow", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_leshrac/leshrac_lightning_bolt.vpcf",
                 2,
                 v11,
                 0,
                 0);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v24, Particle, 0, *&this->m_vCurTargetLoc.x, this->m_vCurTargetLoc.z);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 1, v11, 5, "attach_hitloc", vec3_invalid, 1);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v28 = AbsOrigin->y + 0.0;
    v29 = AbsOrigin->z + 1024.0;
    v30 = AbsOrigin->x + 0.0;
    v71.m_Index = -1;
    this->m_vCurTargetLoc.y = v28;
    this->m_vCurTargetLoc.z = v29;
    this->m_vCurTargetLoc.x = v30;
    v31 = v11->m_pEntity;
    if ( v31 != 0 )
    {
      v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
      v33 = 0x7FFF;
      if ( v31->m_EHandle.m_Index != -1 )
        v33 = v31->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v71.m_Index) = v33 | v71.m_Index & 0x8000;
      v71.m_Index = (v32 << 15) | v71.m_Index & 0x7FFF;
    }
    v34 = this->m_hHitEntities.m_Size;
    v35 = this->m_hHitEntities.m_Size;
    if ( v34 == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v35 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v35 + 1;
    v36 = &this->m_hHitEntities.m_Memory.m_pMemory[v34];
    if ( v36 != 0 )
      v36->m_Index = v71.m_Index;
    ++this->m_iCurJumpCount;
    LOBYTE(v11) = 1;
LABEL_25:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
    if ( v11 == 0 )
LABEL_9:
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    m_Index = this->hInitialTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->hInitialTarget.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->hInitialTarget.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          v44 = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && BYTE3(v44[7]._vptr_IHandleEntity) != 0 )
          {
            v45 = GetParticleManager();
            v46 = CDOTA_ParticleManager::CreateParticle(
                    v45,
                    "particles/units/heroes/hero_leshrac/leshrac_lightning_bolt.vpcf",
                    2,
                    0,
                    0,
                    0);
            v47 = CBaseEntity::GetAbsOrigin(v44);
            *&v48 = v47->x + 0.0;
            v49 = v47->z + 1024.0;
            *(&hEntities.m_Size + 1) = v47->y + 0.0;
            hEntities.m_Size = v48;
            *&hEntities.m_Memory.m_pMemory = v49;
            v50 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v50, v46, 0, *&hEntities.m_Size, *&hEntities.m_Memory.m_pMemory);
            v51 = CBaseEntity::GetAbsOrigin(v44);
            v52 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v52, v46, 1, v44, 5, "attach_hitloc", *v51, 1);
            v53 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v53, v46);
            v54 = CDOTA_Buff::GetAbility(this);
            LODWORD(v51) = (*(v54->_vptr_IHandleEntity + 247))(v54);
            v55 = CDOTA_Buff::GetAbility(this);
            v56 = CDOTA_Buff::GetCaster(this);
            ApplyDamage(v56, v44, v55, v51, 2, 0);
            if ( (BYTE1(v44[58]._vptr_IHandleEntity) & 2) == 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_leshrac_lightning_storm_slow");
              KeyValues::SetFloat(&kv, "duration", v57);
              v58 = CDOTA_Buff::GetAbility(this);
              v59 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v44, v59, v58, "modifier_leshrac_lightning_storm_slow", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
            CDOTA_BaseNPC::UnitEmitSound(v44, "Hero_Leshrac.Lightning_Storm", 0.0, 0, 0);
            v60 = CBaseEntity::GetAbsOrigin(v44);
            v61 = v60->y + 0.0;
            v62 = v60->z + 1024.0;
            v63 = v60->x + 0.0;
            v71.m_Index = -1;
            this->m_vCurTargetLoc.y = v61;
            this->m_vCurTargetLoc.z = v62;
            this->m_vCurTargetLoc.x = v63;
            v64 = v44->m_pEntity;
            if ( v64 != 0 )
            {
              v65 = 0x7FFF;
              if ( v64->m_EHandle.m_Index != -1 )
                v65 = v64->m_EHandle.m_Index & 0x7FFF;
              v71.m_Index = (((v64->m_EHandle.m_Index >> 15) - (v64->m_flags & 1)) << 15) | v65 & 0x7FFF;
            }
            v66 = this->m_hHitEntities.m_Size;
            v67 = this->m_hHitEntities.m_Size;
            if ( v66 == this->m_hHitEntities.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
              v67 = this->m_hHitEntities.m_Size;
            }
            this->m_hHitEntities.m_Size = v67 + 1;
            v68 = &this->m_hHitEntities.m_Memory.m_pMemory[v66];
            if ( v68 != 0 )
              v68->m_Index = v71.m_Index;
          }
        }
      }
    }
    this->m_iCurJumpCount = 1;
  }
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow  (line 592, @0x0000000002b99a90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4511450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow  (line 592, @0x0000000002b99ab0, libserver.so)  // inlines: ~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::~CDOTA_Modifier_Leshrac_Lightning_Storm_Slow(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4511450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::IsDebuff  (line 605, @0x0000000002b92730, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::IsDebuff(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::IsVisible  (line 606, @0x0000000002b92740, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::IsVisible(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::OnCreated  (line 617, @0x0000000002b6c270, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed"
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::OnCreated(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_movement_speed", -1, 0);
  else
    this->slow_movement_speed = 0;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::DeclareFunctions  (line 630, @0x0000000002b35e50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::DeclareFunctions(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::GetModifierMoveSpeedBonus_Percentage  (line 637, @0x0000000002b35e70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Leshrac_Lightning_Storm_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Leshrac_Lightning_Storm_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::~CDOTA_Ability_Leshrac_Pulse_Nova  (line 648, @0x0000000002ba1b40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::~CDOTA_Ability_Leshrac_Pulse_Nova(
        CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  this->_vptr_IHandleEntity = &off_45117B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::~CDOTA_Ability_Leshrac_Pulse_Nova  (line 648, @0x0000000002ba1b60, libserver.so)  // inlines: ~CDOTA_Ability_Leshrac_Pulse_Nova
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::~CDOTA_Ability_Leshrac_Pulse_Nova(
        CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  this->_vptr_IHandleEntity = &off_45117B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::Schema_DynamicBinding  (line 650, @0x0000000002b92750, libserver.so)
// globals: CDOTA_Ability_Leshrac_Pulse_Nova::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  return CDOTA_Ability_Leshrac_Pulse_Nova::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 650, @0x0000000002b92760, libserver.so)
// globals: CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::DestructInstance  (line 650, @0x0000000002b92770, libserver.so)  // inlines: Destruct<CDOTA_Ability_Leshrac_Pulse_Nova>
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::FreeInstance  (line 650, @0x0000000002b92790, libserver.so)
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::CanAllocate  (line 650, @0x0000000002b927b0, libserver.so)
bool __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 650, @0x0000000002b927c0, libserver.so)
// globals: CDOTA_Ability_Leshrac_Pulse_Nova::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Leshrac_Pulse_Nova::s_pSchemaBinding;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::AllocateInstance  (line 650, @0x0000000002b98760, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::ConstructInstance  (line 650, @0x0000000002b9d880, libserver.so)  // inlines: CDOTA_Ability_Leshrac_Pulse_Nova, Construct<CDOTA_Ability_Leshrac_Pulse_Nova>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45117B0;
  }
  return p;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 650, @0x0000000002bab6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 650, @0x0000000002bab6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal  (line 650, @0x0000000002bcba20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Leshrac_Pulse_Nova"
// globals: `guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass, CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass, __dso_handle, CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo, CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass);
    CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass._vptr_CEntityClass = off_4511730;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass);
    __cxa_atexit(
      CDOTA_Ability_Leshrac_Pulse_Nova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Leshrac_Pulse_NovaClass != 0 )
    return &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass;
  if ( `guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo,
      "CDOTA_Ability_Leshrac_Pulse_Nova",
      "leshrac_pulse_nova",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo);
  }
  CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass.m_pClassInfo = &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo;
  CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass.m_pBaseClassInfo = CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Leshrac_Pulse_NovaClass = &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass;
  CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClassInfo.m_pClass = &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass;
  CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Leshrac_Pulse_NovaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Leshrac_Pulse_Nova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Leshrac_Pulse_NovaClass;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::GetAOERadius  (line 654, @0x0000000002bc43f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::GetAOERadius(CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Leshrac_Pulse_Nova::ProcsMagicStick  (line 656, @0x0000000002b927d0, libserver.so)
bool __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::ProcsMagicStick(CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  return 0;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::YouForgotToImplementOrDeclareServerClass  (line 663, @0x0000000002b35e90, libserver.so)
int __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  return 0;
}


// CDOTA_Ability_Leshrac_Pulse_Nova::GetServerClass  (line 663, @0x0000000002b4c9a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Leshrac_Pulse_Nova::GetServerClass(CDOTA_Ability_Leshrac_Pulse_Nova *const this)
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


// CDOTA_Ability_Leshrac_Pulse_Nova::OnToggle  (line 672, @0x0000000002b38b80, libserver.so)
// calls: CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_leshrac_pulse_nova"
void __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::OnToggle(CDOTA_Ability_Leshrac_Pulse_Nova *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_leshrac_pulse_nova");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_leshrac_pulse_nova", &kv, 0);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(v4, 1536);
    if ( !this->m_bStolen.m_Value )
    {
      v5 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v5, 1513, 0.1, 0.1, 9, 0, 1.0);
    }
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_leshrac_pulse_nova");
  }
}


// CDOTA_Ability_Leshrac_Pulse_Nova::GetAbilityDamageToTargetOverInterval  (line 698, @0x0000000002b6a990, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Leshrac_Pulse_Nova::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Leshrac_Pulse_Nova *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "damage_scepter";
    if ( !HasScepter )
      v9 = "damage";
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v9, -1, 0) * fInterval;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::~CDOTA_Modifier_Leshrac_Pulse_Nova  (line 707, @0x0000000002b99a40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::~CDOTA_Modifier_Leshrac_Pulse_Nova(
        CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  this->_vptr_CDOTA_Buff = &off_4512270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::~CDOTA_Modifier_Leshrac_Pulse_Nova  (line 707, @0x0000000002b99a60, libserver.so)  // inlines: ~CDOTA_Modifier_Leshrac_Pulse_Nova
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::~CDOTA_Modifier_Leshrac_Pulse_Nova(
        CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  this->_vptr_CDOTA_Buff = &off_4512270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::IsPurgable  (line 720, @0x0000000002b927e0, libserver.so)
bool __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::IsPurgable(CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  return 0;
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::GetEffectName  (line 722, @0x0000000002b927f0, libserver.so)
// strings: "particles/units/heroes/hero_leshrac/leshrac_pulse_nova_ambient.vpcf"
const char *__fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::GetEffectName(CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  return "particles/units/heroes/hero_leshrac/leshrac_pulse_nova_ambient.vpcf";
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::OnCreated  (line 733, @0x0000000002b37100, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::OnCreated(
        CDOTA_Modifier_Leshrac_Pulse_Nova *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::OnDestroy  (line 746, @0x0000000002b35ea0, libserver.so)
void __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::OnDestroy(CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  ;
}


// CDOTA_Modifier_Leshrac_Pulse_Nova::OnIntervalThink  (line 754, @0x0000000002b6bc60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::HasScepter (15 total)
// strings: "particles/units/heroes/hero_leshrac/leshrac_pulse_nova.vpcf", "Hero_Leshrac.Pulse_Nova_Strike", "mana_cost_per_second"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Leshrac_Pulse_Nova::OnIntervalThink(CDOTA_Modifier_Leshrac_Pulse_Nova *const this)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v3; // xmm2
  float v4; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r12
  int v10; // r13d
  CBaseEntity *m_pInstance; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v14; // rax
  CDOTABaseAbility *v15; // r15
  CHandle<CBaseEntity> *v16; // rdx
  uint32 v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *v21; // r14
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTABaseAbility *v24; // rax
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *v27; // rax
  CHandle<CBaseEntity> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTABaseAbility *v33; // rax
  CDOTABaseAbility *v34; // rax
  __m128i v35; // xmm3
  CDOTABaseAbility *v36; // r13
  float v37; // r12d
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTABaseAbility *v40; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  int radius; // [rsp+38h] [rbp-58h] BYREF
  int mana_cost_per_second; // [rsp+3Ch] [rbp-54h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &radius, "radius");
  *v3.m128i_i32 = radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Parent = CDOTA_Buff::GetParent(this);
  v6 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Parent, v4, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v24 = CDOTA_Buff::GetAbility(this);
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v24, "damage", -1, 0);
      v26 = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::HasScepter(v26) )
      {
        v27 = CDOTA_Buff::GetAbility(this);
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v27, "damage_scepter", -1, 0);
      }
      v28 = &entities.m_Memory.m_pMemory[v9];
      m_Index = entities.m_Memory.m_pMemory[v9].m_Index;
      if ( m_Index + 2 <= 1
        || (v30 = v28->m_Index,
            (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F]) == 0)
        || (v32 = &v31[v30 & 0x1FF]) == 0
        || m_Index != v32->m_EHandle.m_Index
        || (m_pInstance = v32->m_pInstance, v32->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_leshrac/leshrac_pulse_nova.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
      flDamage = LevelSpecialValue;
      v15 = CDOTA_Buff::GetAbility(this);
      v16 = &entities.m_Memory.m_pMemory[v9];
      v17 = entities.m_Memory.m_pMemory[v9].m_Index;
      if ( v17 + 2 <= 1
        || (v18 = v16->m_Index,
            (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F]) == 0)
        || (v20 = &v19[v18 & 0x1FF]) == 0
        || v17 != v20->m_EHandle.m_Index
        || (v21 = v20->m_pInstance, v20->m_pInstance == 0)
        || !v21->m_bIsDOTANPC )
      {
        v21 = 0;
      }
      v22 = CDOTA_Buff::GetParent(this);
      ApplyDamage(v22, v21, v15, flDamage, 2, 0);
      v23 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Leshrac.Pulse_Nova_Strike", 0.0, 0, 0);
      ++v10;
      ++v9;
    }
    while ( entities.m_Size > v10 );
  }
  v33 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v33, &mana_cost_per_second, "mana_cost_per_second");
  v34 = CDOTA_Buff::GetAbility(this);
  *v35.m128i_i32 = mana_cost_per_second;
  v36 = v34;
  v37 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
  v38 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SpendMana(v38, v37, v36, 0);
  if ( CDOTA_Buff::GetAbility(this)->m_bToggleState.m_Value )
  {
    v39 = CDOTA_Buff::GetParent(this);
    if ( mana_cost_per_second >= v39->m_flMana.m_Value )
    {
      v40 = CDOTA_Buff::GetAbility(this);
      (*(v40->_vptr_IHandleEntity + 270))(v40);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


