// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:38
class CDOTA_Unit_Hero_Luna : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Luna(CDOTA_Unit_Hero_Luna &);
	CDOTA_Unit_Hero_Luna(CDOTA_Unit_Hero_Luna &);
	CDOTA_Unit_Hero_Luna();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Luna();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:45
class C_CDOTA_Unit_Hero_Luna_MapInstall {
	C_CDOTA_Unit_Hero_Luna_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:59
class CDOTA_Ability_Luna_LucentBeam : public CDOTABaseAbility {
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
	CDOTA_Ability_Luna_LucentBeam(CDOTA_Ability_Luna_LucentBeam &);
	CDOTA_Ability_Luna_LucentBeam(CDOTA_Ability_Luna_LucentBeam &);
	CDOTA_Ability_Luna_LucentBeam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool IsHiddenWhenStolen();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Luna_LucentBeam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:76
class C_CDOTA_Ability_Luna_LucentBeam_MapInstall {
	C_CDOTA_Ability_Luna_LucentBeam_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:186
struct sGlaiveInfo {
private:

	int iAttackIndex;  // +0x0
	int iBounceCount;  // +0x4
	sGlaiveInfo();

	~sGlaiveInfo();
	sGlaiveInfo & operator=(const sGlaiveInfo &);

	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:197
class CDOTA_Ability_Luna_MoonGlaive : public CDOTABaseAbility {
public:

private:

	int m_iAttackIndex;  // +0x390

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
	CDOTA_Ability_Luna_MoonGlaive(CDOTA_Ability_Luna_MoonGlaive &);
	CDOTA_Ability_Luna_MoonGlaive(CDOTA_Ability_Luna_MoonGlaive &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Luna_MoonGlaive();
	virtual const char * GetIntrinsicModifierName();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual ~CDOTA_Ability_Luna_MoonGlaive();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[290] OnProjectileHit_ExtraData
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:392
class CDOTA_Modifier_Luna_MoonGlaive : public CDOTA_Buff {
public:

private:

	int range;  // +0xba8
	int bounces;  // +0xbac
	int damage_reduction_percent;  // +0xbb0
	int m_nMoonGlaiveFXIndex;  // +0xbb4
	CDOTA_Modifier_Luna_MoonGlaive();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Luna_MoonGlaive();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackLanded
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:501
class CDOTA_Ability_Luna_LunarBlessing : public CDOTABaseAbility {
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
	CDOTA_Ability_Luna_LunarBlessing(CDOTA_Ability_Luna_LunarBlessing &);
	CDOTA_Ability_Luna_LunarBlessing(CDOTA_Ability_Luna_LunarBlessing &);
	CDOTA_Ability_Luna_LunarBlessing();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Luna_LunarBlessing();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:519
class C_CDOTA_Ability_Luna_LunarBlessing_MapInstall {
	C_CDOTA_Ability_Luna_LunarBlessing_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:530
class CDOTA_Modifier_Luna_LunarBlessing : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int bonus_night_vision;  // +0xbac
	CDOTA_Modifier_Luna_LunarBlessing();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetBonusNightVision(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual const char * GetEffectName();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Luna_LunarBlessing();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[67] GetEffectName
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:597
class CDOTA_Modifier_Luna_LunarBlessingAura : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	CDOTA_Modifier_Luna_LunarBlessingAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Luna_LunarBlessingAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:654
class CDOTA_Ability_Luna_Eclipse : public CDOTABaseAbility {
public:

private:

	bool m_bIsScepterCast;  // +0x390
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
	CDOTA_Ability_Luna_Eclipse(CDOTA_Ability_Luna_Eclipse &);
	CDOTA_Ability_Luna_Eclipse(CDOTA_Ability_Luna_Eclipse &);
	CDOTA_Ability_Luna_Eclipse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetBehavior();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Luna_Eclipse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[226] GetCastRange
	// vtable[251] GetBehavior
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:679
class C_CDOTA_Ability_Luna_Eclipse_MapInstall {
	C_CDOTA_Ability_Luna_Eclipse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_luna.cpp:782
class CDOTA_Modifier_Luna_Eclipse : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	int radius;  // +0xbac
	int beams;  // +0xbb0
	int hit_count;  // +0xbb4
	int m_iBeamDamage;  // +0xbb8
	bool bAreaTarget;  // +0xbc8

	int m_iTickCount;  // +0xbcc
	int m_nMoonlightFXIndex;  // +0xbd0

	float beam_interval;  // +0xbf0
	float beam_interval_scepter;  // +0xbf4
	float m_flInterval;  // +0xbf8
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void OnIntervalThink();
	CDOTA_Modifier_Luna_Eclipse();
	void DoLucentBeamStrike();
	virtual ~CDOTA_Modifier_Luna_Eclipse();

	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// sizeof = 3072
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Luna::~CDOTA_Unit_Hero_Luna  (line 38, @0x0000000002c06dd0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Luna::~CDOTA_Unit_Hero_Luna(CDOTA_Unit_Hero_Luna *const this)
{
  this->_vptr_IHandleEntity = &off_452EA30;
  this->_vptr_INextBotEventResponder = &off_452FA10;
  this->_vptr_CObstructionObject = &off_452FD40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Luna::~CDOTA_Unit_Hero_Luna  (line 38, @0x0000000002c06e10, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Luna
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Luna::~CDOTA_Unit_Hero_Luna(CDOTA_Unit_Hero_Luna *const this)
{
  this->_vptr_IHandleEntity = &off_452EA30;
  this->_vptr_INextBotEventResponder = &off_452FA10;
  this->_vptr_CObstructionObject = &off_452FD40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Luna::Schema_DynamicBinding  (line 40, @0x0000000002bfd9d0, libserver.so)
// globals: CDOTA_Unit_Hero_Luna::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Luna::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Luna *const this)
{
  return CDOTA_Unit_Hero_Luna::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002bfda00, libserver.so)
// globals: CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002bfda10, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Luna>
void __fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002bfda30, libserver.so)
void __fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002bfda50, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002bfda60, libserver.so)
// globals: CDOTA_Unit_Hero_Luna::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Luna::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002c01df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002c04410, libserver.so)  // inlines: CDOTA_Unit_Hero_Luna, Construct<CDOTA_Unit_Hero_Luna>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_452EA30;
    *(p + 236) = &off_452FA10;
    *(p + 257) = &off_452FD40;
  }
  return p;
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002c0b540, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002c0b5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Luna::GetEntityClassInternal  (line 40, @0x0000000002c10470, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_luna", "CDOTA_Unit_Hero_Luna"
// globals: `guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass, CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass, __dso_handle, CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo, CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Luna::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass);
    CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass._vptr_CEntityClass = off_452E9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Luna::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_LunaClass != 0 )
    return &CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo,
      "CDOTA_Unit_Hero_Luna",
      "npc_dota_hero_luna",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo);
  }
  CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass.m_pClassInfo = &CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo;
  CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_LunaClass = &CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass;
  CDOTA_Unit_Hero_Luna::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_LunaClassInfo.m_pClass = &CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass;
  CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_LunaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Luna::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_LunaClass;
}


// CDOTA_Unit_Hero_Luna::YouForgotToImplementOrDeclareServerClass  (line 45, @0x0000000002bd2c50, libserver.so)
int __fastcall CDOTA_Unit_Hero_Luna::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Luna *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Luna::GetServerClass  (line 45, @0x0000000002bdc2b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Luna::GetServerClass(CDOTA_Unit_Hero_Luna *const this)
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


// CDOTA_Ability_Luna_LucentBeam::~CDOTA_Ability_Luna_LucentBeam  (line 59, @0x0000000002c04fe0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Luna_LucentBeam::~CDOTA_Ability_Luna_LucentBeam(
        CDOTA_Ability_Luna_LucentBeam *const this)
{
  this->_vptr_IHandleEntity = &off_452FE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Luna_LucentBeam::~CDOTA_Ability_Luna_LucentBeam  (line 59, @0x0000000002c05000, libserver.so)  // inlines: ~CDOTA_Ability_Luna_LucentBeam
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Luna_LucentBeam::~CDOTA_Ability_Luna_LucentBeam(
        CDOTA_Ability_Luna_LucentBeam *const this)
{
  this->_vptr_IHandleEntity = &off_452FE10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Luna_LucentBeam::Schema_DynamicBinding  (line 61, @0x0000000002bfda70, libserver.so)
// globals: CDOTA_Ability_Luna_LucentBeam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_LucentBeam::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_LucentBeam *const this)
{
  return CDOTA_Ability_Luna_LucentBeam::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 61, @0x0000000002bfda80, libserver.so)
// globals: CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::DestructInstance  (line 61, @0x0000000002bfda90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Luna_LucentBeam>
void __fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::FreeInstance  (line 61, @0x0000000002bfdab0, libserver.so)
void __fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::CanAllocate  (line 61, @0x0000000002bfdad0, libserver.so)
bool __fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 61, @0x0000000002bfdae0, libserver.so)
// globals: CDOTA_Ability_Luna_LucentBeam::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_LucentBeam::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::AllocateInstance  (line 61, @0x0000000002c01e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::ConstructInstance  (line 61, @0x0000000002c04780, libserver.so)  // inlines: CDOTA_Ability_Luna_LucentBeam, Construct<CDOTA_Ability_Luna_LucentBeam>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_452FE10;
  }
  return p;
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002c0a500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 61, @0x0000000002c0a520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal  (line 61, @0x0000000002c105c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "luna_lucent_beam", "CDOTA_Ability_Luna_LucentBeam"
// globals: `guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass, CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass, __dso_handle, CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo, CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo
CEntityClass *__cdecl CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass);
    CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass._vptr_CEntityClass = off_452FD90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass);
    __cxa_atexit(
      CDOTA_Ability_Luna_LucentBeam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Luna_LucentBeamClass != 0 )
    return &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass;
  if ( `guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo,
      "CDOTA_Ability_Luna_LucentBeam",
      "luna_lucent_beam",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo);
  }
  CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass.m_pClassInfo = &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo;
  CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass.m_pBaseClassInfo = CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Luna_LucentBeamClass = &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass;
  CDOTA_Ability_Luna_LucentBeam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClassInfo.m_pClass = &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass;
  CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Luna_LucentBeamClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Luna_LucentBeam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LucentBeamClass;
}


// CDOTA_Ability_Luna_LucentBeam::IsHiddenWhenStolen  (line 68, @0x0000000002bfdaf0, libserver.so)
bool __fastcall CDOTA_Ability_Luna_LucentBeam::IsHiddenWhenStolen(CDOTA_Ability_Luna_LucentBeam *const this)
{
  return 1;
}


// CDOTA_Ability_Luna_LucentBeam::YouForgotToImplementOrDeclareServerClass  (line 76, @0x0000000002bd2c60, libserver.so)
int __fastcall CDOTA_Ability_Luna_LucentBeam::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Luna_LucentBeam *const this)
{
  return 0;
}


// CDOTA_Ability_Luna_LucentBeam::GetServerClass  (line 76, @0x0000000002bdc3b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Luna_LucentBeam::GetServerClass(CDOTA_Ability_Luna_LucentBeam *const this)
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


// CDOTA_Ability_Luna_LucentBeam::GetCooldown  (line 86, @0x0000000002be6590, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_luna_2"
float __fastcall CDOTA_Ability_Luna_LucentBeam::GetCooldown(CDOTA_Ability_Luna_LucentBeam *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_luna_2", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Luna_LucentBeam::OnAbilityPhaseStart  (line 101, @0x0000000002bd4100, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_luna/luna_lucent_beam_precast.vpcf", "attach_attack1"
bool __fastcall CDOTA_Ability_Luna_LucentBeam::OnAbilityPhaseStart(CDOTA_Ability_Luna_LucentBeam *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_luna/luna_lucent_beam_precast.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Caster, 0, v6, 5, "attach_attack1", *AbsOrigin, 1);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, Caster);
  return 1;
}


// CDOTA_Ability_Luna_LucentBeam::OnSpellStart  (line 112, @0x0000000002bec8f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IsInvulnerable, IsRealHero, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName (21 total)
// strings: "Hero_Luna.LucentBeam.Cast", "particles/units/heroes/hero_luna/luna_lucent_beam.vpcf", "attach_hitloc", "attach_attack1", "beam_damage", "special_bonus_unique_luna_1" (8 total)
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Luna_LucentBeam::OnSpellStart(CDOTA_Ability_Luna_LucentBeam *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  const Vector *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  const Vector *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  const Vector *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // r14
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // r14
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v29; // rax
  double v30; // xmm0_8
  float v31; // xmm1_4
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC_Hero *v33; // r13
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC_Hero *v35; // rdi
  float stun_duration; // [rsp+Ch] [rbp-54h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Luna.LucentBeam.Cast", 0.0, 0, 0);
      v6 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_luna/luna_lucent_beam.vpcf",
                      2,
                      0,
                      0,
                      v6);
      v8 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, v6, 0, v10, 0, 0, *AbsOrigin, 1);
      v12 = CBaseEntity::GetAbsOrigin(v3);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v13, v6, 1, v3, 0, 0, *v12, 1);
      v14 = CBaseEntity::GetAbsOrigin(v3);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v15, v6, 4, *&v14->x, v14->z);
      v16 = CBaseEntity::GetAbsOrigin(v3);
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v17, v6, 5, v3, 5, "attach_hitloc", *v16, 1);
      v18 = CDOTABaseAbility::GetCaster(this);
      v19 = CBaseEntity::GetAbsOrigin(v18);
      v20 = CDOTABaseAbility::GetCaster(this);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, v6, 6, v20, 5, "attach_attack1", *v19, 1);
      v22 = CDOTABaseAbility::GetCaster(this);
      v23 = CBaseEntity::GetAbsOrigin(v22);
      v24 = CDOTABaseAbility::GetCaster(this);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v25, v6, 7, v24, 1, 0, *v23, 1);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, v6);
      stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "beam_damage", -1, 0);
      v27 = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v27, "special_bonus_unique_luna_1", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + stun_duration;
      v29 = CDOTABaseAbility::GetCaster(this);
      v30 = ApplyDamage(v29, v3, this, stun_duration, 2, 0);
      if ( (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
        && LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0
        && (*(v3->_vptr_IHandleEntity + 408))(v3, v30) == 0 )
      {
        v33 = 0;
        if ( v3->m_bIsDOTANPC
          && (v3[2].m_hEffectEntity.m_Value.m_Index & 1) != 0
          && LOBYTE(v3[4].m_pfnMoveDone.__delta) == 0 )
        {
          v33 = v3;
        }
        v34 = CDOTABaseAbility::GetCaster(this);
        v35 = 0;
        if ( v34 != 0 && v34->m_bIsDOTANPC && (v34->m_iUnitType & 1) != 0 && !v34->m_bIsIllusion.m_Value )
          v35 = v34;
        EconEntity_OnOwnerKillEaterEvent(
          v35,
          v33,
          kill_eater_event_t::kKillEaterEventType_Luna_LucentBeamKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v31);
      if ( (*(v3->_vptr_IHandleEntity + 408))(v3) != 0 )
      {
        v32 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v3, v32, this, "modifier_stunned", &kv, 0);
      }
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Luna.LucentBeam.Target", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Luna_LucentBeam::GetAbilityDamageToTargetOverInterval  (line 163, @0x0000000002be6600, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "beam_damage"
__int64 __fastcall CDOTA_Ability_Luna_LucentBeam::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Luna_LucentBeam *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "beam_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Luna_LucentBeam::GetStunDuration  (line 177, @0x0000000002bef3d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Luna_LucentBeam::GetStunDuration(CDOTA_Ability_Luna_LucentBeam *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
}


// CDOTA_Ability_Luna_MoonGlaive::~CDOTA_Ability_Luna_MoonGlaive  (line 197, @0x0000000002c19500, libserver.so)  // inlines: Destruct<sGlaiveInfo>, Element, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~sGlaiveInfo
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<sGlaiveInfo, int>::Purge
void __fastcall CDOTA_Ability_Luna_MoonGlaive::~CDOTA_Ability_Luna_MoonGlaive(
        CDOTA_Ability_Luna_MoonGlaive *const this)
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v4; // rbx
  bool v5; // zf

  this->_vptr_IHandleEntity = &off_4530910;
  m_Size = this->m_GlaiveInfo.m_Size;
  for ( i = 32LL * m_Size - 32; --m_Size >= 0; i -= 32 )
  {
    v4 = this->m_GlaiveInfo.m_Memory.m_pMemory + i;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll((v4 + 8));
    if ( (*(v4 + 7) & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
      if ( (*(v4 + 7) & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
    }
  }
  v5 = (this->m_GlaiveInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GlaiveInfo.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sGlaiveInfo,int>::Purge(&this->m_GlaiveInfo.m_Memory);
    if ( (this->m_GlaiveInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sGlaiveInfo,int>::Purge(&this->m_GlaiveInfo.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Luna_MoonGlaive::~CDOTA_Ability_Luna_MoonGlaive  (line 197, @0x0000000002c19780, libserver.so)  // inlines: Destruct<sGlaiveInfo>, Element, Purge, RemoveAll, operator[], ~CDOTA_Ability_Luna_MoonGlaive, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~sGlaiveInfo
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<sGlaiveInfo, int>::Purge
void __fastcall CDOTA_Ability_Luna_MoonGlaive::~CDOTA_Ability_Luna_MoonGlaive(
        CDOTA_Ability_Luna_MoonGlaive *const this)
{
  int m_Size; // r12d
  __int64 i; // r13
  char *v4; // rbx
  bool v5; // zf

  this->_vptr_IHandleEntity = &off_4530910;
  m_Size = this->m_GlaiveInfo.m_Size;
  for ( i = 32LL * m_Size - 32; --m_Size >= 0; i -= 32 )
  {
    v4 = this->m_GlaiveInfo.m_Memory.m_pMemory + i;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll((v4 + 8));
    if ( (*(v4 + 7) & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
      if ( (*(v4 + 7) & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(v4 + 1);
    }
  }
  v5 = (this->m_GlaiveInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_GlaiveInfo.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<sGlaiveInfo,int>::Purge(&this->m_GlaiveInfo.m_Memory);
    if ( (this->m_GlaiveInfo.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sGlaiveInfo,int>::Purge(&this->m_GlaiveInfo.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Luna_MoonGlaive::Schema_DynamicBinding  (line 199, @0x0000000002bfdb00, libserver.so)
// globals: CDOTA_Ability_Luna_MoonGlaive::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_MoonGlaive::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_MoonGlaive *const this)
{
  return CDOTA_Ability_Luna_MoonGlaive::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 199, @0x0000000002bfdb10, libserver.so)
// globals: CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::DestructInstance  (line 199, @0x0000000002bfdb20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Luna_MoonGlaive>
void __fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::FreeInstance  (line 199, @0x0000000002bfdb40, libserver.so)
void __fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::CanAllocate  (line 199, @0x0000000002bfdb60, libserver.so)
bool __fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 199, @0x0000000002bfdb70, libserver.so)
// globals: CDOTA_Ability_Luna_MoonGlaive::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_MoonGlaive::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::AllocateInstance  (line 199, @0x0000000002c01e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::ConstructInstance  (line 199, @0x0000000002c0a250, libserver.so)  // inlines: CDOTA_Ability_Luna_MoonGlaive, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Luna_MoonGlaive>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 0;
    *p = &off_4530910;
    *(p + 116) = 0;
    *(p + 234) = 0;
    *(p + 235) = 0;
    *(p + 228) = 0;
  }
  return p;
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 199, @0x0000000002c0a550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 199, @0x0000000002c0a570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal  (line 199, @0x0000000002c10710, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Luna_MoonGlaive"
// globals: `guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass, CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass, __dso_handle, CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo, CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass);
    CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass._vptr_CEntityClass = off_4530890;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass);
    __cxa_atexit(
      CDOTA_Ability_Luna_MoonGlaive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Luna_MoonGlaiveClass != 0 )
    return &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass;
  if ( `guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo,
      "CDOTA_Ability_Luna_MoonGlaive",
      "luna_moon_glaive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo);
  }
  CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass.m_pClassInfo = &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo;
  CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass.m_pBaseClassInfo = CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Luna_MoonGlaiveClass = &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass;
  CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClassInfo.m_pClass = &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass;
  CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Luna_MoonGlaiveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Luna_MoonGlaive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_MoonGlaiveClass;
}


// CDOTA_Ability_Luna_MoonGlaive::GetIntrinsicModifierName  (line 207, @0x0000000002bfdb80, libserver.so)
// strings: "modifier_luna_moon_glaive"
const char *__fastcall CDOTA_Ability_Luna_MoonGlaive::GetIntrinsicModifierName(
        CDOTA_Ability_Luna_MoonGlaive *const this)
{
  return "modifier_luna_moon_glaive";
}


// CDOTA_Ability_Luna_MoonGlaive::OnProjectileHit_ExtraData  (line 221, @0x0000000002bfa0a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Construct<sGlaiveInfo>, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetModifier_Constant_Additive, GetModifier_Percentage_Additive, GetProjectileSpeed, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsListeningToEvent, IsValid, Length2D, LookupEntity, Random, Set, SetAttacker, SetTarget, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[], sGlaiveInfo, sTrackingProjectileCreateInfo, ~CUtlVector
// calls: KeyValues::GetInt, Warning, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, powf, CBaseEntity::GetHealth, GetAttackRecordsManager, CDOTA_AttackRecordManager::AddNewAttackRecord, DamageImpact (30 total)
// strings: "attack_index", "Failed to find glaive info?\n", "damage_reduction_percent", "Hero_Luna.MoonGlaive.Impact", "glaive_onprojectilehit", "particles/units/heroes/hero_luna/luna_moon_glaive_bounce.vpcf" (7 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Luna_MoonGlaive::OnProjectileHit_ExtraData(
        CDOTA_Ability_Luna_MoonGlaive *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int Int; // eax
  int m_Size; // ecx
  sGlaiveInfo *m_pMemory; // rdx
  int v9; // r12d
  unsigned int v10; // ebx
  __int64 v12; // r15
  int LevelSpecialValue; // eax
  sGlaiveInfo *v14; // r15
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // r13
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  CEntityIdentity *v20; // rax
  __int16 v21; // cx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float Modifier_Percentage_Additive_Internal; // xmm0_4
  __int64 v26; // rdx
  CDOTA_BaseNPC *v27; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  __int64 v29; // rdx
  CDOTA_BaseNPC *v30; // rax
  __int64 v31; // rdx
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm0_4
  __int64 v34; // rdx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_BaseNPC *v36; // rax
  CEntityIdentity *v37; // rcx
  int v38; // eax
  __int16 v39; // si
  CEntityIdentity *v40; // rcx
  int v41; // eax
  __int16 v42; // si
  CEntityIdentity *v43; // rcx
  int v44; // eax
  __int16 v45; // si
  int v46; // eax
  __int64 v47; // r13
  int v48; // eax
  CHandle<CBaseEntity> *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  __int64 v51; // r13
  int i; // r14d
  const CHandle<CBaseEntity> *v53; // rsi
  uint32 m_Index; // esi
  CDOTA_BaseNPC *v55; // rax
  int v56; // eax
  __int64 v57; // r13
  CEntityInstance *v58; // rax
  const CBaseEntity *v59; // r14
  __int64 v60; // r12
  const CBaseEntity *m_pInstance; // r13
  const Vector *AbsOrigin; // rax
  const Vector *v63; // rax
  float v64; // xmm0_4
  float v65; // xmm1_4
  int v66; // eax
  unsigned __int16 *v67; // rdx
  int v68; // eax
  __int16 v69; // cx
  CEntityIdentity *v70; // rdx
  CEntityIdentity *v71; // rdx
  CDOTA_BaseNPC *v72; // rax
  CDOTA_BaseNPC *v73; // rax
  __int64 v74; // rdx
  float v75; // xmm0_4
  int v76; // eax
  vec_t z; // xmm0_4
  CEntityIdentity *v78; // rax
  int v79; // edx
  __int16 v80; // cx
  CDOTA_BaseNPC *v81; // rax
  int v82; // eax
  sGlaiveInfo *v83; // rcx
  __int64 v84; // rax
  sGlaiveInfo *v85; // rdx
  int m_iAttackIndex; // edx
  CDOTA_AttackRecord *pRecord; // [rsp+20h] [rbp-180h]
  float v89; // [rsp+28h] [rbp-178h]
  char bDoDamage; // [rsp+2Ch] [rbp-174h]
  float bDoDamagea; // [rsp+2Ch] [rbp-174h]
  float bDoDamageb; // [rsp+2Ch] [rbp-174h]
  int range; // [rsp+30h] [rbp-170h]
  int flBounceRatio; // [rsp+40h] [rbp-160h]
  float flBounceRatioa; // [rsp+40h] [rbp-160h]
  int bounces; // [rsp+44h] [rbp-15Ch]
  CDOTA_BaseNPC *flNextDistance; // [rsp+48h] [rbp-158h]
  int flNextDistancee; // [rsp+48h] [rbp-158h]
  float flNextDistancea; // [rsp+48h] [rbp-158h]
  float flNextDistanceb; // [rsp+48h] [rbp-158h]
  float flNextDistancef; // [rsp+48h] [rbp-158h]
  float flNextDistancec; // [rsp+48h] [rbp-158h]
  float flNextDistanceg; // [rsp+48h] [rbp-158h]
  float flNextDistanced; // [rsp+48h] [rbp-158h]
  CModifierParams params; // [rsp+50h] [rbp-150h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+100h] [rbp-A0h] BYREF
  unsigned __int64 v109; // [rsp+168h] [rbp-38h]

  v109 = __readfsqword(0x28u);
  if ( pExtraData != 0 )
  {
    Int = KeyValues::GetInt(pExtraData, "attack_index", 0);
    m_Size = this->m_GlaiveInfo.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_7:
      v10 = 1;
      Warning("Failed to find glaive info?\n");
      return v10;
    }
    m_pMemory = this->m_GlaiveInfo.m_Memory.m_pMemory;
    if ( Int != m_pMemory->iAttackIndex )
    {
      v9 = 0;
      while ( ++v9 != m_Size )
      {
        ++m_pMemory;
        if ( Int == m_pMemory->iAttackIndex )
        {
          bDoDamage = 1;
          goto LABEL_10;
        }
      }
      goto LABEL_7;
    }
    v12 = 0;
    v9 = 0;
    bDoDamage = 1;
  }
  else
  {
    v9 = this->m_GlaiveInfo.m_Size;
    v82 = v9;
    if ( v9 == this->m_GlaiveInfo.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<sGlaiveInfo,int>::Grow(&this->m_GlaiveInfo.m_Memory, 1);
      v82 = this->m_GlaiveInfo.m_Size;
    }
    v83 = 0;
    this->m_GlaiveInfo.m_Size = v82 + 1;
    v84 = v9;
    v85 = &this->m_GlaiveInfo.m_Memory.m_pMemory[v84];
    if ( v85 != 0 )
    {
      v85->hAlreadyHitList.m_Size = 0;
      v85->hAlreadyHitList.m_Memory.m_pMemory = 0;
      v85->hAlreadyHitList.m_Memory.m_nAllocationCount = 0;
      v85->hAlreadyHitList.m_Memory.m_nGrowSize = 0;
      v83 = &this->m_GlaiveInfo.m_Memory.m_pMemory[v84];
    }
    bDoDamage = 0;
    m_iAttackIndex = this->m_iAttackIndex;
    this->m_iAttackIndex = m_iAttackIndex + 1;
    v83->iAttackIndex = m_iAttackIndex;
    this->m_GlaiveInfo.m_Memory.m_pMemory[v84].iBounceCount = 0;
LABEL_10:
    if ( v9 == -1 )
      goto LABEL_7;
    v12 = v9;
  }
  range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  bounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bounces", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_reduction_percent", -1, 0);
  v14 = &this->m_GlaiveInfo.m_Memory.m_pMemory[v12];
  flBounceRatio = LevelSpecialValue;
  v15 = CEntityHandle::operator CEntityInstance *(hTarget);
  flNextDistance = 0;
  v16 = v15;
  if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
  {
    flNextDistance = v15;
    if ( bDoDamage != 0 )
    {
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
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
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
      {
        v19 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v19 & 0x7FFF;
      }
      else
      {
        params.hattacker.m_Index = -1;
      }
      v20 = v16->m_pEntity;
      if ( v20 != 0 )
      {
        v21 = 0x7FFF;
        if ( v20->m_EHandle.m_Index != -1 )
          v21 = v20->m_EHandle.m_Index & 0x7FFF;
        params.htarget.m_Index = (((v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
      else
      {
        params.htarget.m_Index = -1;
      }
      v22 = CDOTABaseAbility::GetCaster(this);
      flNextDistancee = (*(v22->_vptr_IHandleEntity + 416))(v22);
      v23 = CDOTABaseAbility::GetCaster(this);
      flNextDistancea = (flNextDistancee + (*(v23->_vptr_IHandleEntity + 417))(v23)) * 0.5;
      v24 = CDOTABaseAbility::GetCaster(this);
      Modifier_Percentage_Additive_Internal = 1.0;
      v26 = v24->m_ModifierManager.m_buffsForModifiers[34];
      if ( v26 != 0xFF && v24->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v26].m_Size > 0 )
        Modifier_Percentage_Additive_Internal = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                                                  &v24->m_ModifierManager,
                                                  modifierfunction::MODIFIER_PROPERTY_BASEDAMAGEOUTGOING_PERCENTAGE,
                                                  &CModifierParams::s_Default);
      bDoDamagea = Modifier_Percentage_Additive_Internal * flNextDistancea;
      v27 = CDOTABaseAbility::GetCaster(this);
      Modifier_Constant_Additive_Internal = 0.0;
      v29 = v27->m_ModifierManager.m_buffsForModifiers[0];
      if ( v29 != 0xFF && v27->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v29].m_Size > 0 )
        Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                &v27->m_ModifierManager,
                                                modifierfunction::MODIFIER_PROPERTY_PREATTACK_BONUS_DAMAGE,
                                                &CModifierParams::s_Default);
      v89 = Modifier_Constant_Additive_Internal + bDoDamagea;
      if ( !CDOTABaseAbility::GetCaster(this)->m_bIsIllusion.m_Value )
        flNextDistancea = v89;
      v30 = CDOTABaseAbility::GetCaster(this);
      v31 = v30->m_ModifierManager.m_buffsForModifiers[28];
      bDoDamageb = 1.0;
      if ( v31 != 0xFF && v30->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v31].m_Size > 0 )
        bDoDamageb = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                       &v30->m_ModifierManager,
                       modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE,
                       &params);
      flNextDistanceb = flNextDistancea * bDoDamageb;
      v32 = CDOTABaseAbility::GetCaster(this);
      v33 = 1.0;
      v34 = v32->m_ModifierManager.m_buffsForModifiers[29];
      if ( v34 != 0xFF && v32->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v34].m_Size > 0 )
        v33 = CDOTA_ModifierManager::GetModifier_Percentage_Additive_Internal(
                &v32->m_ModifierManager,
                modifierfunction::MODIFIER_PROPERTY_DAMAGEOUTGOING_PERCENTAGE_ILLUSION,
                &params);
      flNextDistancef = v33 * flNextDistanceb;
      flBounceRatioa = powf((100 - flBounceRatio) / 100.0, v14->iBounceCount);
      flNextDistancec = flNextDistancef * flBounceRatioa;
      if ( CBaseEntity::GetHealth(v16) > 0 )
      {
        AttackRecordsManager = GetAttackRecordsManager();
        pRecord = CDOTA_AttackRecordManager::AddNewAttackRecord(AttackRecordsManager);
        v36 = CDOTABaseAbility::GetCaster(this);
        if ( v36 != 0 && (v37 = v36->m_pEntity) != 0 )
        {
          v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
          v39 = 0x7FFF;
          if ( v37->m_EHandle.m_Index != -1 )
            v39 = v37->m_EHandle.m_Index & 0x7FFF;
          LOWORD(pRecord->m_hSource.m_Index) = v39 | pRecord->m_hSource.m_Index & 0x8000;
          pRecord->m_hSource.m_Index = (v38 << 15) | pRecord->m_hSource.m_Index & 0x7FFF;
        }
        else
        {
          pRecord->m_hSource.m_Index = -1;
        }
        if ( this != 0 && (v40 = this->m_pEntity) != 0 )
        {
          v41 = (v40->m_EHandle.m_Index >> 15) - (v40->m_flags & 1);
          v42 = 0x7FFF;
          if ( v40->m_EHandle.m_Index != -1 )
            v42 = v40->m_EHandle.m_Index & 0x7FFF;
          LOWORD(pRecord->m_hInflictor.m_Index) = v42 | pRecord->m_hInflictor.m_Index & 0x8000;
          pRecord->m_hInflictor.m_Index = (v41 << 15) | pRecord->m_hInflictor.m_Index & 0x7FFF;
        }
        else
        {
          pRecord->m_hInflictor.m_Index = -1;
        }
        v43 = v16->m_pEntity;
        if ( v43 != 0 )
        {
          v44 = (v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1);
          v45 = 0x7FFF;
          if ( v43->m_EHandle.m_Index != -1 )
            v45 = v43->m_EHandle.m_Index & 0x7FFF;
          LOWORD(pRecord->m_hTarget.m_Index) = v45 | pRecord->m_hTarget.m_Index & 0x8000;
          pRecord->m_hTarget.m_Index = (v44 << 15) | pRecord->m_hTarget.m_Index & 0x7FFF;
        }
        else
        {
          pRecord->m_hTarget.m_Index = -1;
        }
        pRecord->m_bAttack = 0;
        pRecord->m_iDamageType = 1;
        pRecord->m_iFlags = 1280;
        pRecord->m_flDamage = flNextDistancec;
        pRecord->m_flDamagePhysical = flNextDistancec;
        pRecord->m_iDamageCategory = 0;
        pRecord->m_flOriginalDamage = flNextDistancec;
        pRecord->m_flDamagePhysical_IllusionDisplay = (v89 * bDoDamageb) * flBounceRatioa;
        DamageImpact(pRecord);
      }
      CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_Luna.MoonGlaive.Impact", 0.0, 0, 0);
      if ( (*(v16->_vptr_IHandleEntity + 405))(v16) != 0 )
      {
        v81 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::Kill(v16, this, v81, flNextDistancec, 0);
      }
      flNextDistance = v16;
    }
  }
  v46 = v14->iBounceCount + 1;
  v14->iBounceCount = v46;
  if ( v46 > bounces )
  {
    v10 = 1;
    CUtlVectorBase<sGlaiveInfo,CUtlMemory<sGlaiveInfo,int>>::FastRemove(&this->m_GlaiveInfo, v9);
  }
  else
  {
    v47 = v14->hAlreadyHitList.m_Size;
    v48 = v14->hAlreadyHitList.m_Size;
    if ( v47 == v14->hAlreadyHitList.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v14->hAlreadyHitList.m_Memory, 1);
      v48 = v14->hAlreadyHitList.m_Size;
    }
    v14->hAlreadyHitList.m_Size = v48 + 1;
    v49 = &v14->hAlreadyHitList.m_Memory.m_pMemory[v47];
    if ( v49 != 0 )
      v49->m_Index = hTarget->m_Index;
    params.ability.m_Index = 0;
    *&params.fOriginalDamage = 0;
    *&params.bTooltip = 0;
    params.nTooltipParam = 0;
    v50 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v50->m_iTeamNum.m_Value, vLocation, flNextDistance, range, &params, 2, 23, &stru_80190, 0, 0);
    v51 = 0;
    for ( i = 0; v14->hAlreadyHitList.m_Size > i; ++i )
    {
      v53 = &v14->hAlreadyHitList.m_Memory.m_pMemory[v51++];
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(&params, v53);
    }
    m_Index = params.ability.m_Index;
    if ( params.ability.m_Index != 0
      || (v55 = CDOTABaseAbility::GetCaster(this),
          FindUnitsInRadius(
            v55->m_iTeamNum.m_Value,
            vLocation,
            flNextDistance,
            range,
            &params,
            2,
            23,
            &stru_80190,
            0,
            0),
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
            &params,
            &v14->hAlreadyHitList.m_Memory.m_pMemory[v14->hAlreadyHitList.m_Size - 1]),
          m_Index = params.ability.m_Index,
          params.ability.m_Index != 0) )
    {
      v56 = RandomInt(0, m_Index - 1);
      v57 = *&params.fOriginalDamage;
      v58 = CEntityHandle::operator CEntityInstance *((*&params.fOriginalDamage + 4LL * v56));
      v59 = v58;
      if ( v58 == 0 || BYTE3(v58[7]._vptr_IHandleEntity) == 0 )
        v59 = 0;
      if ( params.ability.m_Index > 0 )
      {
        v60 = 0;
        while ( 1 )
        {
          v67 = (v57 + 4 * v60);
          v68 = *v67;
          if ( (*v67 + 2) <= 1
            || (v69 = *v67, (v70 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v67 >> 9) & 0x3F]) == 0)
            || (v71 = &v70[v69 & 0x1FF]) == 0
            || v68 != v71->m_EHandle.m_Index
            || (m_pInstance = v71->m_pInstance, v71->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          flNextDistanceg = fsqrt(
                              ((vLocation->x - AbsOrigin->x) * (vLocation->x - AbsOrigin->x))
                            + ((vLocation->y - AbsOrigin->y) * (vLocation->y - AbsOrigin->y)));
          v63 = CBaseEntity::GetAbsOrigin(v59);
          v64 = vLocation->x - v63->x;
          v65 = vLocation->y - v63->y;
          v66 = v60 + 1;
          if ( fsqrt((v64 * v64) + (v65 * v65)) > flNextDistanceg )
            v59 = m_pInstance;
          ++v60;
          if ( params.ability.m_Index <= v66 )
            break;
          v57 = *&params.fOriginalDamage;
        }
      }
      if ( v59 != 0 )
      {
        KeyValues::KeyValues(&kv, "glaive_onprojectilehit");
        KeyValues::SetInt(&kv, "attack_index", v14->iAttackIndex);
        info.hTarget.m_Index = -1;
        info.hSource.m_Index = -1;
        info.colorGemColor = 0;
        memset(&info, 0, 28);
        info.bProvidesVision = 0;
        info.vSourceLoc = vec3_origin;
        info.iSourceAttachment = 1;
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
        GetParticleManager();
        v72 = CDOTABaseAbility::GetCaster(this);
        info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(
                               "particles/units/heroes/hero_luna/luna_moon_glaive_bounce.vpcf",
                               v72);
        info.pAbility = this;
        v73 = CDOTABaseAbility::GetCaster(this);
        v74 = v73->m_ModifierManager.m_buffsForModifiers[72];
        flNextDistanced = v73->m_iProjectileMoveSpeed;
        if ( v74 == 0xFF || v73->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v74].m_Size <= 0 )
          v75 = 0.0;
        else
          v75 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                  &v73->m_ModifierManager,
                  modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                  &CModifierParams::s_Default);
        v76 = (v75 + flNextDistanced);
        info.vSourceLoc.x = vLocation->x;
        info.vSourceLoc.y = vLocation->y;
        z = vLocation->z;
        info.iMoveSpeed = v76;
        info.vSourceLoc.z = z;
        v78 = v59->m_pEntity;
        if ( v78 != 0 )
        {
          v79 = (v78->m_EHandle.m_Index >> 15) - (v78->m_flags & 1);
          v80 = 0x7FFF;
          if ( v78->m_EHandle.m_Index != -1 )
            v80 = v78->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hTarget.m_Index) = v80 | info.hTarget.m_Index & 0x8000;
          info.hTarget.m_Index = (v79 << 15) | info.hTarget.m_Index & 0x7FFF;
        }
        else
        {
          info.hTarget.m_Index = -1;
        }
        info.pKVExtraData = &kv;
        CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
        v10 = 0;
        KeyValues::~KeyValues(&kv);
      }
      else
      {
        Warning("Invalid unit in FindUnitsInRadius?\n");
        v10 = 1;
      }
    }
    else
    {
      v10 = 1;
      CUtlVectorBase<sGlaiveInfo,CUtlMemory<sGlaiveInfo,int>>::FastRemove(&this->m_GlaiveInfo, v9);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&params);
  }
  return v10;
}


// CDOTA_Modifier_Luna_MoonGlaive::~CDOTA_Modifier_Luna_MoonGlaive  (line 392, @0x0000000002c04190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::~CDOTA_Modifier_Luna_MoonGlaive(
        CDOTA_Modifier_Luna_MoonGlaive *const this)
{
  this->_vptr_CDOTA_Buff = &off_45313D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Luna_MoonGlaive::~CDOTA_Modifier_Luna_MoonGlaive  (line 392, @0x0000000002c041b0, libserver.so)  // inlines: ~CDOTA_Modifier_Luna_MoonGlaive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::~CDOTA_Modifier_Luna_MoonGlaive(
        CDOTA_Modifier_Luna_MoonGlaive *const this)
{
  this->_vptr_CDOTA_Buff = &off_45313D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Luna_MoonGlaive::IsHidden  (line 397, @0x0000000002bfdb90, libserver.so)
bool __fastcall CDOTA_Modifier_Luna_MoonGlaive::IsHidden(CDOTA_Modifier_Luna_MoonGlaive *const this)
{
  return 1;
}


// CDOTA_Modifier_Luna_MoonGlaive::OnCreated  (line 419, @0x0000000002bec2b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, SetRangedProjectileName, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, MakeEntitySystemString
// strings: "damage_reduction_percent", "particles/units/heroes/hero_luna/luna_moon_glaive.vpcf"
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::OnCreated(CDOTA_Modifier_Luna_MoonGlaive *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rbx
  UtlSymLargeId_t v7; // [rsp+0h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "range", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bounces = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage_reduction_percent = 0;
    goto LABEL_5;
  }
  this->range = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bounces", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage_reduction_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_reduction_percent", -1, 0);
LABEL_5:
  this->m_nMoonGlaiveFXIndex = -1;
  Caster = CDOTA_Buff::GetCaster(this);
  MakeEntitySystemString("particles/units/heroes/hero_luna/luna_moon_glaive.vpcf");
  Caster->m_iszAutoAttackRangedParticle.u.m_Id = v7;
}


// CDOTA_Modifier_Luna_MoonGlaive::OnDestroy  (line 442, @0x0000000002bd2c70, libserver.so)
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::OnDestroy(CDOTA_Modifier_Luna_MoonGlaive *const this)
{
  ;
}


// CDOTA_Modifier_Luna_MoonGlaive::OnRefresh  (line 455, @0x0000000002bebe90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_reduction_percent"
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::OnRefresh(CDOTA_Modifier_Luna_MoonGlaive *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "range", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bounces = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->range = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bounces = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bounces", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_reduction_percent = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       v5,
                                       "damage_reduction_percent",
                                       -1,
                                       0);
    return;
  }
LABEL_7:
  this->damage_reduction_percent = 0;
}


// CDOTA_Modifier_Luna_MoonGlaive::DeclareFunctions  (line 464, @0x0000000002bd2c80, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Luna_MoonGlaive::DeclareFunctions(CDOTA_Modifier_Luna_MoonGlaive *const this)
{
  this->m_Functions[121].__pfn = (&stru_10 + 697);
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Luna_MoonGlaive::OnAttackLanded  (line 471, @0x0000000002bdccb0, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Luna.MoonGlaive.Impact"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Luna_MoonGlaive::OnAttackLanded(
        CDOTA_Modifier_Luna_MoonGlaive *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *Ability; // r12
  const CBaseEntity *v10; // rax
  CDOTA_BaseNPC *v11; // rbx
  void (__fastcall *v12)(CDOTABaseAbility *, int *, const Vector *, _QWORD); // r13
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rsi
  __int16 v15; // di
  int v16[12]; // [rsp+0h] [rbp-30h] BYREF
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || params->nDamageCategory != 1 )
  {
LABEL_5:
    *&result.m_eType = 1;
    goto LABEL_6;
  }
  if ( CDOTA_Buff::GetParent(this) == 0
    || (result.m_szVal = CDOTA_Buff::GetParent(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) == 0) )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
    {
      v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
      v11 = v10;
      if ( v10 != 0 && v10->m_bIsDOTANPC )
      {
        v12 = *(Ability->_vptr_IHandleEntity + 290);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
        m_pEntity = v11->m_pEntity;
        v16[0] = -1;
        if ( m_pEntity != 0 )
        {
          v15 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v16[0] = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
        }
        v12(Ability, v16, AbsOrigin, 0);
        CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Luna.MoonGlaive.Impact", 0.0, 0, 0);
      }
    }
    goto LABEL_5;
  }
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Luna_LunarBlessing::~CDOTA_Ability_Luna_LunarBlessing  (line 501, @0x0000000002c05030, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Luna_LunarBlessing::~CDOTA_Ability_Luna_LunarBlessing(
        CDOTA_Ability_Luna_LunarBlessing *const this)
{
  this->_vptr_IHandleEntity = &off_4531730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Luna_LunarBlessing::~CDOTA_Ability_Luna_LunarBlessing  (line 501, @0x0000000002c05050, libserver.so)  // inlines: ~CDOTA_Ability_Luna_LunarBlessing
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Luna_LunarBlessing::~CDOTA_Ability_Luna_LunarBlessing(
        CDOTA_Ability_Luna_LunarBlessing *const this)
{
  this->_vptr_IHandleEntity = &off_4531730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Luna_LunarBlessing::Schema_DynamicBinding  (line 503, @0x0000000002bfdba0, libserver.so)
// globals: CDOTA_Ability_Luna_LunarBlessing::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_LunarBlessing::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_LunarBlessing *const this)
{
  return CDOTA_Ability_Luna_LunarBlessing::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 503, @0x0000000002bfdbb0, libserver.so)
// globals: CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::DestructInstance  (line 503, @0x0000000002bfdbc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Luna_LunarBlessing>
void __fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::FreeInstance  (line 503, @0x0000000002bfdbe0, libserver.so)
void __fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::CanAllocate  (line 503, @0x0000000002bfdc00, libserver.so)
bool __fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 503, @0x0000000002bfdc10, libserver.so)
// globals: CDOTA_Ability_Luna_LunarBlessing::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_LunarBlessing::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::AllocateInstance  (line 503, @0x0000000002c01eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::ConstructInstance  (line 503, @0x0000000002c047b0, libserver.so)  // inlines: CDOTA_Ability_Luna_LunarBlessing, Construct<CDOTA_Ability_Luna_LunarBlessing>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4531730;
  }
  return p;
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 503, @0x0000000002c0a5a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 503, @0x0000000002c0a5c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal  (line 503, @0x0000000002c10860, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Luna_LunarBlessing"
// globals: `guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass, CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass, __dso_handle, CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo, CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo
CEntityClass *__cdecl CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass);
    CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass._vptr_CEntityClass = off_45316B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass);
    __cxa_atexit(
      CDOTA_Ability_Luna_LunarBlessing::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Luna_LunarBlessingClass != 0 )
    return &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass;
  if ( `guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo,
      "CDOTA_Ability_Luna_LunarBlessing",
      "luna_lunar_blessing",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo);
  }
  CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass.m_pClassInfo = &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo;
  CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass.m_pBaseClassInfo = CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Luna_LunarBlessingClass = &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass;
  CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClassInfo.m_pClass = &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass;
  CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Luna_LunarBlessingClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Luna_LunarBlessing::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_LunarBlessingClass;
}


// CDOTA_Ability_Luna_LunarBlessing::GetIntrinsicModifierName  (line 516, @0x0000000002bfdc20, libserver.so)
// strings: "modifier_luna_lunar_blessing"
const char *__fastcall CDOTA_Ability_Luna_LunarBlessing::GetIntrinsicModifierName(
        CDOTA_Ability_Luna_LunarBlessing *const this)
{
  return "modifier_luna_lunar_blessing";
}


// CDOTA_Ability_Luna_LunarBlessing::YouForgotToImplementOrDeclareServerClass  (line 519, @0x0000000002bd2ca0, libserver.so)
int __fastcall CDOTA_Ability_Luna_LunarBlessing::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Luna_LunarBlessing *const this)
{
  return 0;
}


// CDOTA_Ability_Luna_LunarBlessing::GetServerClass  (line 519, @0x0000000002bdc230, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Luna_LunarBlessing::GetServerClass(CDOTA_Ability_Luna_LunarBlessing *const this)
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


// CDOTA_Modifier_Luna_LunarBlessing::~CDOTA_Modifier_Luna_LunarBlessing  (line 530, @0x0000000002c04140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Luna_LunarBlessing::~CDOTA_Modifier_Luna_LunarBlessing(
        CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  this->_vptr_CDOTA_Buff = &off_45321F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Luna_LunarBlessing::~CDOTA_Modifier_Luna_LunarBlessing  (line 530, @0x0000000002c04160, libserver.so)  // inlines: ~CDOTA_Modifier_Luna_LunarBlessing
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Luna_LunarBlessing::~CDOTA_Modifier_Luna_LunarBlessing(
        CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  this->_vptr_CDOTA_Buff = &off_45321F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Luna_LunarBlessing::IsHidden  (line 535, @0x0000000002bfdc30, libserver.so)
bool __fastcall CDOTA_Modifier_Luna_LunarBlessing::IsHidden(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return 1;
}


// CDOTA_Modifier_Luna_LunarBlessing::IsAura  (line 543, @0x0000000002bfdc40, libserver.so)
bool __fastcall CDOTA_Modifier_Luna_LunarBlessing::IsAura(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return 1;
}


// CDOTA_Modifier_Luna_LunarBlessing::GetModifierAura  (line 544, @0x0000000002bfdc50, libserver.so)
// strings: "modifier_luna_lunar_blessing_aura"
const char *__fastcall CDOTA_Modifier_Luna_LunarBlessing::GetModifierAura(
        CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return "modifier_luna_lunar_blessing_aura";
}


// CDOTA_Modifier_Luna_LunarBlessing::GetEffectName  (line 545, @0x0000000002bfdc60, libserver.so)
// strings: "particles/units/heroes/hero_luna/luna_ambient_lunar_blessing.vpcf"
const char *__fastcall CDOTA_Modifier_Luna_LunarBlessing::GetEffectName(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return "particles/units/heroes/hero_luna/luna_ambient_lunar_blessing.vpcf";
}


// CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchTeam  (line 547, @0x0000000002bfdc70, libserver.so)
int __fastcall CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchTeam(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return 1;
}


// CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchType  (line 548, @0x0000000002bfdc80, libserver.so)
int __fastcall CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchType(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return 1;
}


// CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchFlags  (line 549, @0x0000000002bfdc90, libserver.so)
int __fastcall CDOTA_Modifier_Luna_LunarBlessing::GetAuraSearchFlags(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return &stru_20040;
}


// CDOTA_Modifier_Luna_LunarBlessing::GetAuraRadius  (line 550, @0x0000000002bfdca0, libserver.so)
int __fastcall CDOTA_Modifier_Luna_LunarBlessing::GetAuraRadius(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Luna_LunarBlessing::OnCreated  (line 562, @0x0000000002beb7b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_night_vision"
void __fastcall CDOTA_Modifier_Luna_LunarBlessing::OnCreated(
        CDOTA_Modifier_Luna_LunarBlessing *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_night_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_night_vision", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_night_vision = 0;
}


// CDOTA_Modifier_Luna_LunarBlessing::OnRefresh  (line 570, @0x0000000002beb960, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_night_vision"
void __fastcall CDOTA_Modifier_Luna_LunarBlessing::OnRefresh(
        CDOTA_Modifier_Luna_LunarBlessing *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_night_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_night_vision", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_night_vision = 0;
}


// CDOTA_Modifier_Luna_LunarBlessing::DeclareFunctions  (line 578, @0x0000000002bd2cb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Luna_LunarBlessing::GetBonusNightVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Luna_LunarBlessing::DeclareFunctions(CDOTA_Modifier_Luna_LunarBlessing *const this)
{
  this->m_Functions[97].__pfn = CDOTA_Modifier_Luna_LunarBlessing::GetBonusNightVision;
  this->m_Functions[97].__delta = 0;
}


// CDOTA_Modifier_Luna_LunarBlessing::GetBonusNightVision  (line 585, @0x0000000002bd6990, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Luna_LunarBlessing::GetBonusNightVision(
        CDOTA_Modifier_Luna_LunarBlessing *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->bonus_night_vision;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Luna_LunarBlessingAura::~CDOTA_Modifier_Luna_LunarBlessingAura  (line 597, @0x0000000002c040f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::~CDOTA_Modifier_Luna_LunarBlessingAura(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4532510;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Luna_LunarBlessingAura::~CDOTA_Modifier_Luna_LunarBlessingAura  (line 597, @0x0000000002c04110, libserver.so)  // inlines: ~CDOTA_Modifier_Luna_LunarBlessingAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::~CDOTA_Modifier_Luna_LunarBlessingAura(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4532510;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Luna_LunarBlessingAura::GetAttributes  (line 608, @0x0000000002c043c0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::GetAttributes(CDOTA_Modifier_Luna_LunarBlessingAura *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Luna_LunarBlessingAura::OnCreated  (line 619, @0x0000000002beb2e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::OnCreated(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_Luna_LunarBlessingAura::OnRefresh  (line 626, @0x0000000002beada0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::OnRefresh(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  else
    this->bonus_damage = 0;
}


// CDOTA_Modifier_Luna_LunarBlessingAura::DeclareFunctions  (line 633, @0x0000000002bd2cd0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Luna_LunarBlessingAura::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::DeclareFunctions(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Luna_LunarBlessingAura::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Luna_LunarBlessingAura::GetModifierPreAttack_BonusDamage  (line 640, @0x0000000002bd69f0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Luna_LunarBlessingAura::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Luna_LunarBlessingAura *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->bonus_damage;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Luna_Eclipse::~CDOTA_Ability_Luna_Eclipse  (line 654, @0x0000000002c05080, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Luna_Eclipse::~CDOTA_Ability_Luna_Eclipse(CDOTA_Ability_Luna_Eclipse *const this)
{
  this->_vptr_IHandleEntity = &off_4532870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Luna_Eclipse::~CDOTA_Ability_Luna_Eclipse  (line 654, @0x0000000002c050a0, libserver.so)  // inlines: ~CDOTA_Ability_Luna_Eclipse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Luna_Eclipse::~CDOTA_Ability_Luna_Eclipse(CDOTA_Ability_Luna_Eclipse *const this)
{
  this->_vptr_IHandleEntity = &off_4532870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Luna_Eclipse::Schema_DynamicBinding  (line 656, @0x0000000002bfdcb0, libserver.so)
// globals: CDOTA_Ability_Luna_Eclipse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_Eclipse::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_Eclipse *const this)
{
  return CDOTA_Ability_Luna_Eclipse::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 656, @0x0000000002bfdcc0, libserver.so)
// globals: CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::DestructInstance  (line 656, @0x0000000002bfdcd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Luna_Eclipse>
void __fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::FreeInstance  (line 656, @0x0000000002bfdcf0, libserver.so)
void __fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::CanAllocate  (line 656, @0x0000000002bfdd10, libserver.so)
bool __fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 656, @0x0000000002bfdd20, libserver.so)
// globals: CDOTA_Ability_Luna_Eclipse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Luna_Eclipse::s_pSchemaBinding;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::AllocateInstance  (line 656, @0x0000000002c01ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::ConstructInstance  (line 656, @0x0000000002c047e0, libserver.so)  // inlines: CDOTA_Ability_Luna_Eclipse, Construct<CDOTA_Ability_Luna_Eclipse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4532870;
  }
  return p;
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 656, @0x0000000002c0a5f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 656, @0x0000000002c0a610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal  (line 656, @0x0000000002c109b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_Luna_Eclipse"
// globals: `guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass, CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass, __dso_handle, CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo, CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass);
    CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass._vptr_CEntityClass = off_45327F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass);
    __cxa_atexit(
      CDOTA_Ability_Luna_Eclipse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Luna_EclipseClass != 0 )
    return &CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass;
  if ( `guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo,
      "CDOTA_Ability_Luna_Eclipse",
      "luna_eclipse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo);
  }
  CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass.m_pClassInfo = &CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo;
  CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass.m_pBaseClassInfo = CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Luna_EclipseClass = &CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass;
  CDOTA_Ability_Luna_Eclipse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Luna_EclipseClassInfo.m_pClass = &CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass;
  CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Luna_EclipseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Luna_Eclipse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Luna_EclipseClass;
}


// CDOTA_Ability_Luna_Eclipse::GetCastRange  (line 663, @0x0000000002c1a350, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_tooltip_scepter"
int __fastcall CDOTA_Ability_Luna_Eclipse::GetCastRange(
        CDOTA_Ability_Luna_Eclipse *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_tooltip_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, vLocation, pTarget);
}


// CDOTA_Ability_Luna_Eclipse::GetAssociatedSecondaryAbilities  (line 670, @0x0000000002bfdd30, libserver.so)
// strings: "luna_lucent_beam"
const char *__fastcall CDOTA_Ability_Luna_Eclipse::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Luna_Eclipse *const this)
{
  return "luna_lucent_beam";
}


// CDOTA_Ability_Luna_Eclipse::YouForgotToImplementOrDeclareServerClass  (line 679, @0x0000000002bd2cf0, libserver.so)
int __fastcall CDOTA_Ability_Luna_Eclipse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Luna_Eclipse *const this)
{
  return 0;
}


// CDOTA_Ability_Luna_Eclipse::GetServerClass  (line 679, @0x0000000002bdc270, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Luna_Eclipse::GetServerClass(CDOTA_Ability_Luna_Eclipse *const this)
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


// CDOTA_Ability_Luna_Eclipse::GetBehavior  (line 688, @0x0000000002bd4240, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_Luna_Eclipse::GetBehavior(CDOTA_Ability_Luna_Eclipse *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster) ? 4 : 56;
}


// CDOTA_Ability_Luna_Eclipse::OnAbilityPhaseStart  (line 698, @0x0000000002bd4260, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::HasScepter
// strings: "particles/units/heroes/hero_luna/luna_eclipse_precast.vpcf", "attach_attack1"
bool __fastcall CDOTA_Ability_Luna_Eclipse::OnAbilityPhaseStart(CDOTA_Ability_Luna_Eclipse *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v6; // r14
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_luna/luna_eclipse_precast.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Caster, 0, v6, 5, "attach_attack1", *AbsOrigin, 1);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, Caster);
  v9 = CDOTABaseAbility::GetCaster(this);
  this->m_bIsScepterCast = CDOTA_BaseNPC::HasScepter(v9);
  return 1;
}


// CDOTA_Ability_Luna_Eclipse::OnSpellStart  (line 710, @0x0000000002bd4460, libserver.so)  // inlines: SetBool, ToDOTABaseNPC, Vector
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, KeyValues::SetPtr, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCursorPosition, KeyValues::SetFloat, DOTA_EmitSoundLocationWithCaster (14 total)
// strings: "modifier_luna_eclipse", "bAreaTarget", "Hero_Luna.Eclipse.Cast"
void __fastcall CDOTA_Ability_Luna_Eclipse::OnSpellStart(CDOTA_Ability_Luna_Eclipse *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_BaseNPC *v11; // rax
  float z; // kr08_4
  float v13; // kr1C_4
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r13
  float x; // kr34_4
  Vector vOrigin; // [rsp+50h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-28h]
  Vector CursorPosition; // 0:kr20_12.12

  v20 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_luna_eclipse");
  if ( !this->m_bIsScepterCast )
    goto LABEL_2;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && CDOTABaseAbility::GetCursorTarget(this) == 0 )
  {
    z = CDOTABaseAbility::GetCursorPosition(this).z;
    KeyValues::SetFloat(&kv, "x", z);
    v13 = CDOTABaseAbility::GetCursorPosition(this).z;
    KeyValues::SetFloat(&kv, "y", v13);
    KeyValues::SetInt(&kv, "bAreaTarget", 1);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_luna_eclipse", &kv, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    x = CDOTABaseAbility::GetCursorPosition(this).x;
    vOrigin.z = 0.0;
    vOrigin.x = x;
    vOrigin.y = CursorPosition.y;
    DOTA_EmitSoundLocationWithCaster(&vOrigin, "Hero_Luna.Eclipse.Cast", v16);
    goto LABEL_3;
  }
  if ( this->m_bIsScepterCast && (v7 = CDOTABaseAbility::GetCaster(this), CDOTA_BaseNPC::HasScepter(v7)) )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    KeyValues::SetPtr(&kv, "target", CursorTarget);
    KeyValues::SetInt(&kv, "bAreaTarget", 0);
    v9 = CDOTABaseAbility::GetCursorTarget(this);
    v10 = v9;
    if ( v9 != 0 && v9->m_bIsDOTANPC )
    {
      v11 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v10, v11, this, "modifier_luna_eclipse", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Luna.Eclipse.Cast", 0.0, 0, 0);
    }
  }
  else
  {
LABEL_2:
    v2 = CDOTABaseAbility::GetCaster(this);
    KeyValues::SetPtr(&kv, "target", v2);
    KeyValues::SetInt(&kv, "bAreaTarget", 0);
    v3 = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v3, this, "modifier_luna_eclipse", &kv, 0);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Luna.Eclipse.Cast", 0.0, 0, 0);
  }
LABEL_3:
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval  (line 747, @0x0000000002be9aa0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Max<int>
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "luna_lucent_beam", "beam_damage", "beams"
// globals: `guard variable for'CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Luna_Eclipse *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int LevelSpecialValue; // r13d
  int v10; // r15d
  int v11; // r14d
  int v12; // r13d
  CDOTA_BaseNPC *v13; // rax
  CDOTA_Ability_Luna_Eclipse *v14; // rdi
  int m_Size; // ebx
  CDOTA_BaseNPC *v16; // rax

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "luna_lucent_beam", 0);
  if ( AbilityByName == 0 )
    return 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "beam_damage", -1, 0);
  if ( LevelSpecialValue <= 0 )
    return 0;
  v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v11 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "beams", -1, 1);
  if ( `guard variable for'CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
  {
    CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
    CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    __cxa_atexit(
      CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
      &CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
      &_dso_handle);
  }
  v12 = v11 * LevelSpecialValue;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_Bot::GetNearbyCreeps(
    v13->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
    v10);
  v14 = this;
  m_Size = 1;
  v16 = CDOTABaseAbility::GetCaster(v14);
  CDOTA_Bot::GetNearbyHeroes(
    v16->m_pBot,
    DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
    &CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
    v10);
  if ( CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size > 0 )
    m_Size = CDOTA_Ability_Luna_Eclipse::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
  return ((v12 / m_Size) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
}


// CDOTA_Modifier_Luna_Eclipse::~CDOTA_Modifier_Luna_Eclipse  (line 782, @0x0000000002c19950, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Luna_Eclipse::~CDOTA_Modifier_Luna_Eclipse(CDOTA_Modifier_Luna_Eclipse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4533330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_HitTargets);
  if ( (this->m_HitTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_HitTargets.m_Memory),
        (this->m_HitTargets.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_HitTargets.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Luna_Eclipse::~CDOTA_Modifier_Luna_Eclipse  (line 782, @0x0000000002c19da0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Luna_Eclipse, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Luna_Eclipse::~CDOTA_Modifier_Luna_Eclipse(CDOTA_Modifier_Luna_Eclipse *const this)
{
  this->_vptr_CDOTA_Buff = &off_4533330;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_HitTargets);
  if ( (this->m_HitTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_HitTargets.m_Memory);
    if ( (this->m_HitTargets.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_HitTargets.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Luna_Eclipse::GetAttributes  (line 787, @0x0000000002c043d0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Luna_Eclipse::GetAttributes(CDOTA_Modifier_Luna_Eclipse *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Luna_Eclipse::IsPurgable  (line 791, @0x0000000002bfdd40, libserver.so)
bool __fastcall CDOTA_Modifier_Luna_Eclipse::IsPurgable(CDOTA_Modifier_Luna_Eclipse *const this)
{
  return 0;
}


// CDOTA_Modifier_Luna_Eclipse::OnCreated  (line 827, @0x0000000002bf9340, libserver.so)  // inlines: BeginTemporaryNight, DOTAGameRules, Get, GetAbilityData, GetBool, GetEHandle, GetEntryIndex, GetInstance, GetRemainingTime, GetSerialNumber, GetTeamNumber, NetworkStateChanged, Set, Start, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator=, operator=<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin, KeyValues::GetPtr, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CountdownTimer::Now, CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike (25 total)
// strings: "beam_interval", "beam_interval_scepter", "beams_scepter", "hit_count_scepter", "luna_lucent_beam", "beam_damage" (13 total)
void __fastcall CDOTA_Modifier_Luna_Eclipse::OnCreated(CDOTA_Modifier_Luna_Eclipse *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  float beam_interval; // xmm0_4
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  _QWORD *Ptr; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTABaseAbility *v19; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v21; // rax
  CDOTABaseAbility *v22; // rax
  int v23; // eax
  CDOTA_BaseNPC *v24; // rax
  CDOTABaseAbility *AbilityByName; // r14
  CGameRules *v26; // r12
  const CountdownTimer *v27; // r13
  double v28; // xmm0_8
  double v29; // xmm1_8
  double v30; // xmm2_8
  int v31; // eax
  float v32; // xmm1_4
  bool v33; // zf
  float v34; // xmm1_4
  CDOTA_Modifier_Luna_Eclipse *v35; // rdi
  CDOTA_BaseNPC *v36; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CDOTA_ParticleManager *v39; // rax
  unsigned int v40; // xmm0_4
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  const Vector *v43; // r12
  CDOTA_BaseNPC *v44; // rax
  int m_nMoonlightFXIndex; // r13d
  const CBaseAnimating *v46; // r14
  CDOTA_ParticleManager *v47; // rax
  CDOTABaseAbility *v48; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v51; // rax
  float v52; // xmm3_4
  CDOTABaseAbility *v53; // rax
  CDOTABaseAbility *v54; // rax
  CDOTA_BaseNPC *v55; // r12
  CDOTA_ParticleManager *v56; // rax
  int v57; // eax
  int v58; // r13d
  CEntityInstance *v59; // rax
  const CBaseAnimating *v60; // r14
  CDOTA_ParticleManager *v61; // rax
  unsigned int v62; // xmm0_4
  int v63; // r13d
  CDOTA_ParticleManager *v64; // rax
  CEntityInstance *v65; // rax
  const CBaseAnimating *v66; // r13
  int v67; // r12d
  CDOTA_ParticleManager *v68; // rax
  float v69; // xmm1_4
  __m128i v70; // xmm0
  vec_t v71; // r13d
  float v72; // xmm1_4
  vec_t Float; // xmm0_4
  CDOTABaseAbility *v74; // rax
  CDOTA_BaseNPC *v75; // rax
  CDOTABaseAbility *v76; // rax
  unsigned int flDuration; // [rsp+10h] [rbp-50h]
  float flDurationa; // [rsp+10h] [rbp-50h]
  float flProjectionDuration; // [rsp+14h] [rbp-4Ch]
  float flRadiusa; // [rsp+18h] [rbp-48h]
  float flRadius; // [rsp+18h] [rbp-48h]
  float flRadiusc; // [rsp+18h] [rbp-48h]
  float flRadiusd; // [rsp+18h] [rbp-48h]
  CDOTABaseAbility *flRadiusb; // [rsp+18h] [rbp-48h]
  double duration_tooltip; // [rsp+20h] [rbp-40h] BYREF
  float v86; // [rsp+28h] [rbp-38h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->beam_interval, "beam_interval");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->beam_interval_scepter, "beam_interval_scepter");
  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  beam_interval = this->beam_interval;
  if ( HasScepter )
    beam_interval = this->beam_interval_scepter;
  this->m_flInterval = beam_interval;
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->radius, "radius");
  v10 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  this->vPosition.x = AbsOrigin->x;
  this->vPosition.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->bAreaTarget = 0;
  this->vPosition.z = z;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v14 = Ptr[1]) != 0 )
  {
    v15 = (*(v14 + 16) >> 15) - (*(v14 + 48) & 1);
    v16 = 0x7FFF;
    if ( *(v14 + 16) != -1 )
      v16 = *(v14 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v16 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v15 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  v17 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v17) && KeyValues::GetInt(pKV, "bAreaTarget", 0) != 0 )
  {
    this->bAreaTarget = 1;
    *v70.m128i_i32 = KeyValues::GetFloat(pKV, "y", v69);
    v71 = COERCE_FLOAT(_mm_cvtsi128_si32(v70));
    Float = KeyValues::GetFloat(pKV, "x", v72);
    this->vPosition.y = v71;
    this->vPosition.x = Float;
    this->vPosition.z = 0.0;
    v74 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v74, &duration_tooltip, "duration_tooltip_scepter");
    flProjectionDuration = *&duration_tooltip;
    flRadiusd = this->radius;
    *&duration_tooltip = *&duration_tooltip + 0.5;
    flDurationa = *&duration_tooltip;
    v75 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_FIRESPIRITS,
      v75->m_iTeamNum.m_Value,
      &this->vPosition,
      flRadiusd,
      flDurationa,
      1);
  }
  else
  {
    flProjectionDuration = -1.0;
  }
  v18 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v18) )
  {
    v19 = CDOTA_Buff::GetAbility(this);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v19, "beams_scepter", -1, 0);
  }
  else
  {
    v54 = CDOTA_Buff::GetAbility(this);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v54, "beams", -1, 0);
  }
  this->beams = LevelSpecialValue;
  v21 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v21) )
  {
    v22 = CDOTA_Buff::GetAbility(this);
    v23 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v22, "hit_count_scepter", -1, 0);
  }
  else
  {
    v53 = CDOTA_Buff::GetAbility(this);
    v23 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v53, "hit_count", -1, 0);
  }
  this->hit_count = v23;
  this->m_iTickCount = 0;
  v24 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v24, "luna_lucent_beam", 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_HitTargets);
  v26 = g_pGameRules;
  v27 = &g_pGameRules[61].m_szQuestName[40];
  flRadiusa = *&g_pGameRules[61].m_szQuestName[52];
  if ( (flRadiusa - CountdownTimer::Now(&g_pGameRules[61].m_szQuestName[40])) > 10.0 )
  {
    flRadiusc = *&v26[61].m_szQuestName[52];
    flRadius = flRadiusc - CountdownTimer::Now(v27);
  }
  else
  {
    flRadius = 10.0;
  }
  *&v28 = CountdownTimer::Now(v27) + flRadius;
  if ( *&v28 != *&v26[61].m_szQuestName[52] )
  {
    flDuration = LODWORD(v28);
    (*(*&v26[61].m_szQuestName[40] + 16LL))(v27, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v28 = flDuration;
    *&v26[61].m_szQuestName[52] = flDuration;
  }
  if ( flRadius == *&v26[61].m_szQuestName[48] )
  {
    if ( AbilityByName == 0 )
    {
LABEL_40:
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      return;
    }
  }
  else
  {
    (*(*&v26[61].m_szQuestName[40] + 16LL))(v27, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v28, v29, v30, flRadius);
    *&v26[61].m_szQuestName[48] = flRadius;
    if ( AbilityByName == 0 )
      goto LABEL_40;
  }
  if ( AbilityByName->m_iLevel.m_Value < 0 )
    goto LABEL_40;
  v31 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "beam_damage", -1, 0);
  v33 = !this->bAreaTarget;
  this->m_iBeamDamage = v31;
  if ( v33 )
  {
    CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike(this);
    CDOTA_Buff::StartIntervalThink(this, this->m_flInterval, v34);
    v35 = this;
    if ( this->bAreaTarget )
    {
LABEL_23:
      v36 = CDOTA_Buff::GetCaster(v35);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_luna/luna_eclipse_cast.vpcf",
                   2,
                   0,
                   0,
                   v36);
      this->m_nMoonlightFXIndex = Particle;
      LODWORD(v36) = Particle;
      v39 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v39, v36, 0, *&this->vPosition.x, this->vPosition.z);
      *&v40 = this->radius;
      LODWORD(v36) = this->m_nMoonlightFXIndex;
      v86 = 0.0;
      *&duration_tooltip = v40;
      v41 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v41, v36, 1, duration_tooltip, v86);
      v42 = CDOTA_Buff::GetCaster(this);
      v43 = CBaseEntity::GetAbsOrigin(v42);
      v44 = CDOTA_Buff::GetCaster(this);
      m_nMoonlightFXIndex = this->m_nMoonlightFXIndex;
      v46 = v44;
      v47 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v47, m_nMoonlightFXIndex, 2, v46, 5, "attach_attack1", *v43, 1);
      goto LABEL_24;
    }
  }
  else
  {
    --this->m_iTickCount;
    CDOTA_Buff::StartIntervalThink(this, 0.0099999998, v32);
    v35 = this;
    if ( this->bAreaTarget )
      goto LABEL_23;
  }
  v55 = CDOTA_Buff::GetCaster(v35);
  v56 = GetParticleManager();
  v57 = CDOTA_ParticleManager::CreateParticle(
          v56,
          "particles/units/heroes/hero_luna/luna_eclipse_cast.vpcf",
          2,
          0,
          0,
          v55);
  this->m_nMoonlightFXIndex = v57;
  v58 = v57;
  v59 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v59 != 0 && BYTE3(v59[7]._vptr_IHandleEntity) != 0 )
    v60 = v59;
  else
    v60 = 0;
  v61 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v61, v58, 0, v60, 0, 0, this->vPosition, 1);
  *&v62 = this->radius;
  v63 = this->m_nMoonlightFXIndex;
  v86 = 0.0;
  *&duration_tooltip = v62;
  v64 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v64, v63, 1, duration_tooltip, v86);
  v65 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v65 != 0 && BYTE3(v65[7]._vptr_IHandleEntity) != 0 )
    v66 = v65;
  else
    v66 = 0;
  v67 = this->m_nMoonlightFXIndex;
  v68 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v68, v67, 2, v66, 5, "attach_attack1", this->vPosition, 1);
LABEL_24:
  CDOTA_Buff::AddParticle(this, this->m_nMoonlightFXIndex, 0, 0, -1, 0, 0);
  if ( flProjectionDuration < 0.0 )
  {
    v76 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<float>(v76, &duration_tooltip, "duration_tooltip");
    flProjectionDuration = *&duration_tooltip;
  }
  v48 = CDOTA_Buff::GetAbility(this);
  m_pAbilityData = v48->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    flRadiusb = v48;
    CDOTABaseAbility::LoadAbilityData(v48, 0);
    m_pAbilityData = flRadiusb->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v51 = CDOTA_Buff::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v51,
    0,
    m_iAbilityID,
    0,
    0,
    *&this->vPosition.x,
    this->vPosition.z,
    flProjectionDuration,
    v52);
}


// CDOTA_Modifier_Luna_Eclipse::OnDestroy  (line 921, @0x0000000002bd48d0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTA_Modifier_Luna_Eclipse::OnDestroy(CDOTA_Modifier_Luna_Eclipse *const this)
{
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v6; // [rsp+8h] [rbp-18h]

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v6 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v6->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
  }
}


// CDOTA_Modifier_Luna_Eclipse::OnIntervalThink  (line 934, @0x0000000002bf9bb0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::Destroy, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike
void __fastcall CDOTA_Modifier_Luna_Eclipse::OnIntervalThink(CDOTA_Modifier_Luna_Eclipse *const this)
{
  float v1; // xmm1_4
  int v3; // eax
  bool v4; // cc
  int m_nMoonlightFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  CDOTA_Buff::StartIntervalThink(this, this->m_flInterval, v1);
  v3 = this->m_iTickCount + 1;
  v4 = v3 < this->beams;
  this->m_iTickCount = v3;
  if ( v4 )
  {
    CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike(this);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    m_nMoonlightFXIndex = this->m_nMoonlightFXIndex;
    if ( m_nMoonlightFXIndex != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nMoonlightFXIndex, 0);
      this->m_nMoonlightFXIndex = -1;
    }
  }
}


// CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike  (line 962, @0x0000000002bf8bc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Purge, RandomVector, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator+=, operator=, operator==, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, FindUnitsInRadius, RandomInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, Vector::Random, CEntityHandle::operator CEntityInstance*, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocationWithCaster, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll (25 total)
// callers: CDOTA_Modifier_Luna_Eclipse::OnCreated, CDOTA_Modifier_Luna_Eclipse::OnIntervalThink
// strings: "particles/units/heroes/hero_luna/luna_eclipse_impact_notarget.vpcf", "Hero_Luna.Eclipse.NoTarget", "particles/units/heroes/hero_luna/luna_eclipse_impact.vpcf", "attach_hitloc", "special_bonus_unique_luna_1", "Hero_Luna.Eclipse.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Luna_Eclipse::DoLucentBeamStrike(CDOTA_Modifier_Luna_Eclipse *const this)
{
  __m128i v1; // xmm2
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  float v6; // r15d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v8; // rax
  int m_Size; // esi
  int v10; // r13d
  CHandle<CBaseEntity> *v11; // rax
  CHandle<CBaseEntity> *m_pMemory; // rdx
  __int16 v13; // cx
  CEntityIdentity *v14; // rax
  CEntityIdentity *v15; // rax
  CEntityInstance *m_pInstance; // r15
  int v17; // ecx
  int v18; // r9d
  CHandle<CBaseEntity> *v19; // rax
  __int64 v20; // rdi
  uint32 v21; // ecx
  __int16 v22; // r8
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CDOTA_BaseNPC *v25; // r13
  CDOTA_ParticleManager *v26; // rax
  int Particle; // r13d
  vec_t v28; // xmm2_4
  CEntityInstance *v29; // rax
  const CBaseAnimating *v30; // r15
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  __m128i v34; // xmm7
  float v35; // r15d
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CEntityInstance *v39; // rax
  const CBaseEntity *v40; // rdi
  CDOTA_BaseNPC *v41; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v43; // r14
  CDOTA_ParticleManager *v44; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v46; // rax
  const Vector *v47; // r14
  CDOTA_ParticleManager *v48; // rax
  const Vector *v49; // r14
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v55; // rax
  double v56; // xmm0_8
  CDOTA_BaseNPC_Hero *v57; // r13
  CDOTA_BaseNPC *v58; // rax
  CDOTA_BaseNPC_Hero *v59; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v61; // cx
  __int64 v62; // r13
  int v63; // eax
  vec_t *p_m_Index; // rax
  float v65; // [rsp+24h] [rbp-7Ch]
  float v66; // [rsp+28h] [rbp-78h]
  float flDamage; // [rsp+2Ch] [rbp-74h]
  float flDamagea; // [rsp+2Ch] [rbp-74h]
  Vector v69; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-50h] BYREF

  if ( !this->bAreaTarget )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hTarget.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          v39 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
          if ( v39 != 0 && BYTE3(v39[7]._vptr_IHandleEntity) != 0 )
            v40 = v39;
          else
            v40 = 0;
          this->vPosition = *CBaseEntity::GetAbsOrigin(v40);
        }
      }
    }
  }
  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v8 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, &this->vPosition, Caster, v6, &hEntities, 2, 19, 384, 0, 0);
  m_Size = hEntities.m_Size;
  if ( hEntities.m_Size > 0 )
  {
    while ( m_Size > 0 )
    {
      v10 = RandomInt(0, (m_Size - 1));
      v11 = &hEntities.m_Memory.m_pMemory[v10];
      m_pMemory = v11->m_Index;
      if ( (m_pMemory + 2) > 1
        && (v13 = v11->m_Index,
            (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->m_Index) >> 9) & 0x3F]) != 0)
        && (v15 = &v14[v13 & 0x1FF]) != 0
        && m_pMemory == v15->m_EHandle.m_Index
        && (m_pInstance = v15->m_pInstance, v15->m_pInstance != 0)
        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v17 = this->m_HitTargets.m_Size;
        if ( v17 <= 0 )
        {
          v18 = 0;
        }
        else
        {
          m_pMemory = this->m_HitTargets.m_Memory.m_pMemory;
          v18 = 0;
          v19 = m_pMemory + 1;
          v20 = &m_pMemory[v17 - 1 + 1];
          while ( 1 )
          {
            v21 = m_pMemory->m_Index;
            if ( m_pMemory->m_Index + 2 > 1 )
            {
              v22 = m_pMemory->m_Index;
              v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
              if ( v23 != 0 )
              {
                v24 = &v23[v22 & 0x1FF];
                if ( v24 != 0 && v21 == v24->m_EHandle.m_Index && m_pInstance == v24->m_pInstance )
                  ++v18;
              }
            }
            m_pMemory = v19;
            if ( v19 == v20 )
              break;
            ++v19;
          }
        }
        if ( this->hit_count > v18
          && (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance, CEntityHandle::gm_pEntityList, m_pMemory) == 0 )
        {
          v41 = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          LODWORD(v41) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_luna/luna_eclipse_impact.vpcf",
                           2,
                           0,
                           0,
                           v41);
          v43 = CDOTA_Buff::GetCaster(this);
          v44 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v44, v41, 0, v43, 0, 0, this->vPosition, 1);
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          v46 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v46, v41, 1, m_pInstance, 0, 0, *AbsOrigin, 1);
          v47 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v48 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v48, v41, 4, *&v47->x, v47->z);
          v49 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v50 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v50, v41, 5, m_pInstance, 5, "attach_hitloc", *v49, 1);
          v51 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v51, v41);
          flDamagea = this->m_iBeamDamage;
          v52 = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v52, "special_bonus_unique_luna_1", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
            flDamagea = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamagea;
          Ability = CDOTA_Buff::GetAbility(this);
          v55 = CDOTA_Buff::GetCaster(this);
          v56 = ApplyDamage(v55, m_pInstance, Ability, flDamagea, 2, 0);
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v56) == 0 )
          {
            v57 = 0;
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v57 = m_pInstance;
            }
            v58 = CDOTA_Buff::GetCaster(this);
            v59 = ToDOTABaseNPCRealHero(v58);
            EconEntity_OnOwnerKillEaterEvent(
              v59,
              v57,
              kill_eater_event_t::kKillEaterEventType_Luna_EclipseKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Luna.Eclipse.Target", 0.0, 0, 0);
          v69.x = NAN;
          m_pEntity = m_pInstance->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v61 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v61 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LODWORD(v69.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v61 & 0x7FFF;
          }
          v62 = this->m_HitTargets.m_Size;
          v63 = this->m_HitTargets.m_Size;
          if ( v62 == this->m_HitTargets.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_HitTargets.m_Memory, 1);
            v63 = this->m_HitTargets.m_Size;
          }
          this->m_HitTargets.m_Size = v63 + 1;
          p_m_Index = &this->m_HitTargets.m_Memory.m_pMemory[v62].m_Index;
          if ( p_m_Index != 0 )
            *p_m_Index = v69.x;
          goto LABEL_30;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, v10);
        m_Size = hEntities.m_Size;
      }
      else
      {
        m_Size = hEntities.m_Size;
      }
    }
  }
  v25 = CDOTA_Buff::GetCaster(this);
  v26 = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               v26,
               "particles/units/heroes/hero_luna/luna_eclipse_impact_notarget.vpcf",
               2,
               0,
               0,
               v25);
  Vector::Random(&v69, this->radius, v28);
  v66 = v69.x + this->vPosition.x;
  v65 = v69.y + this->vPosition.y;
  flDamage = this->vPosition.z + 48.0;
  v29 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v29 != 0 && BYTE3(v29[7]._vptr_IHandleEntity) != 0 )
    v30 = v29;
  else
    v30 = 0;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, Particle, 0, v30, 0, 0, this->vPosition, 1);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v32,
    Particle,
    1,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v65), LODWORD(v66))),
    flDamage);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v33,
    Particle,
    4,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v65), LODWORD(v66))),
    flDamage);
  v34 = LODWORD(flDamage);
  *v34.m128i_i32 = flDamage - 44.0;
  v35 = COERCE_FLOAT(_mm_cvtsi128_si32(v34));
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v36,
    Particle,
    5,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v65), LODWORD(v66))),
    v35);
  v37 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v37, Particle);
  v38 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&this->vPosition, "Hero_Luna.Eclipse.NoTarget", v38);
LABEL_30:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


