// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:33
class CDOTA_Unit_Hero_DarkSeer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_DarkSeer(CDOTA_Unit_Hero_DarkSeer &);
	CDOTA_Unit_Hero_DarkSeer(CDOTA_Unit_Hero_DarkSeer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_DarkSeer();
	virtual ~CDOTA_Unit_Hero_DarkSeer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:44
class C_CDOTA_Unit_Hero_DarkSeer_MapInstall {
	C_CDOTA_Unit_Hero_DarkSeer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:58
class CDOTA_Ability_DarkSeer_Vacuum : public CDOTABaseAbility {
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
	CDOTA_Ability_DarkSeer_Vacuum(CDOTA_Ability_DarkSeer_Vacuum &);
	CDOTA_Ability_DarkSeer_Vacuum(CDOTA_Ability_DarkSeer_Vacuum &);
	CDOTA_Ability_DarkSeer_Vacuum();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	Vector GetPullLocation();
	virtual ~CDOTA_Ability_DarkSeer_Vacuum();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:77
class C_CDOTA_Ability_DarkSeer_Vacuum_MapInstall {
	C_CDOTA_Ability_DarkSeer_Vacuum_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:151
class CDOTA_Modifier_DarkSeer_Vacuum : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float pull_speed;  // +0xbb4
	CDOTA_Modifier_DarkSeer_Vacuum();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsStunDebuff();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual bool IsPhasedWhileMotionControlled();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_DarkSeer_Vacuum();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[16] IsStunDebuff
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[91] IsPhasedWhileMotionControlled
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:268
class CDOTA_Ability_DarkSeer_IonShell : public CDOTABaseAbility {
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
	CDOTA_Ability_DarkSeer_IonShell(CDOTA_Ability_DarkSeer_IonShell &);
	CDOTA_Ability_DarkSeer_IonShell(CDOTA_Ability_DarkSeer_IonShell &);
	CDOTA_Ability_DarkSeer_IonShell();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_DarkSeer_IonShell();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:301
class CDOTA_Modifier_IonShell : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int damage_per_second;  // +0xbac
	CDOTA_Modifier_IonShell();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_IonShell();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:431
class CDOTA_Ability_DarkSeer_Surge : public CDOTABaseAbility {
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
	CDOTA_Ability_DarkSeer_Surge(CDOTA_Ability_DarkSeer_Surge &);
	CDOTA_Ability_DarkSeer_Surge(CDOTA_Ability_DarkSeer_Surge &);
	CDOTA_Ability_DarkSeer_Surge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_DarkSeer_Surge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:472
class CDOTA_Modifier_DarkSeer_Surge : public CDOTA_Buff {
public:

	CDOTA_Modifier_DarkSeer_Surge();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual const char * GetEffectName();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ~CDOTA_Modifier_DarkSeer_Surge();

	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeed_Absolute
	// vtable[67] GetEffectName
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:514
class CDOTA_Ability_DarkSeer_WallOfReplica : public CDOTABaseAbility {
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
	CDOTA_Ability_DarkSeer_WallOfReplica(CDOTA_Ability_DarkSeer_WallOfReplica &);
	CDOTA_Ability_DarkSeer_WallOfReplica(CDOTA_Ability_DarkSeer_WallOfReplica &);
	CDOTA_Ability_DarkSeer_WallOfReplica();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_DarkSeer_WallOfReplica();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:559
class CDOTA_Modifier_DarkSeer_WallOfReplica : public CDOTA_Buff {
public:

private:

	CUtlMap<int, float, short unsigned int, bool (*)(int const&, int const&)> m_PreventReplicateTime;  // +0xbd8
	int width;  // +0xc00
	float slow_duration;  // +0xc04
	int replica_damage_incoming;  // +0xc08
	int replica_damage_outgoing;  // +0xc0c
	CDOTA_Modifier_DarkSeer_WallOfReplica();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_DarkSeer_WallOfReplica();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3096
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:743
class CDOTA_Modifier_DarkSeer_WallOfReplica_Slow : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	CDOTA_Modifier_DarkSeer_WallOfReplica_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dark_seer.cpp:786
class CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion : public CDOTA_Buff {
public:

private:

	int replica_scale;  // +0xba8
	CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual bool ShouldSendToTeam(int);
	ModifierVariant_t GetModifierIsIllusion(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[9] ShouldSendToTeam
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_DarkSeer::~CDOTA_Unit_Hero_DarkSeer  (line 33, @0x0000000002ba27e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_DarkSeer::~CDOTA_Unit_Hero_DarkSeer(CDOTA_Unit_Hero_DarkSeer *const this)
{
  this->_vptr_IHandleEntity = &off_44C3CD0;
  this->_vptr_INextBotEventResponder = &off_44C4CB0;
  this->_vptr_CObstructionObject = &off_44C4FE0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_DarkSeer::~CDOTA_Unit_Hero_DarkSeer  (line 33, @0x0000000002ba2820, libserver.so)  // inlines: ~CDOTA_Unit_Hero_DarkSeer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_DarkSeer::~CDOTA_Unit_Hero_DarkSeer(CDOTA_Unit_Hero_DarkSeer *const this)
{
  this->_vptr_IHandleEntity = &off_44C3CD0;
  this->_vptr_INextBotEventResponder = &off_44C4CB0;
  this->_vptr_CObstructionObject = &off_44C4FE0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_DarkSeer::Schema_DynamicBinding  (line 35, @0x0000000002b8ef40, libserver.so)
// globals: CDOTA_Unit_Hero_DarkSeer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DarkSeer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DarkSeer *const this)
{
  return CDOTA_Unit_Hero_DarkSeer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002b8ef70, libserver.so)
// globals: CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002b8ef80, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_DarkSeer>
void __fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002b8efa0, libserver.so)
void __fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002b8efc0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002b8efd0, libserver.so)
// globals: CDOTA_Unit_Hero_DarkSeer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DarkSeer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002b97560, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002b9c4d0, libserver.so)  // inlines: CDOTA_Unit_Hero_DarkSeer, Construct<CDOTA_Unit_Hero_DarkSeer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44C3CD0;
    *(p + 236) = &off_44C4CB0;
    *(p + 257) = &off_44C4FE0;
  }
  return p;
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002bac0f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002bac190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal  (line 35, @0x0000000002bceea0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_dark_seer", "CDOTA_Unit_Hero_DarkSeer"
// globals: `guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass, CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass, __dso_handle, CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo, CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass);
    CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass._vptr_CEntityClass = off_44C3C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_DarkSeer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DarkSeerClass != 0 )
    return &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo,
      "CDOTA_Unit_Hero_DarkSeer",
      "npc_dota_hero_dark_seer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo);
  }
  CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass.m_pClassInfo = &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo;
  CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DarkSeerClass = &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass;
  CDOTA_Unit_Hero_DarkSeer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClassInfo.m_pClass = &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass;
  CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DarkSeerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_DarkSeer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DarkSeerClass;
}


// CDOTA_Unit_Hero_DarkSeer::YouForgotToImplementOrDeclareServerClass  (line 44, @0x0000000002b34b20, libserver.so)
int __fastcall CDOTA_Unit_Hero_DarkSeer::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_DarkSeer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_DarkSeer::GetServerClass  (line 44, @0x0000000002b4bfe0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_DarkSeer::GetServerClass(CDOTA_Unit_Hero_DarkSeer *const this)
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


// CDOTA_Ability_DarkSeer_Vacuum::~CDOTA_Ability_DarkSeer_Vacuum  (line 58, @0x0000000002ba0c20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::~CDOTA_Ability_DarkSeer_Vacuum(
        CDOTA_Ability_DarkSeer_Vacuum *const this)
{
  this->_vptr_IHandleEntity = &off_44C50B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DarkSeer_Vacuum::~CDOTA_Ability_DarkSeer_Vacuum  (line 58, @0x0000000002ba0c40, libserver.so)  // inlines: ~CDOTA_Ability_DarkSeer_Vacuum
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::~CDOTA_Ability_DarkSeer_Vacuum(
        CDOTA_Ability_DarkSeer_Vacuum *const this)
{
  this->_vptr_IHandleEntity = &off_44C50B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DarkSeer_Vacuum::Schema_DynamicBinding  (line 60, @0x0000000002b8efe0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Vacuum::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_Vacuum::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_Vacuum *const this)
{
  return CDOTA_Ability_DarkSeer_Vacuum::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 60, @0x0000000002b8eff0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::DestructInstance  (line 60, @0x0000000002b8f000, libserver.so)  // inlines: Destruct<CDOTA_Ability_DarkSeer_Vacuum>
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::FreeInstance  (line 60, @0x0000000002b8f020, libserver.so)
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::CanAllocate  (line 60, @0x0000000002b8f040, libserver.so)
bool __fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 60, @0x0000000002b8f050, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Vacuum::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_Vacuum::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::AllocateInstance  (line 60, @0x0000000002b975a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::ConstructInstance  (line 60, @0x0000000002b9cf90, libserver.so)  // inlines: CDOTA_Ability_DarkSeer_Vacuum, Construct<CDOTA_Ability_DarkSeer_Vacuum>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C50B0;
  }
  return p;
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 60, @0x0000000002baa3e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 60, @0x0000000002baa400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal  (line 60, @0x0000000002bc7340, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_DarkSeer_Vacuum"
// globals: `guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass, CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass, __dso_handle, CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo, CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo
CEntityClass *__cdecl CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass);
    CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass._vptr_CEntityClass = off_44C5030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass);
    __cxa_atexit(
      CDOTA_Ability_DarkSeer_Vacuum::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DarkSeer_VacuumClass != 0 )
    return &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass;
  if ( `guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo,
      "CDOTA_Ability_DarkSeer_Vacuum",
      "dark_seer_vacuum",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo);
  }
  CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass.m_pClassInfo = &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo;
  CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass.m_pBaseClassInfo = CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DarkSeer_VacuumClass = &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass;
  CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClassInfo.m_pClass = &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass;
  CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DarkSeer_VacuumClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DarkSeer_Vacuum::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_VacuumClass;
}


// CDOTA_Ability_DarkSeer_Vacuum::YouForgotToImplementOrDeclareServerClass  (line 77, @0x0000000002b34b30, libserver.so)
int __fastcall CDOTA_Ability_DarkSeer_Vacuum::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DarkSeer_Vacuum *const this)
{
  return 0;
}


// CDOTA_Ability_DarkSeer_Vacuum::GetServerClass  (line 77, @0x0000000002b4c420, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DarkSeer_Vacuum::GetServerClass(CDOTA_Ability_DarkSeer_Vacuum *const this)
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


// CDOTA_Ability_DarkSeer_Vacuum::OnSpellStart  (line 86, @0x0000000002b7c2f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (21 total)
// strings: "special_bonus_unique_dark_seer", "radius_tree", "modifier_dark_seer_vacuum", "affect_ancients", "particles/units/heroes/hero_dark_seer/dark_seer_vacuum.vpcf", "Hero_Dark_Seer.Vacuum"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_DarkSeer_Vacuum::OnSpellStart(CDOTA_Ability_DarkSeer_Vacuum *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v5; // xmm1_4
  int iFlagFilter; // ebx
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v11; // rdx
  uint32 m_Index; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v17; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  unsigned int v26; // eax
  float v27; // xmm3_4
  int radius_tree; // [rsp+20h] [rbp-B0h]
  float flRadius; // [rsp+24h] [rbp-ACh]
  Vector vPos; // [rsp+40h] [rbp-90h] BYREF
  Vector vPosition; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+98h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_dark_seer", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  radius_tree = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_tree", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_dark_seer_vacuum");
  KeyValues::SetFloat(&kv, "duration", v5);
  this->m_vPullLocation = CDOTABaseAbility::GetCursorPosition(this);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  iFlagFilter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "affect_ancients", -1, 0) == 0 ? 0x200 : 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  v7 = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, &vPosition, v7, flRadius, &entities, 2, 19, iFlagFilter, 0, 0);
  v9 = 0;
  for ( i = 0; entities.m_Size > i; ++v9 )
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
            if ( v15->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v9;
      if ( entities.m_Size <= i )
        goto LABEL_14;
    }
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_dark_seer_vacuum", &kv, 0);
    ++i;
  }
LABEL_14:
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_dark_seer/dark_seer_vacuum.vpcf",
               2,
               0,
               0,
               0);
  v20 = this->m_vPullLocation.z + 8.0;
  v21 = this->m_vPullLocation.x + 0.0;
  vPosition.y = this->m_vPullLocation.y + 0.0;
  vPosition.z = v20;
  vPosition.x = v21;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, Particle, 0, *&vPosition.x, vPosition.z);
  vPos.z = 0.0;
  *&vPos.x = LODWORD(flRadius);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, Particle, 1, COERCE_DOUBLE(LODWORD(flRadius)), 0.0);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, Particle);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v26, this->m_vPullLocation, radius_tree, v27);
  vPos = this->m_vPullLocation;
  DOTA_EmitSoundLocation(&vPos, "Hero_Dark_Seer.Vacuum", 1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_DarkSeer_Vacuum::~CDOTA_Modifier_DarkSeer_Vacuum  (line 151, @0x0000000002b9b270, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::~CDOTA_Modifier_DarkSeer_Vacuum(
        CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C5B70;
  this->_vptr_CHorizontalMotionController = &off_44C5E60;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DarkSeer_Vacuum::~CDOTA_Modifier_DarkSeer_Vacuum  (line 151, @0x0000000002b9b2a0, libserver.so)  // inlines: ~CDOTA_Modifier_DarkSeer_Vacuum
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::~CDOTA_Modifier_DarkSeer_Vacuum(
        CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C5B70;
  this->_vptr_CHorizontalMotionController = &off_44C5E60;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DarkSeer_Vacuum::IsStunDebuff  (line 164, @0x0000000002b8f060, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_Vacuum::IsStunDebuff(CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_Vacuum::IsHorizontalMotionValidToApply  (line 166, @0x0000000002b8f070, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_DarkSeer_Vacuum::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_DarkSeer_Vacuum::IsMotionController  (line 168, @0x0000000002b8f0a0, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_Vacuum::IsMotionController(CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_Vacuum::IsPhasedWhileMotionControlled  (line 170, @0x0000000002b8f0b0, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_Vacuum::IsPhasedWhileMotionControlled(
        CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  return 0;
}


// CDOTA_Modifier_DarkSeer_Vacuum::GetOverrideAnimation  (line 174, @0x0000000002b8f0d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_Vacuum::GetOverrideAnimation(
        CDOTA_Modifier_DarkSeer_Vacuum *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_DarkSeer_Vacuum::DeclareFunctions  (line 188, @0x0000000002b34b40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DarkSeer_Vacuum::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::DeclareFunctions(CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_DarkSeer_Vacuum::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_DarkSeer_Vacuum::OnCreated  (line 195, @0x0000000002b7f860, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetPullLocation, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::OnCreated(CDOTA_Modifier_DarkSeer_Vacuum *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm1_4
  vec_t v7; // xmm0_4
  CDOTA_BaseNPC *v8; // rax
  CDOTALocomotor *v9; // rax
  float duration; // [rsp+4h] [rbp-2Ch]
  Vector vPullDirection; // [rsp+10h] [rbp-20h] BYREF
  IHandleEntity v12; // 0:^8.8

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    duration = 0.0;
  v12._vptr_IHandleEntity = CDOTA_Buff::GetAbility(this)[1]._vptr_IHandleEntity;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v6 = *(&v12._vptr_IHandleEntity + 1) - AbsOrigin->y;
  v7 = *&v12._vptr_IHandleEntity - AbsOrigin->x;
  vPullDirection.z = 0.0;
  vPullDirection.y = v6;
  vPullDirection.x = v7;
  this->pull_speed = VectorNormalize(&vPullDirection) / duration;
  v8 = CDOTA_Buff::GetParent(this);
  v9 = (*(v8->_vptr_IHandleEntity + 376))(v8);
  CDOTALocomotor::ApplyHorizontalMotionController(v9, &this->CHorizontalMotionController, 0);
}


// CDOTA_Modifier_DarkSeer_Vacuum::OnDestroy  (line 213, @0x0000000002b6e470, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::OnDestroy(CDOTA_Modifier_DarkSeer_Vacuum *const this)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTABaseAbility *v4; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
  flDamage = LevelSpecialValue;
  v4 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v4, flDamage, 2, 0);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_DarkSeer_Vacuum::CheckState  (line 227, @0x0000000002b34b60, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::CheckState(
        CDOTA_Modifier_DarkSeer_Vacuum *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_DarkSeer_Vacuum::UpdateHorizontalMotion  (line 236, @0x0000000002b3a570, libserver.so)  // inlines: DOTAGameRules, GetPullLocation, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-
// calls: CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTAGamerules::IsPointInBadResultPosition, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_DarkSeer_Vacuum::UpdateHorizontalMotion(
        CDOTA_Modifier_DarkSeer_Vacuum *const this,
        CDOTA_BaseNPC *me,
        __m128i a3,
        float dt)
{
  float v4; // r14d
  CDOTABaseAbility *Ability; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm2_4
  vec_t v12; // xmm3_4
  float v13; // xmm0_4
  __m128i x_low; // xmm4
  __m128i y_low; // xmm5
  float v16; // xmm0_4
  float v17; // r12d
  float v18; // r13d
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  bool IsPointInBadResultPosition; // r14
  float v23; // [rsp+0h] [rbp-54h]
  Vector vPullLocation; // [rsp+4h] [rbp-50h] BYREF
  Vector vPullDirection; // [rsp+14h] [rbp-40h] BYREF
  Vector vTargetLoc; // [rsp+24h] [rbp-30h] BYREF

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
  Ability = CDOTA_Buff::GetAbility(this);
  v8 = *&Ability[1].m_pEntity;
  v9 = *&Ability[1]._vptr_IHandleEntity;
  vPullLocation.y = *(&Ability[1]._vptr_IHandleEntity + 1);
  vPullLocation.z = v8;
  vPullLocation.x = v9;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v11 = vPullLocation.y - AbsOrigin->y;
  v12 = vPullLocation.x - AbsOrigin->x;
  vPullDirection.z = 0.0;
  vPullDirection.y = v11;
  vPullDirection.x = v12;
  v13 = VectorNormalize(&vPullDirection);
  if ( v13 >= 1.0 )
  {
    x_low = LODWORD(vPullDirection.x);
    y_low = LODWORD(vPullDirection.y);
    v16 = fminf(v13, v4 * this->pull_speed);
    *x_low.m128i_i32 = vPullDirection.x * v16;
    *y_low.m128i_i32 = vPullDirection.y * v16;
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v18 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v23 = v16 * vPullDirection.z;
    v19 = CBaseEntity::GetAbsOrigin(me);
    v20 = v18 + v19->y;
    v21 = v23 + v19->z;
    vTargetLoc.x = v17 + v19->x;
    vTargetLoc.y = v20;
    vTargetLoc.z = v21;
    IsPointInBadResultPosition = CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, &vPullLocation);
    if ( !CDOTAGamerules::IsPointInBadResultPosition(g_pGameRules, &vTargetLoc) || !IsPointInBadResultPosition )
      CBaseEntity::SetAbsOrigin(me, &vTargetLoc);
  }
}


// CDOTA_Ability_DarkSeer_IonShell::~CDOTA_Ability_DarkSeer_IonShell  (line 268, @0x0000000002ba0c70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DarkSeer_IonShell::~CDOTA_Ability_DarkSeer_IonShell(
        CDOTA_Ability_DarkSeer_IonShell *const this)
{
  this->_vptr_IHandleEntity = &off_44C5F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DarkSeer_IonShell::~CDOTA_Ability_DarkSeer_IonShell  (line 268, @0x0000000002ba0c90, libserver.so)  // inlines: ~CDOTA_Ability_DarkSeer_IonShell
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DarkSeer_IonShell::~CDOTA_Ability_DarkSeer_IonShell(
        CDOTA_Ability_DarkSeer_IonShell *const this)
{
  this->_vptr_IHandleEntity = &off_44C5F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DarkSeer_IonShell::Schema_DynamicBinding  (line 270, @0x0000000002b8f0f0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_IonShell::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_IonShell::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_IonShell *const this)
{
  return CDOTA_Ability_DarkSeer_IonShell::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 270, @0x0000000002b8f100, libserver.so)
// globals: CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::DestructInstance  (line 270, @0x0000000002b8f110, libserver.so)  // inlines: Destruct<CDOTA_Ability_DarkSeer_IonShell>
void __fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::FreeInstance  (line 270, @0x0000000002b8f130, libserver.so)
void __fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::CanAllocate  (line 270, @0x0000000002b8f150, libserver.so)
bool __fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 270, @0x0000000002b8f160, libserver.so)
// globals: CDOTA_Ability_DarkSeer_IonShell::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_IonShell::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::AllocateInstance  (line 270, @0x0000000002b975e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::ConstructInstance  (line 270, @0x0000000002b9cfc0, libserver.so)  // inlines: CDOTA_Ability_DarkSeer_IonShell, Construct<CDOTA_Ability_DarkSeer_IonShell>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C5F30;
  }
  return p;
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baa430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baa450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal  (line 270, @0x0000000002bc7490, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_DarkSeer_IonShell"
// globals: `guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass, CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass, __dso_handle, CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo, CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo
CEntityClass *__cdecl CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass);
    CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass._vptr_CEntityClass = off_44C5EB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass);
    __cxa_atexit(
      CDOTA_Ability_DarkSeer_IonShell::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DarkSeer_IonShellClass != 0 )
    return &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass;
  if ( `guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo,
      "CDOTA_Ability_DarkSeer_IonShell",
      "dark_seer_ion_shell",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo);
  }
  CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass.m_pClassInfo = &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo;
  CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass.m_pBaseClassInfo = CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DarkSeer_IonShellClass = &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass;
  CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClassInfo.m_pClass = &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass;
  CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DarkSeer_IonShellClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DarkSeer_IonShell::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_IonShellClass;
}


// CDOTA_Ability_DarkSeer_IonShell::OnSpellStart  (line 280, @0x0000000002b733f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_dark_seer_ion_shell"
void __fastcall CDOTA_Ability_DarkSeer_IonShell::OnSpellStart(CDOTA_Ability_DarkSeer_IonShell *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_dark_seer_ion_shell");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_dark_seer_ion_shell", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_IonShell::~CDOTA_Modifier_IonShell  (line 301, @0x0000000002b9b220, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_IonShell::~CDOTA_Modifier_IonShell(CDOTA_Modifier_IonShell *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C69F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_IonShell::~CDOTA_Modifier_IonShell  (line 301, @0x0000000002b9b240, libserver.so)  // inlines: ~CDOTA_Modifier_IonShell
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_IonShell::~CDOTA_Modifier_IonShell(CDOTA_Modifier_IonShell *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C69F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_IonShell::GetNumAvoidLocations  (line 318, @0x0000000002b8f170, libserver.so)
int __fastcall CDOTA_Modifier_IonShell::GetNumAvoidLocations(CDOTA_Modifier_IonShell *const this)
{
  return 1;
}


// CDOTA_Modifier_IonShell::GetAvoidLocation  (line 319, @0x0000000002b9dd10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_IonShell::GetAvoidLocation(CDOTA_Modifier_IonShell *const this, int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_IonShell::AvoidFilter  (line 320, @0x0000000002b9dd40, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_IonShell::AvoidFilter(CDOTA_Modifier_IonShell *const this, CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) != pEntity;
}


// CDOTA_Modifier_IonShell::AvoidStrength  (line 321, @0x0000000002bad640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_IonShell::AvoidStrength(CDOTA_Modifier_IonShell *const this, CDOTA_Bot *pBot)
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
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 100.0) / 1400.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.69999999;
  if ( v6 <= 1.0 )
    return (v6 * -0.30000001) + 1.0;
  return result;
}


// CDOTA_Modifier_IonShell::GetAvoidRadius  (line 322, @0x0000000002b8f180, libserver.so)
float __fastcall CDOTA_Modifier_IonShell::GetAvoidRadius(CDOTA_Modifier_IonShell *const this, int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_IonShell::IsAvoidMagical  (line 323, @0x0000000002b8f1a0, libserver.so)
bool __fastcall CDOTA_Modifier_IonShell::IsAvoidMagical(CDOTA_Modifier_IonShell *const this)
{
  return 1;
}


// CDOTA_Modifier_IonShell::IsPersistentAvoidance  (line 324, @0x0000000002b8f1b0, libserver.so)
bool __fastcall CDOTA_Modifier_IonShell::IsPersistentAvoidance(CDOTA_Modifier_IonShell *const this)
{
  return 1;
}


// CDOTA_Modifier_IonShell::OnCreated  (line 341, @0x0000000002b6e1b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Dark_Seer.Ion_Shield_Start"
void __fastcall CDOTA_Modifier_IonShell::OnCreated(CDOTA_Modifier_IonShell *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_per_second = 0;
    goto LABEL_4;
  }
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_second", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Dark_Seer.Ion_Shield_Start", 0.0, 0, 0);
}


// CDOTA_Modifier_IonShell::OnRefresh  (line 369, @0x0000000002b6db50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Dark_Seer.Ion_Shield_Start"
void __fastcall CDOTA_Modifier_IonShell::OnRefresh(CDOTA_Modifier_IonShell *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage_per_second = 0;
    goto LABEL_4;
  }
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_second", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Dark_Seer.Ion_Shield_Start", 0.0, 0, 0);
}


// CDOTA_Modifier_IonShell::OnDestroy  (line 380, @0x0000000002b37bc0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Dark_Seer.Ion_Shield_end"
void __fastcall CDOTA_Modifier_IonShell::OnDestroy(CDOTA_Modifier_IonShell *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Dark_Seer.Ion_Shield_end", 0.0, 0, 0);
}


// CDOTA_Modifier_IonShell::OnIntervalThink  (line 393, @0x0000000002b6b390, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "special_bonus_unique_dark_seer", "particles/units/heroes/hero_dark_seer/dark_seer_ion_shell_damage.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_IonShell::OnIntervalThink(CDOTA_Modifier_IonShell *const this)
{
  __m128i v1; // xmm4
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r13
  int damage_per_second; // r14d
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v18; // xmm2
  float v19; // r15d
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  float flDamage; // [rsp+28h] [rbp-58h]
  CDOTA_BaseNPC *flDamagea; // [rsp+28h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+30h] [rbp-50h] BYREF

  hUnits.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hUnits.m_Memory.m_pMemory = 0;
  hUnits.m_Memory.m_nAllocationCount = 0;
  hUnits.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hUnits, 2, 19, 0, 0, 0);
  if ( hUnits.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &hUnits.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && CDOTA_Buff::GetParent(this) != m_pInstance )
              {
                damage_per_second = this->damage_per_second;
                v16 = CDOTA_Buff::GetCaster(this);
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v16, "special_bonus_unique_dark_seer", 0);
                flDamage = damage_per_second;
                if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                  flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
                v18 = 0x3DCCCCCDu;
                *v18.m128i_i32 = 0.1 * flDamage;
                v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
                Ability = CDOTA_Buff::GetAbility(this);
                v21 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v21, m_pInstance, Ability, v19, 2, 2048);
                if ( SLOBYTE(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
                  break;
              }
            }
          }
        }
        if ( ++v8 >= hUnits.m_Size )
          goto LABEL_16;
      }
      v22 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_dark_seer/dark_seer_ion_shell_damage.vpcf",
                   1,
                   v22,
                   0,
                   0);
      flDamagea = CDOTA_Buff::GetParent(this);
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 0, flDamagea, 5, "attach_hitloc", vec3_invalid, 1);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v26, Particle, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
      v27 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v27, Particle);
      ++v8;
    }
    while ( v8 < hUnits.m_Size );
  }
LABEL_16:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hUnits);
  if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
    if ( (hUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits.m_Memory);
  }
}


// CDOTA_Ability_DarkSeer_Surge::~CDOTA_Ability_DarkSeer_Surge  (line 431, @0x0000000002ba0cc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DarkSeer_Surge::~CDOTA_Ability_DarkSeer_Surge(CDOTA_Ability_DarkSeer_Surge *const this)
{
  this->_vptr_IHandleEntity = &off_44C6D50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DarkSeer_Surge::~CDOTA_Ability_DarkSeer_Surge  (line 431, @0x0000000002ba0ce0, libserver.so)  // inlines: ~CDOTA_Ability_DarkSeer_Surge
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DarkSeer_Surge::~CDOTA_Ability_DarkSeer_Surge(CDOTA_Ability_DarkSeer_Surge *const this)
{
  this->_vptr_IHandleEntity = &off_44C6D50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DarkSeer_Surge::Schema_DynamicBinding  (line 433, @0x0000000002b8f1c0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Surge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_Surge::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_Surge *const this)
{
  return CDOTA_Ability_DarkSeer_Surge::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 433, @0x0000000002b8f1d0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::DestructInstance  (line 433, @0x0000000002b8f1e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DarkSeer_Surge>
void __fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::FreeInstance  (line 433, @0x0000000002b8f200, libserver.so)
void __fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::CanAllocate  (line 433, @0x0000000002b8f220, libserver.so)
bool __fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 433, @0x0000000002b8f230, libserver.so)
// globals: CDOTA_Ability_DarkSeer_Surge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_Surge::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::AllocateInstance  (line 433, @0x0000000002b97620, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::ConstructInstance  (line 433, @0x0000000002b9cff0, libserver.so)  // inlines: CDOTA_Ability_DarkSeer_Surge, Construct<CDOTA_Ability_DarkSeer_Surge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C6D50;
  }
  return p;
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 433, @0x0000000002baa480, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 433, @0x0000000002baa4a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal  (line 433, @0x0000000002bcff50, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_DarkSeer_Surge"
// globals: `guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass, CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo, CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo
CEntityClass *__cdecl CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass) != 0 )
  {
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pClassInfo = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_flags = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pInputs = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_nInputCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pOutputs = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_nOutputCount = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pGameClass = 0;
    CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass._vptr_CEntityClass = off_44C6CD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass);
    __cxa_atexit(
      CDOTA_Ability_DarkSeer_Surge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DarkSeer_SurgeClass != 0 )
    return &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass;
  if ( `guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo,
      "CDOTA_Ability_DarkSeer_Surge",
      "dark_seer_surge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo);
  }
  CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pClassInfo = &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo;
  CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pBaseClassInfo = CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DarkSeer_SurgeClass = &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass;
  CDOTA_Ability_DarkSeer_Surge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClassInfo.m_pClass = &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass;
  CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DarkSeer_SurgeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DarkSeer_Surge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_SurgeClass;
}


// CDOTA_Ability_DarkSeer_Surge::OnSpellStart  (line 443, @0x0000000002b734d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CDOTA_BaseNPC::PrimeResumePreviousMovement, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_dark_seer_surge", "Hero_Dark_Seer.Surge"
void __fastcall CDOTA_Ability_DarkSeer_Surge::OnSpellStart(CDOTA_Ability_DarkSeer_Surge *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_dark_seer_surge");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_dark_seer_surge", &kv, 0);
    if ( v3 == CDOTABaseAbility::GetCaster(this) )
    {
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::PrimeResumePreviousMovement(v6);
    }
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Dark_Seer.Surge", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_DarkSeer_Surge::~CDOTA_Modifier_DarkSeer_Surge  (line 472, @0x0000000002b9b1d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DarkSeer_Surge::~CDOTA_Modifier_DarkSeer_Surge(
        CDOTA_Modifier_DarkSeer_Surge *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C7810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DarkSeer_Surge::~CDOTA_Modifier_DarkSeer_Surge  (line 472, @0x0000000002b9b1f0, libserver.so)  // inlines: ~CDOTA_Modifier_DarkSeer_Surge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DarkSeer_Surge::~CDOTA_Modifier_DarkSeer_Surge(
        CDOTA_Modifier_DarkSeer_Surge *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C7810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DarkSeer_Surge::GetEffectName  (line 480, @0x0000000002b8f240, libserver.so)
// strings: "particles/units/heroes/hero_dark_seer/dark_seer_surge.vpcf"
const char *__fastcall CDOTA_Modifier_DarkSeer_Surge::GetEffectName(CDOTA_Modifier_DarkSeer_Surge *const this)
{
  return "particles/units/heroes/hero_dark_seer/dark_seer_surge.vpcf";
}


// CDOTA_Modifier_DarkSeer_Surge::DeclareFunctions  (line 489, @0x0000000002b34b70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DarkSeer_Surge::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_DarkSeer_Surge::DeclareFunctions(CDOTA_Modifier_DarkSeer_Surge *const this)
{
  this->m_Functions[18].__pfn = (&stru_10 + 697);
  this->m_Functions[18].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_DarkSeer_Surge::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_DarkSeer_Surge::GetModifierMoveSpeed_Absolute  (line 497, @0x0000000002b34bb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_Surge::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_DarkSeer_Surge *const this,
        const CModifierParams *const params)
{
  return 0x4409800000000001uLL;
}


// CDOTA_Modifier_DarkSeer_Surge::GetActivityTranslationModifiers  (line 503, @0x0000000002b34bd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_Surge::GetActivityTranslationModifiers(
        CDOTA_Modifier_DarkSeer_Surge *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "surge";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::~CDOTA_Ability_DarkSeer_WallOfReplica  (line 514, @0x0000000002ba0d10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::~CDOTA_Ability_DarkSeer_WallOfReplica(
        CDOTA_Ability_DarkSeer_WallOfReplica *const this)
{
  this->_vptr_IHandleEntity = &off_44C7B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::~CDOTA_Ability_DarkSeer_WallOfReplica  (line 514, @0x0000000002ba0d30, libserver.so)  // inlines: ~CDOTA_Ability_DarkSeer_WallOfReplica
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::~CDOTA_Ability_DarkSeer_WallOfReplica(
        CDOTA_Ability_DarkSeer_WallOfReplica *const this)
{
  this->_vptr_IHandleEntity = &off_44C7B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::Schema_DynamicBinding  (line 516, @0x0000000002b8f250, libserver.so)
// globals: CDOTA_Ability_DarkSeer_WallOfReplica::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_WallOfReplica *const this)
{
  return CDOTA_Ability_DarkSeer_WallOfReplica::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 516, @0x0000000002b8f260, libserver.so)
// globals: CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::DestructInstance  (line 516, @0x0000000002b8f270, libserver.so)  // inlines: Destruct<CDOTA_Ability_DarkSeer_WallOfReplica>
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::FreeInstance  (line 516, @0x0000000002b8f290, libserver.so)
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::CanAllocate  (line 516, @0x0000000002b8f2b0, libserver.so)
bool __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 516, @0x0000000002b8f2c0, libserver.so)
// globals: CDOTA_Ability_DarkSeer_WallOfReplica::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DarkSeer_WallOfReplica::s_pSchemaBinding;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::AllocateInstance  (line 516, @0x0000000002b97660, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::ConstructInstance  (line 516, @0x0000000002b9d020, libserver.so)  // inlines: CDOTA_Ability_DarkSeer_WallOfReplica, Construct<CDOTA_Ability_DarkSeer_WallOfReplica>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44C7B70;
  }
  return p;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 516, @0x0000000002baa4d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 516, @0x0000000002baa4f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal  (line 516, @0x0000000002bc75e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dark_seer_wall_of_replica", "CDOTA_Ability_DarkSeer_WallOfReplica"
// globals: `guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass, CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass, __dso_handle, CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo, CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo
CEntityClass *__cdecl CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass);
    CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass._vptr_CEntityClass = off_44C7AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass);
    __cxa_atexit(
      CDOTA_Ability_DarkSeer_WallOfReplica::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DarkSeer_WallOfReplicaClass != 0 )
    return &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass;
  if ( `guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo,
      "CDOTA_Ability_DarkSeer_WallOfReplica",
      "dark_seer_wall_of_replica",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo);
  }
  CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass.m_pClassInfo = &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo;
  CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass.m_pBaseClassInfo = CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DarkSeer_WallOfReplicaClass = &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass;
  CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClassInfo.m_pClass = &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass;
  CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DarkSeer_WallOfReplicaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DarkSeer_WallOfReplica::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DarkSeer_WallOfReplicaClass;
}


// CDOTA_Ability_DarkSeer_WallOfReplica::GetStolenActivityModifier  (line 521, @0x0000000002b8f2d0, libserver.so)
const char *__fastcall CDOTA_Ability_DarkSeer_WallOfReplica::GetStolenActivityModifier(
        CDOTA_Ability_DarkSeer_WallOfReplica *const this)
{
  return "wall";
}


// CDOTA_Ability_DarkSeer_WallOfReplica::OnSpellStart  (line 528, @0x0000000002b735f0, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetTeamNumber, VectorSubtract, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, Thinker_Create, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues (15 total)
// strings: "modifier_dark_seer_wall_of_replica", "direction_x", "direction_y", "direction_z"
void __fastcall CDOTA_Ability_DarkSeer_WallOfReplica::OnSpellStart(CDOTA_Ability_DarkSeer_WallOfReplica *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  const QAngle *AbsAngles; // rax
  float v13; // xmm1_4
  float v14; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *v16; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm3_4
  Vector vWallDirection; // [rsp+10h] [rbp-80h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-70h]
  Vector vOrigin; // [rsp+30h] [rbp-60h]
  Vector v24; // [rsp+40h] [rbp-50h]
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-28h]

  v26 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  KeyValues::KeyValues(&kv, "modifier_dark_seer_wall_of_replica");
  KeyValues::SetFloat(&kv, "duration", v4);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v7 = CursorPosition.x - AbsOrigin->x;
  v8 = CursorPosition.z - AbsOrigin->z;
  vWallDirection.y = CursorPosition.y - AbsOrigin->y;
  vWallDirection.x = v7;
  vWallDirection.z = v8;
  v9 = VectorNormalize(&vWallDirection);
  v10 = 0.0099999998;
  if ( v9 < 0.0099999998 )
  {
    v11 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v11);
    AngleVectors(AbsAngles, &vWallDirection, 0, 0);
  }
  KeyValues::SetFloat(&kv, "direction_x", v10);
  KeyValues::SetFloat(&kv, "direction_y", v13);
  KeyValues::SetFloat(&kv, "direction_z", v14);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  v16 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v16, this, "modifier_dark_seer_wall_of_replica", &kv, vOrigin, m_Value, 0, 1, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v24 = CDOTABaseAbility::GetCursorPosition(this);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v19, 0, m_iAbilityID, 0, 0, *&v24.x, v24.z, v3, v20);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::~CDOTA_Modifier_DarkSeer_WallOfReplica  (line 559, @0x0000000002bc4430, libserver.so)  // inlines: Purge, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::~CDOTA_Modifier_DarkSeer_WallOfReplica(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8630;
  CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_PreventReplicateTime.m_Tree);
  if ( (this->m_PreventReplicateTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PreventReplicateTime.m_Tree.m_Elements);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Replicates);
  if ( (this->m_Replicates.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Replicates.m_Memory),
        (this->m_Replicates.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Replicates.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::~CDOTA_Modifier_DarkSeer_WallOfReplica  (line 559, @0x0000000002bc44c0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_DarkSeer_WallOfReplica, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::~CDOTA_Modifier_DarkSeer_WallOfReplica(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8630;
  CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_PreventReplicateTime.m_Tree);
  if ( (this->m_PreventReplicateTime.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_PreventReplicateTime.m_Tree.m_Elements);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_Replicates);
  if ( (this->m_Replicates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Replicates.m_Memory);
    if ( (this->m_Replicates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_Replicates.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::GetNumAvoidLocations  (line 575, @0x0000000002b8f2e0, libserver.so)
int __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::GetNumAvoidLocations(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  return 5;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::GetAvoidLocation  (line 576, @0x0000000002b9dd90, libserver.so)  // inlines: VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator/
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::GetAvoidLocation(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v9; // [rsp-3Ch] [rbp-44h]
  float v10; // [rsp-38h] [rbp-40h]
  float v11; // [rsp-34h] [rbp-3Ch]
  __int64 v12; // [rsp-20h] [rbp-28h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v9 = (this->m_vWallRight.x * iAvoid) * 0.40000001;
  v10 = (this->m_vWallRight.y * iAvoid) * 0.40000001;
  v11 = (iAvoid * this->m_vWallRight.z) * 0.40000001;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v5 = AbsOrigin->z - this->m_vWallRight.z;
  v6 = AbsOrigin->x - this->m_vWallRight.x;
  *(&v12 + 1) = (AbsOrigin->y - this->m_vWallRight.y) + v10;
  result.z = v11 + v5;
  *&v12 = v6 + v9;
  *&result.x = v12;
  return result;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::AvoidStrength  (line 577, @0x0000000002b8f2f0, libserver.so)
float __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::AvoidStrength(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this,
        CDOTA_Bot *pBot)
{
  return 0.89999998;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::GetAvoidRadius  (line 578, @0x0000000002b8f300, libserver.so)
float __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::GetAvoidRadius(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this,
        int iAvoid)
{
  return 200.0;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::IsAvoidMagical  (line 579, @0x0000000002b8f310, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::IsAvoidMagical(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::IsPersistentAvoidance  (line 580, @0x0000000002b8f320, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::IsPersistentAvoidance(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::OnCreated  (line 605, @0x0000000002b81540, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, SetLessFunc, VectorAdd, VectorSubtract, operator*=, operator+, operator-
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetFloat, VectorVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle (14 total)
// strings: "replica_damage_incoming", "replica_damage_outgoing", "direction_x", "direction_y", "direction_z", "particles/units/heroes/hero_dark_seer/dark_seer_wall_of_replica.vpcf" (7 total)
// globals: CDefOps<int>::LessFunc(int const&,int const&)
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::OnCreated(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  vec_t Float; // xmm0_4
  bool v12; // zf
  int v13; // eax
  vec_t v14; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v20; // xmm2_4
  float v21; // xmm0_4
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // rax
  float v25; // xmm2_4
  float v26; // xmm0_4
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  Vector up; // [rsp+10h] [rbp-40h] BYREF
  double v32; // [rsp+20h] [rbp-30h]
  float v33; // [rsp+28h] [rbp-28h]
  double v34; // [rsp+30h] [rbp-20h]
  float v35; // [rsp+38h] [rbp-18h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->width, "width");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->replica_damage_incoming, "replica_damage_incoming");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->replica_damage_outgoing, "replica_damage_outgoing");
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "slow_duration", -1, 0);
  else
    this->slow_duration = 0.0;
  this->m_vWallDirection.x = KeyValues::GetFloat(pKV, "direction_x", v8);
  this->m_vWallDirection.y = KeyValues::GetFloat(pKV, "direction_y", v9);
  Float = KeyValues::GetFloat(pKV, "direction_z", v10);
  v12 = this->m_PreventReplicateTime.m_Tree.m_LessFunc.m_LessFunc == 0;
  this->m_vWallDirection.z = Float;
  if ( v12 )
    this->m_PreventReplicateTime.m_Tree.m_LessFunc.m_LessFunc = CDefOps<int>::LessFunc;
  VectorVectors(&this->m_vWallDirection, &this->m_vWallRight, &up);
  v13 = this->width / 2;
  this->m_vWallRight.x = this->m_vWallRight.x * v13;
  v14 = v13 * this->m_vWallRight.z;
  this->m_vWallRight.y = this->m_vWallRight.y * v13;
  this->m_vWallRight.z = v14;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_dark_seer/dark_seer_wall_of_replica.vpcf",
               2,
               0,
               0,
               0);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(
    v17,
    Particle,
    0,
    *&this->m_vWallDirection.x,
    this->m_vWallDirection.z);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v20 = AbsOrigin->x + this->m_vWallRight.x;
  v21 = AbsOrigin->z + this->m_vWallRight.z;
  *(&v32 + 1) = AbsOrigin->y + this->m_vWallRight.y;
  *&v32 = v20;
  v33 = v21;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, Particle, 0, v32, v33);
  v23 = CDOTA_Buff::GetParent(this);
  v24 = CBaseEntity::GetAbsOrigin(v23);
  v25 = v24->x - this->m_vWallRight.x;
  v26 = v24->z - this->m_vWallRight.z;
  *(&v34 + 1) = v24->y - this->m_vWallRight.y;
  *&v34 = v25;
  v35 = v26;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, Particle, 1, v34, v35);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, Particle, 2, *&this->m_vWallDirection.x, this->m_vWallDirection.z);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v29);
  v30 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Dark_Seer.Wall_of_Replica_Start", 0.0, 0, 0);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::OnDestroy  (line 639, @0x0000000002b37530, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::OnDestroy(CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica::OnIntervalThink  (line 650, @0x0000000002b8bfc0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Find, FindInsertionPosition, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHero, GetInstance, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, IndexToIdentity, Insert, InsertAt, InsertOrReplace, IsIllusion, IsValid, LeftChild, LookupEntity, RightChild, Set, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator(), operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CUtlRBTree<CUtlMap<int, float>::Node_t, short unsigned int, CUtlMap<int, float>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, float>::Node_t, short unsigned int>, short unsigned int> >::Find, VectorVectors, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CalcDistanceToLineSegment2D, CBaseEntity::GetHealth, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetAbility (27 total)
// strings: "dark_seer_wall_illusion", "bounty_base", "bounty_growth", "replica_damage_outgoing_scepter", "particles/units/heroes/hero_dark_seer/dark_seer_wall_of_replica_replicate.vpcf", "modifier_darkseer_wallofreplica_illusion" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica::OnIntervalThink(
        CDOTA_Modifier_DarkSeer_WallOfReplica *const this)
{
  int v2; // r15d
  CHandle<CDOTA_BaseNPC_Hero> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  char m_CScriptComponent_high; // r14
  unsigned __int8 m_Value; // r13
  __int64 v11; // r13
  CHandle<CBaseEntity> *v12; // rdx
  uint32 v13; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // r14
  const char *m_pAsString; // rdx
  const char *v19; // rax
  unsigned __int16 v20; // ax
  float v21; // xmm1_4
  __m128i x_low; // xmm3
  float v23; // xmm0_4
  float v24; // r14d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v27; // xmm2_4
  vec_t v28; // xmm1_4
  float width; // xmm0_4
  float v30; // xmm0_4
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // rax
  vec_t v33; // xmm0_4
  vec_t v34; // xmm2_4
  const Vector *v35; // rax
  float v36; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *pCaster; // rax
  float v41; // xmm0_4
  CEntityInstance *v42; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTABaseAbility *v46; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v48; // eax
  __int16 v49; // cx
  int m_Size; // eax
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CHandle<CBaseEntity> *v52; // rax
  __m128i v53; // xmm6
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::ElemType_t v54; // r14d
  unsigned __int16 v55; // ax
  float v56; // xmm1_4
  CDOTABaseAbility *v57; // r14
  CDOTA_BaseNPC *v58; // rax
  unsigned __int16 m_Root; // ax
  unsigned __int16 m_Right; // ax
  bool v61; // r14
  bool v62; // zf
  UtlRBTreeNode_t<CUtlMap<int,float>::Node_t,short unsigned int> *v63; // rax
  unsigned __int16 v64; // ax
  float nFXIndex; // [rsp+18h] [rbp-118h]
  int nFXIndexa; // [rsp+18h] [rbp-118h]
  float pEntc; // [rsp+20h] [rbp-110h]
  float pEntd; // [rsp+20h] [rbp-110h]
  CDOTA_BaseNPC *pEnt; // [rsp+20h] [rbp-110h]
  int pEnta; // [rsp+20h] [rbp-110h]
  unsigned __int16 pEntb; // [rsp+20h] [rbp-110h]
  char pKV; // [rsp+28h] [rbp-108h]
  float pKVa; // [rsp+28h] [rbp-108h]
  float pKVb; // [rsp+28h] [rbp-108h]
  char v75; // [rsp+30h] [rbp-100h]
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)> *p_m_PreventReplicateTime; // [rsp+30h] [rbp-100h]
  __int64 v77; // [rsp+38h] [rbp-F8h]
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t v78[2]; // [rsp+40h] [rbp-F0h] BYREF
  CUtlMap<int,float,short unsigned int,bool (*)(int const&,int const&)>::Node_t search; // [rsp+50h] [rbp-E0h] BYREF
  Vector right; // [rsp+60h] [rbp-D0h] BYREF
  Vector up; // [rsp+70h] [rbp-C0h] BYREF
  Vector vLineA; // [rsp+80h] [rbp-B0h] BYREF
  Vector vLineB; // [rsp+90h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hImageList; // [rsp+A0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+F8h] [rbp-38h]

  v87 = __readfsqword(0x28u);
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    v2 = 0;
    v77 = 0;
    do
    {
      v3 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v77];
      m_Index = v3->m_Index;
      if ( v3->m_Index + 2 > 1 )
      {
        v5 = v3->m_Index;
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
              m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
              v75 = (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance);
              if ( v75 != 0 && m_CScriptComponent_high != m_Value )
              {
                pKV = m_pInstance[71].m_pEntity;
                if ( pKV == 0 && SBYTE3(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
                {
                  v11 = 0;
                  if ( this->m_Replicates.m_Size > 0 )
                  {
                    while ( 1 )
                    {
                      v12 = &this->m_Replicates.m_Memory.m_pMemory[v11];
                      v13 = v12->m_Index;
                      if ( v12->m_Index + 2 > 1 )
                      {
                        v14 = v12->m_Index;
                        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
                        if ( v15 != 0 )
                        {
                          v16 = &v15[v14 & 0x1FF];
                          if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
                          {
                            v17 = v16->m_pInstance;
                            if ( v16->m_pInstance != 0
                              && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                              && (*(v17->_vptr_IHandleEntity + 408))(v16->m_pInstance) != 0 )
                            {
                              m_pAsString = "";
                              if ( v17[70].m_iszPrivateVScripts.u.m_Id != 0 )
                                m_pAsString = v17[70].m_iszPrivateVScripts.u.m_pAsString;
                              v19 = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
                              if ( v19 == 0 )
                                v19 = "";
                              if ( m_pAsString == v19 )
                                break;
                            }
                          }
                        }
                      }
                      if ( this->m_Replicates.m_Size <= ++v11 )
                        goto LABEL_59;
                    }
                  }
                  else
                  {
LABEL_59:
                    pKV = v75;
                  }
                  hImageList.m_Size = v2;
                  p_m_PreventReplicateTime = &this->m_PreventReplicateTime;
                  v20 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                          &this->m_PreventReplicateTime.m_Tree,
                          &hImageList);
                  if ( v20 == 0xFFFF )
                    goto LABEL_35;
                  v21 = 0.0;
                  if ( g_pGameRules != 0 )
                    v21 = *&g_pGameRules[18].m_szQuestName[20];
                  if ( v21 > this->m_PreventReplicateTime.m_Tree.m_Elements.m_pMemory[v20].m_Data.elem )
                  {
LABEL_35:
                    if ( pKV != 0 )
                    {
                      VectorVectors(&this->m_vWallDirection, &right, &up);
                      x_low = LODWORD(right.x);
                      v23 = this->width * 0.5;
                      *x_low.m128i_i32 = right.x * v23;
                      v24 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
                      pEntc = right.y * v23;
                      pKVa = v23 * right.z;
                      Parent = CDOTA_Buff::GetParent(this);
                      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
                      v27 = v24 + AbsOrigin->x;
                      v28 = pEntc + AbsOrigin->y;
                      vLineA.z = pKVa + AbsOrigin->z;
                      width = this->width;
                      vLineA.x = v27;
                      vLineA.y = v28;
                      v30 = width * 0.5;
                      pKVb = right.x * v30;
                      pEntd = right.y * v30;
                      nFXIndex = v30 * right.z;
                      v31 = CDOTA_Buff::GetParent(this);
                      v32 = CBaseEntity::GetAbsOrigin(v31);
                      v33 = v32->z - nFXIndex;
                      v34 = v32->x - pKVb;
                      vLineB.y = v32->y - pEntd;
                      vLineB.z = v33;
                      vLineB.x = v34;
                      v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
                      if ( ((*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity) + 50.0) >= CalcDistanceToLineSegment2D(v35, &vLineA, &vLineB, 0)
                        && CBaseEntity::GetHealth(m_pInstance) > 0 )
                      {
                        KeyValues::KeyValues(&kv, "dark_seer_wall_illusion");
                        (*(this->_vptr_CDOTA_Buff + 30))(this);
                        v36 = 0.0;
                        if ( g_pGameRules != 0 )
                          v36 = *&g_pGameRules[18].m_szQuestName[20];
                        KeyValues::SetFloat(&kv, "duration", v36);
                        KeyValues::SetInt(&kv, "outgoing_damage", this->replica_damage_outgoing);
                        KeyValues::SetInt(&kv, "incoming_damage", this->replica_damage_incoming);
                        KeyValues::SetInt(&kv, "bounty_base", 5);
                        KeyValues::SetInt(&kv, "bounty_growth", 0);
                        Caster = CDOTA_Buff::GetCaster(this);
                        if ( CDOTA_BaseNPC::HasScepter(Caster) )
                        {
                          Ability = CDOTA_Buff::GetAbility(this);
                          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                Ability,
                                                "replica_damage_outgoing_scepter",
                                                -1,
                                                0);
                          KeyValues::SetInt(&kv, "outgoing_damage", LevelSpecialValue);
                        }
                        hImageList.m_Size = 0;
                        hImageList.m_Memory.m_pMemory = 0;
                        hImageList.m_Memory.m_nAllocationCount = 0;
                        hImageList.m_Memory.m_nGrowSize = 0;
                        pCaster = CDOTA_Buff::GetCaster(this);
                        v41 = *(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity;
                        DOTA_CreateIllusions(m_pInstance, 1, (v41 + v41), 0, &kv, &hImageList, pCaster, 0, 1);
                        if ( hImageList.m_Size > 0 )
                        {
                          v42 = CEntityHandle::operator CEntityInstance *(hImageList.m_Memory.m_pMemory);
                          if ( v42 != 0 && BYTE3(v42[7]._vptr_IHandleEntity) != 0 )
                            pEnt = v42;
                          else
                            pEnt = 0;
                          ParticleManager = GetParticleManager();
                          nFXIndexa = CDOTA_ParticleManager::CreateParticle(
                                        ParticleManager,
                                        "particles/units/heroes/hero_dark_seer/dark_seer_wall_of_replica_replicate.vpcf",
                                        1,
                                        m_pInstance,
                                        0,
                                        0);
                          v44 = GetParticleManager();
                          CDOTA_ParticleManager::SetParticleControlEnt(v44, nFXIndexa, 1, pEnt, 1, 0, vec3_invalid, 1);
                          v45 = GetParticleManager();
                          CDOTA_ParticleManager::ReleaseParticleIndex(v45, nFXIndexa);
                          v46 = CDOTA_Buff::GetAbility(this);
                          CDOTA_BaseNPC::AddNewModifier(
                            pEnt,
                            pEnt,
                            v46,
                            "modifier_darkseer_wallofreplica_illusion",
                            &kv,
                            0);
                          search.key = -1;
                          if ( pEnt != 0 )
                          {
                            m_pEntity = pEnt->m_pEntity;
                            if ( m_pEntity != 0 )
                            {
                              v48 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                              v49 = 0x7FFF;
                              if ( m_pEntity->m_EHandle.m_Index != -1 )
                                v49 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                              LOWORD(search.key) = v49 | search.key & 0x8000;
                              search.key = (v48 << 15) | search.key & 0x7FFF;
                            }
                          }
                          m_Size = this->m_Replicates.m_Size;
                          pEnta = m_Size;
                          if ( m_Size == this->m_Replicates.m_Memory.m_nAllocationCount )
                          {
                            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_Replicates.m_Memory, 1);
                            m_Size = this->m_Replicates.m_Size;
                          }
                          m_pMemory = this->m_Replicates.m_Memory.m_pMemory;
                          this->m_Replicates.m_Size = m_Size + 1;
                          v52 = &m_pMemory[pEnta];
                          if ( v52 != 0 )
                            v52->m_Index = search.key;
                          if ( g_pGameRules != 0 )
                          {
                            v53 = 0x3E800000u;
                            *v53.m128i_i32 = *&g_pGameRules[18].m_szQuestName[20] + 0.25;
                            v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
                          }
                          else
                          {
                            v54 = 0.25;
                          }
                          search.key = v2;
                          v55 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::Find(
                                  &p_m_PreventReplicateTime->m_Tree,
                                  &search);
                          if ( v55 == 0xFFFF )
                          {
                            m_Root = this->m_PreventReplicateTime.m_Tree.m_Root;
                            v78[0].key = v2;
                            v78[0].elem = v54;
                            pEntb = m_Root;
                            if ( m_Root == 0xFFFF )
                            {
                              v61 = 0;
                            }
                            else
                            {
                              while ( 1 )
                              {
                                v62 = !this->m_PreventReplicateTime.m_Tree.m_LessFunc.m_LessFunc(
                                         v78,
                                         &this->m_PreventReplicateTime.m_Tree.m_Elements.m_pMemory[pEntb].m_Data);
                                v63 = this->m_PreventReplicateTime.m_Tree.m_Elements.m_pMemory;
                                if ( v62 )
                                {
                                  m_Right = v63[pEntb].m_Right;
                                  v61 = 0;
                                }
                                else
                                {
                                  m_Right = v63[pEntb].m_Left;
                                  v61 = 1;
                                }
                                if ( m_Right == 0xFFFF )
                                  break;
                                pEntb = m_Right;
                              }
                            }
                            v64 = CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                                    &p_m_PreventReplicateTime->m_Tree,
                                    v78);
                            CUtlRBTree<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short,CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<int,float,unsigned short,bool (*)(int const&,int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
                              &p_m_PreventReplicateTime->m_Tree,
                              v64,
                              pEntb,
                              v61);
                            ++this->m_PreventReplicateTime.m_Tree.m_NumElements;
                          }
                          else
                          {
                            this->m_PreventReplicateTime.m_Tree.m_Elements.m_pMemory[v55].m_Data.elem = v54;
                          }
                        }
                        KeyValues::KeyValues(&kv2, "dark_seer_wall_slow");
                        KeyValues::SetFloat(&kv, "duration", v56);
                        v57 = CDOTA_Buff::GetAbility(this);
                        v58 = CDOTA_Buff::GetCaster(this);
                        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v58, v57, "modifier_dark_seer_wall_slow", &kv, 0);
                        KeyValues::~KeyValues(&kv2);
                        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hImageList);
                        KeyValues::~KeyValues(&kv);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      ++v2;
      ++v77;
    }
    while ( v2 < g_HeroList.m_hHeroList.m_Size );
  }
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow  (line 743, @0x0000000002b9b180, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow  (line 743, @0x0000000002b9b1a0, libserver.so)  // inlines: ~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::~CDOTA_Modifier_DarkSeer_WallOfReplica_Slow(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::IsDebuff  (line 748, @0x0000000002b8f330, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::IsDebuff(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::OnCreated  (line 765, @0x0000000002b6c210, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::OnCreated(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
  else
    this->movement_slow = 0;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::DeclareFunctions  (line 772, @0x0000000002b34bf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::DeclareFunctions(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::GetModifierMoveSpeedBonus_Percentage  (line 779, @0x0000000002b34c10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion  (line 786, @0x0000000002b9b130, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8C70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion  (line 786, @0x0000000002b9b150, libserver.so)  // inlines: ~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::~CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  this->_vptr_CDOTA_Buff = &off_44C8C70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::IsPurgable  (line 791, @0x0000000002b8f340, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::IsPurgable(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  return 0;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetStatusEffectName  (line 801, @0x0000000002b8f350, libserver.so)
// strings: "particles/status_fx/status_effect_dark_seer_illusion.vpcf"
const char *__fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetStatusEffectName(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  return "particles/status_fx/status_effect_dark_seer_illusion.vpcf";
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::StatusEffectPriority  (line 802, @0x0000000002b8f360, libserver.so)
int __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::StatusEffectPriority(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  return 10010;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::OnCreated  (line 813, @0x0000000002b6c6f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "replica_scale"
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::OnCreated(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->replica_scale = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "replica_scale", -1, 0);
  else
    this->replica_scale = 0;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::DeclareFunctions  (line 820, @0x0000000002b34c30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ModelScale(CModifierParams const&), CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetModifierIsIllusion(CModifierParams const&)
void __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::DeclareFunctions(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this)
{
  this->m_Functions[153].__pfn = CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ModelScale;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[106].__delta = 0;
  this->m_Functions[106].__pfn = CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetModifierIsIllusion;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ModelScale  (line 828, @0x0000000002b34c70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ModelScale(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->replica_scale;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ShouldSendToTeam  (line 834, @0x0000000002b34c90, libserver.so)
bool __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::ShouldSendToTeam(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this,
        int nTeamNumber)
{
  return 1;
}


// CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetModifierIsIllusion  (line 839, @0x0000000002b34ca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion::GetModifierIsIllusion(
        CDOTA_Modifier_DarkSeer_WallOfReplica_Illusion *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


