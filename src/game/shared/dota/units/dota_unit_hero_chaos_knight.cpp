// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:31
class CDOTA_Unit_Hero_ChaosKnight : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_ChaosKnight(CDOTA_Unit_Hero_ChaosKnight &);
	CDOTA_Unit_Hero_ChaosKnight(CDOTA_Unit_Hero_ChaosKnight &);
	CDOTA_Unit_Hero_ChaosKnight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_ChaosKnight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:39
class C_CDOTA_Unit_Hero_ChaosKnight_MapInstall {
	C_CDOTA_Unit_Hero_ChaosKnight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:53
class CDOTA_Ability_ChaosKnight_Chaos_Bolt : public CDOTABaseAbility {
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
	CDOTA_Ability_ChaosKnight_Chaos_Bolt(CDOTA_Ability_ChaosKnight_Chaos_Bolt &);
	CDOTA_Ability_ChaosKnight_Chaos_Bolt(CDOTA_Ability_ChaosKnight_Chaos_Bolt &);
	CDOTA_Ability_ChaosKnight_Chaos_Bolt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_ChaosKnight_Chaos_Bolt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:177
class CDOTA_Ability_ChaosKnight_Reality_Rift : public CDOTABaseAbility {
public:

private:

	float m_flPercentage;  // +0x390

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
	CDOTA_Ability_ChaosKnight_Reality_Rift(CDOTA_Ability_ChaosKnight_Reality_Rift &);
	CDOTA_Ability_ChaosKnight_Reality_Rift(CDOTA_Ability_ChaosKnight_Reality_Rift &);
	CDOTA_Ability_ChaosKnight_Reality_Rift();
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
	virtual int GetCurrentAbilityImmunityType();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_ChaosKnight_Reality_Rift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[254] GetCurrentAbilityImmunityType
	// vtable[256] CastFilterResult
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:203
class C_CDOTA_Ability_ChaosKnight_Reality_Rift_MapInstall {
	C_CDOTA_Ability_ChaosKnight_Reality_Rift_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:457
class CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff : public CDOTA_Buff {
public:

private:

	int armor_reduction;  // +0xba8
	CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:505
class CDOTA_Ability_ChaosKnight_Chaos_Strike : public CDOTABaseAbility {
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
	CDOTA_Ability_ChaosKnight_Chaos_Strike(CDOTA_Ability_ChaosKnight_Chaos_Strike &);
	CDOTA_Ability_ChaosKnight_Chaos_Strike(CDOTA_Ability_ChaosKnight_Chaos_Strike &);
	CDOTA_Ability_ChaosKnight_Chaos_Strike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_ChaosKnight_Chaos_Strike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:519
class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public CDOTA_Buff {
public:

private:

	int crit_damage;  // +0xba8
	int crit_chance;  // +0xbac
	CDOTA_Modifier_ChaosKnight_Chaos_Strike();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_ChaosKnight_Chaos_Strike();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:656
class CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff : public CDOTA_Buff {
public:

private:

	int maim_slow;  // +0xba8
	CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsDebuff();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:697
class CDOTA_Ability_ChaosKnight_Phantasm : public CDOTABaseAbility {
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
	CDOTA_Ability_ChaosKnight_Phantasm(CDOTA_Ability_ChaosKnight_Phantasm &);
	CDOTA_Ability_ChaosKnight_Phantasm(CDOTA_Ability_ChaosKnight_Phantasm &);
	CDOTA_Ability_ChaosKnight_Phantasm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_ChaosKnight_Phantasm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// vtable[242] GetCooldown
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:714
class C_CDOTA_Ability_ChaosKnight_Phantasm_MapInstall {
	C_CDOTA_Ability_ChaosKnight_Phantasm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_chaos_knight.cpp:787
class CDOTA_Modifier_ChaosKnight_Phantasm : public CDOTA_Buff {
public:

	CDOTA_Modifier_ChaosKnight_Phantasm();
	virtual bool IsHidden();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_ChaosKnight_Phantasm();

	// vtable[11] IsHidden
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[67] GetEffectName
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_ChaosKnight::~CDOTA_Unit_Hero_ChaosKnight  (line 31, @0x0000000002c99cd0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_ChaosKnight::~CDOTA_Unit_Hero_ChaosKnight(CDOTA_Unit_Hero_ChaosKnight *const this)
{
  this->_vptr_IHandleEntity = &off_4595B50;
  this->_vptr_INextBotEventResponder = &off_4596B30;
  this->_vptr_CObstructionObject = &off_4596E60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_ChaosKnight::~CDOTA_Unit_Hero_ChaosKnight  (line 31, @0x0000000002c99d10, libserver.so)  // inlines: ~CDOTA_Unit_Hero_ChaosKnight
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_ChaosKnight::~CDOTA_Unit_Hero_ChaosKnight(CDOTA_Unit_Hero_ChaosKnight *const this)
{
  this->_vptr_IHandleEntity = &off_4595B50;
  this->_vptr_INextBotEventResponder = &off_4596B30;
  this->_vptr_CObstructionObject = &off_4596E60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_ChaosKnight::Schema_DynamicBinding  (line 33, @0x0000000002c876a0, libserver.so)
// globals: CDOTA_Unit_Hero_ChaosKnight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ChaosKnight::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ChaosKnight *const this)
{
  return CDOTA_Unit_Hero_ChaosKnight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002c876d0, libserver.so)
// globals: CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002c876e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_ChaosKnight>
void __fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002c87700, libserver.so)
void __fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002c87720, libserver.so)
bool __fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002c87730, libserver.so)
// globals: CDOTA_Unit_Hero_ChaosKnight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_ChaosKnight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002c8f4e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002c93eb0, libserver.so)  // inlines: CDOTA_Unit_Hero_ChaosKnight, Construct<CDOTA_Unit_Hero_ChaosKnight>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4595B50;
    *(p + 236) = &off_4596B30;
    *(p + 257) = &off_4596E60;
  }
  return p;
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002ca3690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002ca3720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal  (line 33, @0x0000000002cbdc20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_chaos_knight", "CDOTA_Unit_Hero_ChaosKnight"
// globals: `guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass, CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass, __dso_handle, CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo, CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass);
    CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass._vptr_CEntityClass = off_4595AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_ChaosKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ChaosKnightClass != 0 )
    return &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass;
  if ( `guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo,
      "CDOTA_Unit_Hero_ChaosKnight",
      "npc_dota_hero_chaos_knight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo);
  }
  CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass.m_pClassInfo = &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo;
  CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass.m_pBaseClassInfo = CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ChaosKnightClass = &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass;
  CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClassInfo.m_pClass = &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass;
  CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ChaosKnightClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_ChaosKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ChaosKnightClass;
}


// CDOTA_Unit_Hero_ChaosKnight::YouForgotToImplementOrDeclareServerClass  (line 39, @0x0000000002c1bd50, libserver.so)
int __fastcall CDOTA_Unit_Hero_ChaosKnight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_ChaosKnight *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_ChaosKnight::GetServerClass  (line 39, @0x0000000002c358f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_ChaosKnight::GetServerClass(CDOTA_Unit_Hero_ChaosKnight *const this)
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


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::~CDOTA_Ability_ChaosKnight_Chaos_Bolt  (line 53, @0x0000000002c98010, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::~CDOTA_Ability_ChaosKnight_Chaos_Bolt(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this)
{
  this->_vptr_IHandleEntity = &off_4596F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::~CDOTA_Ability_ChaosKnight_Chaos_Bolt  (line 53, @0x0000000002c98030, libserver.so)  // inlines: ~CDOTA_Ability_ChaosKnight_Chaos_Bolt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::~CDOTA_Ability_ChaosKnight_Chaos_Bolt(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this)
{
  this->_vptr_IHandleEntity = &off_4596F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::Schema_DynamicBinding  (line 55, @0x0000000002c87740, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Bolt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Bolt::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000002c87750, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000002c87760, libserver.so)  // inlines: Destruct<CDOTA_Ability_ChaosKnight_Chaos_Bolt>
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000002c87780, libserver.so)
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000002c877a0, libserver.so)
bool __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000002c877b0, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Bolt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Bolt::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000002c8f520, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000002c94760, libserver.so)  // inlines: CDOTA_Ability_ChaosKnight_Chaos_Bolt, Construct<CDOTA_Ability_ChaosKnight_Chaos_Bolt>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4596F30;
  }
  return p;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002ca1ad0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002ca1af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal  (line 55, @0x0000000002cb92a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "chaos_knight_chaos_bolt", "CDOTA_Ability_ChaosKnight_Chaos_Bolt"
// globals: `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass, CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass, __dso_handle, CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo, CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo
CEntityClass *__cdecl CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass);
    CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass._vptr_CEntityClass = off_4596EB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass);
    __cxa_atexit(
      CDOTA_Ability_ChaosKnight_Chaos_Bolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass != 0 )
    return &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass;
  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo,
      "CDOTA_Ability_ChaosKnight_Chaos_Bolt",
      "chaos_knight_chaos_bolt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo);
  }
  CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass.m_pClassInfo = &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo;
  CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass.m_pBaseClassInfo = CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass = &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass;
  CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClassInfo.m_pClass = &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass;
  CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_BoltClass;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::OnSpellStart  (line 70, @0x0000000002c61dd0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "chaos_bolt_speed", "particles/units/heroes/hero_chaos_knight/chaos_knight_chaos_bolt.vpcf", "Hero_ChaosKnight.ChaosBolt.Cast"
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::OnSpellStart(CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this)
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
  info.pszEffectName = "particles/units/heroes/hero_chaos_knight/chaos_knight_chaos_bolt.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "chaos_bolt_speed", -1, 0);
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
  info.bDodgeable = 1;
  info.iSourceAttachment = 1;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_ChaosKnight.ChaosBolt.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::OnProjectileHit  (line 90, @0x0000000002c5f060, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, RandomFloat, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, log10, floor (19 total)
// strings: "stun_min", "stun_max", "modifier_stun", "damage_min", "damage_max", "modifier_stunned" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::OnProjectileHit(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  int LevelSpecialValue; // r13d
  int v10; // r14d
  float v11; // xmm1_4
  int v12; // r13d
  int v13; // r15d
  int (**v14)(...); // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC_Hero *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  double v20; // xmm0_8
  int v21; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  float flLuckFactor; // [rsp+8h] [rbp-68h]
  float flLuckFactora; // [rsp+8h] [rbp-68h]
  float flDuration; // [rsp+Ch] [rbp-64h]
  double v32; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
        {
          vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
          if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
            && (BYTE1(vptr_IHandleEntity) & 2) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stun_min", -1, 0);
            v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stun_max", -1, 0);
            flLuckFactor = RandomFloat(0.0, 1.0);
            flDuration = ((v10 - LevelSpecialValue) * flLuckFactor) + LevelSpecialValue;
            KeyValues::KeyValues(&kv, "modifier_stun");
            KeyValues::SetFloat(&kv, "duration", v11);
            v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 0);
            v13 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_max", -1, 0);
            if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
            {
              v14 = m_pInstance[58]._vptr_IHandleEntity;
              if ( (BYTE1(v14) & 1) == 0 && (BYTE1(v14) & 2) == 0 )
              {
                Caster = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_stunned", &kv, 0);
                flLuckFactora = (v12 + ((1.0 - flLuckFactor) * (v13 - v12)));
                v16 = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(v16, m_pInstance, this, flLuckFactora, 2, 0);
                if ( flDuration > 3.75 )
                {
                  v17 = 0;
                  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  {
                    v17 = m_pInstance;
                  }
                  v18 = CDOTABaseAbility::GetCaster(this);
                  if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
                    v19 = v18;
                  else
                    v19 = 0;
                  EconEntity_OnOwnerKillEaterEvent(
                    v19,
                    v17,
                    kill_eater_event_t::kKillEaterEventType_ChaosKnight_FourSecondStunBolts,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                }
                v20 = log10(flLuckFactora);
                v21 = (floor(v20) + 1.0);
                ParticleManager = GetParticleManager();
                Particle = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_chaos_knight/chaos_knight_bolt_msg.vpcf",
                             7,
                             m_pInstance,
                             0,
                             0);
                LODWORD(v32) = 0;
                *(&v32 + 1) = flLuckFactora;
                v24 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v24, Particle, 1, v32, 4.0);
                *&v32 = flDuration;
                *(&v32 + 1) = (v21 + 1);
                v25 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v25, Particle, 2, v32, 0.0);
                LODWORD(v32) = 1090519040;
                *(&v32 + 1) = flDuration;
                v26 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v26, Particle, 3, v32, 0.0);
                v27 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(
                  v27,
                  Particle,
                  4,
                  COERCE_DOUBLE(LODWORD(flDuration) | 0x4000000000000000LL),
                  0.0);
                v28 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v28, Particle);
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_ChaosKnight.ChaosBolt.Impact", 0.0, 0, 0);
              }
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetAbilityDamageToTargetOverInterval  (line 151, @0x0000000002c62000, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_min", "damage_max"
__int64 __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_Ability_ChaosKnight_Chaos_Bolt *v6; // rbx
  int LevelSpecialValue; // r13d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = this;
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_min", -1, 1);
    LODWORD(v6) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_max", -1, 1);
    return (((LevelSpecialValue + v6) / 2) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetStunDuration  (line 166, @0x0000000002c620a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "stun_max"
float __fastcall CDOTA_Ability_ChaosKnight_Chaos_Bolt::GetStunDuration(
        CDOTA_Ability_ChaosKnight_Chaos_Bolt *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stun_max", -1, 1);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::~CDOTA_Ability_ChaosKnight_Reality_Rift  (line 177, @0x0000000002ca1080, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::~CDOTA_Ability_ChaosKnight_Reality_Rift(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4597A30;
  this->m_FXIndex.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_FXIndex.m_Memory,
        CUtlMemory<int,int>::Purge(&this->m_FXIndex.m_Memory),
        (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<int,int>::Purge(p_m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::~CDOTA_Ability_ChaosKnight_Reality_Rift  (line 177, @0x0000000002ca10f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_ChaosKnight_Reality_Rift, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::~CDOTA_Ability_ChaosKnight_Reality_Rift(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  bool v2; // zf
  CUtlVectorBase<int,CUtlMemory<int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4597A30;
  this->m_FXIndex.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_FXIndex.m_Memory;
    CUtlMemory<int,int>::Purge(&this->m_FXIndex.m_Memory);
    if ( (this->m_FXIndex.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(p_m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::Schema_DynamicBinding  (line 179, @0x0000000002c877c0, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Reality_Rift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  return CDOTA_Ability_ChaosKnight_Reality_Rift::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 179, @0x0000000002c877d0, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::DestructInstance  (line 179, @0x0000000002c877e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ChaosKnight_Reality_Rift>
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::FreeInstance  (line 179, @0x0000000002c87800, libserver.so)
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::CanAllocate  (line 179, @0x0000000002c87820, libserver.so)
bool __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 179, @0x0000000002c87830, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Reality_Rift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Reality_Rift::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::AllocateInstance  (line 179, @0x0000000002c8f560, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::ConstructInstance  (line 179, @0x0000000002c9ff70, libserver.so)  // inlines: CDOTA_Ability_ChaosKnight_Reality_Rift, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_ChaosKnight_Reality_Rift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 0;
    *p = &off_4597A30;
    *(p + 116) = 0;
    *(p + 234) = 0;
    *(p + 235) = 0;
  }
  return p;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 179, @0x0000000002ca1b20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 179, @0x0000000002ca1b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal  (line 179, @0x0000000002cb93f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "chaos_knight_reality_rift", "CDOTA_Ability_ChaosKnight_Reality_Rift"
// globals: `guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass, CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass, __dso_handle, CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo, CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass);
    CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass._vptr_CEntityClass = off_45979B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass);
    __cxa_atexit(
      CDOTA_Ability_ChaosKnight_Reality_Rift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ChaosKnight_Reality_RiftClass != 0 )
    return &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass;
  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo,
      "CDOTA_Ability_ChaosKnight_Reality_Rift",
      "chaos_knight_reality_rift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo);
  }
  CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass.m_pClassInfo = &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo;
  CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass.m_pBaseClassInfo = CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ChaosKnight_Reality_RiftClass = &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass;
  CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClassInfo.m_pClass = &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass;
  CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ChaosKnight_Reality_RiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ChaosKnight_Reality_Rift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Reality_RiftClass;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::GetCurrentAbilityImmunityType  (line 187, @0x0000000002c95610, libserver.so)  // inlines: GetAbilityData, GetAbilityImmunityType, GetCurrentAbilityImmunityType
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::LoadAbilityData
// strings: "special_bonus_unique_chaos_knight"
int __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::GetCurrentAbilityImmunityType(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_Value; // esi
  int result; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_chaos_knight", 0);
  if ( AbilityByName == 0 || (m_Value = AbilityByName->m_iLevel.m_Value, result = 3, m_Value <= 0) )
  {
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    return m_pAbilityData->m_iAbilityImmunityType;
  }
  return result;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::YouForgotToImplementOrDeclareServerClass  (line 203, @0x0000000002c1bd60, libserver.so)
int __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  return 0;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::GetServerClass  (line 203, @0x0000000002c354f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::GetServerClass(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
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


// CDOTA_Ability_ChaosKnight_Reality_Rift::CastFilterResult  (line 218, @0x0000000002c21bc0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, UnitFilter
// strings: "special_bonus_unique_chaos_knight"
int __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::CastFilterResult(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // r13d
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_chaos_knight", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v6 = 16;
  else
    v6 = 0;
  v7 = CDOTABaseAbility::GetCaster(this);
  return UnitFilter(pTarget, 2, 19, v6, v7->m_iTeamNum.m_Value);
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::OnAbilityPhaseStart  (line 235, @0x0000000002c82c10, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, FastRSqrt, FastRSqrtFast, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Tail, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, RandomFloat, VectorVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (18 total)
// strings: "particles/units/heroes/hero_chaos_knight/chaos_knight_reality_rift.vpcf", "Hero_ChaosKnight.RealityRift", "particles/units/heroes/hero_chaos_knight/chaos_knight_reality_rift_lite.vpcf"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
bool __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::OnAbilityPhaseStart(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  CBaseEntity *CursorTarget; // rax
  const CBaseAnimating *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm6_4
  float y; // r15d
  float v9; // xmm0_4
  float x; // xmm7_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int m_Size; // r13d
  int v16; // ecx
  int *v17; // rdx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // r14
  int v20; // r13d
  CDOTA_ParticleManager *v21; // rax
  int v22; // r13d
  CDOTA_ParticleManager *v23; // rax
  int v24; // r13d
  CDOTA_ParticleManager *v25; // rax
  int v26; // r13d
  CDOTA_ParticleManager *v27; // rax
  int v28; // r13d
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  int v31; // eax
  int v32; // r13d
  int v33; // ecx
  int *v34; // rdx
  int v35; // r13d
  CDOTA_ParticleManager *v36; // rax
  int v37; // r12d
  CDOTA_ParticleManager *v38; // rax
  int v39; // r12d
  CDOTA_ParticleManager *v40; // rax
  int v41; // r12d
  CDOTA_ParticleManager *v42; // rax
  int v43; // r12d
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // r12
  CDOTA_BaseNPC *v47; // rax
  __int64 v48; // r13
  int v49; // r15d
  unsigned __int16 *v50; // rdx
  int v51; // eax
  __int16 v52; // cx
  CEntityIdentity *v53; // rdx
  CEntityIdentity *v54; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_ParticleManager *v56; // rax
  int v57; // eax
  __int64 v58; // r14
  int v59; // eax
  int *v60; // rax
  int v61; // r14d
  CDOTA_ParticleManager *v62; // rax
  const Vector *v63; // r14
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_ParticleManager *v66; // rax
  CDOTA_ParticleManager *v67; // rax
  int v69; // [rsp+18h] [rbp-128h]
  float v70; // [rsp+28h] [rbp-118h]
  float forward; // [rsp+40h] [rbp-100h]
  int forwarda; // [rsp+40h] [rbp-100h]
  int iIndex; // [rsp+4Ch] [rbp-F4h]
  int iIndexa; // [rsp+4Ch] [rbp-F4h]
  int iIndexb; // [rsp+4Ch] [rbp-F4h]
  Vector vKnightLoc; // [rsp+50h] [rbp-F0h] BYREF
  _BYTE v77[12]; // [rsp+60h] [rbp-E0h] OVERLAPPED
  Vector vPos; // [rsp+70h] [rbp-D0h]
  Vector vecOrientFwd; // [rsp+80h] [rbp-C0h] BYREF
  Vector vecOrientRight; // [rsp+90h] [rbp-B0h] BYREF
  Vector vecOrientUp; // [rsp+A0h] [rbp-A0h] BYREF
  Vector vecFwd_0; // [rsp+B0h] [rbp-90h] BYREF
  Vector vecRight_0; // [rsp+C0h] [rbp-80h] BYREF
  Vector vecUp_0; // [rsp+D0h] [rbp-70h] BYREF
  QAngle angles_0; // [rsp+E0h] [rbp-60h] BYREF
  __int128 angles; // [rsp+F0h] [rbp-50h] OVERLAPPED BYREF
  int v87; // [rsp+100h] [rbp-40h]
  int v88; // [rsp+104h] [rbp-3Ch]

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1517, 0.1, 0.1, 9, 0, 1.0);
    v5 = CDOTABaseAbility::GetCaster(this);
    vKnightLoc = *CBaseEntity::GetAbsOrigin(v5);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    z = AbsOrigin->z;
    *v77 = *&AbsOrigin->x;
    iIndex = *v77;
    y = AbsOrigin->y;
    v70 = z;
    *&v77[8] = AbsOrigin->z;
    v9 = RandomFloat(0.30000001, 0.80000001);
    x = vKnightLoc.x;
    this->m_flPercentage = v9;
    vPos.x = (v9 * (*&iIndex - x)) + x;
    vPos.z = (v9 * (v70 - vKnightLoc.z)) + vKnightLoc.z;
    vPos.y = (v9 * (y - vKnightLoc.y)) + vKnightLoc.y;
    forward = ((((*&iIndex - x) * (*&iIndex - x)) + 0.00000011920929) + ((y - vKnightLoc.y) * (y - vKnightLoc.y)))
            + ((v70 - vKnightLoc.z) * (v70 - vKnightLoc.z));
    v11 = 1.0 / fsqrt(forward);
    v12 = (0.5 * v11) * (3.0 - ((forward * v11) * v11));
    vecOrientFwd.x = (*&iIndex - x) * v12;
    vecOrientFwd.y = (y - vKnightLoc.y) * v12;
    vecOrientFwd.z = v12 * (v70 - vKnightLoc.z);
    VectorVectors(&vecOrientFwd, &vecOrientRight, &vecOrientUp);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_chaos_knight/chaos_knight_reality_rift.vpcf",
                 2,
                 0,
                 0,
                 0);
    m_Size = this->m_FXIndex.m_Size;
    if ( m_Size == this->m_FXIndex.m_Memory.m_nAllocationCount )
    {
      forwarda = Particle;
      CUtlMemory<int,int>::Grow(&this->m_FXIndex.m_Memory, 1);
      v16 = this->m_FXIndex.m_Size;
      Particle = forwarda;
    }
    else
    {
      v16 = this->m_FXIndex.m_Size;
    }
    this->m_FXIndex.m_Size = v16 + 1;
    v17 = &this->m_FXIndex.m_Memory.m_pMemory[m_Size];
    if ( v17 != 0 )
      *v17 = Particle;
    v18 = CDOTABaseAbility::GetCaster(this);
    *&angles = *CBaseEntity::GetAbsAngles(v18);
    AngleVectors(&angles, &vecRight_0, &vecUp_0, &angles_0);
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v21, v20, 0, v19, 1, 0, vec3_invalid, 1);
    v22 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, v22, 1, *&vKnightLoc.x, vKnightLoc.z);
    v24 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v25,
      v24,
      1,
      *&vecRight_0.x,
      vecRight_0.z,
      *&vecUp_0.x,
      vecUp_0.z,
      *&angles_0.x,
      angles_0.z);
    v26 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v27, v26, 2, *&vPos.x, vPos.z);
    v28 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v29,
      v28,
      2,
      *&vecOrientFwd.x,
      vecOrientFwd.z,
      *&vecOrientRight.x,
      vecOrientRight.z,
      *&vecOrientUp.x,
      vecOrientUp.z);
    v30 = GetParticleManager();
    v31 = CDOTA_ParticleManager::CreateParticle(
            v30,
            "particles/units/heroes/hero_chaos_knight/chaos_knight_reality_rift.vpcf",
            2,
            0,
            0,
            0);
    v32 = this->m_FXIndex.m_Size;
    v33 = v32;
    if ( v32 == this->m_FXIndex.m_Memory.m_nAllocationCount )
    {
      v69 = v31;
      CUtlMemory<int,int>::Grow(&this->m_FXIndex.m_Memory, 1);
      v33 = this->m_FXIndex.m_Size;
      v31 = v69;
    }
    this->m_FXIndex.m_Size = v33 + 1;
    v34 = &this->m_FXIndex.m_Memory.m_pMemory[v32];
    if ( v34 != 0 )
      *v34 = v31;
    *&angles = *CBaseEntity::GetAbsAngles(v3);
    AngleVectors(&angles, &vecRight_0, &vecUp_0, &angles_0);
    v35 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v36 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v36, v35, 0, v3, 1, 0, vec3_invalid, 1);
    v37 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v38 = GetParticleManager();
    *v77 = __PAIR64__(LODWORD(y), iIndex);
    *&v77[8] = v70;
    CDOTA_ParticleManager::SetParticleControl(v38, v37, 1, COERCE_DOUBLE(__PAIR64__(LODWORD(y), iIndex)), v70);
    v39 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v40,
      v39,
      1,
      *&vecRight_0.x,
      vecRight_0.z,
      *&vecUp_0.x,
      vecUp_0.z,
      *&angles_0.x,
      angles_0.z);
    v41 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v42 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v42, v41, 2, *&vPos.x, vPos.z);
    v43 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
    v44 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v44,
      v43,
      2,
      *&vecOrientFwd.x,
      vecOrientFwd.z,
      *&vecOrientRight.x,
      vecOrientRight.z,
      *&vecOrientUp.x,
      vecOrientUp.z);
    v45 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_ChaosKnight.RealityRift", v45);
    LODWORD(angles) = 0;
    *(&angles + 1) = 0;
    v87 = 0;
    v88 = 0;
    v46 = CDOTABaseAbility::GetCaster(this);
    v47 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v47->m_iTeamNum.m_Value, &vKnightLoc, v46, 1400.0, &angles, 1, 1, 0, 0, 0);
    if ( angles > 0 )
    {
      v48 = 0;
      v49 = 0;
      do
      {
        while ( 1 )
        {
          v50 = (*(&angles + 1) + v48);
          v51 = *(*(&angles + 1) + v48);
          if ( (v51 + 2) > 1 )
          {
            v52 = *v50;
            v53 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v50 >> 9) & 0x3F];
            if ( v53 != 0 )
            {
              v54 = &v53[v52 & 0x1FF];
              if ( v54 != 0 && v51 == v54->m_EHandle.m_Index )
              {
                m_pInstance = v54->m_pInstance;
                if ( v54->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && (m_pInstance->m_iUnitType & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v54->m_pInstance) != 0
                  && m_pInstance->m_bIsIllusion.m_Value )
                {
                  break;
                }
              }
            }
          }
          ++v49;
          v48 += 4;
          if ( angles <= v49 )
            goto LABEL_28;
        }
        v56 = GetParticleManager();
        v57 = CDOTA_ParticleManager::CreateParticle(
                v56,
                "particles/units/heroes/hero_chaos_knight/chaos_knight_reality_rift_lite.vpcf",
                2,
                0,
                0,
                0);
        v58 = this->m_FXIndex.m_Size;
        iIndexa = v57;
        v59 = v58;
        if ( v58 == this->m_FXIndex.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<int,int>::Grow(&this->m_FXIndex.m_Memory, 1);
          v59 = this->m_FXIndex.m_Size;
        }
        this->m_FXIndex.m_Size = v59 + 1;
        v60 = &this->m_FXIndex.m_Memory.m_pMemory[v58];
        if ( v60 != 0 )
          *v60 = iIndexa;
        angles_0 = *CBaseEntity::GetAbsAngles(m_pInstance);
        AngleVectors(&angles_0, &vecFwd_0, &vecRight_0, &vecUp_0);
        v61 = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
        v62 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v62, v61, 0, m_pInstance, 1, 0, vec3_invalid, 1);
        v63 = CBaseEntity::GetAbsOrigin(m_pInstance);
        iIndexb = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
        v64 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v64, iIndexb, 1, *&v63->x, v63->z);
        LODWORD(v63) = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
        v65 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlOrientation(
          v65,
          v63,
          1,
          *&vecFwd_0.x,
          vecFwd_0.z,
          *&vecRight_0.x,
          vecRight_0.z,
          *&vecUp_0.x,
          vecUp_0.z);
        LODWORD(v63) = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
        v66 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v66, v63, 2, *&vPos.x, vPos.z);
        LODWORD(v63) = this->m_FXIndex.m_Memory.m_pMemory[this->m_FXIndex.m_Size - 1];
        v67 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlOrientation(
          v67,
          v63,
          2,
          *&vecOrientFwd.x,
          vecOrientFwd.z,
          *&vecOrientRight.x,
          vecOrientRight.z,
          *&vecOrientUp.x,
          vecOrientUp.z);
        DOTA_EmitSound(10, "Hero_ChaosKnight.RealityRift", m_pInstance);
        ++v49;
        v48 += 4;
      }
      while ( angles > v49 );
    }
LABEL_28:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&angles);
  }
  return 1;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::OnAbilityPhaseInterrupted  (line 312, @0x0000000002c2ae80, libserver.so)  // inlines: RemoveAll
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::OnAbilityPhaseInterrupted(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  int v4; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax

  v2 = 0;
  v3 = 0;
  while ( this->m_FXIndex.m_Size > v3 )
  {
    ++v3;
    v4 = this->m_FXIndex.m_Memory.m_pMemory[v2++];
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v4, 1);
  }
  this->m_FXIndex.m_Size = 0;
}


// CDOTA_Ability_ChaosKnight_Reality_Rift::OnSpellStart  (line 321, @0x0000000002c814e0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, IndexToIdentity, IsIllusion, IsValid, LookupEntity, NormalizeInPlace, Purge, RemoveAll, Reset, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator+=, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound (32 total)
// strings: "special_bonus_unique_chaos_knight", "modifier_chaos_knight_reality_rift", "Hero_ChaosKnight.RealityRift.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_ChaosKnight_Reality_Rift::OnSpellStart(
        CDOTA_Ability_ChaosKnight_Reality_Rift *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  int v4; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v8; // r15
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *AbilityByName; // rax
  bool v11; // al
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // rax
  float y; // xmm3_4
  float m_flPercentage; // xmm2_4
  float z; // xmm7_4
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_BaseNPC *v20; // rax
  __int64 v21; // r12
  int v22; // ebx
  CHandle<CBaseEntity> *v23; // rdx
  uint32 m_Index; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v29; // rax
  int m_Size; // eax
  CDOTA_BaseNPC **v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  __int64 v34; // rbx
  CDOTA_BaseNPC *v35; // r12
  int v36; // eax
  CDOTA_BaseNPC **v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm4_4
  int v42; // edx
  __int64 v43; // rbx
  int v44; // r12d
  float v45; // xmm1_4
  CDOTA_BaseNPC *v46; // rax
  float v47; // xmm0_4
  __int64 v48; // r13
  int v49; // r12d
  vec_t v50; // xmm0_4
  vec_t v51; // xmm0_4
  CEntityIndex *v52; // rax
  CEntityIndex v53; // eax
  __int64 z_low; // rbx
  int32 m_Data; // r14d
  vec_t v56; // eax
  int nLeftSlots; // [rsp+30h] [rbp-160h]
  float nRightSlots; // [rsp+3Ch] [rbp-154h]
  int nRightSlotsa; // [rsp+3Ch] [rbp-154h]
  float v60; // [rsp+40h] [rbp-150h]
  float v61; // [rsp+40h] [rbp-150h]
  float v62; // [rsp+44h] [rbp-14Ch]
  float v63; // [rsp+44h] [rbp-14Ch]
  __int64 v64; // [rsp+48h] [rbp-148h]
  int v65; // [rsp+48h] [rbp-148h]
  float v66; // [rsp+48h] [rbp-148h]
  float v67; // [rsp+48h] [rbp-148h]
  float v68; // [rsp+58h] [rbp-138h]
  Vector vKnightLoc; // [rsp+60h] [rbp-130h] BYREF
  Vector vPos; // [rsp+70h] [rbp-120h]
  Vector vDir; // [rsp+80h] [rbp-110h] BYREF
  Vector vecTeleportOffset; // [rsp+90h] [rbp-100h] BYREF
  QAngle faceTargetAngles_0; // [rsp+A0h] [rbp-F0h] BYREF
  QAngle faceCasterAngles; // [rsp+B0h] [rbp-E0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+C0h] [rbp-D0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > hTeleportUnits; // [rsp+E0h] [rbp-B0h] BYREF
  QAngle faceTargetAngles; // [rsp+100h] [rbp-90h] BYREF
  CUtlMemory<CEntityIndex,int> v78; // [rsp+110h] [rbp-80h] BYREF
  int v79; // [rsp+120h] [rbp-70h]
  CEntityIndex v80; // [rsp+124h] [rbp-6Ch]
  int v81; // [rsp+128h] [rbp-68h]
  vec_t x; // [rsp+12Ch] [rbp-64h]
  vec_t v83; // [rsp+130h] [rbp-60h]
  vec_t v84; // [rsp+134h] [rbp-5Ch]
  char v85; // [rsp+138h] [rbp-58h]
  KeyValues kv; // [rsp+140h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+158h] [rbp-38h]
  Vector v88; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v89; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v90; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = 0;
  v3 = 0;
  v87 = __readfsqword(0x28u);
  while ( this->m_FXIndex.m_Size > v3 )
  {
    ++v3;
    v4 = this->m_FXIndex.m_Memory.m_pMemory[v2++];
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v4, 0);
  }
  this->m_FXIndex.m_Size = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1517);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    v8 = CursorTarget;
  else
    v8 = 0;
  v9 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v9, "special_bonus_unique_chaos_knight", 0);
  v11 = AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0;
  if ( v8 != 0
    && ((BYTE1(v8[3].m_vecVelocity.m_Value.x) & 2) == 0 || v11)
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(v8, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "armor_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_chaos_knight_reality_rift");
    KeyValues::SetFloat(&kv, "duration", v12);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v8, v13, this, "modifier_chaos_knight_reality_rift", &kv, 0);
    DOTA_EmitSound(10, "Hero_ChaosKnight.RealityRift.Target", v8);
    v14 = CDOTABaseAbility::GetCaster(this);
    vKnightLoc = *CBaseEntity::GetAbsOrigin(v14);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    y = AbsOrigin->y;
    m_flPercentage = this->m_flPercentage;
    v62 = ((AbsOrigin->x - vKnightLoc.x) * m_flPercentage) + vKnightLoc.x;
    vDir.x = vKnightLoc.x - AbsOrigin->x;
    v60 = ((y - vKnightLoc.y) * m_flPercentage) + vKnightLoc.y;
    z = AbsOrigin->z;
    vDir.y = vKnightLoc.y - y;
    vDir.z = 0.0;
    nRightSlots = vKnightLoc.z + (m_flPercentage * (z - vKnightLoc.z));
    VectorNormalize(&vDir);
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v20->m_iTeamNum.m_Value, &vKnightLoc, v19, 1400.0, &hUnits, 1, 1, 0, 0, 0);
    hTeleportUnits.m_Size = 0;
    hTeleportUnits.m_Memory.m_pMemory = 0;
    hTeleportUnits.m_Memory.m_nAllocationCount = 0;
    hTeleportUnits.m_Memory.m_nGrowSize = 0;
    if ( hUnits.m_Size > 0 )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        while ( 1 )
        {
          v23 = &hUnits.m_Memory.m_pMemory[v21];
          m_Index = hUnits.m_Memory.m_pMemory[v21].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v25 = v23->m_Index;
            v26 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23->m_Index) >> 9) & 0x3F];
            if ( v26 != 0 )
            {
              v27 = &v26[v25 & 0x1FF];
              if ( v27 != 0 && m_Index == v27->m_EHandle.m_Index )
              {
                m_pInstance = v27->m_pInstance;
                if ( v27->m_pInstance != 0
                  && m_pInstance->m_bIsDOTANPC
                  && (m_pInstance->m_iUnitType & 1) != 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(v27->m_pInstance) != 0
                  && m_pInstance->m_bIsIllusion.m_Value )
                {
                  v64 = (*(m_pInstance->_vptr_IHandleEntity + 413))(m_pInstance);
                  v29 = CDOTABaseAbility::GetCaster(this);
                  if ( v64 == (*(v29->_vptr_IHandleEntity + 413))(v29) )
                  {
                    m_Size = hTeleportUnits.m_Size;
                    v65 = hTeleportUnits.m_Size;
                    if ( hTeleportUnits.m_Size == hTeleportUnits.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&hTeleportUnits.m_Memory, 1);
                      m_Size = hTeleportUnits.m_Size;
                    }
                    hTeleportUnits.m_Size = m_Size + 1;
                    v31 = &hTeleportUnits.m_Memory.m_pMemory[v65];
                    if ( v31 != 0 )
                      break;
                  }
                }
              }
            }
          }
          ++v22;
          ++v21;
          if ( hUnits.m_Size <= v22 )
            goto LABEL_30;
        }
        *v31 = m_pInstance;
        ++v22;
        ++v21;
      }
      while ( hUnits.m_Size > v22 );
    }
LABEL_30:
    v32 = CDOTABaseAbility::GetCaster(this);
    *&vPos.x = __PAIR64__(LODWORD(v60), LODWORD(v62));
    *&v88.x = __PAIR64__(LODWORD(v60), LODWORD(v62));
    v88.z = nRightSlots;
    vPos.z = nRightSlots;
    FindClearSpaceForUnit(v32, v88, 1);
    v33 = CDOTABaseAbility::GetCaster(this);
    v34 = hTeleportUnits.m_Size;
    v35 = v33;
    v36 = hTeleportUnits.m_Size;
    if ( hTeleportUnits.m_Size == hTeleportUnits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&hTeleportUnits.m_Memory, 1);
      v36 = hTeleportUnits.m_Size;
    }
    hTeleportUnits.m_Size = v36 + 1;
    v37 = &hTeleportUnits.m_Memory.m_pMemory[v34];
    if ( v37 != 0 )
      *v37 = v35;
    VectorAngles(&vDir, &faceTargetAngles);
    v38 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::SetAbsAngles(v38, &faceTargetAngles);
    v66 = *&v8[2].m_bNetworkQuantizeOriginAndAngles + v8[2].m_flOverriddenFriction;
    v39 = CDOTABaseAbility::GetCaster(this);
    v40 = ((v39->m_flHullRadius + v39->m_flCollisionPadding) + v66) + 8.0;
    v67 = v62 + (vDir.x * v40);
    v41 = v60 + (vDir.y * v40);
    v61 = nRightSlots + (v40 * vDir.z);
    v63 = v41;
    if ( (v8[2].m_hEffectEntity.m_Value.m_Index & 0x800) == 0 )
    {
      *&vPos.x = __PAIR64__(LODWORD(v41), LODWORD(v67));
      *&v90.x = __PAIR64__(LODWORD(v41), LODWORD(v67));
      v90.z = v61;
      vPos.z = v61;
      FindClearSpaceForUnit(v8, v90, 1);
      faceTargetAngles.z = -vDir.z;
      faceTargetAngles.y = -vDir.y;
      faceTargetAngles.x = -vDir.x;
      VectorAngles(&faceTargetAngles, &faceCasterAngles);
      CBaseEntity::SetAbsAngles(v8, &faceCasterAngles);
    }
    v42 = hTeleportUnits.m_Size;
    if ( hTeleportUnits.m_Size > 0 )
    {
      v43 = 0;
      v44 = 0;
      nLeftSlots = 0;
      nRightSlotsa = 0;
      do
      {
        while ( !hTeleportUnits.m_Memory.m_pMemory[v43]->m_bIsIllusion.m_Value )
        {
          ++v44;
          ++v43;
          if ( v42 <= v44 )
            goto LABEL_43;
        }
        vecTeleportOffset.z = -vDir.z;
        vecTeleportOffset.y = -vDir.y;
        vecTeleportOffset.x = -vDir.x;
        if ( RandomInt(0, 1) != 0 )
          ++nRightSlotsa;
        else
          ++nLeftSlots;
        VectorYawRotate(&vecTeleportOffset, v45, &vecTeleportOffset);
        faceTargetAngles.z = -vecTeleportOffset.z;
        faceTargetAngles.y = -vecTeleportOffset.y;
        faceTargetAngles.x = -vecTeleportOffset.x;
        VectorAngles(&faceTargetAngles, &faceTargetAngles_0);
        CBaseEntity::SetAbsAngles(hTeleportUnits.m_Memory.m_pMemory[v43], &faceTargetAngles_0);
        v68 = *&v8[2].m_bNetworkQuantizeOriginAndAngles + v8[2].m_flOverriddenFriction;
        v46 = CDOTABaseAbility::GetCaster(this);
        v47 = ((v46->m_flHullRadius + v46->m_flCollisionPadding) + v68) + 8.0;
        v89.z = (vecTeleportOffset.z * v47) + v61;
        faceCasterAngles.y = (vecTeleportOffset.y * v47) + v63;
        faceCasterAngles.z = v89.z;
        faceCasterAngles.x = (v47 * vecTeleportOffset.x) + v67;
        *&v89.x = *&faceCasterAngles.x;
        FindClearSpaceForUnit(hTeleportUnits.m_Memory.m_pMemory[v43], v89, 1);
        v42 = hTeleportUnits.m_Size;
        ++v44;
        ++v43;
      }
      while ( hTeleportUnits.m_Size > v44 );
    }
LABEL_43:
    v48 = 0;
    v49 = 0;
    faceTargetAngles.z = 0.0;
    v78.m_pMemory = 0;
    v78.m_nAllocationCount = 0;
    v85 = 0;
    v78.m_nGrowSize = 0;
    x = vec3_origin.x;
    v50 = vec3_origin.y;
    faceTargetAngles.y = 0.0;
    v83 = v50;
    v51 = vec3_origin.z;
    v79 = 0;
    faceTargetAngles.x = NAN;
    v80.m_Data = 0;
    v84 = v51;
    v81 = 0;
    if ( v42 > 0 )
    {
      do
      {
        v53.m_Data = CEntityInstance::GetEntityIndex(hTeleportUnits.m_Memory.m_pMemory[v48]).m_Data;
        z_low = SLODWORD(faceTargetAngles.z);
        m_Data = v53.m_Data;
        v56 = faceTargetAngles.z;
        if ( LODWORD(faceTargetAngles.z) == v78.m_nAllocationCount )
        {
          CUtlMemory<CEntityIndex,int>::Grow(&v78, 1);
          v56 = faceTargetAngles.z;
        }
        LODWORD(faceTargetAngles.z) = LODWORD(v56) + 1;
        v52 = &v78.m_pMemory[z_low];
        if ( v52 != 0 )
          v52->m_Data = m_Data;
        ++v49;
        ++v48;
      }
      while ( hTeleportUnits.m_Size > v49 );
    }
    v79 = 4;
    v80.m_Data = CEntityInstance::GetEntityIndex(v8).m_Data;
    DOTA_ExecuteOrders(&faceTargetAngles, 0, 0, 0);
    faceTargetAngles.z = 0.0;
    if ( (v78.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&v78);
      if ( (v78.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&v78);
    }
    hTeleportUnits.m_Size = 0;
    if ( (hTeleportUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hTeleportUnits.m_Memory);
      if ( (hTeleportUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hTeleportUnits.m_Memory);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff  (line 457, @0x0000000002c930f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45984F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff  (line 457, @0x0000000002c93110, libserver.so)  // inlines: ~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::~CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45984F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::IsDebuff  (line 465, @0x0000000002c87840, libserver.so)
bool __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::IsDebuff(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::DeclareFunctions  (line 478, @0x0000000002c1bd70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::DeclareFunctions(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::OnCreated  (line 483, @0x0000000002c70e90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::OnCreated(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction", -1, 0);
  else
    this->armor_reduction = 0;
}


// CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::GetModifierPhysicalArmorBonus  (line 493, @0x0000000002c1bd90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_ChaosKnight_Reality_Rift_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::~CDOTA_Ability_ChaosKnight_Chaos_Strike  (line 505, @0x0000000002c98060, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::~CDOTA_Ability_ChaosKnight_Chaos_Strike(
        CDOTA_Ability_ChaosKnight_Chaos_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_4598850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::~CDOTA_Ability_ChaosKnight_Chaos_Strike  (line 505, @0x0000000002c98080, libserver.so)  // inlines: ~CDOTA_Ability_ChaosKnight_Chaos_Strike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::~CDOTA_Ability_ChaosKnight_Chaos_Strike(
        CDOTA_Ability_ChaosKnight_Chaos_Strike *const this)
{
  this->_vptr_IHandleEntity = &off_4598850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::Schema_DynamicBinding  (line 507, @0x0000000002c87850, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Strike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Chaos_Strike *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 507, @0x0000000002c87860, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::DestructInstance  (line 507, @0x0000000002c87870, libserver.so)  // inlines: Destruct<CDOTA_Ability_ChaosKnight_Chaos_Strike>
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::FreeInstance  (line 507, @0x0000000002c87890, libserver.so)
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::CanAllocate  (line 507, @0x0000000002c878b0, libserver.so)
bool __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 507, @0x0000000002c878c0, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Chaos_Strike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Chaos_Strike::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::AllocateInstance  (line 507, @0x0000000002c8f5a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::ConstructInstance  (line 507, @0x0000000002c94790, libserver.so)  // inlines: CDOTA_Ability_ChaosKnight_Chaos_Strike, Construct<CDOTA_Ability_ChaosKnight_Chaos_Strike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4598850;
  }
  return p;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002ca1b70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 507, @0x0000000002ca1b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal  (line 507, @0x0000000002cc03d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "chaos_knight_chaos_strike", "CDOTA_Ability_ChaosKnight_Chaos_Strike"
// globals: `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass, CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo, CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass) != 0 )
  {
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pClassInfo = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_flags = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pInputs = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_nInputCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pOutputs = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_nOutputCount = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pGameClass = 0;
    CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass._vptr_CEntityClass = off_45987D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass);
    __cxa_atexit(
      CDOTA_Ability_ChaosKnight_Chaos_Strike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass != 0 )
    return &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass;
  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo,
      "CDOTA_Ability_ChaosKnight_Chaos_Strike",
      "chaos_knight_chaos_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo);
  }
  CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pClassInfo = &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo;
  CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pBaseClassInfo = CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass = &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass;
  CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClassInfo.m_pClass = &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass;
  CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ChaosKnight_Chaos_Strike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_Chaos_StrikeClass;
}


// CDOTA_Ability_ChaosKnight_Chaos_Strike::GetIntrinsicModifierName  (line 510, @0x0000000002c878d0, libserver.so)
// strings: "modifier_chaos_knight_chaos_strike"
const char *__fastcall CDOTA_Ability_ChaosKnight_Chaos_Strike::GetIntrinsicModifierName(
        CDOTA_Ability_ChaosKnight_Chaos_Strike *const this)
{
  return "modifier_chaos_knight_chaos_strike";
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::~CDOTA_Modifier_ChaosKnight_Chaos_Strike  (line 519, @0x0000000002ca0cb0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::~CDOTA_Modifier_ChaosKnight_Chaos_Strike(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vCritRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4599310;
  this->m_vCritRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vCritRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_vCritRecords.m_Memory),
        (this->m_vCritRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::~CDOTA_Modifier_ChaosKnight_Chaos_Strike  (line 519, @0x0000000002ca0d90, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_ChaosKnight_Chaos_Strike, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::~CDOTA_Modifier_ChaosKnight_Chaos_Strike(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vCritRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4599310;
  this->m_vCritRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vCritRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_vCritRecords.m_Memory);
    if ( (this->m_vCritRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::IsHidden  (line 532, @0x0000000002c878e0, libserver.so)
bool __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::IsHidden(CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this)
{
  return 1;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::DeclareFunctions  (line 547, @0x0000000002c1bdb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ChaosKnight_Chaos_Strike::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttacked(CModifierParams const&), CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::DeclareFunctions(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_ChaosKnight_Chaos_Strike::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttacked;
  this->m_Functions[122].__pfn = CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnCreated  (line 556, @0x0000000002c71720, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crit_damage"
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnCreated(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
      return;
    }
  }
  else
  {
    this->crit_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->crit_chance = 0;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnRefresh  (line 564, @0x0000000002c717b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "crit_damage"
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnRefresh(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
      return;
    }
  }
  else
  {
    this->crit_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->crit_chance = 0;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::GetModifierPreAttack_CriticalStrike  (line 572, @0x0000000002c83c80, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  int crit_chance; // r15d
  int m_Id; // eax
  CDOTA_BaseNPC *Parent; // rax
  __m128i v17; // xmm1
  __int16 iRecord; // bx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v22; // edx
  __int16 *v23; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
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
  crit_chance = this->crit_chance;
  if ( m_pInstance == 0 )
    goto LABEL_16;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x193) == 0
    || (m_Id & 0x10) != 0
    || v12 == 0
    || v12 != CDOTA_Buff::GetParent(this)
    || v12->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    goto LABEL_16;
  }
  result.m_szVal = CDOTA_Buff::GetParent(this);
  *&result.m_eType = 1;
  if ( (result.m_szVal[2787] & 0x10) != 0 )
    goto LABEL_17;
  Parent = CDOTA_Buff::GetParent(this);
  if ( RollPseudoRandomPercentage(crit_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_CHAOS_CRIT, Parent) )
  {
    iRecord = params->iRecord;
    if ( iRecord >= 0 )
    {
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      if ( RecordByIndex != 0 )
      {
        m_Size = this->m_vCritRecords.m_Size;
        v22 = this->m_vCritRecords.m_Size;
        if ( m_Size == this->m_vCritRecords.m_Memory.m_nAllocationCount )
        {
          pAttackRecord = RecordByIndex;
          CUtlMemory<short,int>::Grow(&this->m_vCritRecords.m_Memory, 1);
          v22 = this->m_vCritRecords.m_Size;
          RecordByIndex = pAttackRecord;
        }
        this->m_vCritRecords.m_Size = v22 + 1;
        v23 = &this->m_vCritRecords.m_Memory.m_pMemory[m_Size];
        if ( v23 != 0 )
          *v23 = RecordByIndex->m_iRecord;
      }
    }
    *v17.m128i_i32 = this->crit_damage;
    *&result.m_eType = (_mm_cvtsi128_si32(v17) << 32) | 1;
  }
  else
  {
LABEL_16:
    *&result.m_eType = 1;
  }
LABEL_17:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttacked  (line 606, @0x0000000002c5b160, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetHealth, CDOTA_BaseNPC::Heal, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf", "Hero_ChaosKnight.ChaosStrike"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttacked(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  __int64 v12; // r14
  CDOTA_AttackRecordManager *v13; // rax
  __int64 v14; // rsi
  CDOTA_BaseNPC *Parent; // r14
  uint32 v16; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_ParticleManager *v21; // rax
  float Health; // xmm1_4
  CDOTABaseAbility *v23; // rbx
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // r15
  __int64 iRecord; // r14
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_BaseNPC *v28; // rax
  float flLifesteala; // [rsp+8h] [rbp-48h]
  float flLifestealb; // [rsp+8h] [rbp-48h]
  CDOTA_AttackRecord *flLifesteal; // [rsp+8h] [rbp-48h]
  int lifesteal[13]; // [rsp+1Ch] [rbp-34h] BYREF

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1
    && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v11 = &v10[params->hattacker.m_Index & 0x1FF]) != 0
    && v9 == v11->m_EHandle.m_Index
    && (v25 = v11->m_pInstance, v11->m_pInstance != 0)
    && v25->m_bIsDOTANPC )
  {
    iRecord = params->iRecord;
    AttackRecordsManager = GetAttackRecordsManager();
    flLifesteal = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent == v25 )
    {
      if ( m_pInstance != 0 && flLifesteal != 0 && flLifesteal->m_flCriticalBonus > 1.0 )
      {
        v28 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v28, "Hero_ChaosKnight.ChaosStrike", 0.0, 0, 0);
        goto LABEL_12;
      }
    }
    else
    {
      Parent = v25;
    }
  }
  else
  {
    v12 = params->iRecord;
    v13 = GetAttackRecordsManager();
    v14 = v12;
    Parent = 0;
    CDOTA_AttackRecordManager::GetRecordByIndex(v13, v14);
  }
  if ( m_pInstance == 0 )
  {
LABEL_16:
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_vCritRecords, &params->iRecord);
    return 1uLL;
  }
LABEL_12:
  v16 = m_pInstance[2].m_hEffectEntity.m_Value.m_Index;
  if ( (v16 & 0x193) == 0
    || (v16 & 0x10) != 0
    || Parent == 0
    || Parent != CDOTA_Buff::GetParent(this)
    || Parent->m_iTeamNum.m_Value == m_pInstance->m_iTeamNum.m_Value )
  {
    goto LABEL_16;
  }
  if ( CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_vCritRecords, &params->iRecord) )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, lifesteal, "lifesteal");
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/generic_gameplay/generic_lifesteal.vpcf",
                 1,
                 Parent,
                 0,
                 0);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
    flLifesteala = params->fDamage;
    if ( CBaseEntity::GetHealth(m_pInstance) <= flLifesteala )
      Health = CBaseEntity::GetHealth(m_pInstance);
    else
      Health = params->fDamage;
    flLifestealb = (lifesteal[0] * Health) / 100.0;
    v23 = CDOTA_Buff::GetAbility(this);
    v24 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Heal(v24, flLifestealb, v23, 1, 1);
  }
  return 1uLL;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttackFail  (line 642, @0x0000000002c51f60, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike::OnAttackFail(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike *const this,
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
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_vCritRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff  (line 656, @0x0000000002c930a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4599630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff  (line 656, @0x0000000002c930c0, libserver.so)  // inlines: ~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::~CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4599630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::IsDebuff  (line 664, @0x0000000002c878f0, libserver.so)
bool __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::IsDebuff(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetEffectName  (line 667, @0x0000000002c87900, libserver.so)
// strings: "particles/items2_fx/sange_maim.vpcf"
const char *__fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetEffectName(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this)
{
  return "particles/items2_fx/sange_maim.vpcf";
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::DeclareFunctions  (line 675, @0x0000000002c1be10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::DeclareFunctions(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::OnCreated  (line 680, @0x0000000002c703b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "maim_slow"
void __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::OnCreated(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->maim_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maim_slow", -1, 0);
  else
    this->maim_slow = 0;
}


// CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 685, @0x0000000002c1be30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_ChaosKnight_Chaos_Strike_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->maim_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_ChaosKnight_Phantasm::~CDOTA_Ability_ChaosKnight_Phantasm  (line 697, @0x0000000002cb6cd0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::~CDOTA_Ability_ChaosKnight_Phantasm(
        CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  this->_vptr_IHandleEntity = &off_4599990;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hIllusions);
  if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory),
        (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_ChaosKnight_Phantasm::~CDOTA_Ability_ChaosKnight_Phantasm  (line 697, @0x0000000002cb7060, libserver.so)  // inlines: Purge, ~CDOTA_Ability_ChaosKnight_Phantasm, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::~CDOTA_Ability_ChaosKnight_Phantasm(
        CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  this->_vptr_IHandleEntity = &off_4599990;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hIllusions);
  if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
    if ( (this->m_hIllusions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hIllusions.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Phantasm::Schema_DynamicBinding  (line 699, @0x0000000002c87910, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Phantasm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  return CDOTA_Ability_ChaosKnight_Phantasm::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 699, @0x0000000002c87920, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::DestructInstance  (line 699, @0x0000000002c87930, libserver.so)  // inlines: Destruct<CDOTA_Ability_ChaosKnight_Phantasm>
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::FreeInstance  (line 699, @0x0000000002c87950, libserver.so)
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::CanAllocate  (line 699, @0x0000000002c87970, libserver.so)
bool __fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 699, @0x0000000002c87980, libserver.so)
// globals: CDOTA_Ability_ChaosKnight_Phantasm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ChaosKnight_Phantasm::s_pSchemaBinding;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::AllocateInstance  (line 699, @0x0000000002c8f5e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::ConstructInstance  (line 699, @0x0000000002ca0030, libserver.so)  // inlines: CDOTA_Ability_ChaosKnight_Phantasm, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_ChaosKnight_Phantasm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4599990;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 699, @0x0000000002ca1bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 699, @0x0000000002ca1be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal  (line 699, @0x0000000002cb9540, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "chaos_knight_phantasm", "CDOTA_Ability_ChaosKnight_Phantasm"
// globals: `guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass, CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass, __dso_handle, CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo, CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo
CEntityClass *__cdecl CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass);
    CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass._vptr_CEntityClass = off_4599910;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass);
    __cxa_atexit(
      CDOTA_Ability_ChaosKnight_Phantasm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ChaosKnight_PhantasmClass != 0 )
    return &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass;
  if ( `guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo,
      "CDOTA_Ability_ChaosKnight_Phantasm",
      "chaos_knight_phantasm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo);
  }
  CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass.m_pClassInfo = &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo;
  CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass.m_pBaseClassInfo = CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ChaosKnight_PhantasmClass = &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass;
  CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClassInfo.m_pClass = &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass;
  CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ChaosKnight_PhantasmClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ChaosKnight_Phantasm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ChaosKnight_PhantasmClass;
}


// CDOTA_Ability_ChaosKnight_Phantasm::YouForgotToImplementOrDeclareServerClass  (line 714, @0x0000000002c1be50, libserver.so)
int __fastcall CDOTA_Ability_ChaosKnight_Phantasm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  return 0;
}


// CDOTA_Ability_ChaosKnight_Phantasm::GetServerClass  (line 714, @0x0000000002c35cf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_ChaosKnight_Phantasm::GetServerClass(
        CDOTA_Ability_ChaosKnight_Phantasm *const this)
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


// CDOTA_Ability_ChaosKnight_Phantasm::GetBehavior  (line 722, @0x0000000002c1fad0, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_ChaosKnight_Phantasm::GetBehavior(CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 8;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_ChaosKnight_Phantasm::GetCooldown  (line 735, @0x0000000002c55f80, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_ChaosKnight_Phantasm::GetCooldown(
        CDOTA_Ability_ChaosKnight_Phantasm *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_ChaosKnight_Phantasm::OnSpellStart  (line 748, @0x0000000002c66300, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_ProjectileManager::ProjectileDodge, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues (15 total)
// strings: "invuln_duration", "modifier_chaos_knight_phantasm", "Hero_ChaosKnight.Phantasm"
void __fastcall CDOTA_Ability_ChaosKnight_Phantasm::OnSpellStart(CDOTA_Ability_ChaosKnight_Phantasm *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v6; // cx
  __m128i v7; // xmm0
  float v8; // r14d
  int LevelSpecialValue; // r13d
  const Vector *AbsOrigin; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CBaseEntity *CursorTarget; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster == 0 || !Caster->m_bIsDOTANPC )
  {
    v13 = CDOTABaseAbility::GetCaster(this);
    if ( !CDOTA_BaseNPC::HasScepter(v13) )
      return;
LABEL_11:
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v3 = CursorTarget;
    if ( CursorTarget == 0 || !CursorTarget->m_bIsDOTANPC )
      return;
    goto LABEL_4;
  }
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v4) )
    goto LABEL_11;
LABEL_4:
  m_pEntity = v3->m_pEntity;
  hTarget.m_Index = -1;
  if ( m_pEntity != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  *v7.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "invuln_duration", -1, 0);
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v3->m_iTeamNum.m_Value,
    AbsOrigin,
    LevelSpecialValue,
    v8,
    0);
  KeyValues::KeyValues(&kv, "modifier_chaos_knight_phantasm");
  KeyValues::SetFloat(&kv, "duration", v11);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, v12, this, "modifier_chaos_knight_phantasm", &kv, 0);
  DOTA_EmitSound(8, "Hero_ChaosKnight.Phantasm", v3);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_ChaosKnight_Phantasm::~CDOTA_Modifier_ChaosKnight_Phantasm  (line 787, @0x0000000002c93050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ChaosKnight_Phantasm::~CDOTA_Modifier_ChaosKnight_Phantasm(
        CDOTA_Modifier_ChaosKnight_Phantasm *const this)
{
  this->_vptr_CDOTA_Buff = &off_459A450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ChaosKnight_Phantasm::~CDOTA_Modifier_ChaosKnight_Phantasm  (line 787, @0x0000000002c93070, libserver.so)  // inlines: ~CDOTA_Modifier_ChaosKnight_Phantasm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ChaosKnight_Phantasm::~CDOTA_Modifier_ChaosKnight_Phantasm(
        CDOTA_Modifier_ChaosKnight_Phantasm *const this)
{
  this->_vptr_CDOTA_Buff = &off_459A450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ChaosKnight_Phantasm::IsHidden  (line 792, @0x0000000002c87990, libserver.so)
bool __fastcall CDOTA_Modifier_ChaosKnight_Phantasm::IsHidden(CDOTA_Modifier_ChaosKnight_Phantasm *const this)
{
  return 1;
}


// CDOTA_Modifier_ChaosKnight_Phantasm::GetEffectName  (line 798, @0x0000000002c879a0, libserver.so)
// strings: "particles/units/heroes/hero_chaos_knight/chaos_knight_phantasm.vpcf"
const char *__fastcall CDOTA_Modifier_ChaosKnight_Phantasm::GetEffectName(
        CDOTA_Modifier_ChaosKnight_Phantasm *const this)
{
  return "particles/units/heroes/hero_chaos_knight/chaos_knight_phantasm.vpcf";
}


// CDOTA_Modifier_ChaosKnight_Phantasm::OnDestroy  (line 806, @0x0000000002c5c120, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::Interrupt, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::ForceKill, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, RandomInt, CDOTA_Buff::GetCaster (18 total)
// strings: "illusion_duration", "images_count", "modifier_illusion", "illusion_", "Hero_ChaosKnight.Phantasm.Plus"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_ChaosKnight_Phantasm::OnDestroy(CDOTA_Modifier_ChaosKnight_Phantasm *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  __int64 v3; // r13
  int v4; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *Ability; // r14
  _WORD *v7; // rcx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v11; // r14
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax
  CDOTABaseAbility *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *pCaster; // r15
  CDOTA_BaseNPC *v18; // rax
  int v19; // r13d
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *v21; // r13
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int iPadding; // [rsp+1Ch] [rbp-64h]
  float illusion_duration; // [rsp+20h] [rbp-60h] BYREF
  int outgoing_damage; // [rsp+24h] [rbp-5Ch] BYREF
  int incoming_damage; // [rsp+28h] [rbp-58h] BYREF
  int images_count; // [rsp+2Ch] [rbp-54h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    v3 = 0;
    v4 = 0;
    v5 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Interrupt(v5);
    Ability = CDOTA_Buff::GetAbility(this);
    if ( SLODWORD(Ability[1]._vptr_IHandleEntity) > 0 )
    {
      do
      {
        v7 = (Ability[1].m_pEntity + v3);
        if ( (*v7 + 2) > 1 )
        {
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v7 >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[*v7 & 0x1FF];
            if ( v9 != 0 && *v7 == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && m_pInstance->m_bIsIllusion.m_Value )
                CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
            }
          }
        }
        ++v4;
        v3 += 4;
      }
      while ( SLODWORD(Ability[1]._vptr_IHandleEntity) > v4 );
    }
    v11 = &Ability[1];
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v11);
    v12 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v12, &illusion_duration, "illusion_duration");
    v13 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v13, &outgoing_damage, "outgoing_damage");
    v14 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v14, &incoming_damage, "incoming_damage");
    v15 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v15, &images_count, "images_count");
    KeyValues::KeyValues(&kv, "modifier_illusion");
    KeyValues::SetFloat(&kv, "duration", v16);
    KeyValues::SetInt(&kv, "outgoing_damage", outgoing_damage);
    KeyValues::SetInt(&kv, "incoming_damage", incoming_damage);
    if ( RandomInt(0, 1) == 1 )
    {
      ++images_count;
      v23 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_ChaosKnight.Phantasm.Plus", 0.0, 0, 0);
    }
    pCaster = CDOTA_Buff::GetCaster(this);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = images_count;
    iPadding = (images_count * (v18->m_flHullRadius + v18->m_flCollisionPadding));
    v20 = CDOTA_Buff::GetParent(this);
    DOTA_CreateIllusions(v20, v19, iPadding, 1, &kv, v11, pCaster, "illusion_", 1);
    v21 = CDOTA_Buff::GetAbility(this);
    v22 = CDOTA_Buff::GetParent(this);
    Purge(v22, v21, 4);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_ChaosKnight_Phantasm::CheckState  (line 863, @0x0000000002c1be60, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_ChaosKnight_Phantasm::CheckState(
        CDOTA_Modifier_ChaosKnight_Phantasm *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80804320uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7FBCDFLL;
}


